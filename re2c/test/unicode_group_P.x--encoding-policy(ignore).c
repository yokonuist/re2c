/* Generated by re2c */
#line 1 "unicode_group_P.x--encoding-policy(ignore).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
P:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x1C7F) {
		if (yych <= 0x07F9) {
			if (yych <= 0x0386) {
				if (yych <= 'z') {
					if (yych <= '9') {
						if (yych <= '$') {
							if (yych <= ' ') goto yy2;
							if (yych <= '#') goto yy4;
						} else {
							if (yych == '+') goto yy2;
							if (yych <= '/') goto yy4;
						}
					} else {
						if (yych <= 'Z') {
							if (yych <= ';') goto yy4;
							if (yych <= '>') goto yy2;
							if (yych <= '@') goto yy4;
						} else {
							if (yych == '^') goto yy2;
							if (yych <= '_') goto yy4;
						}
					}
				} else {
					if (yych <= 0x00B6) {
						if (yych <= 0x00A0) {
							if (yych == '|') goto yy2;
							if (yych <= '}') goto yy4;
						} else {
							if (yych <= 0x00A1) goto yy4;
							if (yych == 0x00AB) goto yy4;
						}
					} else {
						if (yych <= 0x00BE) {
							if (yych <= 0x00B7) goto yy4;
							if (yych == 0x00BB) goto yy4;
						} else {
							if (yych <= 0x00BF) goto yy4;
							if (yych == 0x037E) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x05F4) {
					if (yych <= 0x05BE) {
						if (yych <= 0x055F) {
							if (yych <= 0x0387) goto yy4;
							if (yych >= 0x055A) goto yy4;
						} else {
							if (yych <= 0x0588) goto yy2;
							if (yych <= 0x058A) goto yy4;
							if (yych >= 0x05BE) goto yy4;
						}
					} else {
						if (yych <= 0x05C3) {
							if (yych == 0x05C0) goto yy4;
							if (yych >= 0x05C3) goto yy4;
						} else {
							if (yych == 0x05C6) goto yy4;
							if (yych >= 0x05F3) goto yy4;
						}
					}
				} else {
					if (yych <= 0x061F) {
						if (yych <= 0x060D) {
							if (yych <= 0x0608) goto yy2;
							if (yych != 0x060B) goto yy4;
						} else {
							if (yych == 0x061B) goto yy4;
							if (yych >= 0x061E) goto yy4;
						}
					} else {
						if (yych <= 0x06D4) {
							if (yych <= 0x0669) goto yy2;
							if (yych <= 0x066D) goto yy4;
							if (yych >= 0x06D4) goto yy4;
						} else {
							if (yych <= 0x06FF) goto yy2;
							if (yych <= 0x070D) goto yy4;
							if (yych >= 0x07F7) goto yy4;
						}
					}
				}
			}
		} else {
			if (yych <= 0x13FF) {
				if (yych <= 0x0F03) {
					if (yych <= 0x096F) {
						if (yych <= 0x085D) {
							if (yych <= 0x082F) goto yy2;
							if (yych <= 0x083E) goto yy4;
						} else {
							if (yych <= 0x085E) goto yy4;
							if (yych <= 0x0963) goto yy2;
							if (yych <= 0x0965) goto yy4;
						}
					} else {
						if (yych <= 0x0E4E) {
							if (yych <= 0x0970) goto yy4;
							if (yych == 0x0DF4) goto yy4;
						} else {
							if (yych <= 0x0E4F) goto yy4;
							if (yych <= 0x0E59) goto yy2;
							if (yych <= 0x0E5B) goto yy4;
						}
					}
				} else {
					if (yych <= 0x0FD8) {
						if (yych <= 0x0F84) {
							if (yych <= 0x0F12) goto yy4;
							if (yych <= 0x0F39) goto yy2;
							if (yych <= 0x0F3D) goto yy4;
						} else {
							if (yych <= 0x0F85) goto yy4;
							if (yych <= 0x0FCF) goto yy2;
							if (yych <= 0x0FD4) goto yy4;
						}
					} else {
						if (yych <= 0x10FA) {
							if (yych <= 0x0FDA) goto yy4;
							if (yych <= 0x1049) goto yy2;
							if (yych <= 0x104F) goto yy4;
						} else {
							if (yych <= 0x10FB) goto yy4;
							if (yych <= 0x1360) goto yy2;
							if (yych <= 0x1368) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x180A) {
					if (yych <= 0x16ED) {
						if (yych <= 0x166E) {
							if (yych <= 0x1400) goto yy4;
							if (yych >= 0x166D) goto yy4;
						} else {
							if (yych <= 0x169A) goto yy2;
							if (yych <= 0x169C) goto yy4;
							if (yych >= 0x16EB) goto yy4;
						}
					} else {
						if (yych <= 0x17D6) {
							if (yych <= 0x1734) goto yy2;
							if (yych <= 0x1736) goto yy4;
							if (yych >= 0x17D4) goto yy4;
						} else {
							if (yych <= 0x17D7) goto yy2;
							if (yych <= 0x17DA) goto yy4;
							if (yych >= 0x1800) goto yy4;
						}
					}
				} else {
					if (yych <= 0x1AAD) {
						if (yych <= 0x1A1F) {
							if (yych <= 0x1943) goto yy2;
							if (yych <= 0x1945) goto yy4;
							if (yych >= 0x1A1E) goto yy4;
						} else {
							if (yych <= 0x1A9F) goto yy2;
							if (yych != 0x1AA7) goto yy4;
						}
					} else {
						if (yych <= 0x1BFF) {
							if (yych <= 0x1B59) goto yy2;
							if (yych <= 0x1B60) goto yy4;
							if (yych >= 0x1BFC) goto yy4;
						} else {
							if (yych <= 0x1C3A) goto yy2;
							if (yych <= 0x1C3F) goto yy4;
							if (yych >= 0x1C7E) goto yy4;
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0xA6F7) {
			if (yych <= 0x2CFD) {
				if (yych <= 0x2328) {
					if (yych <= 0x2044) {
						if (yych <= 0x200F) {
							if (yych == 0x1CD3) goto yy4;
						} else {
							if (yych <= 0x2027) goto yy4;
							if (yych <= 0x202F) goto yy2;
							if (yych <= 0x2043) goto yy4;
						}
					} else {
						if (yych <= 0x207C) {
							if (yych == 0x2052) goto yy2;
							if (yych <= 0x205E) goto yy4;
						} else {
							if (yych <= 0x207E) goto yy4;
							if (yych <= 0x208C) goto yy2;
							if (yych <= 0x208E) goto yy4;
						}
					}
				} else {
					if (yych <= 0x2982) {
						if (yych <= 0x27C4) {
							if (yych <= 0x232A) goto yy4;
							if (yych <= 0x2767) goto yy2;
							if (yych <= 0x2775) goto yy4;
						} else {
							if (yych <= 0x27C6) goto yy4;
							if (yych <= 0x27E5) goto yy2;
							if (yych <= 0x27EF) goto yy4;
						}
					} else {
						if (yych <= 0x29FB) {
							if (yych <= 0x2998) goto yy4;
							if (yych <= 0x29D7) goto yy2;
							if (yych <= 0x29DB) goto yy4;
						} else {
							if (yych <= 0x29FD) goto yy4;
							if (yych <= 0x2CF8) goto yy2;
							if (yych <= 0x2CFC) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x3030) {
					if (yych <= 0x2E31) {
						if (yych <= 0x2D70) {
							if (yych <= 0x2CFF) goto yy4;
							if (yych >= 0x2D70) goto yy4;
						} else {
							if (yych <= 0x2DFF) goto yy2;
							if (yych != 0x2E2F) goto yy4;
						}
					} else {
						if (yych <= 0x3011) {
							if (yych <= 0x3000) goto yy2;
							if (yych <= 0x3003) goto yy4;
							if (yych >= 0x3008) goto yy4;
						} else {
							if (yych <= 0x3013) goto yy2;
							if (yych <= 0x301F) goto yy4;
							if (yych >= 0x3030) goto yy4;
						}
					}
				} else {
					if (yych <= 0xA4FF) {
						if (yych <= 0x30A0) {
							if (yych == 0x303D) goto yy4;
							if (yych >= 0x30A0) goto yy4;
						} else {
							if (yych == 0x30FB) goto yy4;
							if (yych >= 0xA4FE) goto yy4;
						}
					} else {
						if (yych <= 0xA673) {
							if (yych <= 0xA60C) goto yy2;
							if (yych <= 0xA60F) goto yy4;
							if (yych >= 0xA673) goto yy4;
						} else {
							if (yych == 0xA67E) goto yy4;
							if (yych >= 0xA6F2) goto yy4;
						}
					}
				}
			}
		} else {
			if (yych <= 0xFE0F) {
				if (yych <= 0xAA5B) {
					if (yych <= 0xA92D) {
						if (yych <= 0xA8CD) {
							if (yych <= 0xA873) goto yy2;
							if (yych <= 0xA877) goto yy4;
						} else {
							if (yych <= 0xA8CF) goto yy4;
							if (yych <= 0xA8F7) goto yy2;
							if (yych <= 0xA8FA) goto yy4;
						}
					} else {
						if (yych <= 0xA9C0) {
							if (yych <= 0xA92F) goto yy4;
							if (yych == 0xA95F) goto yy4;
						} else {
							if (yych <= 0xA9CD) goto yy4;
							if (yych <= 0xA9DD) goto yy2;
							if (yych <= 0xA9DF) goto yy4;
						}
					}
				} else {
					if (yych <= 0xD801) {
						if (yych <= 0xABEA) {
							if (yych <= 0xAA5F) goto yy4;
							if (yych <= 0xAADD) goto yy2;
							if (yych <= 0xAADF) goto yy4;
						} else {
							if (yych <= 0xABEB) goto yy4;
							if (yych == 0xD800) goto yy6;
						}
					} else {
						if (yych <= 0xD808) {
							if (yych <= 0xD802) goto yy7;
							if (yych == 0xD804) goto yy8;
						} else {
							if (yych <= 0xD809) goto yy9;
							if (yych <= 0xFD3D) goto yy2;
							if (yych <= 0xFD3F) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0xFF0B) {
					if (yych <= 0xFE67) {
						if (yych <= 0xFE53) {
							if (yych <= 0xFE19) goto yy4;
							if (yych <= 0xFE2F) goto yy2;
							if (yych <= 0xFE52) goto yy4;
						} else {
							if (yych == 0xFE62) goto yy2;
							if (yych <= 0xFE63) goto yy4;
						}
					} else {
						if (yych <= 0xFF00) {
							if (yych == 0xFE69) goto yy2;
							if (yych <= 0xFE6B) goto yy4;
						} else {
							if (yych == 0xFF04) goto yy2;
							if (yych <= 0xFF0A) goto yy4;
						}
					}
				} else {
					if (yych <= 0xFF3E) {
						if (yych <= 0xFF1E) {
							if (yych <= 0xFF0F) goto yy4;
							if (yych <= 0xFF19) goto yy2;
							if (yych <= 0xFF1B) goto yy4;
						} else {
							if (yych <= 0xFF20) goto yy4;
							if (yych <= 0xFF3A) goto yy2;
							if (yych <= 0xFF3D) goto yy4;
						}
					} else {
						if (yych <= 0xFF5C) {
							if (yych <= 0xFF3F) goto yy4;
							if (yych == 0xFF5B) goto yy4;
						} else {
							if (yych == 0xFF5E) goto yy2;
							if (yych <= 0xFF65) goto yy4;
						}
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_P.x--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 370 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_P.x--encoding-policy(ignore).re"
	{ goto P; }
#line 376 "<stdout>"
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDF9E) {
		if (yych <= 0xDCFF) goto yy3;
		if (yych <= 0xDD01) goto yy10;
		goto yy3;
	} else {
		if (yych <= 0xDF9F) goto yy10;
		if (yych == 0xDFD0) goto yy10;
		goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDD3F) {
		if (yych <= 0xDD1E) {
			if (yych == 0xDC57) goto yy10;
			goto yy3;
		} else {
			if (yych <= 0xDD1F) goto yy10;
			if (yych <= 0xDD3E) goto yy3;
			goto yy10;
		}
	} else {
		if (yych <= 0xDE7E) {
			if (yych <= 0xDE4F) goto yy3;
			if (yych <= 0xDE58) goto yy10;
			goto yy3;
		} else {
			if (yych <= 0xDE7F) goto yy10;
			if (yych <= 0xDF38) goto yy3;
			if (yych <= 0xDF3F) goto yy10;
			goto yy3;
		}
	}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDCBA) {
		if (yych <= 0xDC46) goto yy3;
		if (yych <= 0xDC4D) goto yy10;
		goto yy3;
	} else {
		if (yych == 0xDCBD) goto yy3;
		if (yych <= 0xDCC1) goto yy10;
		goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDC6F) goto yy3;
	if (yych >= 0xDC74) goto yy3;
yy10:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy5;
}
#line 14 "unicode_group_P.x--encoding-policy(ignore).re"

}
static const unsigned int chars_P [] = {0x21,0x23,  0x25,0x2a,  0x2c,0x2f,  0x3a,0x3b,  0x3f,0x40,  0x5b,0x5d,  0x5f,0x5f,  0x7b,0x7b,  0x7d,0x7d,  0xa1,0xa1,  0xab,0xab,  0xb7,0xb7,  0xbb,0xbb,  0xbf,0xbf,  0x37e,0x37e,  0x387,0x387,  0x55a,0x55f,  0x589,0x58a,  0x5be,0x5be,  0x5c0,0x5c0,  0x5c3,0x5c3,  0x5c6,0x5c6,  0x5f3,0x5f4,  0x609,0x60a,  0x60c,0x60d,  0x61b,0x61b,  0x61e,0x61f,  0x66a,0x66d,  0x6d4,0x6d4,  0x700,0x70d,  0x7f7,0x7f9,  0x830,0x83e,  0x85e,0x85e,  0x964,0x965,  0x970,0x970,  0xdf4,0xdf4,  0xe4f,0xe4f,  0xe5a,0xe5b,  0xf04,0xf12,  0xf3a,0xf3d,  0xf85,0xf85,  0xfd0,0xfd4,  0xfd9,0xfda,  0x104a,0x104f,  0x10fb,0x10fb,  0x1361,0x1368,  0x1400,0x1400,  0x166d,0x166e,  0x169b,0x169c,  0x16eb,0x16ed,  0x1735,0x1736,  0x17d4,0x17d6,  0x17d8,0x17da,  0x1800,0x180a,  0x1944,0x1945,  0x1a1e,0x1a1f,  0x1aa0,0x1aa6,  0x1aa8,0x1aad,  0x1b5a,0x1b60,  0x1bfc,0x1bff,  0x1c3b,0x1c3f,  0x1c7e,0x1c7f,  0x1cd3,0x1cd3,  0x2010,0x2027,  0x2030,0x2043,  0x2045,0x2051,  0x2053,0x205e,  0x207d,0x207e,  0x208d,0x208e,  0x2329,0x232a,  0x2768,0x2775,  0x27c5,0x27c6,  0x27e6,0x27ef,  0x2983,0x2998,  0x29d8,0x29db,  0x29fc,0x29fd,  0x2cf9,0x2cfc,  0x2cfe,0x2cff,  0x2d70,0x2d70,  0x2e00,0x2e2e,  0x2e30,0x2e31,  0x3001,0x3003,  0x3008,0x3011,  0x3014,0x301f,  0x3030,0x3030,  0x303d,0x303d,  0x30a0,0x30a0,  0x30fb,0x30fb,  0xa4fe,0xa4ff,  0xa60d,0xa60f,  0xa673,0xa673,  0xa67e,0xa67e,  0xa6f2,0xa6f7,  0xa874,0xa877,  0xa8ce,0xa8cf,  0xa8f8,0xa8fa,  0xa92e,0xa92f,  0xa95f,0xa95f,  0xa9c1,0xa9cd,  0xa9de,0xa9df,  0xaa5c,0xaa5f,  0xaade,0xaadf,  0xabeb,0xabeb,  0xfd3e,0xfd3f,  0xfe10,0xfe19,  0xfe30,0xfe52,  0xfe54,0xfe61,  0xfe63,0xfe63,  0xfe68,0xfe68,  0xfe6a,0xfe6b,  0xff01,0xff03,  0xff05,0xff0a,  0xff0c,0xff0f,  0xff1a,0xff1b,  0xff1f,0xff20,  0xff3b,0xff3d,  0xff3f,0xff3f,  0xff5b,0xff5b,  0xff5d,0xff5d,  0xff5f,0xff65,  0x10100,0x10101,  0x1039f,0x1039f,  0x103d0,0x103d0,  0x10857,0x10857,  0x1091f,0x1091f,  0x1093f,0x1093f,  0x10a50,0x10a58,  0x10a7f,0x10a7f,  0x10b39,0x10b3f,  0x11047,0x1104d,  0x110bb,0x110bc,  0x110be,0x110c1,  0x12470,0x12473,  0x0,0x0};
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
	YYCTYPE * buffer_P = new YYCTYPE [1198];
	unsigned int buffer_len = encode_utf16 (chars_P, sizeof (chars_P) / sizeof (unsigned int), buffer_P);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_P), reinterpret_cast<const YYCTYPE *> (buffer_P + buffer_len)))
		printf("test 'P' failed\n");
	delete [] buffer_P;
	return 0;
}
