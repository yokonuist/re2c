/* Generated by re2c */
#line 1 "unicode_group_S.x--encoding-policy(ignore).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
S:
	
#line 13 "<stdout>"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x2118) {
		if (yych <= 0x0C7E) {
			if (yych <= 0x02EB) {
				if (yych <= 0x00AC) {
					if (yych <= '_') {
						if (yych <= '+') {
							if (yych == '$') goto yy4;
							if (yych >= '+') goto yy4;
						} else {
							if (yych <= '>') {
								if (yych >= '<') goto yy4;
							} else {
								if (yych == '^') goto yy4;
							}
						}
					} else {
						if (yych <= '}') {
							if (yych <= '`') goto yy4;
							if (yych == '|') goto yy4;
						} else {
							if (yych <= 0x00A1) {
								if (yych <= '~') goto yy4;
							} else {
								if (yych <= 0x00A9) goto yy4;
								if (yych >= 0x00AC) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x00D6) {
						if (yych <= 0x00B4) {
							if (yych <= 0x00AD) goto yy2;
							if (yych <= 0x00B1) goto yy4;
							if (yych >= 0x00B4) goto yy4;
						} else {
							if (yych <= 0x00B6) {
								if (yych >= 0x00B6) goto yy4;
							} else {
								if (yych == 0x00B8) goto yy4;
							}
						}
					} else {
						if (yych <= 0x02C1) {
							if (yych <= 0x00D7) goto yy4;
							if (yych == 0x00F7) goto yy4;
						} else {
							if (yych <= 0x02D1) {
								if (yych <= 0x02C5) goto yy4;
							} else {
								if (yych <= 0x02DF) goto yy4;
								if (yych >= 0x02E5) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0x060F) {
					if (yych <= 0x03F5) {
						if (yych <= 0x02FF) {
							if (yych == 0x02ED) goto yy4;
							if (yych >= 0x02EF) goto yy4;
						} else {
							if (yych <= 0x0375) {
								if (yych >= 0x0375) goto yy4;
							} else {
								if (yych <= 0x0383) goto yy2;
								if (yych <= 0x0385) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0605) {
							if (yych <= 0x03F6) goto yy4;
							if (yych == 0x0482) goto yy4;
						} else {
							if (yych <= 0x060A) {
								if (yych <= 0x0608) goto yy4;
							} else {
								if (yych <= 0x060B) goto yy4;
								if (yych >= 0x060E) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x09F1) {
						if (yych <= 0x06E9) {
							if (yych == 0x06DE) goto yy4;
							if (yych >= 0x06E9) goto yy4;
						} else {
							if (yych <= 0x06FE) {
								if (yych >= 0x06FD) goto yy4;
							} else {
								if (yych == 0x07F6) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0AF1) {
							if (yych <= 0x09F9) {
								if (yych <= 0x09F3) goto yy4;
							} else {
								if (yych <= 0x09FB) goto yy4;
								if (yych >= 0x0AF1) goto yy4;
							}
						} else {
							if (yych <= 0x0B70) {
								if (yych >= 0x0B70) goto yy4;
							} else {
								if (yych <= 0x0BF2) goto yy2;
								if (yych <= 0x0BFA) goto yy4;
							}
						}
					}
				}
			}
		} else {
			if (yych <= 0x19DD) {
				if (yych <= 0x0FBD) {
					if (yych <= 0x0F17) {
						if (yych <= 0x0E3E) {
							if (yych <= 0x0C7F) goto yy4;
							if (yych == 0x0D79) goto yy4;
						} else {
							if (yych <= 0x0F00) {
								if (yych <= 0x0E3F) goto yy4;
							} else {
								if (yych <= 0x0F03) goto yy4;
								if (yych >= 0x0F13) goto yy4;
							}
						}
					} else {
						if (yych <= 0x0F34) {
							if (yych <= 0x0F19) goto yy2;
							if (yych <= 0x0F1F) goto yy4;
							if (yych >= 0x0F34) goto yy4;
						} else {
							if (yych <= 0x0F36) {
								if (yych >= 0x0F36) goto yy4;
							} else {
								if (yych == 0x0F38) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x109F) {
						if (yych <= 0x0FCD) {
							if (yych == 0x0FC6) goto yy2;
							if (yych <= 0x0FCC) goto yy4;
						} else {
							if (yych <= 0x0FD4) {
								if (yych <= 0x0FCF) goto yy4;
							} else {
								if (yych <= 0x0FD8) goto yy4;
								if (yych >= 0x109E) goto yy4;
							}
						}
					} else {
						if (yych <= 0x1399) {
							if (yych == 0x1360) goto yy4;
							if (yych >= 0x1390) goto yy4;
						} else {
							if (yych <= 0x17DB) {
								if (yych >= 0x17DB) goto yy4;
							} else {
								if (yych == 0x1940) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0x2043) {
					if (yych <= 0x1FC1) {
						if (yych <= 0x1B73) {
							if (yych <= 0x19FF) goto yy4;
							if (yych <= 0x1B60) goto yy2;
							if (yych <= 0x1B6A) goto yy4;
						} else {
							if (yych <= 0x1FBC) {
								if (yych <= 0x1B7C) goto yy4;
							} else {
								if (yych != 0x1FBE) goto yy4;
							}
						}
					} else {
						if (yych <= 0x1FDF) {
							if (yych <= 0x1FCC) goto yy2;
							if (yych <= 0x1FCF) goto yy4;
							if (yych >= 0x1FDD) goto yy4;
						} else {
							if (yych <= 0x1FEF) {
								if (yych >= 0x1FED) goto yy4;
							} else {
								if (yych <= 0x1FFC) goto yy2;
								if (yych <= 0x1FFE) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x20B9) {
						if (yych <= 0x2079) {
							if (yych <= 0x2044) goto yy4;
							if (yych == 0x2052) goto yy4;
						} else {
							if (yych <= 0x2089) {
								if (yych <= 0x207C) goto yy4;
							} else {
								if (yych <= 0x208C) goto yy4;
								if (yych >= 0x20A0) goto yy4;
							}
						}
					} else {
						if (yych <= 0x2107) {
							if (yych <= 0x2101) {
								if (yych >= 0x2100) goto yy4;
							} else {
								if (yych <= 0x2102) goto yy2;
								if (yych <= 0x2106) goto yy4;
							}
						} else {
							if (yych <= 0x2113) {
								if (yych <= 0x2109) goto yy4;
							} else {
								if (yych != 0x2115) goto yy4;
							}
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0x318F) {
			if (yych <= 0x27CA) {
				if (yych <= 0x214F) {
					if (yych <= 0x212D) {
						if (yych <= 0x2125) {
							if (yych <= 0x211D) goto yy2;
							if (yych != 0x2124) goto yy4;
						} else {
							if (yych <= 0x2127) {
								if (yych >= 0x2127) goto yy4;
							} else {
								if (yych == 0x2129) goto yy4;
							}
						}
					} else {
						if (yych <= 0x213F) {
							if (yych <= 0x212E) goto yy4;
							if (yych <= 0x2139) goto yy2;
							if (yych <= 0x213B) goto yy4;
						} else {
							if (yych <= 0x2149) {
								if (yych <= 0x2144) goto yy4;
							} else {
								if (yych != 0x214E) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x249B) {
						if (yych <= 0x23F3) {
							if (yych <= 0x218F) goto yy2;
							if (yych <= 0x2328) goto yy4;
							if (yych >= 0x232B) goto yy4;
						} else {
							if (yych <= 0x2426) {
								if (yych >= 0x2400) goto yy4;
							} else {
								if (yych <= 0x243F) goto yy2;
								if (yych <= 0x244A) goto yy4;
							}
						}
					} else {
						if (yych <= 0x2700) {
							if (yych <= 0x24E9) goto yy4;
							if (yych <= 0x24FF) goto yy2;
							if (yych <= 0x26FF) goto yy4;
						} else {
							if (yych <= 0x2793) {
								if (yych <= 0x2767) goto yy4;
							} else {
								if (yych <= 0x27C4) goto yy4;
								if (yych >= 0x27C7) goto yy4;
							}
						}
					}
				}
			} else {
				if (yych <= 0x2E99) {
					if (yych <= 0x29DB) {
						if (yych <= 0x27E5) {
							if (yych == 0x27CC) goto yy4;
							if (yych >= 0x27CE) goto yy4;
						} else {
							if (yych <= 0x2982) {
								if (yych >= 0x27F0) goto yy4;
							} else {
								if (yych <= 0x2998) goto yy2;
								if (yych <= 0x29D7) goto yy4;
							}
						}
					} else {
						if (yych <= 0x2B4F) {
							if (yych <= 0x29FB) goto yy4;
							if (yych <= 0x29FD) goto yy2;
							if (yych <= 0x2B4C) goto yy4;
						} else {
							if (yych <= 0x2CE4) {
								if (yych <= 0x2B59) goto yy4;
							} else {
								if (yych <= 0x2CEA) goto yy4;
								if (yych >= 0x2E80) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0x3011) {
						if (yych <= 0x2FD5) {
							if (yych <= 0x2E9A) goto yy2;
							if (yych <= 0x2EF3) goto yy4;
							if (yych >= 0x2F00) goto yy4;
						} else {
							if (yych <= 0x2FFB) {
								if (yych >= 0x2FF0) goto yy4;
							} else {
								if (yych == 0x3004) goto yy4;
							}
						}
					} else {
						if (yych <= 0x3037) {
							if (yych <= 0x301F) {
								if (yych <= 0x3013) goto yy4;
							} else {
								if (yych <= 0x3020) goto yy4;
								if (yych >= 0x3036) goto yy4;
							}
						} else {
							if (yych <= 0x303F) {
								if (yych >= 0x303E) goto yy4;
							} else {
								if (yych <= 0x309A) goto yy2;
								if (yych <= 0x309C) goto yy4;
							}
						}
					}
				}
			}
		} else {
			if (yych <= 0xD834) {
				if (yych <= 0x4DBF) {
					if (yych <= 0x3250) {
						if (yych <= 0x31BF) {
							if (yych <= 0x3191) goto yy4;
							if (yych <= 0x3195) goto yy2;
							if (yych <= 0x319F) goto yy4;
						} else {
							if (yych <= 0x31FF) {
								if (yych <= 0x31E3) goto yy4;
							} else {
								if (yych <= 0x321E) goto yy4;
								if (yych >= 0x322A) goto yy4;
							}
						}
					} else {
						if (yych <= 0x32B0) {
							if (yych <= 0x325F) goto yy2;
							if (yych <= 0x327F) goto yy4;
							if (yych >= 0x328A) goto yy4;
						} else {
							if (yych <= 0x32FE) {
								if (yych >= 0x32C0) goto yy4;
							} else {
								if (yych <= 0x32FF) goto yy2;
								if (yych <= 0x33FF) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0xA78A) {
						if (yych <= 0xA6FF) {
							if (yych <= 0x4DFF) goto yy4;
							if (yych <= 0xA48F) goto yy2;
							if (yych <= 0xA4C6) goto yy4;
						} else {
							if (yych <= 0xA71F) {
								if (yych <= 0xA716) goto yy4;
							} else {
								if (yych <= 0xA721) goto yy4;
								if (yych >= 0xA789) goto yy4;
							}
						}
					} else {
						if (yych <= 0xAA76) {
							if (yych <= 0xA82B) {
								if (yych >= 0xA828) goto yy4;
							} else {
								if (yych <= 0xA835) goto yy2;
								if (yych <= 0xA839) goto yy4;
							}
						} else {
							if (yych <= 0xD7FF) {
								if (yych <= 0xAA79) goto yy4;
							} else {
								if (yych <= 0xD800) goto yy6;
								if (yych >= 0xD834) goto yy7;
							}
						}
					}
				}
			} else {
				if (yych <= 0xFF04) {
					if (yych <= 0xFDFB) {
						if (yych <= 0xD83D) {
							if (yych <= 0xD835) goto yy8;
							if (yych <= 0xD83B) goto yy2;
							if (yych <= 0xD83C) goto yy9;
							goto yy10;
						} else {
							if (yych <= 0xFB29) {
								if (yych >= 0xFB29) goto yy4;
							} else {
								if (yych <= 0xFBB1) goto yy2;
								if (yych <= 0xFBC1) goto yy4;
							}
						}
					} else {
						if (yych <= 0xFE63) {
							if (yych <= 0xFDFD) goto yy4;
							if (yych == 0xFE62) goto yy4;
						} else {
							if (yych <= 0xFE68) {
								if (yych <= 0xFE66) goto yy4;
							} else {
								if (yych <= 0xFE69) goto yy4;
								if (yych >= 0xFF04) goto yy4;
							}
						}
					}
				} else {
					if (yych <= 0xFF5B) {
						if (yych <= 0xFF1E) {
							if (yych == 0xFF0B) goto yy4;
							if (yych >= 0xFF1C) goto yy4;
						} else {
							if (yych <= 0xFF3E) {
								if (yych >= 0xFF3E) goto yy4;
							} else {
								if (yych == 0xFF40) goto yy4;
							}
						}
					} else {
						if (yych <= 0xFFE6) {
							if (yych <= 0xFF5D) {
								if (yych <= 0xFF5C) goto yy4;
							} else {
								if (yych <= 0xFF5E) goto yy4;
								if (yych >= 0xFFE0) goto yy4;
							}
						} else {
							if (yych <= 0xFFEE) {
								if (yych >= 0xFFE8) goto yy4;
							} else {
								if (yych <= 0xFFFB) goto yy2;
								if (yych <= 0xFFFD) goto yy4;
							}
						}
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_S.x--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 490 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_S.x--encoding-policy(ignore).re"
	{ goto S; }
#line 496 "<stdout>"
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDD78) {
		if (yych <= 0xDD02) {
			if (yych <= 0xDD01) goto yy3;
			goto yy11;
		} else {
			if (yych <= 0xDD36) goto yy3;
			if (yych <= 0xDD3F) goto yy11;
			goto yy3;
		}
	} else {
		if (yych <= 0xDD9B) {
			if (yych <= 0xDD89) goto yy11;
			if (yych <= 0xDD8F) goto yy3;
			goto yy11;
		} else {
			if (yych <= 0xDDCF) goto yy3;
			if (yych <= 0xDDFC) goto yy11;
			goto yy3;
		}
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDD84) {
		if (yych <= 0xDD28) {
			if (yych <= 0xDCF5) {
				if (yych <= 0xDBFF) goto yy3;
				goto yy11;
			} else {
				if (yych <= 0xDCFF) goto yy3;
				if (yych <= 0xDD26) goto yy11;
				goto yy3;
			}
		} else {
			if (yych <= 0xDD69) {
				if (yych <= 0xDD64) goto yy11;
				goto yy3;
			} else {
				if (yych <= 0xDD6C) goto yy11;
				if (yych <= 0xDD82) goto yy3;
				goto yy11;
			}
		}
	} else {
		if (yych <= 0xDDFF) {
			if (yych <= 0xDDA9) {
				if (yych <= 0xDD8B) goto yy3;
				goto yy11;
			} else {
				if (yych <= 0xDDAD) goto yy3;
				if (yych <= 0xDDDD) goto yy11;
				goto yy3;
			}
		} else {
			if (yych <= 0xDE45) {
				if (yych <= 0xDE41) goto yy11;
				if (yych <= 0xDE44) goto yy3;
				goto yy11;
			} else {
				if (yych <= 0xDEFF) goto yy3;
				if (yych <= 0xDF56) goto yy11;
				goto yy3;
			}
		}
	}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDF35) {
		if (yych <= 0xDEFA) {
			if (yych <= 0xDEC1) {
				if (yych <= 0xDEC0) goto yy3;
				goto yy11;
			} else {
				if (yych == 0xDEDB) goto yy11;
				goto yy3;
			}
		} else {
			if (yych <= 0xDF14) {
				if (yych <= 0xDEFB) goto yy11;
				goto yy3;
			} else {
				if (yych <= 0xDF15) goto yy11;
				if (yych <= 0xDF34) goto yy3;
				goto yy11;
			}
		}
	} else {
		if (yych <= 0xDF88) {
			if (yych <= 0xDF4F) {
				if (yych <= 0xDF4E) goto yy3;
				goto yy11;
			} else {
				if (yych == 0xDF6F) goto yy11;
				goto yy3;
			}
		} else {
			if (yych <= 0xDFA9) {
				if (yych <= 0xDF89) goto yy11;
				if (yych <= 0xDFA8) goto yy3;
				goto yy11;
			} else {
				if (yych == 0xDFC3) goto yy11;
				goto yy3;
			}
		}
	}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDE02) {
		if (yych <= 0xDCCF) {
			if (yych <= 0xDC9F) {
				if (yych <= 0xDC2B) {
					if (yych <= 0xDBFF) goto yy3;
					goto yy11;
				} else {
					if (yych <= 0xDC2F) goto yy3;
					if (yych <= 0xDC93) goto yy11;
					goto yy3;
				}
			} else {
				if (yych <= 0xDCB0) {
					if (yych <= 0xDCAE) goto yy11;
					goto yy3;
				} else {
					if (yych <= 0xDCBE) goto yy11;
					if (yych <= 0xDCC0) goto yy3;
					goto yy11;
				}
			}
		} else {
			if (yych <= 0xDD2F) {
				if (yych <= 0xDCDF) {
					if (yych <= 0xDCD0) goto yy3;
					goto yy11;
				} else {
					if (yych <= 0xDD0F) goto yy3;
					if (yych <= 0xDD2E) goto yy11;
					goto yy3;
				}
			} else {
				if (yych <= 0xDD6F) {
					if (yych <= 0xDD69) goto yy11;
					goto yy3;
				} else {
					if (yych <= 0xDD9A) goto yy11;
					if (yych <= 0xDDE5) goto yy3;
					goto yy11;
				}
			}
		}
	} else {
		if (yych <= 0xDF35) {
			if (yych <= 0xDE4F) {
				if (yych <= 0xDE3A) {
					if (yych <= 0xDE0F) goto yy3;
					goto yy11;
				} else {
					if (yych <= 0xDE3F) goto yy3;
					if (yych <= 0xDE48) goto yy11;
					goto yy3;
				}
			} else {
				if (yych <= 0xDEFF) {
					if (yych <= 0xDE51) goto yy11;
					goto yy3;
				} else {
					if (yych <= 0xDF20) goto yy11;
					if (yych <= 0xDF2F) goto yy3;
					goto yy11;
				}
			}
		} else {
			if (yych <= 0xDF9F) {
				if (yych <= 0xDF7C) {
					if (yych <= 0xDF36) goto yy3;
					goto yy11;
				} else {
					if (yych <= 0xDF7F) goto yy3;
					if (yych <= 0xDF93) goto yy11;
					goto yy3;
				}
			} else {
				if (yych <= 0xDFCA) {
					if (yych == 0xDFC5) goto yy3;
					goto yy11;
				} else {
					if (yych <= 0xDFDF) goto yy3;
					if (yych <= 0xDFF0) goto yy11;
					goto yy3;
				}
			}
		}
	}
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDE17) {
		if (yych <= 0xDD3D) {
			if (yych <= 0xDC41) {
				if (yych <= 0xDC3E) {
					if (yych <= 0xDBFF) goto yy3;
				} else {
					if (yych != 0xDC40) goto yy3;
				}
			} else {
				if (yych <= 0xDCF8) {
					if (yych >= 0xDCF8) goto yy3;
				} else {
					if (yych <= 0xDCFC) goto yy11;
					if (yych <= 0xDCFF) goto yy3;
				}
			}
		} else {
			if (yych <= 0xDE00) {
				if (yych <= 0xDD67) {
					if (yych <= 0xDD4F) goto yy3;
				} else {
					if (yych <= 0xDDFA) goto yy3;
					if (yych >= 0xDE00) goto yy3;
				}
			} else {
				if (yych <= 0xDE14) {
					if (yych == 0xDE11) goto yy3;
				} else {
					if (yych != 0xDE16) goto yy3;
				}
			}
		}
	} else {
		if (yych <= 0xDE2D) {
			if (yych <= 0xDE1E) {
				if (yych <= 0xDE19) {
					if (yych >= 0xDE19) goto yy3;
				} else {
					if (yych == 0xDE1B) goto yy3;
				}
			} else {
				if (yych <= 0xDE27) {
					if (yych <= 0xDE1F) goto yy3;
					if (yych >= 0xDE26) goto yy3;
				} else {
					if (yych == 0xDE2C) goto yy3;
				}
			}
		} else {
			if (yych <= 0xDE44) {
				if (yych <= 0xDE33) {
					if (yych <= 0xDE2F) goto yy3;
				} else {
					if (yych <= 0xDE34) goto yy3;
					if (yych >= 0xDE41) goto yy3;
				}
			} else {
				if (yych <= 0xDEC5) {
					if (yych <= 0xDE4F) goto yy11;
					if (yych <= 0xDE7F) goto yy3;
				} else {
					if (yych <= 0xDEFF) goto yy3;
					if (yych >= 0xDF74) goto yy3;
				}
			}
		}
	}
yy11:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy5;
}
#line 14 "unicode_group_S.x--encoding-policy(ignore).re"

}
static const unsigned int chars_S [] = {0x24,0x24,  0x2b,0x2b,  0x3c,0x3e,  0x5e,0x5e,  0x60,0x60,  0x7c,0x7c,  0x7e,0x7e,  0xa2,0xa9,  0xac,0xac,  0xae,0xb1,  0xb4,0xb4,  0xb6,0xb6,  0xb8,0xb8,  0xd7,0xd7,  0xf7,0xf7,  0x2c2,0x2c5,  0x2d2,0x2df,  0x2e5,0x2eb,  0x2ed,0x2ed,  0x2ef,0x2ff,  0x375,0x375,  0x384,0x385,  0x3f6,0x3f6,  0x482,0x482,  0x606,0x608,  0x60b,0x60b,  0x60e,0x60f,  0x6de,0x6de,  0x6e9,0x6e9,  0x6fd,0x6fe,  0x7f6,0x7f6,  0x9f2,0x9f3,  0x9fa,0x9fb,  0xaf1,0xaf1,  0xb70,0xb70,  0xbf3,0xbfa,  0xc7f,0xc7f,  0xd79,0xd79,  0xe3f,0xe3f,  0xf01,0xf03,  0xf13,0xf17,  0xf1a,0xf1f,  0xf34,0xf34,  0xf36,0xf36,  0xf38,0xf38,  0xfbe,0xfc5,  0xfc7,0xfcc,  0xfce,0xfcf,  0xfd5,0xfd8,  0x109e,0x109f,  0x1360,0x1360,  0x1390,0x1399,  0x17db,0x17db,  0x1940,0x1940,  0x19de,0x19ff,  0x1b61,0x1b6a,  0x1b74,0x1b7c,  0x1fbd,0x1fbd,  0x1fbf,0x1fc1,  0x1fcd,0x1fcf,  0x1fdd,0x1fdf,  0x1fed,0x1fef,  0x1ffd,0x1ffe,  0x2044,0x2044,  0x2052,0x2052,  0x207a,0x207c,  0x208a,0x208c,  0x20a0,0x20b9,  0x2100,0x2101,  0x2103,0x2106,  0x2108,0x2109,  0x2114,0x2114,  0x2116,0x2118,  0x211e,0x2123,  0x2125,0x2125,  0x2127,0x2127,  0x2129,0x2129,  0x212e,0x212e,  0x213a,0x213b,  0x2140,0x2144,  0x214a,0x214d,  0x214f,0x214f,  0x2190,0x2328,  0x232b,0x23f3,  0x2400,0x2426,  0x2440,0x244a,  0x249c,0x24e9,  0x2500,0x26ff,  0x2701,0x2767,  0x2794,0x27c4,  0x27c7,0x27ca,  0x27cc,0x27cc,  0x27ce,0x27e5,  0x27f0,0x2982,  0x2999,0x29d7,  0x29dc,0x29fb,  0x29fe,0x2b4c,  0x2b50,0x2b59,  0x2ce5,0x2cea,  0x2e80,0x2e99,  0x2e9b,0x2ef3,  0x2f00,0x2fd5,  0x2ff0,0x2ffb,  0x3004,0x3004,  0x3012,0x3013,  0x3020,0x3020,  0x3036,0x3037,  0x303e,0x303f,  0x309b,0x309c,  0x3190,0x3191,  0x3196,0x319f,  0x31c0,0x31e3,  0x3200,0x321e,  0x322a,0x3250,  0x3260,0x327f,  0x328a,0x32b0,  0x32c0,0x32fe,  0x3300,0x33ff,  0x4dc0,0x4dff,  0xa490,0xa4c6,  0xa700,0xa716,  0xa720,0xa721,  0xa789,0xa78a,  0xa828,0xa82b,  0xa836,0xa839,  0xaa77,0xaa79,  0xfb29,0xfb29,  0xfbb2,0xfbc1,  0xfdfc,0xfdfd,  0xfe62,0xfe62,  0xfe64,0xfe66,  0xfe69,0xfe69,  0xff04,0xff04,  0xff0b,0xff0b,  0xff1c,0xff1e,  0xff3e,0xff3e,  0xff40,0xff40,  0xff5c,0xff5c,  0xff5e,0xff5e,  0xffe0,0xffe6,  0xffe8,0xffee,  0xfffc,0xfffd,  0x10102,0x10102,  0x10137,0x1013f,  0x10179,0x10189,  0x10190,0x1019b,  0x101d0,0x101fc,  0x1d000,0x1d0f5,  0x1d100,0x1d126,  0x1d129,0x1d164,  0x1d16a,0x1d16c,  0x1d183,0x1d184,  0x1d18c,0x1d1a9,  0x1d1ae,0x1d1dd,  0x1d200,0x1d241,  0x1d245,0x1d245,  0x1d300,0x1d356,  0x1d6c1,0x1d6c1,  0x1d6db,0x1d6db,  0x1d6fb,0x1d6fb,  0x1d715,0x1d715,  0x1d735,0x1d735,  0x1d74f,0x1d74f,  0x1d76f,0x1d76f,  0x1d789,0x1d789,  0x1d7a9,0x1d7a9,  0x1d7c3,0x1d7c3,  0x1f000,0x1f02b,  0x1f030,0x1f093,  0x1f0a0,0x1f0ae,  0x1f0b1,0x1f0be,  0x1f0c1,0x1f0cf,  0x1f0d1,0x1f0df,  0x1f110,0x1f12e,  0x1f130,0x1f169,  0x1f170,0x1f19a,  0x1f1e6,0x1f202,  0x1f210,0x1f23a,  0x1f240,0x1f248,  0x1f250,0x1f251,  0x1f300,0x1f320,  0x1f330,0x1f335,  0x1f337,0x1f37c,  0x1f380,0x1f393,  0x1f3a0,0x1f3c4,  0x1f3c6,0x1f3ca,  0x1f3e0,0x1f3f0,  0x1f400,0x1f43e,  0x1f440,0x1f440,  0x1f442,0x1f4f7,  0x1f4f9,0x1f4fc,  0x1f500,0x1f53d,  0x1f550,0x1f567,  0x1f5fb,0x1f5ff,  0x1f601,0x1f610,  0x1f612,0x1f614,  0x1f616,0x1f616,  0x1f618,0x1f618,  0x1f61a,0x1f61a,  0x1f61c,0x1f61e,  0x1f620,0x1f625,  0x1f628,0x1f62b,  0x1f62d,0x1f62d,  0x1f630,0x1f633,  0x1f635,0x1f640,  0x1f645,0x1f64f,  0x1f680,0x1f6c5,  0x1f700,0x1f773,  0x0,0x0};
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
	YYCTYPE * buffer_S = new YYCTYPE [11018];
	unsigned int buffer_len = encode_utf16 (chars_S, sizeof (chars_S) / sizeof (unsigned int), buffer_S);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_S), reinterpret_cast<const YYCTYPE *> (buffer_S + buffer_len)))
		printf("test 'S' failed\n");
	delete [] buffer_S;
	return 0;
}
