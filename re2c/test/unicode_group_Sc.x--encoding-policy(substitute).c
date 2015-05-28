/* Generated by re2c */
#line 1 "unicode_group_Sc.x--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sc:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x0E3F) {
		if (yych <= 0x09F3) {
			if (yych <= 0x00A5) {
				if (yych == '$') goto yy4;
				if (yych >= 0x00A2) goto yy4;
			} else {
				if (yych == 0x060B) goto yy4;
				if (yych >= 0x09F2) goto yy4;
			}
		} else {
			if (yych <= 0x0AF1) {
				if (yych == 0x09FB) goto yy4;
				if (yych >= 0x0AF1) goto yy4;
			} else {
				if (yych == 0x0BF9) goto yy4;
				if (yych >= 0x0E3F) goto yy4;
			}
		}
	} else {
		if (yych <= 0xFDFC) {
			if (yych <= 0x20B9) {
				if (yych == 0x17DB) goto yy4;
				if (yych >= 0x20A0) goto yy4;
			} else {
				if (yych == 0xA838) goto yy4;
				if (yych >= 0xFDFC) goto yy4;
			}
		} else {
			if (yych <= 0xFF04) {
				if (yych == 0xFE69) goto yy4;
				if (yych >= 0xFF04) goto yy4;
			} else {
				if (yych <= 0xFFE1) {
					if (yych >= 0xFFE0) goto yy4;
				} else {
					if (yych <= 0xFFE4) goto yy2;
					if (yych <= 0xFFE6) goto yy4;
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "unicode_group_Sc.x--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 62 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Sc.x--encoding-policy(substitute).re"
	{ goto Sc; }
#line 67 "<stdout>"
}
#line 14 "unicode_group_Sc.x--encoding-policy(substitute).re"

}
static const unsigned int chars_Sc [] = {0x24,0x24,  0xa2,0xa5,  0x60b,0x60b,  0x9f2,0x9f3,  0x9fb,0x9fb,  0xaf1,0xaf1,  0xbf9,0xbf9,  0xe3f,0xe3f,  0x17db,0x17db,  0x20a0,0x20b9,  0xa838,0xa838,  0xfdfc,0xfdfc,  0xfe69,0xfe69,  0xff04,0xff04,  0xffe0,0xffe1,  0xffe5,0xffe6,  0x0,0x0};
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
	YYCTYPE * buffer_Sc = new YYCTYPE [96];
	unsigned int buffer_len = encode_utf16 (chars_Sc, sizeof (chars_Sc) / sizeof (unsigned int), buffer_Sc);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Sc), reinterpret_cast<const YYCTYPE *> (buffer_Sc + buffer_len)))
		printf("test 'Sc' failed\n");
	delete [] buffer_Sc;
	return 0;
}
