/* Generated by re2c */
#line 1 "unicode_group_Pd.u--encoding-policy(ignore).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pd:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00002E19) {
		if (yych <= 0x000013FF) {
			if (yych <= 0x00000589) {
				if (yych == '-') goto yy4;
			} else {
				if (yych <= 0x0000058A) goto yy4;
				if (yych == 0x000005BE) goto yy4;
			}
		} else {
			if (yych <= 0x0000200F) {
				if (yych <= 0x00001400) goto yy4;
				if (yych == 0x00001806) goto yy4;
			} else {
				if (yych <= 0x00002015) goto yy4;
				if (yych == 0x00002E17) goto yy4;
			}
		}
	} else {
		if (yych <= 0x0000FE30) {
			if (yych <= 0x0000302F) {
				if (yych <= 0x00002E1A) goto yy4;
				if (yych == 0x0000301C) goto yy4;
			} else {
				if (yych <= 0x00003030) goto yy4;
				if (yych == 0x000030A0) goto yy4;
			}
		} else {
			if (yych <= 0x0000FE62) {
				if (yych <= 0x0000FE32) goto yy4;
				if (yych == 0x0000FE58) goto yy4;
			} else {
				if (yych <= 0x0000FE63) goto yy4;
				if (yych == 0x0000FF0D) goto yy4;
			}
		}
	}
	++YYCURSOR;
#line 13 "unicode_group_Pd.u--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 56 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Pd.u--encoding-policy(ignore).re"
	{ goto Pd; }
#line 61 "<stdout>"
}
#line 14 "unicode_group_Pd.u--encoding-policy(ignore).re"

}
static const unsigned int chars_Pd [] = {0x2d,0x2d,  0x58a,0x58a,  0x5be,0x5be,  0x1400,0x1400,  0x1806,0x1806,  0x2010,0x2015,  0x2e17,0x2e17,  0x2e1a,0x2e1a,  0x301c,0x301c,  0x3030,0x3030,  0x30a0,0x30a0,  0xfe31,0xfe32,  0xfe58,0xfe58,  0xfe63,0xfe63,  0xff0d,0xff0d,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Pd = new YYCTYPE [22];
	unsigned int buffer_len = encode_utf32 (chars_Pd, sizeof (chars_Pd) / sizeof (unsigned int), buffer_Pd);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Pd), reinterpret_cast<const YYCTYPE *> (buffer_Pd + buffer_len)))
		printf("test 'Pd' failed\n");
	delete [] buffer_Pd;
	return 0;
}
