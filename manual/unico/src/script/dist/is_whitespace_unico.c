#include <unico.h>
int is_whitespace_unico (unico code){
switch (code){
case 0x9: return 1;
case 0xa: return 1;
case 0xb: return 1;
case 0xc: return 1;
case 0xd: return 1;
case 0x85: return 1;
case 0x2028: return 1;
case 0x2029: return 1;
case 0x20: return 1;
case 0x3000: return 1;
case 0x1680: return 1;
case 0x2000: return 1;
case 0x2001: return 1;
case 0x2002: return 1;
case 0x2003: return 1;
case 0x2004: return 1;
case 0x2005: return 1;
case 0x2006: return 1;
case 0x2008: return 1;
case 0x2009: return 1;
case 0x200a: return 1;
case 0x205f: return 1;
case 0xa0: return 1;
case 0x2007: return 1;
case 0x202f: return 1;
default: return 0;
}
}
