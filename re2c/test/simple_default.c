/* Generated by re2c */
#line 1 "simple_default.re"
#define	NULL		((char*) 0)
char *scan(char *p){
char *q;
#define	YYCTYPE		char
#define	YYCURSOR	p
#define	YYLIMIT		p
#define	YYMARKER	q
#define	YYFILL(n)

#line 13 "<stdout>"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
#line 11 "simple_default.re"
	{return NULL;}
#line 35 "<stdout>"
yy4:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy7;
yy5:
#line 10 "simple_default.re"
	{return YYCURSOR;}
#line 43 "<stdout>"
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy6;
	default:	goto yy5;
	}
}
#line 12 "simple_default.re"

}
