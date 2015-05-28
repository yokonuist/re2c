/* Generated by re2c */
#line 1 "unicode_group_Z.x--encoding-policy(ignore).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Z:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x1FFF) {
		if (yych <= 0x00A0) {
			if (yych == ' ') goto yy4;
			if (yych >= 0x00A0) goto yy4;
		} else {
			if (yych <= 0x1680) {
				if (yych >= 0x1680) goto yy4;
			} else {
				if (yych == 0x180E) goto yy4;
			}
		}
	} else {
		if (yych <= 0x202F) {
			if (yych <= 0x2027) {
				if (yych <= 0x200A) goto yy4;
			} else {
				if (yych <= 0x2029) goto yy4;
				if (yych >= 0x202F) goto yy4;
			}
		} else {
			if (yych <= 0x205F) {
				if (yych >= 0x205F) goto yy4;
			} else {
				if (yych == 0x3000) goto yy4;
			}
		}
	}
	++YYCURSOR;
#line 13 "unicode_group_Z.x--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 47 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Z.x--encoding-policy(ignore).re"
	{ goto Z; }
#line 52 "<stdout>"
}
#line 14 "unicode_group_Z.x--encoding-policy(ignore).re"

}
static const unsigned int chars_Z [] = {0x20,0x20,  0xa0,0xa0,  0x1680,0x1680,  0x180e,0x180e,  0x2000,0x200a,  0x2028,0x2029,  0x202f,0x202f,  0x205f,0x205f,  0x3000,0x3000,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned short * s)
{
	unsigned short * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Z = new YYCTYPE [42];
	unsigned int buffer_len = encode_utf16 (chars_Z, sizeof (chars_Z) / sizeof (unsigned int), buffer_Z);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Z), reinterpret_cast<const YYCTYPE *> (buffer_Z + buffer_len)))
		printf("test 'Z' failed\n");
	delete [] buffer_Z;
	return 0;
}
