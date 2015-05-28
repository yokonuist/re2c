/* Generated by re2c */
#line 1 "unicode_group_Lm.8--encoding-policy(fail).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Lm:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xCA:	goto yy4;
	case 0xCB:	goto yy5;
	case 0xCD:	goto yy6;
	case 0xD5:	goto yy7;
	case 0xD9:	goto yy8;
	case 0xDB:	goto yy9;
	case 0xDF:	goto yy10;
	case 0xE0:	goto yy11;
	case 0xE1:	goto yy12;
	case 0xE2:	goto yy13;
	case 0xE3:	goto yy14;
	case 0xEA:	goto yy15;
	case 0xEF:	goto yy16;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Lm.8--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 38 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xAC:
	case 0xAE:	goto yy20;
	default:	goto yy3;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB4:
	case 0xBA:	goto yy20;
	default:	goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x99:	goto yy20;
	default:	goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy20;
	default:	goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA5:
	case 0xA6:	goto yy20;
	default:	goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB4:
	case 0xB5:
	case 0xBA:	goto yy20;
	default:	goto yy3;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy46;
	case 0xA5:	goto yy45;
	case 0xB9:
	case 0xBB:	goto yy44;
	default:	goto yy3;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x83:	goto yy43;
	case 0x9F:	goto yy42;
	case 0xA1:	goto yy41;
	case 0xAA:	goto yy40;
	case 0xB1:	goto yy29;
	case 0xB4:	goto yy39;
	case 0xB5:	goto yy38;
	case 0xB6:	goto yy37;
	default:	goto yy3;
	}
yy13:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x81:	goto yy36;
	case 0x82:	goto yy35;
	case 0xB1:	goto yy34;
	case 0xB5:
	case 0xB8:	goto yy33;
	default:	goto yy3;
	}
yy14:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy32;
	case 0x82:	goto yy31;
	case 0x83:	goto yy30;
	default:	goto yy3;
	}
yy15:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy27;
	case 0x93:	goto yy29;
	case 0x98:	goto yy26;
	case 0x99:	goto yy28;
	case 0x9C:	goto yy25;
	case 0x9D:
	case 0xA9:	goto yy19;
	case 0x9E:	goto yy24;
	case 0xA7:	goto yy23;
	case 0xAB:	goto yy22;
	default:	goto yy3;
	}
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xBD:	goto yy19;
	case 0xBE:	goto yy17;
	default:	goto yy3;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9E:
	case 0x9F:	goto yy20;
	default:	goto yy18;
	}
yy18:
	YYCURSOR = YYMARKER;
	goto yy3;
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB0:	goto yy20;
	default:	goto yy18;
	}
yy20:
	++YYCURSOR;
#line 12 "unicode_group_Lm.8--encoding-policy(fail).re"
	{ goto Lm; }
#line 202 "<stdout>"
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9D:	goto yy20;
	default:	goto yy18;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8F:	goto yy20;
	default:	goto yy18;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x88:	goto yy20;
	default:	goto yy18;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:	goto yy20;
	default:	goto yy18;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8C:	goto yy20;
	default:	goto yy18;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x95:	goto yy20;
	default:	goto yy18;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBF:	goto yy20;
	default:	goto yy18;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:	goto yy20;
	default:	goto yy18;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBC:
	case 0xBD:
	case 0xBE:	goto yy20;
	default:	goto yy18;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9D:
	case 0x9E:	goto yy20;
	default:	goto yy18;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xBB:	goto yy20;
	default:	goto yy18;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAF:	goto yy20;
	default:	goto yy18;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBD:	goto yy20;
	default:	goto yy18;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:	goto yy20;
	default:	goto yy18;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB1:
	case 0xBF:	goto yy20;
	default:	goto yy18;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy18;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xB8:	goto yy20;
	default:	goto yy18;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy20;
	default:	goto yy18;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA7:	goto yy20;
	default:	goto yy18;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x83:	goto yy20;
	default:	goto yy18;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x97:	goto yy20;
	default:	goto yy18;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xBC:	goto yy20;
	default:	goto yy18;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x86:	goto yy20;
	default:	goto yy18;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xB1:	goto yy20;
	default:	goto yy18;
	}
yy46:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0x9A:
	case 0xA4:
	case 0xA8:	goto yy20;
	default:	goto yy18;
	}
}
#line 14 "unicode_group_Lm.8--encoding-policy(fail).re"

}
static const unsigned int chars_Lm [] = {0x2b0,0x2c1,  0x2c6,0x2d1,  0x2e0,0x2e4,  0x2ec,0x2ec,  0x2ee,0x2ee,  0x374,0x374,  0x37a,0x37a,  0x559,0x559,  0x640,0x640,  0x6e5,0x6e6,  0x7f4,0x7f5,  0x7fa,0x7fa,  0x81a,0x81a,  0x824,0x824,  0x828,0x828,  0x971,0x971,  0xe46,0xe46,  0xec6,0xec6,  0x10fc,0x10fc,  0x17d7,0x17d7,  0x1843,0x1843,  0x1aa7,0x1aa7,  0x1c78,0x1c7d,  0x1d2c,0x1d61,  0x1d78,0x1d78,  0x1d9b,0x1dbf,  0x2071,0x2071,  0x207f,0x207f,  0x2090,0x209c,  0x2c7d,0x2c7d,  0x2d6f,0x2d6f,  0x2e2f,0x2e2f,  0x3005,0x3005,  0x3031,0x3035,  0x303b,0x303b,  0x309d,0x309e,  0x30fc,0x30fe,  0xa015,0xa015,  0xa4f8,0xa4fd,  0xa60c,0xa60c,  0xa67f,0xa67f,  0xa717,0xa71f,  0xa770,0xa770,  0xa788,0xa788,  0xa9cf,0xa9cf,  0xaa70,0xaa70,  0xaadd,0xaadd,  0xff70,0xff70,  0xff9e,0xff9f,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned char * s)
{
	unsigned char * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	YYCTYPE * buffer_Lm = new YYCTYPE [844];
	unsigned int buffer_len = encode_utf8 (chars_Lm, sizeof (chars_Lm) / sizeof (unsigned int), buffer_Lm);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Lm), reinterpret_cast<const YYCTYPE *> (buffer_Lm + buffer_len)))
		printf("test 'Lm' failed\n");
	delete [] buffer_Lm;
	return 0;
}
