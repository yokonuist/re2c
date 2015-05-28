/* Generated by re2c */
#line 1 "unicode_group_Cf.x--encoding-policy(fail).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cf:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x202E) {
		if (yych <= 0x070E) {
			if (yych <= 0x05FF) {
				if (yych == 0x00AD) goto yy4;
			} else {
				if (yych <= 0x0603) goto yy4;
				if (yych == 0x06DD) goto yy4;
			}
		} else {
			if (yych <= 0x17B5) {
				if (yych <= 0x070F) goto yy4;
				if (yych >= 0x17B4) goto yy4;
			} else {
				if (yych <= 0x200A) goto yy2;
				if (yych <= 0x200F) goto yy4;
				if (yych >= 0x202A) goto yy4;
			}
		}
	} else {
		if (yych <= 0xD833) {
			if (yych <= 0x2069) {
				if (yych <= 0x205F) goto yy2;
				if (yych <= 0x2064) goto yy4;
			} else {
				if (yych <= 0x206F) goto yy4;
				if (yych == 0xD804) goto yy6;
			}
		} else {
			if (yych <= 0xFEFE) {
				if (yych <= 0xD834) goto yy7;
				if (yych == 0xDB40) goto yy8;
			} else {
				if (yych <= 0xFEFF) goto yy4;
				if (yych <= 0xFFF8) goto yy2;
				if (yych <= 0xFFFB) goto yy4;
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Cf.x--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 60 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_Cf.x--encoding-policy(fail).re"
	{ goto Cf; }
#line 66 "<stdout>"
yy6:
	yych = *++YYCURSOR;
	if (yych == 0xDCBD) goto yy9;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDD72) goto yy3;
	if (yych <= 0xDD7A) goto yy9;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	if (yych == 0xDC01) goto yy9;
	if (yych <= 0xDC1F) goto yy3;
	if (yych >= 0xDC80) goto yy3;
yy9:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy5;
}
#line 14 "unicode_group_Cf.x--encoding-policy(fail).re"

}
static const unsigned int chars_Cf [] = {0xad,0xad,  0x600,0x603,  0x6dd,0x6dd,  0x70f,0x70f,  0x17b4,0x17b5,  0x200b,0x200f,  0x202a,0x202e,  0x2060,0x2064,  0x206a,0x206f,  0xfeff,0xfeff,  0xfff9,0xfffb,  0x110bd,0x110bd,  0x1d173,0x1d17a,  0xe0001,0xe0001,  0xe0020,0xe007f,  0x0,0x0};
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
	YYCTYPE * buffer_Cf = new YYCTYPE [282];
	unsigned int buffer_len = encode_utf16 (chars_Cf, sizeof (chars_Cf) / sizeof (unsigned int), buffer_Cf);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Cf), reinterpret_cast<const YYCTYPE *> (buffer_Cf + buffer_len)))
		printf("test 'Cf' failed\n");
	delete [] buffer_Cf;
	return 0;
}
