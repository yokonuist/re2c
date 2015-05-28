/* Generated by re2c */
#line 1 "unicode_group_Cs.u--encoding-policy(substitute).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cs:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych == 0x0000FFFD) goto yy4;
	++YYCURSOR;
#line 13 "unicode_group_Cs.u--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 21 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Cs.u--encoding-policy(substitute).re"
	{ goto Cs; }
#line 26 "<stdout>"
}
#line 14 "unicode_group_Cs.u--encoding-policy(substitute).re"

}
static const unsigned int chars_Cs [] = {0xd800,0xdfff,  0x0,0x0};
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
	YYCTYPE * buffer_Cs = new YYCTYPE [2049];
	unsigned int buffer_len = encode_utf32 (chars_Cs, sizeof (chars_Cs) / sizeof (unsigned int), buffer_Cs);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Cs), reinterpret_cast<const YYCTYPE *> (buffer_Cs + buffer_len)))
		printf("test 'Cs' failed\n");
	delete [] buffer_Cs;
	return 0;
}
