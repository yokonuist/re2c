/* Generated by re2c */
#line 1 "unicode_group_Cc.u--encoding-policy(fail).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cc:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x0000001F) goto yy2;
	if (yych <= '~') goto yy4;
	if (yych >= 0x000000A0) goto yy4;
yy2:
	++YYCURSOR;
#line 12 "unicode_group_Cc.u--encoding-policy(fail).re"
	{ goto Cc; }
#line 24 "<stdout>"
yy4:
	++YYCURSOR;
#line 13 "unicode_group_Cc.u--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 29 "<stdout>"
}
#line 14 "unicode_group_Cc.u--encoding-policy(fail).re"

}
static const unsigned int chars_Cc [] = {0x0,0x1f,  0x7f,0x9f,  0x20,0x20};
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
	YYCTYPE * buffer_Cc = new YYCTYPE [66];
	unsigned int buffer_len = encode_utf32 (chars_Cc, sizeof (chars_Cc) / sizeof (unsigned int), buffer_Cc);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Cc), reinterpret_cast<const YYCTYPE *> (buffer_Cc + buffer_len)))
		printf("test 'Cc' failed\n");
	delete [] buffer_Cc;
	return 0;
}
