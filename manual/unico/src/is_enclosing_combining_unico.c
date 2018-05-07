#include <unico.h>
int is_enclosing_combining_unico (unico code){
switch (code){
case 0x488: return 1;
case 0x489: return 1;
case 0x1abe: return 1;
case 0x20dd: return 1;
case 0x20de: return 1;
case 0x20df: return 1;
case 0x20e0: return 1;
case 0x20e2: return 1;
case 0x20e3: return 1;
case 0x20e4: return 1;
case 0xa670: return 1;
case 0xa671: return 1;
case 0xa672: return 1;
default: return 0;
}
}
