/* Generated by re2c */
#line 1 "utf8_group_Nl.8.re"
#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
	__attribute__((unused)) const char * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCTYPE unsigned char
#	define YYCURSOR start
Nl:
	
#line 12 "<stdout>"
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
#line 12 "utf8_group_Nl.8.re"
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
#line 11 "utf8_group_Nl.8.re"
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
#line 13 "utf8_group_Nl.8.re"

}
static const char buffer_Nl [] = "\xE1\x9B\xAE\xE1\x9B\xAF\xE1\x9B\xB0\xE2\x85\xA0\xE2\x85\xA1\xE2\x85\xA2\xE2\x85\xA3\xE2\x85\xA4\xE2\x85\xA5\xE2\x85\xA6\xE2\x85\xA7\xE2\x85\xA8\xE2\x85\xA9\xE2\x85\xAA\xE2\x85\xAB\xE2\x85\xAC\xE2\x85\xAD\xE2\x85\xAE\xE2\x85\xAF\xE2\x85\xB0\xE2\x85\xB1\xE2\x85\xB2\xE2\x85\xB3\xE2\x85\xB4\xE2\x85\xB5\xE2\x85\xB6\xE2\x85\xB7\xE2\x85\xB8\xE2\x85\xB9\xE2\x85\xBA\xE2\x85\xBB\xE2\x85\xBC\xE2\x85\xBD\xE2\x85\xBE\xE2\x85\xBF\xE2\x86\x80\xE2\x86\x81\xE2\x86\x82\xE2\x86\x85\xE2\x86\x86\xE2\x86\x87\xE2\x86\x88\xE3\x80\x87\xE3\x80\xA1\xE3\x80\xA2\xE3\x80\xA3\xE3\x80\xA4\xE3\x80\xA5\xE3\x80\xA6\xE3\x80\xA7\xE3\x80\xA8\xE3\x80\xA9\xE3\x80\xB8\xE3\x80\xB9\xE3\x80\xBA\xEA\x9B\xA6\xEA\x9B\xA7\xEA\x9B\xA8\xEA\x9B\xA9\xEA\x9B\xAA\xEA\x9B\xAB\xEA\x9B\xAC\xEA\x9B\xAD\xEA\x9B\xAE\xEA\x9B\xAF\xF0\x90\x85\x80\xF0\x90\x85\x81\xF0\x90\x85\x82\xF0\x90\x85\x83\xF0\x90\x85\x84\xF0\x90\x85\x85\xF0\x90\x85\x86\xF0\x90\x85\x87\xF0\x90\x85\x88\xF0\x90\x85\x89\xF0\x90\x85\x8A\xF0\x90\x85\x8B\xF0\x90\x85\x8C\xF0\x90\x85\x8D\xF0\x90\x85\x8E\xF0\x90\x85\x8F\xF0\x90\x85\x90\xF0\x90\x85\x91\xF0\x90\x85\x92\xF0\x90\x85\x93\xF0\x90\x85\x94\xF0\x90\x85\x95\xF0\x90\x85\x96\xF0\x90\x85\x97\xF0\x90\x85\x98\xF0\x90\x85\x99\xF0\x90\x85\x9A\xF0\x90\x85\x9B\xF0\x90\x85\x9C\xF0\x90\x85\x9D\xF0\x90\x85\x9E\xF0\x90\x85\x9F\xF0\x90\x85\xA0\xF0\x90\x85\xA1\xF0\x90\x85\xA2\xF0\x90\x85\xA3\xF0\x90\x85\xA4\xF0\x90\x85\xA5\xF0\x90\x85\xA6\xF0\x90\x85\xA7\xF0\x90\x85\xA8\xF0\x90\x85\xA9\xF0\x90\x85\xAA\xF0\x90\x85\xAB\xF0\x90\x85\xAC\xF0\x90\x85\xAD\xF0\x90\x85\xAE\xF0\x90\x85\xAF\xF0\x90\x85\xB0\xF0\x90\x85\xB1\xF0\x90\x85\xB2\xF0\x90\x85\xB3\xF0\x90\x85\xB4\xF0\x90\x8D\x81\xF0\x90\x8D\x8A\xF0\x90\x8F\x91\xF0\x90\x8F\x92\xF0\x90\x8F\x93\xF0\x90\x8F\x94\xF0\x90\x8F\x95\xF0\x92\x90\x80\xF0\x92\x90\x81\xF0\x92\x90\x82\xF0\x92\x90\x83\xF0\x92\x90\x84\xF0\x92\x90\x85\xF0\x92\x90\x86\xF0\x92\x90\x87\xF0\x92\x90\x88\xF0\x92\x90\x89\xF0\x92\x90\x8A\xF0\x92\x90\x8B\xF0\x92\x90\x8C\xF0\x92\x90\x8D\xF0\x92\x90\x8E\xF0\x92\x90\x8F\xF0\x92\x90\x90\xF0\x92\x90\x91\xF0\x92\x90\x92\xF0\x92\x90\x93\xF0\x92\x90\x94\xF0\x92\x90\x95\xF0\x92\x90\x96\xF0\x92\x90\x97\xF0\x92\x90\x98\xF0\x92\x90\x99\xF0\x92\x90\x9A\xF0\x92\x90\x9B\xF0\x92\x90\x9C\xF0\x92\x90\x9D\xF0\x92\x90\x9E\xF0\x92\x90\x9F\xF0\x92\x90\xA0\xF0\x92\x90\xA1\xF0\x92\x90\xA2\xF0\x92\x90\xA3\xF0\x92\x90\xA4\xF0\x92\x90\xA5\xF0\x92\x90\xA6\xF0\x92\x90\xA7\xF0\x92\x90\xA8\xF0\x92\x90\xA9\xF0\x92\x90\xAA\xF0\x92\x90\xAB\xF0\x92\x90\xAC\xF0\x92\x90\xAD\xF0\x92\x90\xAE\xF0\x92\x90\xAF\xF0\x92\x90\xB0\xF0\x92\x90\xB1\xF0\x92\x90\xB2\xF0\x92\x90\xB3\xF0\x92\x90\xB4\xF0\x92\x90\xB5\xF0\x92\x90\xB6\xF0\x92\x90\xB7\xF0\x92\x90\xB8\xF0\x92\x90\xB9\xF0\x92\x90\xBA\xF0\x92\x90\xBB\xF0\x92\x90\xBC\xF0\x92\x90\xBD\xF0\x92\x90\xBE\xF0\x92\x90\xBF\xF0\x92\x91\x80\xF0\x92\x91\x81\xF0\x92\x91\x82\xF0\x92\x91\x83\xF0\x92\x91\x84\xF0\x92\x91\x85\xF0\x92\x91\x86\xF0\x92\x91\x87\xF0\x92\x91\x88\xF0\x92\x91\x89\xF0\x92\x91\x8A\xF0\x92\x91\x8B\xF0\x92\x91\x8C\xF0\x92\x91\x8D\xF0\x92\x91\x8E\xF0\x92\x91\x8F\xF0\x92\x91\x90\xF0\x92\x91\x91\xF0\x92\x91\x92\xF0\x92\x91\x93\xF0\x92\x91\x94\xF0\x92\x91\x95\xF0\x92\x91\x96\xF0\x92\x91\x97\xF0\x92\x91\x98\xF0\x92\x91\x99\xF0\x92\x91\x9A\xF0\x92\x91\x9B\xF0\x92\x91\x9C\xF0\x92\x91\x9D\xF0\x92\x91\x9E\xF0\x92\x91\x9F\xF0\x92\x91\xA0\xF0\x92\x91\xA1\xF0\x92\x91\xA2\xFF";
int main ()
{
	if (!scan (buffer_Nl, buffer_Nl + sizeof (buffer_Nl) - 1))
		printf("test 'Nl' failed\n");
}