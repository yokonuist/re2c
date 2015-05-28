/* Generated by re2c */
#line 1 "unicode_group_Sk.x--encoding-policy(fail).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sk:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x1FBC) {
		if (yych <= 0x02C1) {
			if (yych <= 0x00A8) {
				if (yych <= '_') {
					if (yych == '^') goto yy4;
				} else {
					if (yych <= '`') goto yy4;
					if (yych >= 0x00A8) goto yy4;
				}
			} else {
				if (yych <= 0x00B3) {
					if (yych == 0x00AF) goto yy4;
				} else {
					if (yych <= 0x00B4) goto yy4;
					if (yych == 0x00B8) goto yy4;
				}
			}
		} else {
			if (yych <= 0x02ED) {
				if (yych <= 0x02DF) {
					if (yych <= 0x02C5) goto yy4;
					if (yych >= 0x02D2) goto yy4;
				} else {
					if (yych <= 0x02E4) goto yy2;
					if (yych != 0x02EC) goto yy4;
				}
			} else {
				if (yych <= 0x0374) {
					if (yych <= 0x02EE) goto yy2;
					if (yych <= 0x02FF) goto yy4;
				} else {
					if (yych <= 0x0375) goto yy4;
					if (yych <= 0x0383) goto yy2;
					if (yych <= 0x0385) goto yy4;
				}
			}
		}
	} else {
		if (yych <= 0xA6FF) {
			if (yych <= 0x1FDF) {
				if (yych <= 0x1FC1) {
					if (yych != 0x1FBE) goto yy4;
				} else {
					if (yych <= 0x1FCC) goto yy2;
					if (yych <= 0x1FCF) goto yy4;
					if (yych >= 0x1FDD) goto yy4;
				}
			} else {
				if (yych <= 0x1FFC) {
					if (yych <= 0x1FEC) goto yy2;
					if (yych <= 0x1FEF) goto yy4;
				} else {
					if (yych <= 0x1FFE) goto yy4;
					if (yych <= 0x309A) goto yy2;
					if (yych <= 0x309C) goto yy4;
				}
			}
		} else {
			if (yych <= 0xFBC1) {
				if (yych <= 0xA721) {
					if (yych <= 0xA716) goto yy4;
					if (yych >= 0xA720) goto yy4;
				} else {
					if (yych <= 0xA788) goto yy2;
					if (yych <= 0xA78A) goto yy4;
					if (yych >= 0xFBB2) goto yy4;
				}
			} else {
				if (yych <= 0xFF3F) {
					if (yych == 0xFF3E) goto yy4;
				} else {
					if (yych <= 0xFF40) goto yy4;
					if (yych == 0xFFE3) goto yy4;
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "unicode_group_Sk.x--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 98 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Sk.x--encoding-policy(fail).re"
	{ goto Sk; }
#line 103 "<stdout>"
}
#line 14 "unicode_group_Sk.x--encoding-policy(fail).re"

}
static const unsigned int chars_Sk [] = {0x5e,0x5e,  0x60,0x60,  0xa8,0xa8,  0xaf,0xaf,  0xb4,0xb4,  0xb8,0xb8,  0x2c2,0x2c5,  0x2d2,0x2df,  0x2e5,0x2eb,  0x2ed,0x2ed,  0x2ef,0x2ff,  0x375,0x375,  0x384,0x385,  0x1fbd,0x1fbd,  0x1fbf,0x1fc1,  0x1fcd,0x1fcf,  0x1fdd,0x1fdf,  0x1fed,0x1fef,  0x1ffd,0x1ffe,  0x309b,0x309c,  0xa700,0xa716,  0xa720,0xa721,  0xa789,0xa78a,  0xfbb2,0xfbc1,  0xff3e,0xff3e,  0xff40,0xff40,  0xffe3,0xffe3,  0x0,0x0};
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
	YYCTYPE * buffer_Sk = new YYCTYPE [232];
	unsigned int buffer_len = encode_utf16 (chars_Sk, sizeof (chars_Sk) / sizeof (unsigned int), buffer_Sk);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Sk), reinterpret_cast<const YYCTYPE *> (buffer_Sk + buffer_len)))
		printf("test 'Sk' failed\n");
	delete [] buffer_Sk;
	return 0;
}
