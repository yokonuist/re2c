/* Generated by re2c */
// This example shows that fallback copy of tag, if needed, should be
// created on all non-accepting paths from fallback state, even if they
// don't overwrite the tag. The reason is that overwriting and
// non-overwriting paths may join later along the way and they should
// have the same tag version and at the join point.


{
	YYCTYPE yych;
	goto yy0;
yy1:
	++YYCURSOR;
yy0:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	yyt1 = yyt2;
	switch (yych) {
	case 'a':	goto yy3;
	case 'd':	goto yy5;
	default:	goto yy2;
	}
yy2:
	p = yyt1;
	{ p }
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
		yyt2 = YYCURSOR;
		goto yy6;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy4;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy1;
	default:	goto yy4;
	}
}

re2c: warning: line 9: rule matches empty string [-Wmatch-empty-string]