#include <assert.h>

#include "src/ir/tagpool.h"
#include "src/util/hash32.h"

namespace re2c
{

Tagpool::Tagpool(size_t n)
	: ntags(n)
	, lookup()
	, buff(new bool[ntags]())
{
	// all-zero tag configuration must have static number zero
	assert(ZERO_TAGS == insert(buff));
}

Tagpool::~Tagpool()
{
	delete[] buff;
	const size_t n = lookup.size();
	for (size_t i = 0; i < n; ++i) {
		free(const_cast<bool*>(lookup[i]));
	}
}

size_t Tagpool::insert(const bool *tags)
{
	const size_t size = ntags * sizeof(bool);
	const uint32_t hash = hash32(0, tags, size);

	eqtag_t eq(ntags);
	const size_t idx = lookup.find_with(hash, tags, eq);
	if (idx != taglookup_t::NIL) {
		return idx;
	}

	bool *copy = static_cast<bool*>(malloc(size));
	memcpy(copy, tags, size);
	return lookup.push(hash, copy);
}

const bool *Tagpool::operator[](size_t idx) const
{
	return lookup[idx];
}

size_t Tagpool::orl(size_t t, size_t o)
{
	if (t == o || o == 0) {
		return t;
	} else if (t == ZERO_TAGS) {
		return o;
	}

	const bool *tags = operator[](t);
	const bool *ortags = operator[](o);
	for (size_t i = 0; i < ntags; ++i) {
		buff[i] = tags[i] | ortags[i];
	}
	return insert(buff);
}

size_t Tagpool::andl(size_t t, size_t a)
{
	if (t == a) {
		return t;
	} else if (t == ZERO_TAGS || a == ZERO_TAGS) {
		return ZERO_TAGS;
	}

	const bool *tags = operator[](t);
	const bool *andtags = operator[](a);
	for (size_t i = 0; i < ntags; ++i) {
		buff[i] = tags[i] & andtags[i];
	}
	return insert(buff);
}

size_t Tagpool::andlinv(size_t t, size_t a)
{
	if (a == ZERO_TAGS) {
		return t;
	} else if (t == ZERO_TAGS || t == a) {
		return ZERO_TAGS;
	}

	const bool *tags = operator[](t);
	const bool *andinvtags = operator[](a);
	for (size_t i = 0; i < ntags; ++i) {
		buff[i] = tags[i] & ~andinvtags[i];
	}
	return insert(buff);
}

size_t Tagpool::subst(size_t t, const size_t *represent)
{
	const bool *tags = operator[](t);
	memset(buff, 0, ntags * sizeof(bool));
	for (size_t i = 0; i < ntags; ++i) {
		if (tags[i]) {
			buff[represent[i]] = true;
		}
	}
	return insert(buff);
}

} // namespace re2c