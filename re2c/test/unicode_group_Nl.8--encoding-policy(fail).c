/* Generated by re2c */
#line 1 "unicode_group_Nl.8--encoding-policy(fail).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Nl:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xE1:	goto yy4;
	case 0xE2:	goto yy5;
	case 0xE3:	goto yy6;
	case 0xEA:	goto yy7;
	case 0xF0:	goto yy8;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Nl.8--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 30 "<stdout>"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9B:	goto yy23;
	default:	goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x85:	goto yy22;
	case 0x86:	goto yy21;
	default:	goto yy3;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy20;
	default:	goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9B:	goto yy19;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x90:	goto yy11;
	case 0x92:	goto yy9;
	default:	goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:	goto yy17;
	case 0x91:	goto yy18;
	default:	goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	goto yy3;
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x85:	goto yy12;
	case 0x8D:	goto yy13;
	case 0x8F:	goto yy14;
	default:	goto yy10;
	}
yy12:
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
	case 0xB4:	goto yy15;
	default:	goto yy10;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x81:
	case 0x8A:	goto yy15;
	default:	goto yy10;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:	goto yy15;
	default:	goto yy10;
	}
yy15:
	++YYCURSOR;
#line 12 "unicode_group_Nl.8--encoding-policy(fail).re"
	{ goto Nl; }
#line 160 "<stdout>"
yy17:
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
	case 0xBF:	goto yy15;
	default:	goto yy10;
	}
yy18:
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
	case 0xA2:	goto yy15;
	default:	goto yy10;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:	goto yy15;
	default:	goto yy10;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x87:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xB8:
	case 0xB9:
	case 0xBA:	goto yy15;
	default:	goto yy10;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:	goto yy15;
	default:	goto yy10;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
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
	case 0xBF:	goto yy15;
	default:	goto yy10;
	}
yy23:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0xAE:
	case 0xAF:
	case 0xB0:	goto yy15;
	default:	goto yy10;
	}
}
#line 14 "unicode_group_Nl.8--encoding-policy(fail).re"

}
static const unsigned int chars_Nl [] = {0x16ee,0x16f0,  0x2160,0x2182,  0x2185,0x2188,  0x3007,0x3007,  0x3021,0x3029,  0x3038,0x303a,  0xa6e6,0xa6ef,  0x10140,0x10174,  0x10341,0x10341,  0x1034a,0x1034a,  0x103d1,0x103d5,  0x12400,0x12462,  0x0,0x0};
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
	YYCTYPE * buffer_Nl = new YYCTYPE [900];
	unsigned int buffer_len = encode_utf8 (chars_Nl, sizeof (chars_Nl) / sizeof (unsigned int), buffer_Nl);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Nl), reinterpret_cast<const YYCTYPE *> (buffer_Nl + buffer_len)))
		printf("test 'Nl' failed\n");
	delete [] buffer_Nl;
	return 0;
}
