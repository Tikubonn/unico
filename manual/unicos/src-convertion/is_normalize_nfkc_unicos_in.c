#include <unico.h>
#include <stddef.h>

int is_normalize_nfkc_unicos_in (size_t index, size_t end, unicos *uni, size_t *indexout){
if (8 <= end - index){
switch (get_unicos(0, uni)){
case 0x62c: 
switch (get_unicos(1, uni)){
case 0x644: 
switch (get_unicos(2, uni)){
case 0x20: 
switch (get_unicos(3, uni)){
case 0x62c: 
switch (get_unicos(4, uni)){
case 0x644: 
switch (get_unicos(5, uni)){
case 0x627: 
switch (get_unicos(6, uni)){
case 0x644: 
switch (get_unicos(7, uni)){
case 0x647:
*indexout = index + 8;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
}
if (6 <= end - index){
switch (get_unicos(0, uni)){
case 0x72: 
switch (get_unicos(1, uni)){
case 0x61: 
switch (get_unicos(2, uni)){
case 0x64: 
switch (get_unicos(3, uni)){
case 0x2215: 
switch (get_unicos(4, uni)){
case 0x73: 
switch (get_unicos(5, uni)){
case 0x32:
*indexout = index + 6;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ad: 
switch (get_unicos(1, uni)){
case 0x30ed: 
switch (get_unicos(2, uni)){
case 0x30e1: 
switch (get_unicos(3, uni)){
case 0x30fc: 
switch (get_unicos(4, uni)){
case 0x30c8: 
switch (get_unicos(5, uni)){
case 0x30eb:
*indexout = index + 6;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
}
if (5 <= end - index){
switch (get_unicos(0, uni)){
case 0x72: 
switch (get_unicos(1, uni)){
case 0x61: 
switch (get_unicos(2, uni)){
case 0x64: 
switch (get_unicos(3, uni)){
case 0x2215: 
switch (get_unicos(4, uni)){
case 0x73:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a8: 
switch (get_unicos(1, uni)){
case 0x30b9: 
switch (get_unicos(2, uni)){
case 0x30af: 
switch (get_unicos(3, uni)){
case 0x30fc: 
switch (get_unicos(4, uni)){
case 0x30c9:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ad: 
switch (get_unicos(1, uni)){
case 0x30ed: 
switch (get_unicos(2, uni)){
case 0x30b0: 
switch (get_unicos(3, uni)){
case 0x30e9: 
switch (get_unicos(4, uni)){
case 0x30e0:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ef: 
switch (get_unicos(3, uni)){
case 0x30c3: 
switch (get_unicos(4, uni)){
case 0x30c8:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30af: 
switch (get_unicos(1, uni)){
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30bc: 
switch (get_unicos(3, uni)){
case 0x30a4: 
switch (get_unicos(4, uni)){
case 0x30ed:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b0: 
switch (get_unicos(1, uni)){
case 0x30e9: 
switch (get_unicos(2, uni)){
case 0x30e0: 
switch (get_unicos(3, uni)){
case 0x30c8: 
switch (get_unicos(4, uni)){
case 0x30f3:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b5: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30c1: 
switch (get_unicos(3, uni)){
case 0x30fc: 
switch (get_unicos(4, uni)){
case 0x30e0:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d1: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30bb: 
switch (get_unicos(3, uni)){
case 0x30f3: 
switch (get_unicos(4, uni)){
case 0x30c8:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d4: 
switch (get_unicos(1, uni)){
case 0x30a2: 
switch (get_unicos(2, uni)){
case 0x30b9: 
switch (get_unicos(3, uni)){
case 0x30c8: 
switch (get_unicos(4, uni)){
case 0x30eb:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d5: 
switch (get_unicos(1, uni)){
case 0x30a1: 
switch (get_unicos(2, uni)){
case 0x30e9: 
switch (get_unicos(3, uni)){
case 0x30c3: 
switch (get_unicos(4, uni)){
case 0x30c9:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d6: 
switch (get_unicos(1, uni)){
case 0x30c3: 
switch (get_unicos(2, uni)){
case 0x30b7: 
switch (get_unicos(3, uni)){
case 0x30a7: 
switch (get_unicos(4, uni)){
case 0x30eb:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d8: 
switch (get_unicos(1, uni)){
case 0x30af: 
switch (get_unicos(2, uni)){
case 0x30bf: 
switch (get_unicos(3, uni)){
case 0x30fc: 
switch (get_unicos(4, uni)){
case 0x30eb:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30de: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30b7: 
switch (get_unicos(3, uni)){
case 0x30e7: 
switch (get_unicos(4, uni)){
case 0x30f3:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30df: 
switch (get_unicos(1, uni)){
case 0x30ea: 
switch (get_unicos(2, uni)){
case 0x30d0: 
switch (get_unicos(3, uni)){
case 0x30fc: 
switch (get_unicos(4, uni)){
case 0x30eb:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ec: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30c8: 
switch (get_unicos(3, uni)){
case 0x30b2: 
switch (get_unicos(4, uni)){
case 0x30f3:
*indexout = index + 5;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
}
if (4 <= end - index){
switch (get_unicos(0, uni)){
case 0x28: 
switch (get_unicos(1, uni)){
case 0x31: 
switch (get_unicos(2, uni)){
case 0x30: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x33: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x34: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x35: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x36: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x37: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x38: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x39: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(2, uni)){
case 0x30: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0xc624: 
switch (get_unicos(2, uni)){
case 0xc804: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xd6c4: 
switch (get_unicos(3, uni)){
case 0x29:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(1, uni)){
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x31: 
switch (get_unicos(3, uni)){
case 0x30:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x43: 
switch (get_unicos(1, uni)){
case 0x2215: 
switch (get_unicos(2, uni)){
case 0x6b: 
switch (get_unicos(3, uni)){
case 0x67:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x56: 
switch (get_unicos(1, uni)){
case 0x49: 
switch (get_unicos(2, uni)){
case 0x49: 
switch (get_unicos(3, uni)){
case 0x49:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x61: 
switch (get_unicos(1, uni)){
case 0x2e: 
switch (get_unicos(2, uni)){
case 0x6d: 
switch (get_unicos(3, uni)){
case 0x2e:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x6b: 
switch (get_unicos(1, uni)){
case 0x63: 
switch (get_unicos(2, uni)){
case 0x61: 
switch (get_unicos(3, uni)){
case 0x6c:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(1, uni)){
case 0x2215: 
switch (get_unicos(2, uni)){
case 0x73: 
switch (get_unicos(3, uni)){
case 0x32:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x70: 
switch (get_unicos(1, uni)){
case 0x2e: 
switch (get_unicos(2, uni)){
case 0x6d: 
switch (get_unicos(3, uni)){
case 0x2e:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x76: 
switch (get_unicos(1, uni)){
case 0x69: 
switch (get_unicos(2, uni)){
case 0x69: 
switch (get_unicos(3, uni)){
case 0x69:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x627: 
switch (get_unicos(1, uni)){
case 0x643: 
switch (get_unicos(2, uni)){
case 0x628: 
switch (get_unicos(3, uni)){
case 0x631:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x644: 
switch (get_unicos(2, uni)){
case 0x644: 
switch (get_unicos(3, uni)){
case 0x647:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x631: 
switch (get_unicos(1, uni)){
case 0x633: 
switch (get_unicos(2, uni)){
case 0x648: 
switch (get_unicos(3, uni)){
case 0x644:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x6cc: 
switch (get_unicos(2, uni)){
case 0x627: 
switch (get_unicos(3, uni)){
case 0x644:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x635: 
switch (get_unicos(1, uni)){
case 0x644: 
switch (get_unicos(2, uni)){
case 0x639: 
switch (get_unicos(3, uni)){
case 0x645:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x639: 
switch (get_unicos(1, uni)){
case 0x644: 
switch (get_unicos(2, uni)){
case 0x64a: 
switch (get_unicos(3, uni)){
case 0x647:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(1, uni)){
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x645: 
switch (get_unicos(3, uni)){
case 0x62f:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x648: 
switch (get_unicos(1, uni)){
case 0x633: 
switch (get_unicos(2, uni)){
case 0x644: 
switch (get_unicos(3, uni)){
case 0x645:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x2032: 
switch (get_unicos(1, uni)){
case 0x2032: 
switch (get_unicos(2, uni)){
case 0x2032: 
switch (get_unicos(3, uni)){
case 0x2032:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x222b: 
switch (get_unicos(1, uni)){
case 0x222b: 
switch (get_unicos(2, uni)){
case 0x222b: 
switch (get_unicos(3, uni)){
case 0x222b:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a2: 
switch (get_unicos(1, uni)){
case 0x30d1: 
switch (get_unicos(2, uni)){
case 0x30fc: 
switch (get_unicos(3, uni)){
case 0x30c8:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30d5: 
switch (get_unicos(3, uni)){
case 0x30a1:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30da: 
switch (get_unicos(3, uni)){
case 0x30a2:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a4: 
switch (get_unicos(1, uni)){
case 0x30cb: 
switch (get_unicos(2, uni)){
case 0x30f3: 
switch (get_unicos(3, uni)){
case 0x30b0:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a8: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30ab: 
switch (get_unicos(3, uni)){
case 0x30fc:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ab: 
switch (get_unicos(1, uni)){
case 0x30e9: 
switch (get_unicos(2, uni)){
case 0x30c3: 
switch (get_unicos(3, uni)){
case 0x30c8:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ed: 
switch (get_unicos(2, uni)){
case 0x30ea: 
switch (get_unicos(3, uni)){
case 0x30fc:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ad: 
switch (get_unicos(1, uni)){
case 0x30e5: 
switch (get_unicos(2, uni)){
case 0x30ea: 
switch (get_unicos(3, uni)){
case 0x30fc:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ae: 
switch (get_unicos(1, uni)){
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30c0: 
switch (get_unicos(3, uni)){
case 0x30fc:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30af: 
switch (get_unicos(1, uni)){
case 0x30ed: 
switch (get_unicos(2, uni)){
case 0x30fc: 
switch (get_unicos(3, uni)){
case 0x30cd:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b5: 
switch (get_unicos(1, uni)){
case 0x30a4: 
switch (get_unicos(2, uni)){
case 0x30af: 
switch (get_unicos(3, uni)){
case 0x30eb:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b7: 
switch (get_unicos(1, uni)){
case 0x30ea: 
switch (get_unicos(2, uni)){
case 0x30f3: 
switch (get_unicos(3, uni)){
case 0x30b0:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d0: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30ec: 
switch (get_unicos(3, uni)){
case 0x30eb:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d5: 
switch (get_unicos(1, uni)){
case 0x30a3: 
switch (get_unicos(2, uni)){
case 0x30fc: 
switch (get_unicos(3, uni)){
case 0x30c8:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30dd: 
switch (get_unicos(1, uni)){
case 0x30a4: 
switch (get_unicos(2, uni)){
case 0x30f3: 
switch (get_unicos(3, uni)){
case 0x30c8:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30de: 
switch (get_unicos(1, uni)){
case 0x30a4: 
switch (get_unicos(2, uni)){
case 0x30af: 
switch (get_unicos(3, uni)){
case 0x30ed:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30df: 
switch (get_unicos(1, uni)){
case 0x30af: 
switch (get_unicos(2, uni)){
case 0x30ed: 
switch (get_unicos(3, uni)){
case 0x30f3:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30e1: 
switch (get_unicos(1, uni)){
case 0x30ac: 
switch (get_unicos(2, uni)){
case 0x30c8: 
switch (get_unicos(3, uni)){
case 0x30f3:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30c8: 
switch (get_unicos(3, uni)){
case 0x30eb:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ea: 
switch (get_unicos(1, uni)){
case 0x30c3: 
switch (get_unicos(2, uni)){
case 0x30c8: 
switch (get_unicos(3, uni)){
case 0x30eb:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30eb: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30d6: 
switch (get_unicos(3, uni)){
case 0x30eb:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x682a: 
switch (get_unicos(1, uni)){
case 0x5f0f: 
switch (get_unicos(2, uni)){
case 0x4f1a: 
switch (get_unicos(3, uni)){
case 0x793e:
*indexout = index + 4;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
}
if (3 <= end - index){
switch (get_unicos(0, uni)){
case 0x20: 
switch (get_unicos(1, uni)){
case 0x308: 
switch (get_unicos(2, uni)){
case 0x300:
*indexout = index + 3;
return 1;
case 0x301:
*indexout = index + 3;
return 1;
case 0x342:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x313: 
switch (get_unicos(2, uni)){
case 0x300:
*indexout = index + 3;
return 1;
case 0x301:
*indexout = index + 3;
return 1;
case 0x342:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x314: 
switch (get_unicos(2, uni)){
case 0x300:
*indexout = index + 3;
return 1;
case 0x301:
*indexout = index + 3;
return 1;
case 0x342:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64c: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64d: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64e: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64f: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x650: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x651: 
switch (get_unicos(2, uni)){
case 0x670:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x28: 
switch (get_unicos(1, uni)){
case 0x31: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x33: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x34: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x35: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x36: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x37: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x38: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x39: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x41: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x42: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x43: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x44: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x45: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x46: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x47: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x48: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x49: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4a: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4b: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4f: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x50: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x51: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x52: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x53: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x54: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x55: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x56: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x57: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x58: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x59: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5a: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x61: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x63: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x65: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x66: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x67: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x68: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x69: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6a: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6b: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6e: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6f: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x70: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x71: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x72: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x73: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x74: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x75: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x76: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x77: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x78: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x79: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x7a: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1100: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1102: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1103: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1105: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1106: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1107: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1109: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x110b: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x110c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x110e: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x110f: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1110: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1111: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1112: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e00: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e03: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e09: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e5d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e8c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e94: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4ee3: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4f01: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4f11: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x516b: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x516d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x52b4: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5341: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5354: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x540d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x547c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x56db: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x571f: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5b66: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x65e5: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6708: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6709: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6728: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x682a: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6c34: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x706b: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x7279: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x76e3: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x793e: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x795d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x796d: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x81ea: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x81f3: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x8ca1: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x8cc7: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x91d1: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xac00: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb098: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb2e4: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb77c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb9c8: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xbc14: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xc0ac: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xc544: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xc790: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xc8fc: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xcc28: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xce74: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xd0c0: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xd30c: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xd558: 
switch (get_unicos(2, uni)){
case 0x29:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x2e: 
switch (get_unicos(1, uni)){
case 0x2e: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30: 
switch (get_unicos(1, uni)){
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x33:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(1, uni)){
case 0x30: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x6708:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x6708:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x6708:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x33: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x34: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x35: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x36: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x37: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x38: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x39: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x32:
*indexout = index + 3;
return 1;
case 0x33:
*indexout = index + 3;
return 1;
case 0x34:
*indexout = index + 3;
return 1;
case 0x35:
*indexout = index + 3;
return 1;
case 0x36:
*indexout = index + 3;
return 1;
case 0x37:
*indexout = index + 3;
return 1;
case 0x38:
*indexout = index + 3;
return 1;
case 0x39:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(1, uni)){
case 0x30: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x33: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x34: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
case 0x70b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x35: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x36: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x37: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x38: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x39: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x33:
*indexout = index + 3;
return 1;
case 0x35:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x33: 
switch (get_unicos(1, uni)){
case 0x30: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(2, uni)){
case 0x65e5:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x34:
*indexout = index + 3;
return 1;
case 0x35:
*indexout = index + 3;
return 1;
case 0x38:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x34: 
switch (get_unicos(1, uni)){
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x35:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x35: 
switch (get_unicos(1, uni)){
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x36:
*indexout = index + 3;
return 1;
case 0x38:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x37: 
switch (get_unicos(1, uni)){
case 0x2044: 
switch (get_unicos(2, uni)){
case 0x38:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x3a: 
switch (get_unicos(1, uni)){
case 0x3a: 
switch (get_unicos(2, uni)){
case 0x3d:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x3d: 
switch (get_unicos(1, uni)){
case 0x3d: 
switch (get_unicos(2, uni)){
case 0x3d:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x41: 
switch (get_unicos(1, uni)){
case 0x2215: 
switch (get_unicos(2, uni)){
case 0x6d:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x43: 
switch (get_unicos(1, uni)){
case 0x6f: 
switch (get_unicos(2, uni)){
case 0x2e:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x46: 
switch (get_unicos(1, uni)){
case 0x41: 
switch (get_unicos(2, uni)){
case 0x58:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x47: 
switch (get_unicos(1, uni)){
case 0x48: 
switch (get_unicos(2, uni)){
case 0x7a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x50: 
switch (get_unicos(2, uni)){
case 0x61:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x49: 
switch (get_unicos(1, uni)){
case 0x49: 
switch (get_unicos(2, uni)){
case 0x49:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x4c: 
switch (get_unicos(1, uni)){
case 0x54: 
switch (get_unicos(2, uni)){
case 0x44:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x4d: 
switch (get_unicos(1, uni)){
case 0x48: 
switch (get_unicos(2, uni)){
case 0x7a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x50: 
switch (get_unicos(2, uni)){
case 0x61:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x50: 
switch (get_unicos(1, uni)){
case 0x50: 
switch (get_unicos(2, uni)){
case 0x4d:
*indexout = index + 3;
return 1;
case 0x56:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x54: 
switch (get_unicos(2, uni)){
case 0x45:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x54: 
switch (get_unicos(1, uni)){
case 0x45: 
switch (get_unicos(2, uni)){
case 0x4c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x48: 
switch (get_unicos(2, uni)){
case 0x7a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x56: 
switch (get_unicos(1, uni)){
case 0x49: 
switch (get_unicos(2, uni)){
case 0x49:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2215: 
switch (get_unicos(2, uni)){
case 0x6d:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x58: 
switch (get_unicos(1, uni)){
case 0x49: 
switch (get_unicos(2, uni)){
case 0x49:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x61: 
switch (get_unicos(1, uni)){
case 0x2f: 
switch (get_unicos(2, uni)){
case 0x63:
*indexout = index + 3;
return 1;
case 0x73:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x62: 
switch (get_unicos(1, uni)){
case 0x61: 
switch (get_unicos(2, uni)){
case 0x72:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x63: 
switch (get_unicos(1, uni)){
case 0x2f: 
switch (get_unicos(2, uni)){
case 0x6f:
*indexout = index + 3;
return 1;
case 0x75:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x61: 
switch (get_unicos(2, uni)){
case 0x6c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(2, uni)){
case 0x32:
*indexout = index + 3;
return 1;
case 0x33:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x64: 
switch (get_unicos(1, uni)){
case 0x6d: 
switch (get_unicos(2, uni)){
case 0x32:
*indexout = index + 3;
return 1;
case 0x33:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x65: 
switch (get_unicos(1, uni)){
case 0x72: 
switch (get_unicos(2, uni)){
case 0x67:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x66: 
switch (get_unicos(1, uni)){
case 0x66: 
switch (get_unicos(2, uni)){
case 0x69:
*indexout = index + 3;
return 1;
case 0x6c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x67: 
switch (get_unicos(1, uni)){
case 0x61: 
switch (get_unicos(2, uni)){
case 0x6c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x68: 
switch (get_unicos(1, uni)){
case 0x50: 
switch (get_unicos(2, uni)){
case 0x61:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x69: 
switch (get_unicos(1, uni)){
case 0x69: 
switch (get_unicos(2, uni)){
case 0x69:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x6b: 
switch (get_unicos(1, uni)){
case 0x48: 
switch (get_unicos(2, uni)){
case 0x7a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x50: 
switch (get_unicos(2, uni)){
case 0x61:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(2, uni)){
case 0x32:
*indexout = index + 3;
return 1;
case 0x33:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x6c: 
switch (get_unicos(1, uni)){
case 0x6f: 
switch (get_unicos(2, uni)){
case 0x67:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(1, uni)){
case 0x69: 
switch (get_unicos(2, uni)){
case 0x6c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(2, uni)){
case 0x32:
*indexout = index + 3;
return 1;
case 0x33:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6f: 
switch (get_unicos(2, uni)){
case 0x6c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2215: 
switch (get_unicos(2, uni)){
case 0x73:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x72: 
switch (get_unicos(1, uni)){
case 0x61: 
switch (get_unicos(2, uni)){
case 0x64:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x76: 
switch (get_unicos(1, uni)){
case 0x69: 
switch (get_unicos(2, uni)){
case 0x69:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x78: 
switch (get_unicos(1, uni)){
case 0x69: 
switch (get_unicos(2, uni)){
case 0x69:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x5e9: 
switch (get_unicos(1, uni)){
case 0x5bc: 
switch (get_unicos(2, uni)){
case 0x5c1:
*indexout = index + 3;
return 1;
case 0x5c2:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x628: 
switch (get_unicos(1, uni)){
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x62a: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x62d:
*indexout = index + 3;
return 1;
case 0x62e:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x62c: 
switch (get_unicos(1, uni)){
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x633: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x62d:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x634: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62e:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x635: 
switch (get_unicos(1, uni)){
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x644: 
switch (get_unicos(2, uni)){
case 0x649:
*indexout = index + 3;
return 1;
case 0x6d2:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x636: 
switch (get_unicos(1, uni)){
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x637: 
switch (get_unicos(1, uni)){
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x639: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x63a: 
switch (get_unicos(1, uni)){
case 0x645: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x640: 
switch (get_unicos(1, uni)){
case 0x64e: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64f: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x650: 
switch (get_unicos(2, uni)){
case 0x651:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x641: 
switch (get_unicos(1, uni)){
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x642: 
switch (get_unicos(1, uni)){
case 0x644: 
switch (get_unicos(2, uni)){
case 0x6d2:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x643: 
switch (get_unicos(1, uni)){
case 0x645: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x644: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x62e:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x646: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x62d:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x649:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x647: 
switch (get_unicos(1, uni)){
case 0x645: 
switch (get_unicos(2, uni)){
case 0x62c:
*indexout = index + 3;
return 1;
case 0x645:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x64a: 
switch (get_unicos(1, uni)){
case 0x62c: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(2, uni)){
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(2, uni)){
case 0x645:
*indexout = index + 3;
return 1;
case 0x64a:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0xfb2: 
switch (get_unicos(1, uni)){
case 0xf71: 
switch (get_unicos(2, uni)){
case 0xf80:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0xfb3: 
switch (get_unicos(1, uni)){
case 0xf71: 
switch (get_unicos(2, uni)){
case 0xf80:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x2032: 
switch (get_unicos(1, uni)){
case 0x2032: 
switch (get_unicos(2, uni)){
case 0x2032:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x2035: 
switch (get_unicos(1, uni)){
case 0x2035: 
switch (get_unicos(2, uni)){
case 0x2035:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x222b: 
switch (get_unicos(1, uni)){
case 0x222b: 
switch (get_unicos(2, uni)){
case 0x222b:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x222e: 
switch (get_unicos(1, uni)){
case 0x222e: 
switch (get_unicos(2, uni)){
case 0x222e:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x3014: 
switch (get_unicos(1, uni)){
case 0x53: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e09: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e8c: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x52dd: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5b89: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6253: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6557: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x672c: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x70b9: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x76d7: 
switch (get_unicos(2, uni)){
case 0x3015:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a2: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30eb:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a4: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30c1:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30a6: 
switch (get_unicos(1, uni)){
case 0x30a9: 
switch (get_unicos(2, uni)){
case 0x30f3:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30aa: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30e0:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ab: 
switch (get_unicos(1, uni)){
case 0x30a4: 
switch (get_unicos(2, uni)){
case 0x30ea:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ac: 
switch (get_unicos(1, uni)){
case 0x30ed: 
switch (get_unicos(2, uni)){
case 0x30f3:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30de:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ae: 
switch (get_unicos(1, uni)){
case 0x30cb: 
switch (get_unicos(2, uni)){
case 0x30fc:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b0: 
switch (get_unicos(1, uni)){
case 0x30e9: 
switch (get_unicos(2, uni)){
case 0x30e0:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b1: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30b3: 
switch (get_unicos(1, uni)){
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30ca:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30dd:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30bb: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30c1:
*indexout = index + 3;
return 1;
case 0x30c8:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30c0: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ce: 
switch (get_unicos(1, uni)){
case 0x30c3: 
switch (get_unicos(2, uni)){
case 0x30c8:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30cf: 
switch (get_unicos(1, uni)){
case 0x30a4: 
switch (get_unicos(2, uni)){
case 0x30c4:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d1: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30c4:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d4: 
switch (get_unicos(1, uni)){
case 0x30af: 
switch (get_unicos(2, uni)){
case 0x30eb:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d5: 
switch (get_unicos(1, uni)){
case 0x30e9: 
switch (get_unicos(2, uni)){
case 0x30f3:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d8: 
switch (get_unicos(1, uni)){
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30c4:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30d9: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30bf:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30da: 
switch (get_unicos(1, uni)){
case 0x30cb: 
switch (get_unicos(2, uni)){
case 0x30d2:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30b9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30b8:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30db: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30eb:
*indexout = index + 3;
return 1;
case 0x30f3:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30dc: 
switch (get_unicos(1, uni)){
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30c8:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30dd: 
switch (get_unicos(1, uni)){
case 0x30f3: 
switch (get_unicos(2, uni)){
case 0x30c9:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30de: 
switch (get_unicos(1, uni)){
case 0x30a4: 
switch (get_unicos(2, uni)){
case 0x30eb:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30c3: 
switch (get_unicos(2, uni)){
case 0x30cf:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30eb: 
switch (get_unicos(2, uni)){
case 0x30af:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30e4: 
switch (get_unicos(1, uni)){
case 0x30fc: 
switch (get_unicos(2, uni)){
case 0x30c9:
*indexout = index + 3;
return 1;
case 0x30eb:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30e6: 
switch (get_unicos(1, uni)){
case 0x30a2: 
switch (get_unicos(2, uni)){
case 0x30f3:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30eb: 
switch (get_unicos(1, uni)){
case 0x30d4: 
switch (get_unicos(2, uni)){
case 0x30fc:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x30ef: 
switch (get_unicos(1, uni)){
case 0x30c3: 
switch (get_unicos(2, uni)){
case 0x30c8:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x1d158: 
switch (get_unicos(1, uni)){
case 0x1d165: 
switch (get_unicos(2, uni)){
case 0x1d16e:
*indexout = index + 3;
return 1;
case 0x1d16f:
*indexout = index + 3;
return 1;
case 0x1d170:
*indexout = index + 3;
return 1;
case 0x1d171:
*indexout = index + 3;
return 1;
case 0x1d172:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x1d1b9: 
switch (get_unicos(1, uni)){
case 0x1d165: 
switch (get_unicos(2, uni)){
case 0x1d16e:
*indexout = index + 3;
return 1;
case 0x1d16f:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
case 0x1d1ba: 
switch (get_unicos(1, uni)){
case 0x1d165: 
switch (get_unicos(2, uni)){
case 0x1d16e:
*indexout = index + 3;
return 1;
case 0x1d16f:
*indexout = index + 3;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
}
if (2 <= end - index){
switch (get_unicos(0, uni)){
case 0x20: 
switch (get_unicos(1, uni)){
case 0x301:
*indexout = index + 2;
return 1;
case 0x303:
*indexout = index + 2;
return 1;
case 0x304:
*indexout = index + 2;
return 1;
case 0x305:
*indexout = index + 2;
return 1;
case 0x306:
*indexout = index + 2;
return 1;
case 0x307:
*indexout = index + 2;
return 1;
case 0x308:
*indexout = index + 2;
return 1;
case 0x30a:
*indexout = index + 2;
return 1;
case 0x30b:
*indexout = index + 2;
return 1;
case 0x313:
*indexout = index + 2;
return 1;
case 0x314:
*indexout = index + 2;
return 1;
case 0x327:
*indexout = index + 2;
return 1;
case 0x328:
*indexout = index + 2;
return 1;
case 0x333:
*indexout = index + 2;
return 1;
case 0x342:
*indexout = index + 2;
return 1;
case 0x345:
*indexout = index + 2;
return 1;
case 0x64b:
*indexout = index + 2;
return 1;
case 0x64c:
*indexout = index + 2;
return 1;
case 0x64d:
*indexout = index + 2;
return 1;
case 0x64e:
*indexout = index + 2;
return 1;
case 0x64f:
*indexout = index + 2;
return 1;
case 0x650:
*indexout = index + 2;
return 1;
case 0x651:
*indexout = index + 2;
return 1;
case 0x652:
*indexout = index + 2;
return 1;
case 0x3099:
*indexout = index + 2;
return 1;
case 0x309a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x21: 
switch (get_unicos(1, uni)){
case 0x21:
*indexout = index + 2;
return 1;
case 0x3f:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2e: 
switch (get_unicos(1, uni)){
case 0x2e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x31: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x30:
*indexout = index + 2;
return 1;
case 0x31:
*indexout = index + 2;
return 1;
case 0x32:
*indexout = index + 2;
return 1;
case 0x33:
*indexout = index + 2;
return 1;
case 0x34:
*indexout = index + 2;
return 1;
case 0x35:
*indexout = index + 2;
return 1;
case 0x36:
*indexout = index + 2;
return 1;
case 0x37:
*indexout = index + 2;
return 1;
case 0x38:
*indexout = index + 2;
return 1;
case 0x39:
*indexout = index + 2;
return 1;
case 0x2044:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x32: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x30:
*indexout = index + 2;
return 1;
case 0x31:
*indexout = index + 2;
return 1;
case 0x32:
*indexout = index + 2;
return 1;
case 0x33:
*indexout = index + 2;
return 1;
case 0x34:
*indexout = index + 2;
return 1;
case 0x35:
*indexout = index + 2;
return 1;
case 0x36:
*indexout = index + 2;
return 1;
case 0x37:
*indexout = index + 2;
return 1;
case 0x38:
*indexout = index + 2;
return 1;
case 0x39:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x33: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x30:
*indexout = index + 2;
return 1;
case 0x31:
*indexout = index + 2;
return 1;
case 0x32:
*indexout = index + 2;
return 1;
case 0x33:
*indexout = index + 2;
return 1;
case 0x34:
*indexout = index + 2;
return 1;
case 0x35:
*indexout = index + 2;
return 1;
case 0x36:
*indexout = index + 2;
return 1;
case 0x37:
*indexout = index + 2;
return 1;
case 0x38:
*indexout = index + 2;
return 1;
case 0x39:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x34: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x30:
*indexout = index + 2;
return 1;
case 0x31:
*indexout = index + 2;
return 1;
case 0x32:
*indexout = index + 2;
return 1;
case 0x33:
*indexout = index + 2;
return 1;
case 0x34:
*indexout = index + 2;
return 1;
case 0x35:
*indexout = index + 2;
return 1;
case 0x36:
*indexout = index + 2;
return 1;
case 0x37:
*indexout = index + 2;
return 1;
case 0x38:
*indexout = index + 2;
return 1;
case 0x39:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x35: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x30:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x36: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x37: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x38: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x39: 
switch (get_unicos(1, uni)){
case 0x2c:
*indexout = index + 2;
return 1;
case 0x2e:
*indexout = index + 2;
return 1;
case 0x65e5:
*indexout = index + 2;
return 1;
case 0x6708:
*indexout = index + 2;
return 1;
case 0x70b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3d: 
switch (get_unicos(1, uni)){
case 0x3d:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3f: 
switch (get_unicos(1, uni)){
case 0x21:
*indexout = index + 2;
return 1;
case 0x3f:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x41: 
switch (get_unicos(1, uni)){
case 0x55:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x42: 
switch (get_unicos(1, uni)){
case 0x71:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x43: 
switch (get_unicos(1, uni)){
case 0x44:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x44: 
switch (get_unicos(1, uni)){
case 0x4a:
*indexout = index + 2;
return 1;
case 0x5a:
*indexout = index + 2;
return 1;
case 0x7a:
*indexout = index + 2;
return 1;
case 0x17d:
*indexout = index + 2;
return 1;
case 0x17e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x47: 
switch (get_unicos(1, uni)){
case 0x42:
*indexout = index + 2;
return 1;
case 0x79:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x48: 
switch (get_unicos(1, uni)){
case 0x50:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x67:
*indexout = index + 2;
return 1;
case 0x7a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x49: 
switch (get_unicos(1, uni)){
case 0x49:
*indexout = index + 2;
return 1;
case 0x4a:
*indexout = index + 2;
return 1;
case 0x55:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x58:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4b: 
switch (get_unicos(1, uni)){
case 0x42:
*indexout = index + 2;
return 1;
case 0x4b:
*indexout = index + 2;
return 1;
case 0x4d:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4c: 
switch (get_unicos(1, uni)){
case 0x4a:
*indexout = index + 2;
return 1;
case 0x6a:
*indexout = index + 2;
return 1;
case 0xb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4d: 
switch (get_unicos(1, uni)){
case 0x42:
*indexout = index + 2;
return 1;
case 0x43:
*indexout = index + 2;
return 1;
case 0x44:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x57:
*indexout = index + 2;
return 1;
case 0x3a9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4e: 
switch (get_unicos(1, uni)){
case 0x4a:
*indexout = index + 2;
return 1;
case 0x6a:
*indexout = index + 2;
return 1;
case 0x6f:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x50: 
switch (get_unicos(1, uni)){
case 0x48:
*indexout = index + 2;
return 1;
case 0x52:
*indexout = index + 2;
return 1;
case 0x61:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x52: 
switch (get_unicos(1, uni)){
case 0x73:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x53: 
switch (get_unicos(1, uni)){
case 0x44:
*indexout = index + 2;
return 1;
case 0x4d:
*indexout = index + 2;
return 1;
case 0x53:
*indexout = index + 2;
return 1;
case 0x76:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x54: 
switch (get_unicos(1, uni)){
case 0x4d:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x56: 
switch (get_unicos(1, uni)){
case 0x49:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x57: 
switch (get_unicos(1, uni)){
case 0x43:
*indexout = index + 2;
return 1;
case 0x5a:
*indexout = index + 2;
return 1;
case 0x62:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x58: 
switch (get_unicos(1, uni)){
case 0x49:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x61: 
switch (get_unicos(1, uni)){
case 0x2be:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x63: 
switch (get_unicos(1, uni)){
case 0x63:
*indexout = index + 2;
return 1;
case 0x64:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64: 
switch (get_unicos(1, uni)){
case 0x42:
*indexout = index + 2;
return 1;
case 0x61:
*indexout = index + 2;
return 1;
case 0x6c:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
case 0x7a:
*indexout = index + 2;
return 1;
case 0x17e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x65: 
switch (get_unicos(1, uni)){
case 0x56:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x66: 
switch (get_unicos(1, uni)){
case 0x66:
*indexout = index + 2;
return 1;
case 0x69:
*indexout = index + 2;
return 1;
case 0x6c:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x68: 
switch (get_unicos(1, uni)){
case 0x61:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x69: 
switch (get_unicos(1, uni)){
case 0x69:
*indexout = index + 2;
return 1;
case 0x6a:
*indexout = index + 2;
return 1;
case 0x6e:
*indexout = index + 2;
return 1;
case 0x76:
*indexout = index + 2;
return 1;
case 0x78:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6b: 
switch (get_unicos(1, uni)){
case 0x41:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x57:
*indexout = index + 2;
return 1;
case 0x67:
*indexout = index + 2;
return 1;
case 0x6c:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
case 0x74:
*indexout = index + 2;
return 1;
case 0x3a9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6c: 
switch (get_unicos(1, uni)){
case 0x6a:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
case 0x6e:
*indexout = index + 2;
return 1;
case 0x78:
*indexout = index + 2;
return 1;
case 0xb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6d: 
switch (get_unicos(1, uni)){
case 0x32:
*indexout = index + 2;
return 1;
case 0x33:
*indexout = index + 2;
return 1;
case 0x41:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x57:
*indexout = index + 2;
return 1;
case 0x62:
*indexout = index + 2;
return 1;
case 0x67:
*indexout = index + 2;
return 1;
case 0x6c:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
case 0x73:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6e: 
switch (get_unicos(1, uni)){
case 0x41:
*indexout = index + 2;
return 1;
case 0x46:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x57:
*indexout = index + 2;
return 1;
case 0x6a:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
case 0x73:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6f: 
switch (get_unicos(1, uni)){
case 0x56:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x70: 
switch (get_unicos(1, uni)){
case 0x41:
*indexout = index + 2;
return 1;
case 0x46:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x57:
*indexout = index + 2;
return 1;
case 0x63:
*indexout = index + 2;
return 1;
case 0x73:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x73: 
switch (get_unicos(1, uni)){
case 0x72:
*indexout = index + 2;
return 1;
case 0x74:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x76: 
switch (get_unicos(1, uni)){
case 0x69:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x78: 
switch (get_unicos(1, uni)){
case 0x69:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb0: 
switch (get_unicos(1, uni)){
case 0x43:
*indexout = index + 2;
return 1;
case 0x46:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2bc: 
switch (get_unicos(1, uni)){
case 0x6e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x308: 
switch (get_unicos(1, uni)){
case 0x301:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3bc: 
switch (get_unicos(1, uni)){
case 0x41:
*indexout = index + 2;
return 1;
case 0x46:
*indexout = index + 2;
return 1;
case 0x56:
*indexout = index + 2;
return 1;
case 0x57:
*indexout = index + 2;
return 1;
case 0x67:
*indexout = index + 2;
return 1;
case 0x6c:
*indexout = index + 2;
return 1;
case 0x6d:
*indexout = index + 2;
return 1;
case 0x73:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x565: 
switch (get_unicos(1, uni)){
case 0x582:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x574: 
switch (get_unicos(1, uni)){
case 0x565:
*indexout = index + 2;
return 1;
case 0x56b:
*indexout = index + 2;
return 1;
case 0x56d:
*indexout = index + 2;
return 1;
case 0x576:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x57e: 
switch (get_unicos(1, uni)){
case 0x576:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d0: 
switch (get_unicos(1, uni)){
case 0x5b7:
*indexout = index + 2;
return 1;
case 0x5b8:
*indexout = index + 2;
return 1;
case 0x5bc:
*indexout = index + 2;
return 1;
case 0x5dc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d1: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
case 0x5bf:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d2: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d3: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d4: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d5: 
switch (get_unicos(1, uni)){
case 0x5b9:
*indexout = index + 2;
return 1;
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d6: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d8: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5d9: 
switch (get_unicos(1, uni)){
case 0x5b4:
*indexout = index + 2;
return 1;
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5da: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5db: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
case 0x5bf:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5dc: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5de: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e0: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e1: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e3: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e4: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
case 0x5bf:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e6: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e7: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e8: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e9: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
case 0x5c1:
*indexout = index + 2;
return 1;
case 0x5c2:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5ea: 
switch (get_unicos(1, uni)){
case 0x5bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5f2: 
switch (get_unicos(1, uni)){
case 0x5b7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x626: 
switch (get_unicos(1, uni)){
case 0x627:
*indexout = index + 2;
return 1;
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x632:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x646:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x648:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
case 0x6c6:
*indexout = index + 2;
return 1;
case 0x6c7:
*indexout = index + 2;
return 1;
case 0x6c8:
*indexout = index + 2;
return 1;
case 0x6d0:
*indexout = index + 2;
return 1;
case 0x6d5:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x627: 
switch (get_unicos(1, uni)){
case 0x64b:
*indexout = index + 2;
return 1;
case 0x674:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x628: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x632:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x646:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62a: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x632:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x646:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62b: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x632:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x646:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62c: 
switch (get_unicos(1, uni)){
case 0x62d:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62d: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x62e: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x630: 
switch (get_unicos(1, uni)){
case 0x670:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x631: 
switch (get_unicos(1, uni)){
case 0x670:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x633: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x634: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x635: 
switch (get_unicos(1, uni)){
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x636: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x637: 
switch (get_unicos(1, uni)){
case 0x62d:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x638: 
switch (get_unicos(1, uni)){
case 0x645:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x639: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x63a: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x640: 
switch (get_unicos(1, uni)){
case 0x64b:
*indexout = index + 2;
return 1;
case 0x64e:
*indexout = index + 2;
return 1;
case 0x64f:
*indexout = index + 2;
return 1;
case 0x650:
*indexout = index + 2;
return 1;
case 0x651:
*indexout = index + 2;
return 1;
case 0x652:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x641: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x642: 
switch (get_unicos(1, uni)){
case 0x62d:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x643: 
switch (get_unicos(1, uni)){
case 0x627:
*indexout = index + 2;
return 1;
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x644:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x644: 
switch (get_unicos(1, uni)){
case 0x622:
*indexout = index + 2;
return 1;
case 0x623:
*indexout = index + 2;
return 1;
case 0x625:
*indexout = index + 2;
return 1;
case 0x627:
*indexout = index + 2;
return 1;
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x645: 
switch (get_unicos(1, uni)){
case 0x627:
*indexout = index + 2;
return 1;
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x646: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x632:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x646:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x647: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
case 0x670:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x648: 
switch (get_unicos(1, uni)){
case 0x674:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x649: 
switch (get_unicos(1, uni)){
case 0x670:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x64a: 
switch (get_unicos(1, uni)){
case 0x62c:
*indexout = index + 2;
return 1;
case 0x62d:
*indexout = index + 2;
return 1;
case 0x62e:
*indexout = index + 2;
return 1;
case 0x631:
*indexout = index + 2;
return 1;
case 0x632:
*indexout = index + 2;
return 1;
case 0x645:
*indexout = index + 2;
return 1;
case 0x646:
*indexout = index + 2;
return 1;
case 0x647:
*indexout = index + 2;
return 1;
case 0x649:
*indexout = index + 2;
return 1;
case 0x64a:
*indexout = index + 2;
return 1;
case 0x674:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6c7: 
switch (get_unicos(1, uni)){
case 0x674:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x915: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x916: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x917: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x91c: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x921: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x922: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x92b: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x92f: 
switch (get_unicos(1, uni)){
case 0x93c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x9a1: 
switch (get_unicos(1, uni)){
case 0x9bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x9a2: 
switch (get_unicos(1, uni)){
case 0x9bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x9af: 
switch (get_unicos(1, uni)){
case 0x9bc:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xa16: 
switch (get_unicos(1, uni)){
case 0xa3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xa17: 
switch (get_unicos(1, uni)){
case 0xa3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xa1c: 
switch (get_unicos(1, uni)){
case 0xa3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xa2b: 
switch (get_unicos(1, uni)){
case 0xa3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xa32: 
switch (get_unicos(1, uni)){
case 0xa3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xa38: 
switch (get_unicos(1, uni)){
case 0xa3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb21: 
switch (get_unicos(1, uni)){
case 0xb3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xb22: 
switch (get_unicos(1, uni)){
case 0xb3c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xeab: 
switch (get_unicos(1, uni)){
case 0xe99:
*indexout = index + 2;
return 1;
case 0xea1:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xecd: 
switch (get_unicos(1, uni)){
case 0xeb2:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf40: 
switch (get_unicos(1, uni)){
case 0xfb5:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf42: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf4c: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf51: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf56: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf5b: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf71: 
switch (get_unicos(1, uni)){
case 0xf72:
*indexout = index + 2;
return 1;
case 0xf74:
*indexout = index + 2;
return 1;
case 0xf80:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf90: 
switch (get_unicos(1, uni)){
case 0xfb5:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf92: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xf9c: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xfa1: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xfa6: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xfab: 
switch (get_unicos(1, uni)){
case 0xfb7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xfb2: 
switch (get_unicos(1, uni)){
case 0xf80:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xfb3: 
switch (get_unicos(1, uni)){
case 0xf80:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2032: 
switch (get_unicos(1, uni)){
case 0x2032:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2035: 
switch (get_unicos(1, uni)){
case 0x2035:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x222b: 
switch (get_unicos(1, uni)){
case 0x222b:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x222e: 
switch (get_unicos(1, uni)){
case 0x222e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2add: 
switch (get_unicos(1, uni)){
case 0x338:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x307b: 
switch (get_unicos(1, uni)){
case 0x304b:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3088: 
switch (get_unicos(1, uni)){
case 0x308a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30ad: 
switch (get_unicos(1, uni)){
case 0x30ed:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30ae: 
switch (get_unicos(1, uni)){
case 0x30ac:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30b3: 
switch (get_unicos(1, uni)){
case 0x30b3:
*indexout = index + 2;
return 1;
case 0x30c8:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30c7: 
switch (get_unicos(1, uni)){
case 0x30b7:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30c8: 
switch (get_unicos(1, uni)){
case 0x30f3:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30c9: 
switch (get_unicos(1, uni)){
case 0x30eb:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30ca: 
switch (get_unicos(1, uni)){
case 0x30ce:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30d3: 
switch (get_unicos(1, uni)){
case 0x30eb:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30d4: 
switch (get_unicos(1, uni)){
case 0x30b3:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30da: 
switch (get_unicos(1, uni)){
case 0x30bd:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30db: 
switch (get_unicos(1, uni)){
case 0x30f3:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30df: 
switch (get_unicos(1, uni)){
case 0x30ea:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30e1: 
switch (get_unicos(1, uni)){
case 0x30ac:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30ea: 
switch (get_unicos(1, uni)){
case 0x30e9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x30ec: 
switch (get_unicos(1, uni)){
case 0x30e0:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5927: 
switch (get_unicos(1, uni)){
case 0x6b63:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x5e73: 
switch (get_unicos(1, uni)){
case 0x6210:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x660e: 
switch (get_unicos(1, uni)){
case 0x6cbb:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x662d: 
switch (get_unicos(1, uni)){
case 0x548c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xc8fc: 
switch (get_unicos(1, uni)){
case 0xc758:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0xcc38: 
switch (get_unicos(1, uni)){
case 0xace0:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1d157: 
switch (get_unicos(1, uni)){
case 0x1d165:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1d158: 
switch (get_unicos(1, uni)){
case 0x1d165:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1d1b9: 
switch (get_unicos(1, uni)){
case 0x1d165:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1d1ba: 
switch (get_unicos(1, uni)){
case 0x1d165:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
default:
*indexout = index +1;
return 0;
}
}
if (1 <= end - index){
switch (get_unicos(0, uni)){
case 0x20:
*indexout = index + 1;
return 1;
case 0x21:
*indexout = index + 1;
return 1;
case 0x22:
*indexout = index + 1;
return 1;
case 0x23:
*indexout = index + 1;
return 1;
case 0x24:
*indexout = index + 1;
return 1;
case 0x25:
*indexout = index + 1;
return 1;
case 0x26:
*indexout = index + 1;
return 1;
case 0x27:
*indexout = index + 1;
return 1;
case 0x28:
*indexout = index + 1;
return 1;
case 0x29:
*indexout = index + 1;
return 1;
case 0x2a:
*indexout = index + 1;
return 1;
case 0x2b:
*indexout = index + 1;
return 1;
case 0x2c:
*indexout = index + 1;
return 1;
case 0x2d:
*indexout = index + 1;
return 1;
case 0x2e:
*indexout = index + 1;
return 1;
case 0x2f:
*indexout = index + 1;
return 1;
case 0x30:
*indexout = index + 1;
return 1;
case 0x31:
*indexout = index + 1;
return 1;
case 0x32:
*indexout = index + 1;
return 1;
case 0x33:
*indexout = index + 1;
return 1;
case 0x34:
*indexout = index + 1;
return 1;
case 0x35:
*indexout = index + 1;
return 1;
case 0x36:
*indexout = index + 1;
return 1;
case 0x37:
*indexout = index + 1;
return 1;
case 0x38:
*indexout = index + 1;
return 1;
case 0x39:
*indexout = index + 1;
return 1;
case 0x3a:
*indexout = index + 1;
return 1;
case 0x3b:
*indexout = index + 1;
return 1;
case 0x3c:
*indexout = index + 1;
return 1;
case 0x3d:
*indexout = index + 1;
return 1;
case 0x3e:
*indexout = index + 1;
return 1;
case 0x3f:
*indexout = index + 1;
return 1;
case 0x40:
*indexout = index + 1;
return 1;
case 0x41:
*indexout = index + 1;
return 1;
case 0x42:
*indexout = index + 1;
return 1;
case 0x43:
*indexout = index + 1;
return 1;
case 0x44:
*indexout = index + 1;
return 1;
case 0x45:
*indexout = index + 1;
return 1;
case 0x46:
*indexout = index + 1;
return 1;
case 0x47:
*indexout = index + 1;
return 1;
case 0x48:
*indexout = index + 1;
return 1;
case 0x49:
*indexout = index + 1;
return 1;
case 0x4a:
*indexout = index + 1;
return 1;
case 0x4b:
*indexout = index + 1;
return 1;
case 0x4c:
*indexout = index + 1;
return 1;
case 0x4d:
*indexout = index + 1;
return 1;
case 0x4e:
*indexout = index + 1;
return 1;
case 0x4f:
*indexout = index + 1;
return 1;
case 0x50:
*indexout = index + 1;
return 1;
case 0x51:
*indexout = index + 1;
return 1;
case 0x52:
*indexout = index + 1;
return 1;
case 0x53:
*indexout = index + 1;
return 1;
case 0x54:
*indexout = index + 1;
return 1;
case 0x55:
*indexout = index + 1;
return 1;
case 0x56:
*indexout = index + 1;
return 1;
case 0x57:
*indexout = index + 1;
return 1;
case 0x58:
*indexout = index + 1;
return 1;
case 0x59:
*indexout = index + 1;
return 1;
case 0x5a:
*indexout = index + 1;
return 1;
case 0x5b:
*indexout = index + 1;
return 1;
case 0x5c:
*indexout = index + 1;
return 1;
case 0x5d:
*indexout = index + 1;
return 1;
case 0x5e:
*indexout = index + 1;
return 1;
case 0x5f:
*indexout = index + 1;
return 1;
case 0x60:
*indexout = index + 1;
return 1;
case 0x61:
*indexout = index + 1;
return 1;
case 0x62:
*indexout = index + 1;
return 1;
case 0x63:
*indexout = index + 1;
return 1;
case 0x64:
*indexout = index + 1;
return 1;
case 0x65:
*indexout = index + 1;
return 1;
case 0x66:
*indexout = index + 1;
return 1;
case 0x67:
*indexout = index + 1;
return 1;
case 0x68:
*indexout = index + 1;
return 1;
case 0x69:
*indexout = index + 1;
return 1;
case 0x6a:
*indexout = index + 1;
return 1;
case 0x6b:
*indexout = index + 1;
return 1;
case 0x6c:
*indexout = index + 1;
return 1;
case 0x6d:
*indexout = index + 1;
return 1;
case 0x6e:
*indexout = index + 1;
return 1;
case 0x6f:
*indexout = index + 1;
return 1;
case 0x70:
*indexout = index + 1;
return 1;
case 0x71:
*indexout = index + 1;
return 1;
case 0x72:
*indexout = index + 1;
return 1;
case 0x73:
*indexout = index + 1;
return 1;
case 0x74:
*indexout = index + 1;
return 1;
case 0x75:
*indexout = index + 1;
return 1;
case 0x76:
*indexout = index + 1;
return 1;
case 0x77:
*indexout = index + 1;
return 1;
case 0x78:
*indexout = index + 1;
return 1;
case 0x79:
*indexout = index + 1;
return 1;
case 0x7a:
*indexout = index + 1;
return 1;
case 0x7b:
*indexout = index + 1;
return 1;
case 0x7c:
*indexout = index + 1;
return 1;
case 0x7d:
*indexout = index + 1;
return 1;
case 0x7e:
*indexout = index + 1;
return 1;
case 0xa2:
*indexout = index + 1;
return 1;
case 0xa3:
*indexout = index + 1;
return 1;
case 0xa5:
*indexout = index + 1;
return 1;
case 0xa6:
*indexout = index + 1;
return 1;
case 0xac:
*indexout = index + 1;
return 1;
case 0xb7:
*indexout = index + 1;
return 1;
case 0xc0:
*indexout = index + 1;
return 1;
case 0xc1:
*indexout = index + 1;
return 1;
case 0xc2:
*indexout = index + 1;
return 1;
case 0xc3:
*indexout = index + 1;
return 1;
case 0xc4:
*indexout = index + 1;
return 1;
case 0xc5:
*indexout = index + 1;
return 1;
case 0xc6:
*indexout = index + 1;
return 1;
case 0xc7:
*indexout = index + 1;
return 1;
case 0xc8:
*indexout = index + 1;
return 1;
case 0xc9:
*indexout = index + 1;
return 1;
case 0xca:
*indexout = index + 1;
return 1;
case 0xcb:
*indexout = index + 1;
return 1;
case 0xcc:
*indexout = index + 1;
return 1;
case 0xcd:
*indexout = index + 1;
return 1;
case 0xce:
*indexout = index + 1;
return 1;
case 0xcf:
*indexout = index + 1;
return 1;
case 0xd1:
*indexout = index + 1;
return 1;
case 0xd2:
*indexout = index + 1;
return 1;
case 0xd3:
*indexout = index + 1;
return 1;
case 0xd4:
*indexout = index + 1;
return 1;
case 0xd5:
*indexout = index + 1;
return 1;
case 0xd6:
*indexout = index + 1;
return 1;
case 0xd9:
*indexout = index + 1;
return 1;
case 0xda:
*indexout = index + 1;
return 1;
case 0xdb:
*indexout = index + 1;
return 1;
case 0xdc:
*indexout = index + 1;
return 1;
case 0xdd:
*indexout = index + 1;
return 1;
case 0xe0:
*indexout = index + 1;
return 1;
case 0xe1:
*indexout = index + 1;
return 1;
case 0xe2:
*indexout = index + 1;
return 1;
case 0xe3:
*indexout = index + 1;
return 1;
case 0xe4:
*indexout = index + 1;
return 1;
case 0xe5:
*indexout = index + 1;
return 1;
case 0xe7:
*indexout = index + 1;
return 1;
case 0xe8:
*indexout = index + 1;
return 1;
case 0xe9:
*indexout = index + 1;
return 1;
case 0xea:
*indexout = index + 1;
return 1;
case 0xeb:
*indexout = index + 1;
return 1;
case 0xec:
*indexout = index + 1;
return 1;
case 0xed:
*indexout = index + 1;
return 1;
case 0xee:
*indexout = index + 1;
return 1;
case 0xef:
*indexout = index + 1;
return 1;
case 0xf0:
*indexout = index + 1;
return 1;
case 0xf1:
*indexout = index + 1;
return 1;
case 0xf2:
*indexout = index + 1;
return 1;
case 0xf3:
*indexout = index + 1;
return 1;
case 0xf4:
*indexout = index + 1;
return 1;
case 0xf5:
*indexout = index + 1;
return 1;
case 0xf6:
*indexout = index + 1;
return 1;
case 0xf9:
*indexout = index + 1;
return 1;
case 0xfa:
*indexout = index + 1;
return 1;
case 0xfb:
*indexout = index + 1;
return 1;
case 0xfc:
*indexout = index + 1;
return 1;
case 0xfd:
*indexout = index + 1;
return 1;
case 0xff:
*indexout = index + 1;
return 1;
case 0x100:
*indexout = index + 1;
return 1;
case 0x101:
*indexout = index + 1;
return 1;
case 0x102:
*indexout = index + 1;
return 1;
case 0x103:
*indexout = index + 1;
return 1;
case 0x104:
*indexout = index + 1;
return 1;
case 0x105:
*indexout = index + 1;
return 1;
case 0x106:
*indexout = index + 1;
return 1;
case 0x107:
*indexout = index + 1;
return 1;
case 0x108:
*indexout = index + 1;
return 1;
case 0x109:
*indexout = index + 1;
return 1;
case 0x10a:
*indexout = index + 1;
return 1;
case 0x10b:
*indexout = index + 1;
return 1;
case 0x10c:
*indexout = index + 1;
return 1;
case 0x10d:
*indexout = index + 1;
return 1;
case 0x10e:
*indexout = index + 1;
return 1;
case 0x10f:
*indexout = index + 1;
return 1;
case 0x112:
*indexout = index + 1;
return 1;
case 0x113:
*indexout = index + 1;
return 1;
case 0x114:
*indexout = index + 1;
return 1;
case 0x115:
*indexout = index + 1;
return 1;
case 0x116:
*indexout = index + 1;
return 1;
case 0x117:
*indexout = index + 1;
return 1;
case 0x118:
*indexout = index + 1;
return 1;
case 0x119:
*indexout = index + 1;
return 1;
case 0x11a:
*indexout = index + 1;
return 1;
case 0x11b:
*indexout = index + 1;
return 1;
case 0x11c:
*indexout = index + 1;
return 1;
case 0x11d:
*indexout = index + 1;
return 1;
case 0x11e:
*indexout = index + 1;
return 1;
case 0x11f:
*indexout = index + 1;
return 1;
case 0x120:
*indexout = index + 1;
return 1;
case 0x121:
*indexout = index + 1;
return 1;
case 0x122:
*indexout = index + 1;
return 1;
case 0x123:
*indexout = index + 1;
return 1;
case 0x124:
*indexout = index + 1;
return 1;
case 0x125:
*indexout = index + 1;
return 1;
case 0x126:
*indexout = index + 1;
return 1;
case 0x127:
*indexout = index + 1;
return 1;
case 0x128:
*indexout = index + 1;
return 1;
case 0x129:
*indexout = index + 1;
return 1;
case 0x12a:
*indexout = index + 1;
return 1;
case 0x12b:
*indexout = index + 1;
return 1;
case 0x12c:
*indexout = index + 1;
return 1;
case 0x12d:
*indexout = index + 1;
return 1;
case 0x12e:
*indexout = index + 1;
return 1;
case 0x12f:
*indexout = index + 1;
return 1;
case 0x130:
*indexout = index + 1;
return 1;
case 0x131:
*indexout = index + 1;
return 1;
case 0x134:
*indexout = index + 1;
return 1;
case 0x135:
*indexout = index + 1;
return 1;
case 0x136:
*indexout = index + 1;
return 1;
case 0x137:
*indexout = index + 1;
return 1;
case 0x139:
*indexout = index + 1;
return 1;
case 0x13a:
*indexout = index + 1;
return 1;
case 0x13b:
*indexout = index + 1;
return 1;
case 0x13c:
*indexout = index + 1;
return 1;
case 0x13d:
*indexout = index + 1;
return 1;
case 0x13e:
*indexout = index + 1;
return 1;
case 0x143:
*indexout = index + 1;
return 1;
case 0x144:
*indexout = index + 1;
return 1;
case 0x145:
*indexout = index + 1;
return 1;
case 0x146:
*indexout = index + 1;
return 1;
case 0x147:
*indexout = index + 1;
return 1;
case 0x148:
*indexout = index + 1;
return 1;
case 0x14b:
*indexout = index + 1;
return 1;
case 0x14c:
*indexout = index + 1;
return 1;
case 0x14d:
*indexout = index + 1;
return 1;
case 0x14e:
*indexout = index + 1;
return 1;
case 0x14f:
*indexout = index + 1;
return 1;
case 0x150:
*indexout = index + 1;
return 1;
case 0x151:
*indexout = index + 1;
return 1;
case 0x153:
*indexout = index + 1;
return 1;
case 0x154:
*indexout = index + 1;
return 1;
case 0x155:
*indexout = index + 1;
return 1;
case 0x156:
*indexout = index + 1;
return 1;
case 0x157:
*indexout = index + 1;
return 1;
case 0x158:
*indexout = index + 1;
return 1;
case 0x159:
*indexout = index + 1;
return 1;
case 0x15a:
*indexout = index + 1;
return 1;
case 0x15b:
*indexout = index + 1;
return 1;
case 0x15c:
*indexout = index + 1;
return 1;
case 0x15d:
*indexout = index + 1;
return 1;
case 0x15e:
*indexout = index + 1;
return 1;
case 0x15f:
*indexout = index + 1;
return 1;
case 0x160:
*indexout = index + 1;
return 1;
case 0x161:
*indexout = index + 1;
return 1;
case 0x162:
*indexout = index + 1;
return 1;
case 0x163:
*indexout = index + 1;
return 1;
case 0x164:
*indexout = index + 1;
return 1;
case 0x165:
*indexout = index + 1;
return 1;
case 0x168:
*indexout = index + 1;
return 1;
case 0x169:
*indexout = index + 1;
return 1;
case 0x16a:
*indexout = index + 1;
return 1;
case 0x16b:
*indexout = index + 1;
return 1;
case 0x16c:
*indexout = index + 1;
return 1;
case 0x16d:
*indexout = index + 1;
return 1;
case 0x16e:
*indexout = index + 1;
return 1;
case 0x16f:
*indexout = index + 1;
return 1;
case 0x170:
*indexout = index + 1;
return 1;
case 0x171:
*indexout = index + 1;
return 1;
case 0x172:
*indexout = index + 1;
return 1;
case 0x173:
*indexout = index + 1;
return 1;
case 0x174:
*indexout = index + 1;
return 1;
case 0x175:
*indexout = index + 1;
return 1;
case 0x176:
*indexout = index + 1;
return 1;
case 0x177:
*indexout = index + 1;
return 1;
case 0x178:
*indexout = index + 1;
return 1;
case 0x179:
*indexout = index + 1;
return 1;
case 0x17a:
*indexout = index + 1;
return 1;
case 0x17b:
*indexout = index + 1;
return 1;
case 0x17c:
*indexout = index + 1;
return 1;
case 0x17d:
*indexout = index + 1;
return 1;
case 0x17e:
*indexout = index + 1;
return 1;
case 0x18e:
*indexout = index + 1;
return 1;
case 0x190:
*indexout = index + 1;
return 1;
case 0x1a0:
*indexout = index + 1;
return 1;
case 0x1a1:
*indexout = index + 1;
return 1;
case 0x1ab:
*indexout = index + 1;
return 1;
case 0x1af:
*indexout = index + 1;
return 1;
case 0x1b0:
*indexout = index + 1;
return 1;
case 0x1cd:
*indexout = index + 1;
return 1;
case 0x1ce:
*indexout = index + 1;
return 1;
case 0x1cf:
*indexout = index + 1;
return 1;
case 0x1d0:
*indexout = index + 1;
return 1;
case 0x1d1:
*indexout = index + 1;
return 1;
case 0x1d2:
*indexout = index + 1;
return 1;
case 0x1d3:
*indexout = index + 1;
return 1;
case 0x1d4:
*indexout = index + 1;
return 1;
case 0x1d5:
*indexout = index + 1;
return 1;
case 0x1d6:
*indexout = index + 1;
return 1;
case 0x1d7:
*indexout = index + 1;
return 1;
case 0x1d8:
*indexout = index + 1;
return 1;
case 0x1d9:
*indexout = index + 1;
return 1;
case 0x1da:
*indexout = index + 1;
return 1;
case 0x1db:
*indexout = index + 1;
return 1;
case 0x1dc:
*indexout = index + 1;
return 1;
case 0x1de:
*indexout = index + 1;
return 1;
case 0x1df:
*indexout = index + 1;
return 1;
case 0x1e0:
*indexout = index + 1;
return 1;
case 0x1e1:
*indexout = index + 1;
return 1;
case 0x1e2:
*indexout = index + 1;
return 1;
case 0x1e3:
*indexout = index + 1;
return 1;
case 0x1e6:
*indexout = index + 1;
return 1;
case 0x1e7:
*indexout = index + 1;
return 1;
case 0x1e8:
*indexout = index + 1;
return 1;
case 0x1e9:
*indexout = index + 1;
return 1;
case 0x1ea:
*indexout = index + 1;
return 1;
case 0x1eb:
*indexout = index + 1;
return 1;
case 0x1ec:
*indexout = index + 1;
return 1;
case 0x1ed:
*indexout = index + 1;
return 1;
case 0x1ee:
*indexout = index + 1;
return 1;
case 0x1ef:
*indexout = index + 1;
return 1;
case 0x1f0:
*indexout = index + 1;
return 1;
case 0x1f4:
*indexout = index + 1;
return 1;
case 0x1f5:
*indexout = index + 1;
return 1;
case 0x1f8:
*indexout = index + 1;
return 1;
case 0x1f9:
*indexout = index + 1;
return 1;
case 0x1fa:
*indexout = index + 1;
return 1;
case 0x1fb:
*indexout = index + 1;
return 1;
case 0x1fc:
*indexout = index + 1;
return 1;
case 0x1fd:
*indexout = index + 1;
return 1;
case 0x1fe:
*indexout = index + 1;
return 1;
case 0x1ff:
*indexout = index + 1;
return 1;
case 0x200:
*indexout = index + 1;
return 1;
case 0x201:
*indexout = index + 1;
return 1;
case 0x202:
*indexout = index + 1;
return 1;
case 0x203:
*indexout = index + 1;
return 1;
case 0x204:
*indexout = index + 1;
return 1;
case 0x205:
*indexout = index + 1;
return 1;
case 0x206:
*indexout = index + 1;
return 1;
case 0x207:
*indexout = index + 1;
return 1;
case 0x208:
*indexout = index + 1;
return 1;
case 0x209:
*indexout = index + 1;
return 1;
case 0x20a:
*indexout = index + 1;
return 1;
case 0x20b:
*indexout = index + 1;
return 1;
case 0x20c:
*indexout = index + 1;
return 1;
case 0x20d:
*indexout = index + 1;
return 1;
case 0x20e:
*indexout = index + 1;
return 1;
case 0x20f:
*indexout = index + 1;
return 1;
case 0x210:
*indexout = index + 1;
return 1;
case 0x211:
*indexout = index + 1;
return 1;
case 0x212:
*indexout = index + 1;
return 1;
case 0x213:
*indexout = index + 1;
return 1;
case 0x214:
*indexout = index + 1;
return 1;
case 0x215:
*indexout = index + 1;
return 1;
case 0x216:
*indexout = index + 1;
return 1;
case 0x217:
*indexout = index + 1;
return 1;
case 0x218:
*indexout = index + 1;
return 1;
case 0x219:
*indexout = index + 1;
return 1;
case 0x21a:
*indexout = index + 1;
return 1;
case 0x21b:
*indexout = index + 1;
return 1;
case 0x21e:
*indexout = index + 1;
return 1;
case 0x21f:
*indexout = index + 1;
return 1;
case 0x222:
*indexout = index + 1;
return 1;
case 0x226:
*indexout = index + 1;
return 1;
case 0x227:
*indexout = index + 1;
return 1;
case 0x228:
*indexout = index + 1;
return 1;
case 0x229:
*indexout = index + 1;
return 1;
case 0x22a:
*indexout = index + 1;
return 1;
case 0x22b:
*indexout = index + 1;
return 1;
case 0x22c:
*indexout = index + 1;
return 1;
case 0x22d:
*indexout = index + 1;
return 1;
case 0x22e:
*indexout = index + 1;
return 1;
case 0x22f:
*indexout = index + 1;
return 1;
case 0x230:
*indexout = index + 1;
return 1;
case 0x231:
*indexout = index + 1;
return 1;
case 0x232:
*indexout = index + 1;
return 1;
case 0x233:
*indexout = index + 1;
return 1;
case 0x237:
*indexout = index + 1;
return 1;
case 0x250:
*indexout = index + 1;
return 1;
case 0x251:
*indexout = index + 1;
return 1;
case 0x252:
*indexout = index + 1;
return 1;
case 0x254:
*indexout = index + 1;
return 1;
case 0x255:
*indexout = index + 1;
return 1;
case 0x259:
*indexout = index + 1;
return 1;
case 0x25b:
*indexout = index + 1;
return 1;
case 0x25c:
*indexout = index + 1;
return 1;
case 0x25f:
*indexout = index + 1;
return 1;
case 0x261:
*indexout = index + 1;
return 1;
case 0x263:
*indexout = index + 1;
return 1;
case 0x265:
*indexout = index + 1;
return 1;
case 0x266:
*indexout = index + 1;
return 1;
case 0x268:
*indexout = index + 1;
return 1;
case 0x269:
*indexout = index + 1;
return 1;
case 0x26a:
*indexout = index + 1;
return 1;
case 0x26b:
*indexout = index + 1;
return 1;
case 0x26d:
*indexout = index + 1;
return 1;
case 0x26f:
*indexout = index + 1;
return 1;
case 0x270:
*indexout = index + 1;
return 1;
case 0x271:
*indexout = index + 1;
return 1;
case 0x272:
*indexout = index + 1;
return 1;
case 0x273:
*indexout = index + 1;
return 1;
case 0x274:
*indexout = index + 1;
return 1;
case 0x275:
*indexout = index + 1;
return 1;
case 0x278:
*indexout = index + 1;
return 1;
case 0x279:
*indexout = index + 1;
return 1;
case 0x27b:
*indexout = index + 1;
return 1;
case 0x281:
*indexout = index + 1;
return 1;
case 0x282:
*indexout = index + 1;
return 1;
case 0x283:
*indexout = index + 1;
return 1;
case 0x289:
*indexout = index + 1;
return 1;
case 0x28a:
*indexout = index + 1;
return 1;
case 0x28b:
*indexout = index + 1;
return 1;
case 0x28c:
*indexout = index + 1;
return 1;
case 0x290:
*indexout = index + 1;
return 1;
case 0x291:
*indexout = index + 1;
return 1;
case 0x292:
*indexout = index + 1;
return 1;
case 0x295:
*indexout = index + 1;
return 1;
case 0x29d:
*indexout = index + 1;
return 1;
case 0x29f:
*indexout = index + 1;
return 1;
case 0x2b9:
*indexout = index + 1;
return 1;
case 0x300:
*indexout = index + 1;
return 1;
case 0x301:
*indexout = index + 1;
return 1;
case 0x313:
*indexout = index + 1;
return 1;
case 0x386:
*indexout = index + 1;
return 1;
case 0x388:
*indexout = index + 1;
return 1;
case 0x389:
*indexout = index + 1;
return 1;
case 0x38a:
*indexout = index + 1;
return 1;
case 0x38c:
*indexout = index + 1;
return 1;
case 0x38e:
*indexout = index + 1;
return 1;
case 0x38f:
*indexout = index + 1;
return 1;
case 0x390:
*indexout = index + 1;
return 1;
case 0x391:
*indexout = index + 1;
return 1;
case 0x392:
*indexout = index + 1;
return 1;
case 0x393:
*indexout = index + 1;
return 1;
case 0x394:
*indexout = index + 1;
return 1;
case 0x395:
*indexout = index + 1;
return 1;
case 0x396:
*indexout = index + 1;
return 1;
case 0x397:
*indexout = index + 1;
return 1;
case 0x398:
*indexout = index + 1;
return 1;
case 0x399:
*indexout = index + 1;
return 1;
case 0x39a:
*indexout = index + 1;
return 1;
case 0x39b:
*indexout = index + 1;
return 1;
case 0x39c:
*indexout = index + 1;
return 1;
case 0x39d:
*indexout = index + 1;
return 1;
case 0x39e:
*indexout = index + 1;
return 1;
case 0x39f:
*indexout = index + 1;
return 1;
case 0x3a0:
*indexout = index + 1;
return 1;
case 0x3a1:
*indexout = index + 1;
return 1;
case 0x3a3:
*indexout = index + 1;
return 1;
case 0x3a4:
*indexout = index + 1;
return 1;
case 0x3a5:
*indexout = index + 1;
return 1;
case 0x3a6:
*indexout = index + 1;
return 1;
case 0x3a7:
*indexout = index + 1;
return 1;
case 0x3a8:
*indexout = index + 1;
return 1;
case 0x3a9:
*indexout = index + 1;
return 1;
case 0x3aa:
*indexout = index + 1;
return 1;
case 0x3ab:
*indexout = index + 1;
return 1;
case 0x3ac:
*indexout = index + 1;
return 1;
case 0x3ad:
*indexout = index + 1;
return 1;
case 0x3ae:
*indexout = index + 1;
return 1;
case 0x3af:
*indexout = index + 1;
return 1;
case 0x3b0:
*indexout = index + 1;
return 1;
case 0x3b1:
*indexout = index + 1;
return 1;
case 0x3b2:
*indexout = index + 1;
return 1;
case 0x3b3:
*indexout = index + 1;
return 1;
case 0x3b4:
*indexout = index + 1;
return 1;
case 0x3b5:
*indexout = index + 1;
return 1;
case 0x3b6:
*indexout = index + 1;
return 1;
case 0x3b7:
*indexout = index + 1;
return 1;
case 0x3b8:
*indexout = index + 1;
return 1;
case 0x3b9:
*indexout = index + 1;
return 1;
case 0x3ba:
*indexout = index + 1;
return 1;
case 0x3bb:
*indexout = index + 1;
return 1;
case 0x3bc:
*indexout = index + 1;
return 1;
case 0x3bd:
*indexout = index + 1;
return 1;
case 0x3be:
*indexout = index + 1;
return 1;
case 0x3bf:
*indexout = index + 1;
return 1;
case 0x3c0:
*indexout = index + 1;
return 1;
case 0x3c1:
*indexout = index + 1;
return 1;
case 0x3c2:
*indexout = index + 1;
return 1;
case 0x3c3:
*indexout = index + 1;
return 1;
case 0x3c4:
*indexout = index + 1;
return 1;
case 0x3c5:
*indexout = index + 1;
return 1;
case 0x3c6:
*indexout = index + 1;
return 1;
case 0x3c7:
*indexout = index + 1;
return 1;
case 0x3c8:
*indexout = index + 1;
return 1;
case 0x3c9:
*indexout = index + 1;
return 1;
case 0x3ca:
*indexout = index + 1;
return 1;
case 0x3cb:
*indexout = index + 1;
return 1;
case 0x3cc:
*indexout = index + 1;
return 1;
case 0x3cd:
*indexout = index + 1;
return 1;
case 0x3ce:
*indexout = index + 1;
return 1;
case 0x3dc:
*indexout = index + 1;
return 1;
case 0x3dd:
*indexout = index + 1;
return 1;
case 0x400:
*indexout = index + 1;
return 1;
case 0x401:
*indexout = index + 1;
return 1;
case 0x403:
*indexout = index + 1;
return 1;
case 0x407:
*indexout = index + 1;
return 1;
case 0x40c:
*indexout = index + 1;
return 1;
case 0x40d:
*indexout = index + 1;
return 1;
case 0x40e:
*indexout = index + 1;
return 1;
case 0x419:
*indexout = index + 1;
return 1;
case 0x439:
*indexout = index + 1;
return 1;
case 0x43d:
*indexout = index + 1;
return 1;
case 0x44a:
*indexout = index + 1;
return 1;
case 0x44c:
*indexout = index + 1;
return 1;
case 0x450:
*indexout = index + 1;
return 1;
case 0x451:
*indexout = index + 1;
return 1;
case 0x453:
*indexout = index + 1;
return 1;
case 0x457:
*indexout = index + 1;
return 1;
case 0x45c:
*indexout = index + 1;
return 1;
case 0x45d:
*indexout = index + 1;
return 1;
case 0x45e:
*indexout = index + 1;
return 1;
case 0x476:
*indexout = index + 1;
return 1;
case 0x477:
*indexout = index + 1;
return 1;
case 0x4c1:
*indexout = index + 1;
return 1;
case 0x4c2:
*indexout = index + 1;
return 1;
case 0x4d0:
*indexout = index + 1;
return 1;
case 0x4d1:
*indexout = index + 1;
return 1;
case 0x4d2:
*indexout = index + 1;
return 1;
case 0x4d3:
*indexout = index + 1;
return 1;
case 0x4d6:
*indexout = index + 1;
return 1;
case 0x4d7:
*indexout = index + 1;
return 1;
case 0x4da:
*indexout = index + 1;
return 1;
case 0x4db:
*indexout = index + 1;
return 1;
case 0x4dc:
*indexout = index + 1;
return 1;
case 0x4dd:
*indexout = index + 1;
return 1;
case 0x4de:
*indexout = index + 1;
return 1;
case 0x4df:
*indexout = index + 1;
return 1;
case 0x4e2:
*indexout = index + 1;
return 1;
case 0x4e3:
*indexout = index + 1;
return 1;
case 0x4e4:
*indexout = index + 1;
return 1;
case 0x4e5:
*indexout = index + 1;
return 1;
case 0x4e6:
*indexout = index + 1;
return 1;
case 0x4e7:
*indexout = index + 1;
return 1;
case 0x4ea:
*indexout = index + 1;
return 1;
case 0x4eb:
*indexout = index + 1;
return 1;
case 0x4ec:
*indexout = index + 1;
return 1;
case 0x4ed:
*indexout = index + 1;
return 1;
case 0x4ee:
*indexout = index + 1;
return 1;
case 0x4ef:
*indexout = index + 1;
return 1;
case 0x4f0:
*indexout = index + 1;
return 1;
case 0x4f1:
*indexout = index + 1;
return 1;
case 0x4f2:
*indexout = index + 1;
return 1;
case 0x4f3:
*indexout = index + 1;
return 1;
case 0x4f4:
*indexout = index + 1;
return 1;
case 0x4f5:
*indexout = index + 1;
return 1;
case 0x4f8:
*indexout = index + 1;
return 1;
case 0x4f9:
*indexout = index + 1;
return 1;
case 0x5d0:
*indexout = index + 1;
return 1;
case 0x5d1:
*indexout = index + 1;
return 1;
case 0x5d2:
*indexout = index + 1;
return 1;
case 0x5d3:
*indexout = index + 1;
return 1;
case 0x5d4:
*indexout = index + 1;
return 1;
case 0x5db:
*indexout = index + 1;
return 1;
case 0x5dc:
*indexout = index + 1;
return 1;
case 0x5dd:
*indexout = index + 1;
return 1;
case 0x5e2:
*indexout = index + 1;
return 1;
case 0x5e8:
*indexout = index + 1;
return 1;
case 0x5ea:
*indexout = index + 1;
return 1;
case 0x621:
*indexout = index + 1;
return 1;
case 0x622:
*indexout = index + 1;
return 1;
case 0x623:
*indexout = index + 1;
return 1;
case 0x624:
*indexout = index + 1;
return 1;
case 0x625:
*indexout = index + 1;
return 1;
case 0x626:
*indexout = index + 1;
return 1;
case 0x627:
*indexout = index + 1;
return 1;
case 0x628:
*indexout = index + 1;
return 1;
case 0x629:
*indexout = index + 1;
return 1;
case 0x62a:
*indexout = index + 1;
return 1;
case 0x62b:
*indexout = index + 1;
return 1;
case 0x62c:
*indexout = index + 1;
return 1;
case 0x62d:
*indexout = index + 1;
return 1;
case 0x62e:
*indexout = index + 1;
return 1;
case 0x62f:
*indexout = index + 1;
return 1;
case 0x630:
*indexout = index + 1;
return 1;
case 0x631:
*indexout = index + 1;
return 1;
case 0x632:
*indexout = index + 1;
return 1;
case 0x633:
*indexout = index + 1;
return 1;
case 0x634:
*indexout = index + 1;
return 1;
case 0x635:
*indexout = index + 1;
return 1;
case 0x636:
*indexout = index + 1;
return 1;
case 0x637:
*indexout = index + 1;
return 1;
case 0x638:
*indexout = index + 1;
return 1;
case 0x639:
*indexout = index + 1;
return 1;
case 0x63a:
*indexout = index + 1;
return 1;
case 0x641:
*indexout = index + 1;
return 1;
case 0x642:
*indexout = index + 1;
return 1;
case 0x643:
*indexout = index + 1;
return 1;
case 0x644:
*indexout = index + 1;
return 1;
case 0x645:
*indexout = index + 1;
return 1;
case 0x646:
*indexout = index + 1;
return 1;
case 0x647:
*indexout = index + 1;
return 1;
case 0x648:
*indexout = index + 1;
return 1;
case 0x649:
*indexout = index + 1;
return 1;
case 0x64a:
*indexout = index + 1;
return 1;
case 0x66e:
*indexout = index + 1;
return 1;
case 0x66f:
*indexout = index + 1;
return 1;
case 0x671:
*indexout = index + 1;
return 1;
case 0x679:
*indexout = index + 1;
return 1;
case 0x67a:
*indexout = index + 1;
return 1;
case 0x67b:
*indexout = index + 1;
return 1;
case 0x67e:
*indexout = index + 1;
return 1;
case 0x67f:
*indexout = index + 1;
return 1;
case 0x680:
*indexout = index + 1;
return 1;
case 0x683:
*indexout = index + 1;
return 1;
case 0x684:
*indexout = index + 1;
return 1;
case 0x686:
*indexout = index + 1;
return 1;
case 0x687:
*indexout = index + 1;
return 1;
case 0x688:
*indexout = index + 1;
return 1;
case 0x68c:
*indexout = index + 1;
return 1;
case 0x68d:
*indexout = index + 1;
return 1;
case 0x68e:
*indexout = index + 1;
return 1;
case 0x691:
*indexout = index + 1;
return 1;
case 0x698:
*indexout = index + 1;
return 1;
case 0x6a1:
*indexout = index + 1;
return 1;
case 0x6a4:
*indexout = index + 1;
return 1;
case 0x6a6:
*indexout = index + 1;
return 1;
case 0x6a9:
*indexout = index + 1;
return 1;
case 0x6ad:
*indexout = index + 1;
return 1;
case 0x6af:
*indexout = index + 1;
return 1;
case 0x6b1:
*indexout = index + 1;
return 1;
case 0x6b3:
*indexout = index + 1;
return 1;
case 0x6ba:
*indexout = index + 1;
return 1;
case 0x6bb:
*indexout = index + 1;
return 1;
case 0x6be:
*indexout = index + 1;
return 1;
case 0x6c0:
*indexout = index + 1;
return 1;
case 0x6c1:
*indexout = index + 1;
return 1;
case 0x6c2:
*indexout = index + 1;
return 1;
case 0x6c5:
*indexout = index + 1;
return 1;
case 0x6c6:
*indexout = index + 1;
return 1;
case 0x6c7:
*indexout = index + 1;
return 1;
case 0x6c8:
*indexout = index + 1;
return 1;
case 0x6c9:
*indexout = index + 1;
return 1;
case 0x6cb:
*indexout = index + 1;
return 1;
case 0x6cc:
*indexout = index + 1;
return 1;
case 0x6d0:
*indexout = index + 1;
return 1;
case 0x6d2:
*indexout = index + 1;
return 1;
case 0x6d3:
*indexout = index + 1;
return 1;
case 0x929:
*indexout = index + 1;
return 1;
case 0x931:
*indexout = index + 1;
return 1;
case 0x934:
*indexout = index + 1;
return 1;
case 0x9cb:
*indexout = index + 1;
return 1;
case 0x9cc:
*indexout = index + 1;
return 1;
case 0xb48:
*indexout = index + 1;
return 1;
case 0xb4b:
*indexout = index + 1;
return 1;
case 0xb4c:
*indexout = index + 1;
return 1;
case 0xb94:
*indexout = index + 1;
return 1;
case 0xbca:
*indexout = index + 1;
return 1;
case 0xbcb:
*indexout = index + 1;
return 1;
case 0xbcc:
*indexout = index + 1;
return 1;
case 0xc48:
*indexout = index + 1;
return 1;
case 0xcc0:
*indexout = index + 1;
return 1;
case 0xcc7:
*indexout = index + 1;
return 1;
case 0xcc8:
*indexout = index + 1;
return 1;
case 0xcca:
*indexout = index + 1;
return 1;
case 0xccb:
*indexout = index + 1;
return 1;
case 0xd4a:
*indexout = index + 1;
return 1;
case 0xd4b:
*indexout = index + 1;
return 1;
case 0xd4c:
*indexout = index + 1;
return 1;
case 0xdda:
*indexout = index + 1;
return 1;
case 0xddc:
*indexout = index + 1;
return 1;
case 0xddd:
*indexout = index + 1;
return 1;
case 0xdde:
*indexout = index + 1;
return 1;
case 0xf0b:
*indexout = index + 1;
return 1;
case 0x1026:
*indexout = index + 1;
return 1;
case 0x10dc:
*indexout = index + 1;
return 1;
case 0x1100:
*indexout = index + 1;
return 1;
case 0x1101:
*indexout = index + 1;
return 1;
case 0x1102:
*indexout = index + 1;
return 1;
case 0x1103:
*indexout = index + 1;
return 1;
case 0x1104:
*indexout = index + 1;
return 1;
case 0x1105:
*indexout = index + 1;
return 1;
case 0x1106:
*indexout = index + 1;
return 1;
case 0x1107:
*indexout = index + 1;
return 1;
case 0x1108:
*indexout = index + 1;
return 1;
case 0x1109:
*indexout = index + 1;
return 1;
case 0x110a:
*indexout = index + 1;
return 1;
case 0x110b:
*indexout = index + 1;
return 1;
case 0x110c:
*indexout = index + 1;
return 1;
case 0x110d:
*indexout = index + 1;
return 1;
case 0x110e:
*indexout = index + 1;
return 1;
case 0x110f:
*indexout = index + 1;
return 1;
case 0x1110:
*indexout = index + 1;
return 1;
case 0x1111:
*indexout = index + 1;
return 1;
case 0x1112:
*indexout = index + 1;
return 1;
case 0x1114:
*indexout = index + 1;
return 1;
case 0x1115:
*indexout = index + 1;
return 1;
case 0x111a:
*indexout = index + 1;
return 1;
case 0x111c:
*indexout = index + 1;
return 1;
case 0x111d:
*indexout = index + 1;
return 1;
case 0x111e:
*indexout = index + 1;
return 1;
case 0x1120:
*indexout = index + 1;
return 1;
case 0x1121:
*indexout = index + 1;
return 1;
case 0x1122:
*indexout = index + 1;
return 1;
case 0x1123:
*indexout = index + 1;
return 1;
case 0x1127:
*indexout = index + 1;
return 1;
case 0x1129:
*indexout = index + 1;
return 1;
case 0x112b:
*indexout = index + 1;
return 1;
case 0x112c:
*indexout = index + 1;
return 1;
case 0x112d:
*indexout = index + 1;
return 1;
case 0x112e:
*indexout = index + 1;
return 1;
case 0x112f:
*indexout = index + 1;
return 1;
case 0x1132:
*indexout = index + 1;
return 1;
case 0x1136:
*indexout = index + 1;
return 1;
case 0x1140:
*indexout = index + 1;
return 1;
case 0x1147:
*indexout = index + 1;
return 1;
case 0x114c:
*indexout = index + 1;
return 1;
case 0x1157:
*indexout = index + 1;
return 1;
case 0x1158:
*indexout = index + 1;
return 1;
case 0x1159:
*indexout = index + 1;
return 1;
case 0x1160:
*indexout = index + 1;
return 1;
case 0x1161:
*indexout = index + 1;
return 1;
case 0x1162:
*indexout = index + 1;
return 1;
case 0x1163:
*indexout = index + 1;
return 1;
case 0x1164:
*indexout = index + 1;
return 1;
case 0x1165:
*indexout = index + 1;
return 1;
case 0x1166:
*indexout = index + 1;
return 1;
case 0x1167:
*indexout = index + 1;
return 1;
case 0x1168:
*indexout = index + 1;
return 1;
case 0x1169:
*indexout = index + 1;
return 1;
case 0x116a:
*indexout = index + 1;
return 1;
case 0x116b:
*indexout = index + 1;
return 1;
case 0x116c:
*indexout = index + 1;
return 1;
case 0x116d:
*indexout = index + 1;
return 1;
case 0x116e:
*indexout = index + 1;
return 1;
case 0x116f:
*indexout = index + 1;
return 1;
case 0x1170:
*indexout = index + 1;
return 1;
case 0x1171:
*indexout = index + 1;
return 1;
case 0x1172:
*indexout = index + 1;
return 1;
case 0x1173:
*indexout = index + 1;
return 1;
case 0x1174:
*indexout = index + 1;
return 1;
case 0x1175:
*indexout = index + 1;
return 1;
case 0x1184:
*indexout = index + 1;
return 1;
case 0x1185:
*indexout = index + 1;
return 1;
case 0x1188:
*indexout = index + 1;
return 1;
case 0x1191:
*indexout = index + 1;
return 1;
case 0x1192:
*indexout = index + 1;
return 1;
case 0x1194:
*indexout = index + 1;
return 1;
case 0x119e:
*indexout = index + 1;
return 1;
case 0x11a1:
*indexout = index + 1;
return 1;
case 0x11aa:
*indexout = index + 1;
return 1;
case 0x11ac:
*indexout = index + 1;
return 1;
case 0x11ad:
*indexout = index + 1;
return 1;
case 0x11b0:
*indexout = index + 1;
return 1;
case 0x11b1:
*indexout = index + 1;
return 1;
case 0x11b2:
*indexout = index + 1;
return 1;
case 0x11b3:
*indexout = index + 1;
return 1;
case 0x11b4:
*indexout = index + 1;
return 1;
case 0x11b5:
*indexout = index + 1;
return 1;
case 0x11c7:
*indexout = index + 1;
return 1;
case 0x11c8:
*indexout = index + 1;
return 1;
case 0x11cc:
*indexout = index + 1;
return 1;
case 0x11ce:
*indexout = index + 1;
return 1;
case 0x11d3:
*indexout = index + 1;
return 1;
case 0x11d7:
*indexout = index + 1;
return 1;
case 0x11d9:
*indexout = index + 1;
return 1;
case 0x11dd:
*indexout = index + 1;
return 1;
case 0x11df:
*indexout = index + 1;
return 1;
case 0x11f1:
*indexout = index + 1;
return 1;
case 0x11f2:
*indexout = index + 1;
return 1;
case 0x1b06:
*indexout = index + 1;
return 1;
case 0x1b08:
*indexout = index + 1;
return 1;
case 0x1b0a:
*indexout = index + 1;
return 1;
case 0x1b0c:
*indexout = index + 1;
return 1;
case 0x1b0e:
*indexout = index + 1;
return 1;
case 0x1b12:
*indexout = index + 1;
return 1;
case 0x1b3b:
*indexout = index + 1;
return 1;
case 0x1b3d:
*indexout = index + 1;
return 1;
case 0x1b40:
*indexout = index + 1;
return 1;
case 0x1b41:
*indexout = index + 1;
return 1;
case 0x1b43:
*indexout = index + 1;
return 1;
case 0x1d02:
*indexout = index + 1;
return 1;
case 0x1d16:
*indexout = index + 1;
return 1;
case 0x1d17:
*indexout = index + 1;
return 1;
case 0x1d1c:
*indexout = index + 1;
return 1;
case 0x1d1d:
*indexout = index + 1;
return 1;
case 0x1d25:
*indexout = index + 1;
return 1;
case 0x1d7b:
*indexout = index + 1;
return 1;
case 0x1d85:
*indexout = index + 1;
return 1;
case 0x1e00:
*indexout = index + 1;
return 1;
case 0x1e01:
*indexout = index + 1;
return 1;
case 0x1e02:
*indexout = index + 1;
return 1;
case 0x1e03:
*indexout = index + 1;
return 1;
case 0x1e04:
*indexout = index + 1;
return 1;
case 0x1e05:
*indexout = index + 1;
return 1;
case 0x1e06:
*indexout = index + 1;
return 1;
case 0x1e07:
*indexout = index + 1;
return 1;
case 0x1e08:
*indexout = index + 1;
return 1;
case 0x1e09:
*indexout = index + 1;
return 1;
case 0x1e0a:
*indexout = index + 1;
return 1;
case 0x1e0b:
*indexout = index + 1;
return 1;
case 0x1e0c:
*indexout = index + 1;
return 1;
case 0x1e0d:
*indexout = index + 1;
return 1;
case 0x1e0e:
*indexout = index + 1;
return 1;
case 0x1e0f:
*indexout = index + 1;
return 1;
case 0x1e10:
*indexout = index + 1;
return 1;
case 0x1e11:
*indexout = index + 1;
return 1;
case 0x1e12:
*indexout = index + 1;
return 1;
case 0x1e13:
*indexout = index + 1;
return 1;
case 0x1e14:
*indexout = index + 1;
return 1;
case 0x1e15:
*indexout = index + 1;
return 1;
case 0x1e16:
*indexout = index + 1;
return 1;
case 0x1e17:
*indexout = index + 1;
return 1;
case 0x1e18:
*indexout = index + 1;
return 1;
case 0x1e19:
*indexout = index + 1;
return 1;
case 0x1e1a:
*indexout = index + 1;
return 1;
case 0x1e1b:
*indexout = index + 1;
return 1;
case 0x1e1c:
*indexout = index + 1;
return 1;
case 0x1e1d:
*indexout = index + 1;
return 1;
case 0x1e1e:
*indexout = index + 1;
return 1;
case 0x1e1f:
*indexout = index + 1;
return 1;
case 0x1e20:
*indexout = index + 1;
return 1;
case 0x1e21:
*indexout = index + 1;
return 1;
case 0x1e22:
*indexout = index + 1;
return 1;
case 0x1e23:
*indexout = index + 1;
return 1;
case 0x1e24:
*indexout = index + 1;
return 1;
case 0x1e25:
*indexout = index + 1;
return 1;
case 0x1e26:
*indexout = index + 1;
return 1;
case 0x1e27:
*indexout = index + 1;
return 1;
case 0x1e28:
*indexout = index + 1;
return 1;
case 0x1e29:
*indexout = index + 1;
return 1;
case 0x1e2a:
*indexout = index + 1;
return 1;
case 0x1e2b:
*indexout = index + 1;
return 1;
case 0x1e2c:
*indexout = index + 1;
return 1;
case 0x1e2d:
*indexout = index + 1;
return 1;
case 0x1e2e:
*indexout = index + 1;
return 1;
case 0x1e2f:
*indexout = index + 1;
return 1;
case 0x1e30:
*indexout = index + 1;
return 1;
case 0x1e31:
*indexout = index + 1;
return 1;
case 0x1e32:
*indexout = index + 1;
return 1;
case 0x1e33:
*indexout = index + 1;
return 1;
case 0x1e34:
*indexout = index + 1;
return 1;
case 0x1e35:
*indexout = index + 1;
return 1;
case 0x1e36:
*indexout = index + 1;
return 1;
case 0x1e37:
*indexout = index + 1;
return 1;
case 0x1e38:
*indexout = index + 1;
return 1;
case 0x1e39:
*indexout = index + 1;
return 1;
case 0x1e3a:
*indexout = index + 1;
return 1;
case 0x1e3b:
*indexout = index + 1;
return 1;
case 0x1e3c:
*indexout = index + 1;
return 1;
case 0x1e3d:
*indexout = index + 1;
return 1;
case 0x1e3e:
*indexout = index + 1;
return 1;
case 0x1e3f:
*indexout = index + 1;
return 1;
case 0x1e40:
*indexout = index + 1;
return 1;
case 0x1e41:
*indexout = index + 1;
return 1;
case 0x1e42:
*indexout = index + 1;
return 1;
case 0x1e43:
*indexout = index + 1;
return 1;
case 0x1e44:
*indexout = index + 1;
return 1;
case 0x1e45:
*indexout = index + 1;
return 1;
case 0x1e46:
*indexout = index + 1;
return 1;
case 0x1e47:
*indexout = index + 1;
return 1;
case 0x1e48:
*indexout = index + 1;
return 1;
case 0x1e49:
*indexout = index + 1;
return 1;
case 0x1e4a:
*indexout = index + 1;
return 1;
case 0x1e4b:
*indexout = index + 1;
return 1;
case 0x1e4c:
*indexout = index + 1;
return 1;
case 0x1e4d:
*indexout = index + 1;
return 1;
case 0x1e4e:
*indexout = index + 1;
return 1;
case 0x1e4f:
*indexout = index + 1;
return 1;
case 0x1e50:
*indexout = index + 1;
return 1;
case 0x1e51:
*indexout = index + 1;
return 1;
case 0x1e52:
*indexout = index + 1;
return 1;
case 0x1e53:
*indexout = index + 1;
return 1;
case 0x1e54:
*indexout = index + 1;
return 1;
case 0x1e55:
*indexout = index + 1;
return 1;
case 0x1e56:
*indexout = index + 1;
return 1;
case 0x1e57:
*indexout = index + 1;
return 1;
case 0x1e58:
*indexout = index + 1;
return 1;
case 0x1e59:
*indexout = index + 1;
return 1;
case 0x1e5a:
*indexout = index + 1;
return 1;
case 0x1e5b:
*indexout = index + 1;
return 1;
case 0x1e5c:
*indexout = index + 1;
return 1;
case 0x1e5d:
*indexout = index + 1;
return 1;
case 0x1e5e:
*indexout = index + 1;
return 1;
case 0x1e5f:
*indexout = index + 1;
return 1;
case 0x1e60:
*indexout = index + 1;
return 1;
case 0x1e61:
*indexout = index + 1;
return 1;
case 0x1e62:
*indexout = index + 1;
return 1;
case 0x1e63:
*indexout = index + 1;
return 1;
case 0x1e64:
*indexout = index + 1;
return 1;
case 0x1e65:
*indexout = index + 1;
return 1;
case 0x1e66:
*indexout = index + 1;
return 1;
case 0x1e67:
*indexout = index + 1;
return 1;
case 0x1e68:
*indexout = index + 1;
return 1;
case 0x1e69:
*indexout = index + 1;
return 1;
case 0x1e6a:
*indexout = index + 1;
return 1;
case 0x1e6b:
*indexout = index + 1;
return 1;
case 0x1e6c:
*indexout = index + 1;
return 1;
case 0x1e6d:
*indexout = index + 1;
return 1;
case 0x1e6e:
*indexout = index + 1;
return 1;
case 0x1e6f:
*indexout = index + 1;
return 1;
case 0x1e70:
*indexout = index + 1;
return 1;
case 0x1e71:
*indexout = index + 1;
return 1;
case 0x1e72:
*indexout = index + 1;
return 1;
case 0x1e73:
*indexout = index + 1;
return 1;
case 0x1e74:
*indexout = index + 1;
return 1;
case 0x1e75:
*indexout = index + 1;
return 1;
case 0x1e76:
*indexout = index + 1;
return 1;
case 0x1e77:
*indexout = index + 1;
return 1;
case 0x1e78:
*indexout = index + 1;
return 1;
case 0x1e79:
*indexout = index + 1;
return 1;
case 0x1e7a:
*indexout = index + 1;
return 1;
case 0x1e7b:
*indexout = index + 1;
return 1;
case 0x1e7c:
*indexout = index + 1;
return 1;
case 0x1e7d:
*indexout = index + 1;
return 1;
case 0x1e7e:
*indexout = index + 1;
return 1;
case 0x1e7f:
*indexout = index + 1;
return 1;
case 0x1e80:
*indexout = index + 1;
return 1;
case 0x1e81:
*indexout = index + 1;
return 1;
case 0x1e82:
*indexout = index + 1;
return 1;
case 0x1e83:
*indexout = index + 1;
return 1;
case 0x1e84:
*indexout = index + 1;
return 1;
case 0x1e85:
*indexout = index + 1;
return 1;
case 0x1e86:
*indexout = index + 1;
return 1;
case 0x1e87:
*indexout = index + 1;
return 1;
case 0x1e88:
*indexout = index + 1;
return 1;
case 0x1e89:
*indexout = index + 1;
return 1;
case 0x1e8a:
*indexout = index + 1;
return 1;
case 0x1e8b:
*indexout = index + 1;
return 1;
case 0x1e8c:
*indexout = index + 1;
return 1;
case 0x1e8d:
*indexout = index + 1;
return 1;
case 0x1e8e:
*indexout = index + 1;
return 1;
case 0x1e8f:
*indexout = index + 1;
return 1;
case 0x1e90:
*indexout = index + 1;
return 1;
case 0x1e91:
*indexout = index + 1;
return 1;
case 0x1e92:
*indexout = index + 1;
return 1;
case 0x1e93:
*indexout = index + 1;
return 1;
case 0x1e94:
*indexout = index + 1;
return 1;
case 0x1e95:
*indexout = index + 1;
return 1;
case 0x1e96:
*indexout = index + 1;
return 1;
case 0x1e97:
*indexout = index + 1;
return 1;
case 0x1e98:
*indexout = index + 1;
return 1;
case 0x1e99:
*indexout = index + 1;
return 1;
case 0x1ea0:
*indexout = index + 1;
return 1;
case 0x1ea1:
*indexout = index + 1;
return 1;
case 0x1ea2:
*indexout = index + 1;
return 1;
case 0x1ea3:
*indexout = index + 1;
return 1;
case 0x1ea4:
*indexout = index + 1;
return 1;
case 0x1ea5:
*indexout = index + 1;
return 1;
case 0x1ea6:
*indexout = index + 1;
return 1;
case 0x1ea7:
*indexout = index + 1;
return 1;
case 0x1ea8:
*indexout = index + 1;
return 1;
case 0x1ea9:
*indexout = index + 1;
return 1;
case 0x1eaa:
*indexout = index + 1;
return 1;
case 0x1eab:
*indexout = index + 1;
return 1;
case 0x1eac:
*indexout = index + 1;
return 1;
case 0x1ead:
*indexout = index + 1;
return 1;
case 0x1eae:
*indexout = index + 1;
return 1;
case 0x1eaf:
*indexout = index + 1;
return 1;
case 0x1eb0:
*indexout = index + 1;
return 1;
case 0x1eb1:
*indexout = index + 1;
return 1;
case 0x1eb2:
*indexout = index + 1;
return 1;
case 0x1eb3:
*indexout = index + 1;
return 1;
case 0x1eb4:
*indexout = index + 1;
return 1;
case 0x1eb5:
*indexout = index + 1;
return 1;
case 0x1eb6:
*indexout = index + 1;
return 1;
case 0x1eb7:
*indexout = index + 1;
return 1;
case 0x1eb8:
*indexout = index + 1;
return 1;
case 0x1eb9:
*indexout = index + 1;
return 1;
case 0x1eba:
*indexout = index + 1;
return 1;
case 0x1ebb:
*indexout = index + 1;
return 1;
case 0x1ebc:
*indexout = index + 1;
return 1;
case 0x1ebd:
*indexout = index + 1;
return 1;
case 0x1ebe:
*indexout = index + 1;
return 1;
case 0x1ebf:
*indexout = index + 1;
return 1;
case 0x1ec0:
*indexout = index + 1;
return 1;
case 0x1ec1:
*indexout = index + 1;
return 1;
case 0x1ec2:
*indexout = index + 1;
return 1;
case 0x1ec3:
*indexout = index + 1;
return 1;
case 0x1ec4:
*indexout = index + 1;
return 1;
case 0x1ec5:
*indexout = index + 1;
return 1;
case 0x1ec6:
*indexout = index + 1;
return 1;
case 0x1ec7:
*indexout = index + 1;
return 1;
case 0x1ec8:
*indexout = index + 1;
return 1;
case 0x1ec9:
*indexout = index + 1;
return 1;
case 0x1eca:
*indexout = index + 1;
return 1;
case 0x1ecb:
*indexout = index + 1;
return 1;
case 0x1ecc:
*indexout = index + 1;
return 1;
case 0x1ecd:
*indexout = index + 1;
return 1;
case 0x1ece:
*indexout = index + 1;
return 1;
case 0x1ecf:
*indexout = index + 1;
return 1;
case 0x1ed0:
*indexout = index + 1;
return 1;
case 0x1ed1:
*indexout = index + 1;
return 1;
case 0x1ed2:
*indexout = index + 1;
return 1;
case 0x1ed3:
*indexout = index + 1;
return 1;
case 0x1ed4:
*indexout = index + 1;
return 1;
case 0x1ed5:
*indexout = index + 1;
return 1;
case 0x1ed6:
*indexout = index + 1;
return 1;
case 0x1ed7:
*indexout = index + 1;
return 1;
case 0x1ed8:
*indexout = index + 1;
return 1;
case 0x1ed9:
*indexout = index + 1;
return 1;
case 0x1eda:
*indexout = index + 1;
return 1;
case 0x1edb:
*indexout = index + 1;
return 1;
case 0x1edc:
*indexout = index + 1;
return 1;
case 0x1edd:
*indexout = index + 1;
return 1;
case 0x1ede:
*indexout = index + 1;
return 1;
case 0x1edf:
*indexout = index + 1;
return 1;
case 0x1ee0:
*indexout = index + 1;
return 1;
case 0x1ee1:
*indexout = index + 1;
return 1;
case 0x1ee2:
*indexout = index + 1;
return 1;
case 0x1ee3:
*indexout = index + 1;
return 1;
case 0x1ee4:
*indexout = index + 1;
return 1;
case 0x1ee5:
*indexout = index + 1;
return 1;
case 0x1ee6:
*indexout = index + 1;
return 1;
case 0x1ee7:
*indexout = index + 1;
return 1;
case 0x1ee8:
*indexout = index + 1;
return 1;
case 0x1ee9:
*indexout = index + 1;
return 1;
case 0x1eea:
*indexout = index + 1;
return 1;
case 0x1eeb:
*indexout = index + 1;
return 1;
case 0x1eec:
*indexout = index + 1;
return 1;
case 0x1eed:
*indexout = index + 1;
return 1;
case 0x1eee:
*indexout = index + 1;
return 1;
case 0x1eef:
*indexout = index + 1;
return 1;
case 0x1ef0:
*indexout = index + 1;
return 1;
case 0x1ef1:
*indexout = index + 1;
return 1;
case 0x1ef2:
*indexout = index + 1;
return 1;
case 0x1ef3:
*indexout = index + 1;
return 1;
case 0x1ef4:
*indexout = index + 1;
return 1;
case 0x1ef5:
*indexout = index + 1;
return 1;
case 0x1ef6:
*indexout = index + 1;
return 1;
case 0x1ef7:
*indexout = index + 1;
return 1;
case 0x1ef8:
*indexout = index + 1;
return 1;
case 0x1ef9:
*indexout = index + 1;
return 1;
case 0x1f00:
*indexout = index + 1;
return 1;
case 0x1f01:
*indexout = index + 1;
return 1;
case 0x1f02:
*indexout = index + 1;
return 1;
case 0x1f03:
*indexout = index + 1;
return 1;
case 0x1f04:
*indexout = index + 1;
return 1;
case 0x1f05:
*indexout = index + 1;
return 1;
case 0x1f06:
*indexout = index + 1;
return 1;
case 0x1f07:
*indexout = index + 1;
return 1;
case 0x1f08:
*indexout = index + 1;
return 1;
case 0x1f09:
*indexout = index + 1;
return 1;
case 0x1f0a:
*indexout = index + 1;
return 1;
case 0x1f0b:
*indexout = index + 1;
return 1;
case 0x1f0c:
*indexout = index + 1;
return 1;
case 0x1f0d:
*indexout = index + 1;
return 1;
case 0x1f0e:
*indexout = index + 1;
return 1;
case 0x1f0f:
*indexout = index + 1;
return 1;
case 0x1f10:
*indexout = index + 1;
return 1;
case 0x1f11:
*indexout = index + 1;
return 1;
case 0x1f12:
*indexout = index + 1;
return 1;
case 0x1f13:
*indexout = index + 1;
return 1;
case 0x1f14:
*indexout = index + 1;
return 1;
case 0x1f15:
*indexout = index + 1;
return 1;
case 0x1f18:
*indexout = index + 1;
return 1;
case 0x1f19:
*indexout = index + 1;
return 1;
case 0x1f1a:
*indexout = index + 1;
return 1;
case 0x1f1b:
*indexout = index + 1;
return 1;
case 0x1f1c:
*indexout = index + 1;
return 1;
case 0x1f1d:
*indexout = index + 1;
return 1;
case 0x1f20:
*indexout = index + 1;
return 1;
case 0x1f21:
*indexout = index + 1;
return 1;
case 0x1f22:
*indexout = index + 1;
return 1;
case 0x1f23:
*indexout = index + 1;
return 1;
case 0x1f24:
*indexout = index + 1;
return 1;
case 0x1f25:
*indexout = index + 1;
return 1;
case 0x1f26:
*indexout = index + 1;
return 1;
case 0x1f27:
*indexout = index + 1;
return 1;
case 0x1f28:
*indexout = index + 1;
return 1;
case 0x1f29:
*indexout = index + 1;
return 1;
case 0x1f2a:
*indexout = index + 1;
return 1;
case 0x1f2b:
*indexout = index + 1;
return 1;
case 0x1f2c:
*indexout = index + 1;
return 1;
case 0x1f2d:
*indexout = index + 1;
return 1;
case 0x1f2e:
*indexout = index + 1;
return 1;
case 0x1f2f:
*indexout = index + 1;
return 1;
case 0x1f30:
*indexout = index + 1;
return 1;
case 0x1f31:
*indexout = index + 1;
return 1;
case 0x1f32:
*indexout = index + 1;
return 1;
case 0x1f33:
*indexout = index + 1;
return 1;
case 0x1f34:
*indexout = index + 1;
return 1;
case 0x1f35:
*indexout = index + 1;
return 1;
case 0x1f36:
*indexout = index + 1;
return 1;
case 0x1f37:
*indexout = index + 1;
return 1;
case 0x1f38:
*indexout = index + 1;
return 1;
case 0x1f39:
*indexout = index + 1;
return 1;
case 0x1f3a:
*indexout = index + 1;
return 1;
case 0x1f3b:
*indexout = index + 1;
return 1;
case 0x1f3c:
*indexout = index + 1;
return 1;
case 0x1f3d:
*indexout = index + 1;
return 1;
case 0x1f3e:
*indexout = index + 1;
return 1;
case 0x1f3f:
*indexout = index + 1;
return 1;
case 0x1f40:
*indexout = index + 1;
return 1;
case 0x1f41:
*indexout = index + 1;
return 1;
case 0x1f42:
*indexout = index + 1;
return 1;
case 0x1f43:
*indexout = index + 1;
return 1;
case 0x1f44:
*indexout = index + 1;
return 1;
case 0x1f45:
*indexout = index + 1;
return 1;
case 0x1f48:
*indexout = index + 1;
return 1;
case 0x1f49:
*indexout = index + 1;
return 1;
case 0x1f4a:
*indexout = index + 1;
return 1;
case 0x1f4b:
*indexout = index + 1;
return 1;
case 0x1f4c:
*indexout = index + 1;
return 1;
case 0x1f4d:
*indexout = index + 1;
return 1;
case 0x1f50:
*indexout = index + 1;
return 1;
case 0x1f51:
*indexout = index + 1;
return 1;
case 0x1f52:
*indexout = index + 1;
return 1;
case 0x1f53:
*indexout = index + 1;
return 1;
case 0x1f54:
*indexout = index + 1;
return 1;
case 0x1f55:
*indexout = index + 1;
return 1;
case 0x1f56:
*indexout = index + 1;
return 1;
case 0x1f57:
*indexout = index + 1;
return 1;
case 0x1f59:
*indexout = index + 1;
return 1;
case 0x1f5b:
*indexout = index + 1;
return 1;
case 0x1f5d:
*indexout = index + 1;
return 1;
case 0x1f5f:
*indexout = index + 1;
return 1;
case 0x1f60:
*indexout = index + 1;
return 1;
case 0x1f61:
*indexout = index + 1;
return 1;
case 0x1f62:
*indexout = index + 1;
return 1;
case 0x1f63:
*indexout = index + 1;
return 1;
case 0x1f64:
*indexout = index + 1;
return 1;
case 0x1f65:
*indexout = index + 1;
return 1;
case 0x1f66:
*indexout = index + 1;
return 1;
case 0x1f67:
*indexout = index + 1;
return 1;
case 0x1f68:
*indexout = index + 1;
return 1;
case 0x1f69:
*indexout = index + 1;
return 1;
case 0x1f6a:
*indexout = index + 1;
return 1;
case 0x1f6b:
*indexout = index + 1;
return 1;
case 0x1f6c:
*indexout = index + 1;
return 1;
case 0x1f6d:
*indexout = index + 1;
return 1;
case 0x1f6e:
*indexout = index + 1;
return 1;
case 0x1f6f:
*indexout = index + 1;
return 1;
case 0x1f70:
*indexout = index + 1;
return 1;
case 0x1f72:
*indexout = index + 1;
return 1;
case 0x1f74:
*indexout = index + 1;
return 1;
case 0x1f76:
*indexout = index + 1;
return 1;
case 0x1f78:
*indexout = index + 1;
return 1;
case 0x1f7a:
*indexout = index + 1;
return 1;
case 0x1f7c:
*indexout = index + 1;
return 1;
case 0x1f80:
*indexout = index + 1;
return 1;
case 0x1f81:
*indexout = index + 1;
return 1;
case 0x1f82:
*indexout = index + 1;
return 1;
case 0x1f83:
*indexout = index + 1;
return 1;
case 0x1f84:
*indexout = index + 1;
return 1;
case 0x1f85:
*indexout = index + 1;
return 1;
case 0x1f86:
*indexout = index + 1;
return 1;
case 0x1f87:
*indexout = index + 1;
return 1;
case 0x1f88:
*indexout = index + 1;
return 1;
case 0x1f89:
*indexout = index + 1;
return 1;
case 0x1f8a:
*indexout = index + 1;
return 1;
case 0x1f8b:
*indexout = index + 1;
return 1;
case 0x1f8c:
*indexout = index + 1;
return 1;
case 0x1f8d:
*indexout = index + 1;
return 1;
case 0x1f8e:
*indexout = index + 1;
return 1;
case 0x1f8f:
*indexout = index + 1;
return 1;
case 0x1f90:
*indexout = index + 1;
return 1;
case 0x1f91:
*indexout = index + 1;
return 1;
case 0x1f92:
*indexout = index + 1;
return 1;
case 0x1f93:
*indexout = index + 1;
return 1;
case 0x1f94:
*indexout = index + 1;
return 1;
case 0x1f95:
*indexout = index + 1;
return 1;
case 0x1f96:
*indexout = index + 1;
return 1;
case 0x1f97:
*indexout = index + 1;
return 1;
case 0x1f98:
*indexout = index + 1;
return 1;
case 0x1f99:
*indexout = index + 1;
return 1;
case 0x1f9a:
*indexout = index + 1;
return 1;
case 0x1f9b:
*indexout = index + 1;
return 1;
case 0x1f9c:
*indexout = index + 1;
return 1;
case 0x1f9d:
*indexout = index + 1;
return 1;
case 0x1f9e:
*indexout = index + 1;
return 1;
case 0x1f9f:
*indexout = index + 1;
return 1;
case 0x1fa0:
*indexout = index + 1;
return 1;
case 0x1fa1:
*indexout = index + 1;
return 1;
case 0x1fa2:
*indexout = index + 1;
return 1;
case 0x1fa3:
*indexout = index + 1;
return 1;
case 0x1fa4:
*indexout = index + 1;
return 1;
case 0x1fa5:
*indexout = index + 1;
return 1;
case 0x1fa6:
*indexout = index + 1;
return 1;
case 0x1fa7:
*indexout = index + 1;
return 1;
case 0x1fa8:
*indexout = index + 1;
return 1;
case 0x1fa9:
*indexout = index + 1;
return 1;
case 0x1faa:
*indexout = index + 1;
return 1;
case 0x1fab:
*indexout = index + 1;
return 1;
case 0x1fac:
*indexout = index + 1;
return 1;
case 0x1fad:
*indexout = index + 1;
return 1;
case 0x1fae:
*indexout = index + 1;
return 1;
case 0x1faf:
*indexout = index + 1;
return 1;
case 0x1fb0:
*indexout = index + 1;
return 1;
case 0x1fb1:
*indexout = index + 1;
return 1;
case 0x1fb2:
*indexout = index + 1;
return 1;
case 0x1fb3:
*indexout = index + 1;
return 1;
case 0x1fb4:
*indexout = index + 1;
return 1;
case 0x1fb6:
*indexout = index + 1;
return 1;
case 0x1fb7:
*indexout = index + 1;
return 1;
case 0x1fb8:
*indexout = index + 1;
return 1;
case 0x1fb9:
*indexout = index + 1;
return 1;
case 0x1fba:
*indexout = index + 1;
return 1;
case 0x1fbc:
*indexout = index + 1;
return 1;
case 0x1fc2:
*indexout = index + 1;
return 1;
case 0x1fc3:
*indexout = index + 1;
return 1;
case 0x1fc4:
*indexout = index + 1;
return 1;
case 0x1fc6:
*indexout = index + 1;
return 1;
case 0x1fc7:
*indexout = index + 1;
return 1;
case 0x1fc8:
*indexout = index + 1;
return 1;
case 0x1fca:
*indexout = index + 1;
return 1;
case 0x1fcc:
*indexout = index + 1;
return 1;
case 0x1fd0:
*indexout = index + 1;
return 1;
case 0x1fd1:
*indexout = index + 1;
return 1;
case 0x1fd2:
*indexout = index + 1;
return 1;
case 0x1fd6:
*indexout = index + 1;
return 1;
case 0x1fd7:
*indexout = index + 1;
return 1;
case 0x1fd8:
*indexout = index + 1;
return 1;
case 0x1fd9:
*indexout = index + 1;
return 1;
case 0x1fda:
*indexout = index + 1;
return 1;
case 0x1fe0:
*indexout = index + 1;
return 1;
case 0x1fe1:
*indexout = index + 1;
return 1;
case 0x1fe2:
*indexout = index + 1;
return 1;
case 0x1fe4:
*indexout = index + 1;
return 1;
case 0x1fe5:
*indexout = index + 1;
return 1;
case 0x1fe6:
*indexout = index + 1;
return 1;
case 0x1fe7:
*indexout = index + 1;
return 1;
case 0x1fe8:
*indexout = index + 1;
return 1;
case 0x1fe9:
*indexout = index + 1;
return 1;
case 0x1fea:
*indexout = index + 1;
return 1;
case 0x1fec:
*indexout = index + 1;
return 1;
case 0x1ff2:
*indexout = index + 1;
return 1;
case 0x1ff3:
*indexout = index + 1;
return 1;
case 0x1ff4:
*indexout = index + 1;
return 1;
case 0x1ff6:
*indexout = index + 1;
return 1;
case 0x1ff7:
*indexout = index + 1;
return 1;
case 0x1ff8:
*indexout = index + 1;
return 1;
case 0x1ffa:
*indexout = index + 1;
return 1;
case 0x1ffc:
*indexout = index + 1;
return 1;
case 0x2010:
*indexout = index + 1;
return 1;
case 0x2013:
*indexout = index + 1;
return 1;
case 0x2014:
*indexout = index + 1;
return 1;
case 0x20a9:
*indexout = index + 1;
return 1;
case 0x2190:
*indexout = index + 1;
return 1;
case 0x2191:
*indexout = index + 1;
return 1;
case 0x2192:
*indexout = index + 1;
return 1;
case 0x2193:
*indexout = index + 1;
return 1;
case 0x219a:
*indexout = index + 1;
return 1;
case 0x219b:
*indexout = index + 1;
return 1;
case 0x21ae:
*indexout = index + 1;
return 1;
case 0x21cd:
*indexout = index + 1;
return 1;
case 0x21ce:
*indexout = index + 1;
return 1;
case 0x21cf:
*indexout = index + 1;
return 1;
case 0x2202:
*indexout = index + 1;
return 1;
case 0x2204:
*indexout = index + 1;
return 1;
case 0x2207:
*indexout = index + 1;
return 1;
case 0x2209:
*indexout = index + 1;
return 1;
case 0x220c:
*indexout = index + 1;
return 1;
case 0x2211:
*indexout = index + 1;
return 1;
case 0x2212:
*indexout = index + 1;
return 1;
case 0x2224:
*indexout = index + 1;
return 1;
case 0x2226:
*indexout = index + 1;
return 1;
case 0x2241:
*indexout = index + 1;
return 1;
case 0x2244:
*indexout = index + 1;
return 1;
case 0x2247:
*indexout = index + 1;
return 1;
case 0x2249:
*indexout = index + 1;
return 1;
case 0x2260:
*indexout = index + 1;
return 1;
case 0x2262:
*indexout = index + 1;
return 1;
case 0x226d:
*indexout = index + 1;
return 1;
case 0x226e:
*indexout = index + 1;
return 1;
case 0x226f:
*indexout = index + 1;
return 1;
case 0x2270:
*indexout = index + 1;
return 1;
case 0x2271:
*indexout = index + 1;
return 1;
case 0x2274:
*indexout = index + 1;
return 1;
case 0x2275:
*indexout = index + 1;
return 1;
case 0x2278:
*indexout = index + 1;
return 1;
case 0x2279:
*indexout = index + 1;
return 1;
case 0x2280:
*indexout = index + 1;
return 1;
case 0x2281:
*indexout = index + 1;
return 1;
case 0x2284:
*indexout = index + 1;
return 1;
case 0x2285:
*indexout = index + 1;
return 1;
case 0x2288:
*indexout = index + 1;
return 1;
case 0x2289:
*indexout = index + 1;
return 1;
case 0x22ac:
*indexout = index + 1;
return 1;
case 0x22ad:
*indexout = index + 1;
return 1;
case 0x22ae:
*indexout = index + 1;
return 1;
case 0x22af:
*indexout = index + 1;
return 1;
case 0x22e0:
*indexout = index + 1;
return 1;
case 0x22e1:
*indexout = index + 1;
return 1;
case 0x22e2:
*indexout = index + 1;
return 1;
case 0x22e3:
*indexout = index + 1;
return 1;
case 0x22ea:
*indexout = index + 1;
return 1;
case 0x22eb:
*indexout = index + 1;
return 1;
case 0x22ec:
*indexout = index + 1;
return 1;
case 0x22ed:
*indexout = index + 1;
return 1;
case 0x2502:
*indexout = index + 1;
return 1;
case 0x25a0:
*indexout = index + 1;
return 1;
case 0x25cb:
*indexout = index + 1;
return 1;
case 0x2985:
*indexout = index + 1;
return 1;
case 0x2986:
*indexout = index + 1;
return 1;
case 0x2d61:
*indexout = index + 1;
return 1;
case 0x3001:
*indexout = index + 1;
return 1;
case 0x3002:
*indexout = index + 1;
return 1;
case 0x3008:
*indexout = index + 1;
return 1;
case 0x3009:
*indexout = index + 1;
return 1;
case 0x300a:
*indexout = index + 1;
return 1;
case 0x300b:
*indexout = index + 1;
return 1;
case 0x300c:
*indexout = index + 1;
return 1;
case 0x300d:
*indexout = index + 1;
return 1;
case 0x300e:
*indexout = index + 1;
return 1;
case 0x300f:
*indexout = index + 1;
return 1;
case 0x3010:
*indexout = index + 1;
return 1;
case 0x3011:
*indexout = index + 1;
return 1;
case 0x3012:
*indexout = index + 1;
return 1;
case 0x3014:
*indexout = index + 1;
return 1;
case 0x3015:
*indexout = index + 1;
return 1;
case 0x3016:
*indexout = index + 1;
return 1;
case 0x3017:
*indexout = index + 1;
return 1;
case 0x304c:
*indexout = index + 1;
return 1;
case 0x304e:
*indexout = index + 1;
return 1;
case 0x3050:
*indexout = index + 1;
return 1;
case 0x3052:
*indexout = index + 1;
return 1;
case 0x3054:
*indexout = index + 1;
return 1;
case 0x3056:
*indexout = index + 1;
return 1;
case 0x3058:
*indexout = index + 1;
return 1;
case 0x305a:
*indexout = index + 1;
return 1;
case 0x305c:
*indexout = index + 1;
return 1;
case 0x305e:
*indexout = index + 1;
return 1;
case 0x3060:
*indexout = index + 1;
return 1;
case 0x3062:
*indexout = index + 1;
return 1;
case 0x3065:
*indexout = index + 1;
return 1;
case 0x3067:
*indexout = index + 1;
return 1;
case 0x3069:
*indexout = index + 1;
return 1;
case 0x3070:
*indexout = index + 1;
return 1;
case 0x3071:
*indexout = index + 1;
return 1;
case 0x3073:
*indexout = index + 1;
return 1;
case 0x3074:
*indexout = index + 1;
return 1;
case 0x3076:
*indexout = index + 1;
return 1;
case 0x3077:
*indexout = index + 1;
return 1;
case 0x3079:
*indexout = index + 1;
return 1;
case 0x307a:
*indexout = index + 1;
return 1;
case 0x307c:
*indexout = index + 1;
return 1;
case 0x307d:
*indexout = index + 1;
return 1;
case 0x3094:
*indexout = index + 1;
return 1;
case 0x3099:
*indexout = index + 1;
return 1;
case 0x309a:
*indexout = index + 1;
return 1;
case 0x309e:
*indexout = index + 1;
return 1;
case 0x30a1:
*indexout = index + 1;
return 1;
case 0x30a2:
*indexout = index + 1;
return 1;
case 0x30a3:
*indexout = index + 1;
return 1;
case 0x30a4:
*indexout = index + 1;
return 1;
case 0x30a5:
*indexout = index + 1;
return 1;
case 0x30a6:
*indexout = index + 1;
return 1;
case 0x30a7:
*indexout = index + 1;
return 1;
case 0x30a8:
*indexout = index + 1;
return 1;
case 0x30a9:
*indexout = index + 1;
return 1;
case 0x30aa:
*indexout = index + 1;
return 1;
case 0x30ab:
*indexout = index + 1;
return 1;
case 0x30ac:
*indexout = index + 1;
return 1;
case 0x30ad:
*indexout = index + 1;
return 1;
case 0x30ae:
*indexout = index + 1;
return 1;
case 0x30af:
*indexout = index + 1;
return 1;
case 0x30b0:
*indexout = index + 1;
return 1;
case 0x30b1:
*indexout = index + 1;
return 1;
case 0x30b2:
*indexout = index + 1;
return 1;
case 0x30b3:
*indexout = index + 1;
return 1;
case 0x30b4:
*indexout = index + 1;
return 1;
case 0x30b5:
*indexout = index + 1;
return 1;
case 0x30b6:
*indexout = index + 1;
return 1;
case 0x30b7:
*indexout = index + 1;
return 1;
case 0x30b8:
*indexout = index + 1;
return 1;
case 0x30b9:
*indexout = index + 1;
return 1;
case 0x30ba:
*indexout = index + 1;
return 1;
case 0x30bb:
*indexout = index + 1;
return 1;
case 0x30bc:
*indexout = index + 1;
return 1;
case 0x30bd:
*indexout = index + 1;
return 1;
case 0x30be:
*indexout = index + 1;
return 1;
case 0x30bf:
*indexout = index + 1;
return 1;
case 0x30c0:
*indexout = index + 1;
return 1;
case 0x30c1:
*indexout = index + 1;
return 1;
case 0x30c2:
*indexout = index + 1;
return 1;
case 0x30c3:
*indexout = index + 1;
return 1;
case 0x30c4:
*indexout = index + 1;
return 1;
case 0x30c5:
*indexout = index + 1;
return 1;
case 0x30c6:
*indexout = index + 1;
return 1;
case 0x30c7:
*indexout = index + 1;
return 1;
case 0x30c8:
*indexout = index + 1;
return 1;
case 0x30c9:
*indexout = index + 1;
return 1;
case 0x30ca:
*indexout = index + 1;
return 1;
case 0x30cb:
*indexout = index + 1;
return 1;
case 0x30cc:
*indexout = index + 1;
return 1;
case 0x30cd:
*indexout = index + 1;
return 1;
case 0x30ce:
*indexout = index + 1;
return 1;
case 0x30cf:
*indexout = index + 1;
return 1;
case 0x30d0:
*indexout = index + 1;
return 1;
case 0x30d1:
*indexout = index + 1;
return 1;
case 0x30d2:
*indexout = index + 1;
return 1;
case 0x30d3:
*indexout = index + 1;
return 1;
case 0x30d4:
*indexout = index + 1;
return 1;
case 0x30d5:
*indexout = index + 1;
return 1;
case 0x30d6:
*indexout = index + 1;
return 1;
case 0x30d7:
*indexout = index + 1;
return 1;
case 0x30d8:
*indexout = index + 1;
return 1;
case 0x30d9:
*indexout = index + 1;
return 1;
case 0x30da:
*indexout = index + 1;
return 1;
case 0x30db:
*indexout = index + 1;
return 1;
case 0x30dc:
*indexout = index + 1;
return 1;
case 0x30dd:
*indexout = index + 1;
return 1;
case 0x30de:
*indexout = index + 1;
return 1;
case 0x30df:
*indexout = index + 1;
return 1;
case 0x30e0:
*indexout = index + 1;
return 1;
case 0x30e1:
*indexout = index + 1;
return 1;
case 0x30e2:
*indexout = index + 1;
return 1;
case 0x30e3:
*indexout = index + 1;
return 1;
case 0x30e4:
*indexout = index + 1;
return 1;
case 0x30e5:
*indexout = index + 1;
return 1;
case 0x30e6:
*indexout = index + 1;
return 1;
case 0x30e7:
*indexout = index + 1;
return 1;
case 0x30e8:
*indexout = index + 1;
return 1;
case 0x30e9:
*indexout = index + 1;
return 1;
case 0x30ea:
*indexout = index + 1;
return 1;
case 0x30eb:
*indexout = index + 1;
return 1;
case 0x30ec:
*indexout = index + 1;
return 1;
case 0x30ed:
*indexout = index + 1;
return 1;
case 0x30ef:
*indexout = index + 1;
return 1;
case 0x30f0:
*indexout = index + 1;
return 1;
case 0x30f1:
*indexout = index + 1;
return 1;
case 0x30f2:
*indexout = index + 1;
return 1;
case 0x30f3:
*indexout = index + 1;
return 1;
case 0x30f4:
*indexout = index + 1;
return 1;
case 0x30f7:
*indexout = index + 1;
return 1;
case 0x30f8:
*indexout = index + 1;
return 1;
case 0x30f9:
*indexout = index + 1;
return 1;
case 0x30fa:
*indexout = index + 1;
return 1;
case 0x30fb:
*indexout = index + 1;
return 1;
case 0x30fc:
*indexout = index + 1;
return 1;
case 0x30fe:
*indexout = index + 1;
return 1;
case 0x349e:
*indexout = index + 1;
return 1;
case 0x34b9:
*indexout = index + 1;
return 1;
case 0x34bb:
*indexout = index + 1;
return 1;
case 0x34df:
*indexout = index + 1;
return 1;
case 0x3515:
*indexout = index + 1;
return 1;
case 0x36ee:
*indexout = index + 1;
return 1;
case 0x36fc:
*indexout = index + 1;
return 1;
case 0x3781:
*indexout = index + 1;
return 1;
case 0x382f:
*indexout = index + 1;
return 1;
case 0x3862:
*indexout = index + 1;
return 1;
case 0x387c:
*indexout = index + 1;
return 1;
case 0x38c7:
*indexout = index + 1;
return 1;
case 0x38e3:
*indexout = index + 1;
return 1;
case 0x391c:
*indexout = index + 1;
return 1;
case 0x393a:
*indexout = index + 1;
return 1;
case 0x3a2e:
*indexout = index + 1;
return 1;
case 0x3a6c:
*indexout = index + 1;
return 1;
case 0x3ae4:
*indexout = index + 1;
return 1;
case 0x3b08:
*indexout = index + 1;
return 1;
case 0x3b19:
*indexout = index + 1;
return 1;
case 0x3b49:
*indexout = index + 1;
return 1;
case 0x3b9d:
*indexout = index + 1;
return 1;
case 0x3c18:
*indexout = index + 1;
return 1;
case 0x3c4e:
*indexout = index + 1;
return 1;
case 0x3d33:
*indexout = index + 1;
return 1;
case 0x3d96:
*indexout = index + 1;
return 1;
case 0x3eac:
*indexout = index + 1;
return 1;
case 0x3eb8:
*indexout = index + 1;
return 1;
case 0x3f1b:
*indexout = index + 1;
return 1;
case 0x3ffc:
*indexout = index + 1;
return 1;
case 0x4008:
*indexout = index + 1;
return 1;
case 0x4018:
*indexout = index + 1;
return 1;
case 0x4039:
*indexout = index + 1;
return 1;
case 0x4046:
*indexout = index + 1;
return 1;
case 0x4096:
*indexout = index + 1;
return 1;
case 0x40e3:
*indexout = index + 1;
return 1;
case 0x412f:
*indexout = index + 1;
return 1;
case 0x4202:
*indexout = index + 1;
return 1;
case 0x4227:
*indexout = index + 1;
return 1;
case 0x42a0:
*indexout = index + 1;
return 1;
case 0x4301:
*indexout = index + 1;
return 1;
case 0x4334:
*indexout = index + 1;
return 1;
case 0x4359:
*indexout = index + 1;
return 1;
case 0x43d5:
*indexout = index + 1;
return 1;
case 0x43d9:
*indexout = index + 1;
return 1;
case 0x440b:
*indexout = index + 1;
return 1;
case 0x446b:
*indexout = index + 1;
return 1;
case 0x452b:
*indexout = index + 1;
return 1;
case 0x455d:
*indexout = index + 1;
return 1;
case 0x4561:
*indexout = index + 1;
return 1;
case 0x456b:
*indexout = index + 1;
return 1;
case 0x45d7:
*indexout = index + 1;
return 1;
case 0x45f9:
*indexout = index + 1;
return 1;
case 0x4635:
*indexout = index + 1;
return 1;
case 0x46be:
*indexout = index + 1;
return 1;
case 0x46c7:
*indexout = index + 1;
return 1;
case 0x4995:
*indexout = index + 1;
return 1;
case 0x49e6:
*indexout = index + 1;
return 1;
case 0x4a6e:
*indexout = index + 1;
return 1;
case 0x4a76:
*indexout = index + 1;
return 1;
case 0x4ab2:
*indexout = index + 1;
return 1;
case 0x4b33:
*indexout = index + 1;
return 1;
case 0x4bce:
*indexout = index + 1;
return 1;
case 0x4cce:
*indexout = index + 1;
return 1;
case 0x4ced:
*indexout = index + 1;
return 1;
case 0x4cf8:
*indexout = index + 1;
return 1;
case 0x4d56:
*indexout = index + 1;
return 1;
case 0x4e00:
*indexout = index + 1;
return 1;
case 0x4e01:
*indexout = index + 1;
return 1;
case 0x4e03:
*indexout = index + 1;
return 1;
case 0x4e09:
*indexout = index + 1;
return 1;
case 0x4e0a:
*indexout = index + 1;
return 1;
case 0x4e0b:
*indexout = index + 1;
return 1;
case 0x4e0d:
*indexout = index + 1;
return 1;
case 0x4e19:
*indexout = index + 1;
return 1;
case 0x4e26:
*indexout = index + 1;
return 1;
case 0x4e28:
*indexout = index + 1;
return 1;
case 0x4e2d:
*indexout = index + 1;
return 1;
case 0x4e32:
*indexout = index + 1;
return 1;
case 0x4e36:
*indexout = index + 1;
return 1;
case 0x4e38:
*indexout = index + 1;
return 1;
case 0x4e39:
*indexout = index + 1;
return 1;
case 0x4e3d:
*indexout = index + 1;
return 1;
case 0x4e3f:
*indexout = index + 1;
return 1;
case 0x4e41:
*indexout = index + 1;
return 1;
case 0x4e59:
*indexout = index + 1;
return 1;
case 0x4e5d:
*indexout = index + 1;
return 1;
case 0x4e82:
*indexout = index + 1;
return 1;
case 0x4e85:
*indexout = index + 1;
return 1;
case 0x4e86:
*indexout = index + 1;
return 1;
case 0x4e8c:
*indexout = index + 1;
return 1;
case 0x4e94:
*indexout = index + 1;
return 1;
case 0x4ea0:
*indexout = index + 1;
return 1;
case 0x4ea4:
*indexout = index + 1;
return 1;
case 0x4eae:
*indexout = index + 1;
return 1;
case 0x4eba:
*indexout = index + 1;
return 1;
case 0x4ec0:
*indexout = index + 1;
return 1;
case 0x4ecc:
*indexout = index + 1;
return 1;
case 0x4ee4:
*indexout = index + 1;
return 1;
case 0x4f01:
*indexout = index + 1;
return 1;
case 0x4f11:
*indexout = index + 1;
return 1;
case 0x4f60:
*indexout = index + 1;
return 1;
case 0x4f80:
*indexout = index + 1;
return 1;
case 0x4f86:
*indexout = index + 1;
return 1;
case 0x4f8b:
*indexout = index + 1;
return 1;
case 0x4fae:
*indexout = index + 1;
return 1;
case 0x4fbb:
*indexout = index + 1;
return 1;
case 0x4fbf:
*indexout = index + 1;
return 1;
case 0x5002:
*indexout = index + 1;
return 1;
case 0x502b:
*indexout = index + 1;
return 1;
case 0x507a:
*indexout = index + 1;
return 1;
case 0x5099:
*indexout = index + 1;
return 1;
case 0x50cf:
*indexout = index + 1;
return 1;
case 0x50da:
*indexout = index + 1;
return 1;
case 0x50e7:
*indexout = index + 1;
return 1;
case 0x512a:
*indexout = index + 1;
return 1;
case 0x513f:
*indexout = index + 1;
return 1;
case 0x5140:
*indexout = index + 1;
return 1;
case 0x5145:
*indexout = index + 1;
return 1;
case 0x514d:
*indexout = index + 1;
return 1;
case 0x5154:
*indexout = index + 1;
return 1;
case 0x5164:
*indexout = index + 1;
return 1;
case 0x5165:
*indexout = index + 1;
return 1;
case 0x5167:
*indexout = index + 1;
return 1;
case 0x5168:
*indexout = index + 1;
return 1;
case 0x5169:
*indexout = index + 1;
return 1;
case 0x516b:
*indexout = index + 1;
return 1;
case 0x516d:
*indexout = index + 1;
return 1;
case 0x5177:
*indexout = index + 1;
return 1;
case 0x5180:
*indexout = index + 1;
return 1;
case 0x5182:
*indexout = index + 1;
return 1;
case 0x518d:
*indexout = index + 1;
return 1;
case 0x5192:
*indexout = index + 1;
return 1;
case 0x5195:
*indexout = index + 1;
return 1;
case 0x5196:
*indexout = index + 1;
return 1;
case 0x5197:
*indexout = index + 1;
return 1;
case 0x5199:
*indexout = index + 1;
return 1;
case 0x51a4:
*indexout = index + 1;
return 1;
case 0x51ab:
*indexout = index + 1;
return 1;
case 0x51ac:
*indexout = index + 1;
return 1;
case 0x51b5:
*indexout = index + 1;
return 1;
case 0x51b7:
*indexout = index + 1;
return 1;
case 0x51c9:
*indexout = index + 1;
return 1;
case 0x51cc:
*indexout = index + 1;
return 1;
case 0x51dc:
*indexout = index + 1;
return 1;
case 0x51de:
*indexout = index + 1;
return 1;
case 0x51e0:
*indexout = index + 1;
return 1;
case 0x51f5:
*indexout = index + 1;
return 1;
case 0x5200:
*indexout = index + 1;
return 1;
case 0x5203:
*indexout = index + 1;
return 1;
case 0x5207:
*indexout = index + 1;
return 1;
case 0x5217:
*indexout = index + 1;
return 1;
case 0x521d:
*indexout = index + 1;
return 1;
case 0x5229:
*indexout = index + 1;
return 1;
case 0x523a:
*indexout = index + 1;
return 1;
case 0x523b:
*indexout = index + 1;
return 1;
case 0x5246:
*indexout = index + 1;
return 1;
case 0x524d:
*indexout = index + 1;
return 1;
case 0x5272:
*indexout = index + 1;
return 1;
case 0x5277:
*indexout = index + 1;
return 1;
case 0x5289:
*indexout = index + 1;
return 1;
case 0x529b:
*indexout = index + 1;
return 1;
case 0x52a3:
*indexout = index + 1;
return 1;
case 0x52b3:
*indexout = index + 1;
return 1;
case 0x52b4:
*indexout = index + 1;
return 1;
case 0x52c7:
*indexout = index + 1;
return 1;
case 0x52c9:
*indexout = index + 1;
return 1;
case 0x52d2:
*indexout = index + 1;
return 1;
case 0x52de:
*indexout = index + 1;
return 1;
case 0x52e4:
*indexout = index + 1;
return 1;
case 0x52f5:
*indexout = index + 1;
return 1;
case 0x52f9:
*indexout = index + 1;
return 1;
case 0x52fa:
*indexout = index + 1;
return 1;
case 0x5305:
*indexout = index + 1;
return 1;
case 0x5306:
*indexout = index + 1;
return 1;
case 0x5315:
*indexout = index + 1;
return 1;
case 0x5317:
*indexout = index + 1;
return 1;
case 0x531a:
*indexout = index + 1;
return 1;
case 0x5338:
*indexout = index + 1;
return 1;
case 0x533b:
*indexout = index + 1;
return 1;
case 0x533f:
*indexout = index + 1;
return 1;
case 0x5341:
*indexout = index + 1;
return 1;
case 0x5344:
*indexout = index + 1;
return 1;
case 0x5345:
*indexout = index + 1;
return 1;
case 0x5349:
*indexout = index + 1;
return 1;
case 0x5351:
*indexout = index + 1;
return 1;
case 0x5354:
*indexout = index + 1;
return 1;
case 0x535a:
*indexout = index + 1;
return 1;
case 0x535c:
*indexout = index + 1;
return 1;
case 0x5369:
*indexout = index + 1;
return 1;
case 0x5370:
*indexout = index + 1;
return 1;
case 0x5373:
*indexout = index + 1;
return 1;
case 0x5375:
*indexout = index + 1;
return 1;
case 0x537d:
*indexout = index + 1;
return 1;
case 0x537f:
*indexout = index + 1;
return 1;
case 0x5382:
*indexout = index + 1;
return 1;
case 0x53b6:
*indexout = index + 1;
return 1;
case 0x53c3:
*indexout = index + 1;
return 1;
case 0x53c8:
*indexout = index + 1;
return 1;
case 0x53ca:
*indexout = index + 1;
return 1;
case 0x53cc:
*indexout = index + 1;
return 1;
case 0x53df:
*indexout = index + 1;
return 1;
case 0x53e3:
*indexout = index + 1;
return 1;
case 0x53e5:
*indexout = index + 1;
return 1;
case 0x53eb:
*indexout = index + 1;
return 1;
case 0x53ef:
*indexout = index + 1;
return 1;
case 0x53f1:
*indexout = index + 1;
return 1;
case 0x53f3:
*indexout = index + 1;
return 1;
case 0x5406:
*indexout = index + 1;
return 1;
case 0x5408:
*indexout = index + 1;
return 1;
case 0x540d:
*indexout = index + 1;
return 1;
case 0x540f:
*indexout = index + 1;
return 1;
case 0x541d:
*indexout = index + 1;
return 1;
case 0x5438:
*indexout = index + 1;
return 1;
case 0x5439:
*indexout = index + 1;
return 1;
case 0x5442:
*indexout = index + 1;
return 1;
case 0x5448:
*indexout = index + 1;
return 1;
case 0x5468:
*indexout = index + 1;
return 1;
case 0x549e:
*indexout = index + 1;
return 1;
case 0x54a2:
*indexout = index + 1;
return 1;
case 0x54bd:
*indexout = index + 1;
return 1;
case 0x54f6:
*indexout = index + 1;
return 1;
case 0x5510:
*indexout = index + 1;
return 1;
case 0x554f:
*indexout = index + 1;
return 1;
case 0x5553:
*indexout = index + 1;
return 1;
case 0x5555:
*indexout = index + 1;
return 1;
case 0x5563:
*indexout = index + 1;
return 1;
case 0x5584:
*indexout = index + 1;
return 1;
case 0x5587:
*indexout = index + 1;
return 1;
case 0x5599:
*indexout = index + 1;
return 1;
case 0x559d:
*indexout = index + 1;
return 1;
case 0x55ab:
*indexout = index + 1;
return 1;
case 0x55b3:
*indexout = index + 1;
return 1;
case 0x55b6:
*indexout = index + 1;
return 1;
case 0x55c0:
*indexout = index + 1;
return 1;
case 0x55c2:
*indexout = index + 1;
return 1;
case 0x55e2:
*indexout = index + 1;
return 1;
case 0x5606:
*indexout = index + 1;
return 1;
case 0x5651:
*indexout = index + 1;
return 1;
case 0x5668:
*indexout = index + 1;
return 1;
case 0x5674:
*indexout = index + 1;
return 1;
case 0x56d7:
*indexout = index + 1;
return 1;
case 0x56db:
*indexout = index + 1;
return 1;
case 0x56f9:
*indexout = index + 1;
return 1;
case 0x5716:
*indexout = index + 1;
return 1;
case 0x5717:
*indexout = index + 1;
return 1;
case 0x571f:
*indexout = index + 1;
return 1;
case 0x5730:
*indexout = index + 1;
return 1;
case 0x578b:
*indexout = index + 1;
return 1;
case 0x57ce:
*indexout = index + 1;
return 1;
case 0x57f4:
*indexout = index + 1;
return 1;
case 0x580d:
*indexout = index + 1;
return 1;
case 0x5831:
*indexout = index + 1;
return 1;
case 0x5832:
*indexout = index + 1;
return 1;
case 0x5840:
*indexout = index + 1;
return 1;
case 0x585a:
*indexout = index + 1;
return 1;
case 0x585e:
*indexout = index + 1;
return 1;
case 0x58a8:
*indexout = index + 1;
return 1;
case 0x58ac:
*indexout = index + 1;
return 1;
case 0x58b3:
*indexout = index + 1;
return 1;
case 0x58d8:
*indexout = index + 1;
return 1;
case 0x58df:
*indexout = index + 1;
return 1;
case 0x58eb:
*indexout = index + 1;
return 1;
case 0x58ee:
*indexout = index + 1;
return 1;
case 0x58f0:
*indexout = index + 1;
return 1;
case 0x58f2:
*indexout = index + 1;
return 1;
case 0x58f7:
*indexout = index + 1;
return 1;
case 0x5902:
*indexout = index + 1;
return 1;
case 0x5906:
*indexout = index + 1;
return 1;
case 0x590a:
*indexout = index + 1;
return 1;
case 0x5915:
*indexout = index + 1;
return 1;
case 0x591a:
*indexout = index + 1;
return 1;
case 0x591c:
*indexout = index + 1;
return 1;
case 0x5922:
*indexout = index + 1;
return 1;
case 0x5927:
*indexout = index + 1;
return 1;
case 0x5929:
*indexout = index + 1;
return 1;
case 0x5944:
*indexout = index + 1;
return 1;
case 0x5948:
*indexout = index + 1;
return 1;
case 0x5951:
*indexout = index + 1;
return 1;
case 0x5954:
*indexout = index + 1;
return 1;
case 0x5962:
*indexout = index + 1;
return 1;
case 0x5973:
*indexout = index + 1;
return 1;
case 0x59d8:
*indexout = index + 1;
return 1;
case 0x59ec:
*indexout = index + 1;
return 1;
case 0x5a1b:
*indexout = index + 1;
return 1;
case 0x5a27:
*indexout = index + 1;
return 1;
case 0x5a62:
*indexout = index + 1;
return 1;
case 0x5a66:
*indexout = index + 1;
return 1;
case 0x5ab5:
*indexout = index + 1;
return 1;
case 0x5b08:
*indexout = index + 1;
return 1;
case 0x5b28:
*indexout = index + 1;
return 1;
case 0x5b3e:
*indexout = index + 1;
return 1;
case 0x5b50:
*indexout = index + 1;
return 1;
case 0x5b57:
*indexout = index + 1;
return 1;
case 0x5b66:
*indexout = index + 1;
return 1;
case 0x5b80:
*indexout = index + 1;
return 1;
case 0x5b85:
*indexout = index + 1;
return 1;
case 0x5b97:
*indexout = index + 1;
return 1;
case 0x5bc3:
*indexout = index + 1;
return 1;
case 0x5bd8:
*indexout = index + 1;
return 1;
case 0x5be7:
*indexout = index + 1;
return 1;
case 0x5bee:
*indexout = index + 1;
return 1;
case 0x5bf3:
*indexout = index + 1;
return 1;
case 0x5bf8:
*indexout = index + 1;
return 1;
case 0x5bff:
*indexout = index + 1;
return 1;
case 0x5c06:
*indexout = index + 1;
return 1;
case 0x5c0f:
*indexout = index + 1;
return 1;
case 0x5c22:
*indexout = index + 1;
return 1;
case 0x5c38:
*indexout = index + 1;
return 1;
case 0x5c3f:
*indexout = index + 1;
return 1;
case 0x5c60:
*indexout = index + 1;
return 1;
case 0x5c62:
*indexout = index + 1;
return 1;
case 0x5c64:
*indexout = index + 1;
return 1;
case 0x5c65:
*indexout = index + 1;
return 1;
case 0x5c6e:
*indexout = index + 1;
return 1;
case 0x5c71:
*indexout = index + 1;
return 1;
case 0x5c8d:
*indexout = index + 1;
return 1;
case 0x5cc0:
*indexout = index + 1;
return 1;
case 0x5d19:
*indexout = index + 1;
return 1;
case 0x5d43:
*indexout = index + 1;
return 1;
case 0x5d50:
*indexout = index + 1;
return 1;
case 0x5d6b:
*indexout = index + 1;
return 1;
case 0x5d6e:
*indexout = index + 1;
return 1;
case 0x5d7c:
*indexout = index + 1;
return 1;
case 0x5db2:
*indexout = index + 1;
return 1;
case 0x5dba:
*indexout = index + 1;
return 1;
case 0x5ddb:
*indexout = index + 1;
return 1;
case 0x5de1:
*indexout = index + 1;
return 1;
case 0x5de2:
*indexout = index + 1;
return 1;
case 0x5de5:
*indexout = index + 1;
return 1;
case 0x5de6:
*indexout = index + 1;
return 1;
case 0x5df1:
*indexout = index + 1;
return 1;
case 0x5dfd:
*indexout = index + 1;
return 1;
case 0x5dfe:
*indexout = index + 1;
return 1;
case 0x5e28:
*indexout = index + 1;
return 1;
case 0x5e3d:
*indexout = index + 1;
return 1;
case 0x5e69:
*indexout = index + 1;
return 1;
case 0x5e72:
*indexout = index + 1;
return 1;
case 0x5e74:
*indexout = index + 1;
return 1;
case 0x5e7a:
*indexout = index + 1;
return 1;
case 0x5e7c:
*indexout = index + 1;
return 1;
case 0x5e7f:
*indexout = index + 1;
return 1;
case 0x5ea6:
*indexout = index + 1;
return 1;
case 0x5eb0:
*indexout = index + 1;
return 1;
case 0x5eb3:
*indexout = index + 1;
return 1;
case 0x5eb6:
*indexout = index + 1;
return 1;
case 0x5ec9:
*indexout = index + 1;
return 1;
case 0x5eca:
*indexout = index + 1;
return 1;
case 0x5ed2:
*indexout = index + 1;
return 1;
case 0x5ed3:
*indexout = index + 1;
return 1;
case 0x5ed9:
*indexout = index + 1;
return 1;
case 0x5eec:
*indexout = index + 1;
return 1;
case 0x5ef4:
*indexout = index + 1;
return 1;
case 0x5efe:
*indexout = index + 1;
return 1;
case 0x5f04:
*indexout = index + 1;
return 1;
case 0x5f0b:
*indexout = index + 1;
return 1;
case 0x5f13:
*indexout = index + 1;
return 1;
case 0x5f22:
*indexout = index + 1;
return 1;
case 0x5f50:
*indexout = index + 1;
return 1;
case 0x5f53:
*indexout = index + 1;
return 1;
case 0x5f61:
*indexout = index + 1;
return 1;
case 0x5f62:
*indexout = index + 1;
return 1;
case 0x5f69:
*indexout = index + 1;
return 1;
case 0x5f6b:
*indexout = index + 1;
return 1;
case 0x5f73:
*indexout = index + 1;
return 1;
case 0x5f8b:
*indexout = index + 1;
return 1;
case 0x5f8c:
*indexout = index + 1;
return 1;
case 0x5f97:
*indexout = index + 1;
return 1;
case 0x5f9a:
*indexout = index + 1;
return 1;
case 0x5fa9:
*indexout = index + 1;
return 1;
case 0x5fad:
*indexout = index + 1;
return 1;
case 0x5fc3:
*indexout = index + 1;
return 1;
case 0x5fcd:
*indexout = index + 1;
return 1;
case 0x5fd7:
*indexout = index + 1;
return 1;
case 0x5ff5:
*indexout = index + 1;
return 1;
case 0x5ff9:
*indexout = index + 1;
return 1;
case 0x6012:
*indexout = index + 1;
return 1;
case 0x601c:
*indexout = index + 1;
return 1;
case 0x6075:
*indexout = index + 1;
return 1;
case 0x6081:
*indexout = index + 1;
return 1;
case 0x6094:
*indexout = index + 1;
return 1;
case 0x60c7:
*indexout = index + 1;
return 1;
case 0x60d8:
*indexout = index + 1;
return 1;
case 0x60e1:
*indexout = index + 1;
return 1;
case 0x6108:
*indexout = index + 1;
return 1;
case 0x6144:
*indexout = index + 1;
return 1;
case 0x6148:
*indexout = index + 1;
return 1;
case 0x614c:
*indexout = index + 1;
return 1;
case 0x614e:
*indexout = index + 1;
return 1;
case 0x6160:
*indexout = index + 1;
return 1;
case 0x6168:
*indexout = index + 1;
return 1;
case 0x617a:
*indexout = index + 1;
return 1;
case 0x618e:
*indexout = index + 1;
return 1;
case 0x6190:
*indexout = index + 1;
return 1;
case 0x61a4:
*indexout = index + 1;
return 1;
case 0x61af:
*indexout = index + 1;
return 1;
case 0x61b2:
*indexout = index + 1;
return 1;
case 0x61de:
*indexout = index + 1;
return 1;
case 0x61f2:
*indexout = index + 1;
return 1;
case 0x61f6:
*indexout = index + 1;
return 1;
case 0x6200:
*indexout = index + 1;
return 1;
case 0x6208:
*indexout = index + 1;
return 1;
case 0x6210:
*indexout = index + 1;
return 1;
case 0x621b:
*indexout = index + 1;
return 1;
case 0x622e:
*indexout = index + 1;
return 1;
case 0x6234:
*indexout = index + 1;
return 1;
case 0x6236:
*indexout = index + 1;
return 1;
case 0x624b:
*indexout = index + 1;
return 1;
case 0x6253:
*indexout = index + 1;
return 1;
case 0x625d:
*indexout = index + 1;
return 1;
case 0x6295:
*indexout = index + 1;
return 1;
case 0x62b1:
*indexout = index + 1;
return 1;
case 0x62c9:
*indexout = index + 1;
return 1;
case 0x62cf:
*indexout = index + 1;
return 1;
case 0x62d3:
*indexout = index + 1;
return 1;
case 0x62d4:
*indexout = index + 1;
return 1;
case 0x62fc:
*indexout = index + 1;
return 1;
case 0x62fe:
*indexout = index + 1;
return 1;
case 0x6307:
*indexout = index + 1;
return 1;
case 0x633d:
*indexout = index + 1;
return 1;
case 0x6350:
*indexout = index + 1;
return 1;
case 0x6355:
*indexout = index + 1;
return 1;
case 0x6368:
*indexout = index + 1;
return 1;
case 0x637b:
*indexout = index + 1;
return 1;
case 0x6383:
*indexout = index + 1;
return 1;
case 0x63a0:
*indexout = index + 1;
return 1;
case 0x63a9:
*indexout = index + 1;
return 1;
case 0x63c4:
*indexout = index + 1;
return 1;
case 0x63c5:
*indexout = index + 1;
return 1;
case 0x63e4:
*indexout = index + 1;
return 1;
case 0x641c:
*indexout = index + 1;
return 1;
case 0x6422:
*indexout = index + 1;
return 1;
case 0x6452:
*indexout = index + 1;
return 1;
case 0x6469:
*indexout = index + 1;
return 1;
case 0x6477:
*indexout = index + 1;
return 1;
case 0x647e:
*indexout = index + 1;
return 1;
case 0x649a:
*indexout = index + 1;
return 1;
case 0x649d:
*indexout = index + 1;
return 1;
case 0x64c4:
*indexout = index + 1;
return 1;
case 0x652f:
*indexout = index + 1;
return 1;
case 0x6534:
*indexout = index + 1;
return 1;
case 0x654f:
*indexout = index + 1;
return 1;
case 0x6556:
*indexout = index + 1;
return 1;
case 0x656c:
*indexout = index + 1;
return 1;
case 0x6578:
*indexout = index + 1;
return 1;
case 0x6587:
*indexout = index + 1;
return 1;
case 0x6597:
*indexout = index + 1;
return 1;
case 0x6599:
*indexout = index + 1;
return 1;
case 0x65a4:
*indexout = index + 1;
return 1;
case 0x65b0:
*indexout = index + 1;
return 1;
case 0x65b9:
*indexout = index + 1;
return 1;
case 0x65c5:
*indexout = index + 1;
return 1;
case 0x65e0:
*indexout = index + 1;
return 1;
case 0x65e2:
*indexout = index + 1;
return 1;
case 0x65e3:
*indexout = index + 1;
return 1;
case 0x65e5:
*indexout = index + 1;
return 1;
case 0x6613:
*indexout = index + 1;
return 1;
case 0x6620:
*indexout = index + 1;
return 1;
case 0x6649:
*indexout = index + 1;
return 1;
case 0x6674:
*indexout = index + 1;
return 1;
case 0x6688:
*indexout = index + 1;
return 1;
case 0x6691:
*indexout = index + 1;
return 1;
case 0x669c:
*indexout = index + 1;
return 1;
case 0x66b4:
*indexout = index + 1;
return 1;
case 0x66c6:
*indexout = index + 1;
return 1;
case 0x66f0:
*indexout = index + 1;
return 1;
case 0x66f4:
*indexout = index + 1;
return 1;
case 0x66f8:
*indexout = index + 1;
return 1;
case 0x6700:
*indexout = index + 1;
return 1;
case 0x6708:
*indexout = index + 1;
return 1;
case 0x6709:
*indexout = index + 1;
return 1;
case 0x6717:
*indexout = index + 1;
return 1;
case 0x671b:
*indexout = index + 1;
return 1;
case 0x6721:
*indexout = index + 1;
return 1;
case 0x6728:
*indexout = index + 1;
return 1;
case 0x674e:
*indexout = index + 1;
return 1;
case 0x6753:
*indexout = index + 1;
return 1;
case 0x6756:
*indexout = index + 1;
return 1;
case 0x675e:
*indexout = index + 1;
return 1;
case 0x677b:
*indexout = index + 1;
return 1;
case 0x6785:
*indexout = index + 1;
return 1;
case 0x6797:
*indexout = index + 1;
return 1;
case 0x67f3:
*indexout = index + 1;
return 1;
case 0x67fa:
*indexout = index + 1;
return 1;
case 0x6817:
*indexout = index + 1;
return 1;
case 0x681f:
*indexout = index + 1;
return 1;
case 0x682a:
*indexout = index + 1;
return 1;
case 0x6852:
*indexout = index + 1;
return 1;
case 0x6881:
*indexout = index + 1;
return 1;
case 0x6885:
*indexout = index + 1;
return 1;
case 0x688e:
*indexout = index + 1;
return 1;
case 0x68a8:
*indexout = index + 1;
return 1;
case 0x6914:
*indexout = index + 1;
return 1;
case 0x6942:
*indexout = index + 1;
return 1;
case 0x69a3:
*indexout = index + 1;
return 1;
case 0x69ea:
*indexout = index + 1;
return 1;
case 0x6a02:
*indexout = index + 1;
return 1;
case 0x6a13:
*indexout = index + 1;
return 1;
case 0x6aa8:
*indexout = index + 1;
return 1;
case 0x6ad3:
*indexout = index + 1;
return 1;
case 0x6adb:
*indexout = index + 1;
return 1;
case 0x6b04:
*indexout = index + 1;
return 1;
case 0x6b20:
*indexout = index + 1;
return 1;
case 0x6b21:
*indexout = index + 1;
return 1;
case 0x6b54:
*indexout = index + 1;
return 1;
case 0x6b62:
*indexout = index + 1;
return 1;
case 0x6b63:
*indexout = index + 1;
return 1;
case 0x6b72:
*indexout = index + 1;
return 1;
case 0x6b77:
*indexout = index + 1;
return 1;
case 0x6b79:
*indexout = index + 1;
return 1;
case 0x6b9f:
*indexout = index + 1;
return 1;
case 0x6bae:
*indexout = index + 1;
return 1;
case 0x6bb3:
*indexout = index + 1;
return 1;
case 0x6bba:
*indexout = index + 1;
return 1;
case 0x6bbb:
*indexout = index + 1;
return 1;
case 0x6bcb:
*indexout = index + 1;
return 1;
case 0x6bcd:
*indexout = index + 1;
return 1;
case 0x6bd4:
*indexout = index + 1;
return 1;
case 0x6bdb:
*indexout = index + 1;
return 1;
case 0x6c0f:
*indexout = index + 1;
return 1;
case 0x6c14:
*indexout = index + 1;
return 1;
case 0x6c34:
*indexout = index + 1;
return 1;
case 0x6c4e:
*indexout = index + 1;
return 1;
case 0x6c67:
*indexout = index + 1;
return 1;
case 0x6c88:
*indexout = index + 1;
return 1;
case 0x6cbf:
*indexout = index + 1;
return 1;
case 0x6ccc:
*indexout = index + 1;
return 1;
case 0x6ccd:
*indexout = index + 1;
return 1;
case 0x6ce5:
*indexout = index + 1;
return 1;
case 0x6ce8:
*indexout = index + 1;
return 1;
case 0x6d16:
*indexout = index + 1;
return 1;
case 0x6d1b:
*indexout = index + 1;
return 1;
case 0x6d1e:
*indexout = index + 1;
return 1;
case 0x6d34:
*indexout = index + 1;
return 1;
case 0x6d3e:
*indexout = index + 1;
return 1;
case 0x6d41:
*indexout = index + 1;
return 1;
case 0x6d69:
*indexout = index + 1;
return 1;
case 0x6d6a:
*indexout = index + 1;
return 1;
case 0x6d77:
*indexout = index + 1;
return 1;
case 0x6d78:
*indexout = index + 1;
return 1;
case 0x6d85:
*indexout = index + 1;
return 1;
case 0x6dcb:
*indexout = index + 1;
return 1;
case 0x6dda:
*indexout = index + 1;
return 1;
case 0x6dea:
*indexout = index + 1;
return 1;
case 0x6df9:
*indexout = index + 1;
return 1;
case 0x6e1a:
*indexout = index + 1;
return 1;
case 0x6e2f:
*indexout = index + 1;
return 1;
case 0x6e6e:
*indexout = index + 1;
return 1;
case 0x6e80:
*indexout = index + 1;
return 1;
case 0x6e9c:
*indexout = index + 1;
return 1;
case 0x6eba:
*indexout = index + 1;
return 1;
case 0x6ec7:
*indexout = index + 1;
return 1;
case 0x6ecb:
*indexout = index + 1;
return 1;
case 0x6ed1:
*indexout = index + 1;
return 1;
case 0x6edb:
*indexout = index + 1;
return 1;
case 0x6f0f:
*indexout = index + 1;
return 1;
case 0x6f14:
*indexout = index + 1;
return 1;
case 0x6f22:
*indexout = index + 1;
return 1;
case 0x6f23:
*indexout = index + 1;
return 1;
case 0x6f6e:
*indexout = index + 1;
return 1;
case 0x6fc6:
*indexout = index + 1;
return 1;
case 0x6feb:
*indexout = index + 1;
return 1;
case 0x6ffe:
*indexout = index + 1;
return 1;
case 0x701b:
*indexout = index + 1;
return 1;
case 0x701e:
*indexout = index + 1;
return 1;
case 0x7039:
*indexout = index + 1;
return 1;
case 0x704a:
*indexout = index + 1;
return 1;
case 0x706b:
*indexout = index + 1;
return 1;
case 0x7070:
*indexout = index + 1;
return 1;
case 0x7077:
*indexout = index + 1;
return 1;
case 0x707d:
*indexout = index + 1;
return 1;
case 0x7099:
*indexout = index + 1;
return 1;
case 0x70ad:
*indexout = index + 1;
return 1;
case 0x70c8:
*indexout = index + 1;
return 1;
case 0x70d9:
*indexout = index + 1;
return 1;
case 0x7121:
*indexout = index + 1;
return 1;
case 0x7145:
*indexout = index + 1;
return 1;
case 0x7149:
*indexout = index + 1;
return 1;
case 0x716e:
*indexout = index + 1;
return 1;
case 0x719c:
*indexout = index + 1;
return 1;
case 0x71ce:
*indexout = index + 1;
return 1;
case 0x71d0:
*indexout = index + 1;
return 1;
case 0x7210:
*indexout = index + 1;
return 1;
case 0x721b:
*indexout = index + 1;
return 1;
case 0x7228:
*indexout = index + 1;
return 1;
case 0x722a:
*indexout = index + 1;
return 1;
case 0x722b:
*indexout = index + 1;
return 1;
case 0x7235:
*indexout = index + 1;
return 1;
case 0x7236:
*indexout = index + 1;
return 1;
case 0x723b:
*indexout = index + 1;
return 1;
case 0x723f:
*indexout = index + 1;
return 1;
case 0x7247:
*indexout = index + 1;
return 1;
case 0x7250:
*indexout = index + 1;
return 1;
case 0x7259:
*indexout = index + 1;
return 1;
case 0x725b:
*indexout = index + 1;
return 1;
case 0x7262:
*indexout = index + 1;
return 1;
case 0x7279:
*indexout = index + 1;
return 1;
case 0x7280:
*indexout = index + 1;
return 1;
case 0x7295:
*indexout = index + 1;
return 1;
case 0x72ac:
*indexout = index + 1;
return 1;
case 0x72af:
*indexout = index + 1;
return 1;
case 0x72c0:
*indexout = index + 1;
return 1;
case 0x72fc:
*indexout = index + 1;
return 1;
case 0x732a:
*indexout = index + 1;
return 1;
case 0x7375:
*indexout = index + 1;
return 1;
case 0x737a:
*indexout = index + 1;
return 1;
case 0x7384:
*indexout = index + 1;
return 1;
case 0x7387:
*indexout = index + 1;
return 1;
case 0x7389:
*indexout = index + 1;
return 1;
case 0x738b:
*indexout = index + 1;
return 1;
case 0x73a5:
*indexout = index + 1;
return 1;
case 0x73b2:
*indexout = index + 1;
return 1;
case 0x73de:
*indexout = index + 1;
return 1;
case 0x7406:
*indexout = index + 1;
return 1;
case 0x7409:
*indexout = index + 1;
return 1;
case 0x7422:
*indexout = index + 1;
return 1;
case 0x7447:
*indexout = index + 1;
return 1;
case 0x745c:
*indexout = index + 1;
return 1;
case 0x7469:
*indexout = index + 1;
return 1;
case 0x7471:
*indexout = index + 1;
return 1;
case 0x7485:
*indexout = index + 1;
return 1;
case 0x7489:
*indexout = index + 1;
return 1;
case 0x7498:
*indexout = index + 1;
return 1;
case 0x74ca:
*indexout = index + 1;
return 1;
case 0x74dc:
*indexout = index + 1;
return 1;
case 0x74e6:
*indexout = index + 1;
return 1;
case 0x7506:
*indexout = index + 1;
return 1;
case 0x7518:
*indexout = index + 1;
return 1;
case 0x751f:
*indexout = index + 1;
return 1;
case 0x7524:
*indexout = index + 1;
return 1;
case 0x7528:
*indexout = index + 1;
return 1;
case 0x7530:
*indexout = index + 1;
return 1;
case 0x7532:
*indexout = index + 1;
return 1;
case 0x7533:
*indexout = index + 1;
return 1;
case 0x7537:
*indexout = index + 1;
return 1;
case 0x753b:
*indexout = index + 1;
return 1;
case 0x753e:
*indexout = index + 1;
return 1;
case 0x7559:
*indexout = index + 1;
return 1;
case 0x7565:
*indexout = index + 1;
return 1;
case 0x7570:
*indexout = index + 1;
return 1;
case 0x758b:
*indexout = index + 1;
return 1;
case 0x7592:
*indexout = index + 1;
return 1;
case 0x75e2:
*indexout = index + 1;
return 1;
case 0x7610:
*indexout = index + 1;
return 1;
case 0x761d:
*indexout = index + 1;
return 1;
case 0x761f:
*indexout = index + 1;
return 1;
case 0x7642:
*indexout = index + 1;
return 1;
case 0x7669:
*indexout = index + 1;
return 1;
case 0x7676:
*indexout = index + 1;
return 1;
case 0x767d:
*indexout = index + 1;
return 1;
case 0x76ae:
*indexout = index + 1;
return 1;
case 0x76bf:
*indexout = index + 1;
return 1;
case 0x76ca:
*indexout = index + 1;
return 1;
case 0x76db:
*indexout = index + 1;
return 1;
case 0x76e3:
*indexout = index + 1;
return 1;
case 0x76e7:
*indexout = index + 1;
return 1;
case 0x76ee:
*indexout = index + 1;
return 1;
case 0x76f4:
*indexout = index + 1;
return 1;
case 0x7701:
*indexout = index + 1;
return 1;
case 0x771e:
*indexout = index + 1;
return 1;
case 0x771f:
*indexout = index + 1;
return 1;
case 0x7740:
*indexout = index + 1;
return 1;
case 0x774a:
*indexout = index + 1;
return 1;
case 0x778b:
*indexout = index + 1;
return 1;
case 0x77a7:
*indexout = index + 1;
return 1;
case 0x77db:
*indexout = index + 1;
return 1;
case 0x77e2:
*indexout = index + 1;
return 1;
case 0x77f3:
*indexout = index + 1;
return 1;
case 0x784e:
*indexout = index + 1;
return 1;
case 0x786b:
*indexout = index + 1;
return 1;
case 0x788c:
*indexout = index + 1;
return 1;
case 0x7891:
*indexout = index + 1;
return 1;
case 0x78ca:
*indexout = index + 1;
return 1;
case 0x78cc:
*indexout = index + 1;
return 1;
case 0x78fb:
*indexout = index + 1;
return 1;
case 0x792a:
*indexout = index + 1;
return 1;
case 0x793a:
*indexout = index + 1;
return 1;
case 0x793c:
*indexout = index + 1;
return 1;
case 0x793e:
*indexout = index + 1;
return 1;
case 0x7948:
*indexout = index + 1;
return 1;
case 0x7949:
*indexout = index + 1;
return 1;
case 0x7950:
*indexout = index + 1;
return 1;
case 0x7956:
*indexout = index + 1;
return 1;
case 0x795d:
*indexout = index + 1;
return 1;
case 0x795e:
*indexout = index + 1;
return 1;
case 0x7965:
*indexout = index + 1;
return 1;
case 0x797f:
*indexout = index + 1;
return 1;
case 0x7981:
*indexout = index + 1;
return 1;
case 0x798d:
*indexout = index + 1;
return 1;
case 0x798e:
*indexout = index + 1;
return 1;
case 0x798f:
*indexout = index + 1;
return 1;
case 0x79ae:
*indexout = index + 1;
return 1;
case 0x79b8:
*indexout = index + 1;
return 1;
case 0x79be:
*indexout = index + 1;
return 1;
case 0x79ca:
*indexout = index + 1;
return 1;
case 0x79d8:
*indexout = index + 1;
return 1;
case 0x79eb:
*indexout = index + 1;
return 1;
case 0x7a1c:
*indexout = index + 1;
return 1;
case 0x7a40:
*indexout = index + 1;
return 1;
case 0x7a4a:
*indexout = index + 1;
return 1;
case 0x7a4f:
*indexout = index + 1;
return 1;
case 0x7a74:
*indexout = index + 1;
return 1;
case 0x7a7a:
*indexout = index + 1;
return 1;
case 0x7a81:
*indexout = index + 1;
return 1;
case 0x7ab1:
*indexout = index + 1;
return 1;
case 0x7acb:
*indexout = index + 1;
return 1;
case 0x7aee:
*indexout = index + 1;
return 1;
case 0x7af9:
*indexout = index + 1;
return 1;
case 0x7b20:
*indexout = index + 1;
return 1;
case 0x7b8f:
*indexout = index + 1;
return 1;
case 0x7bc0:
*indexout = index + 1;
return 1;
case 0x7bc6:
*indexout = index + 1;
return 1;
case 0x7bc9:
*indexout = index + 1;
return 1;
case 0x7c3e:
*indexout = index + 1;
return 1;
case 0x7c60:
*indexout = index + 1;
return 1;
case 0x7c73:
*indexout = index + 1;
return 1;
case 0x7c7b:
*indexout = index + 1;
return 1;
case 0x7c92:
*indexout = index + 1;
return 1;
case 0x7cbe:
*indexout = index + 1;
return 1;
case 0x7cd2:
*indexout = index + 1;
return 1;
case 0x7cd6:
*indexout = index + 1;
return 1;
case 0x7ce3:
*indexout = index + 1;
return 1;
case 0x7ce7:
*indexout = index + 1;
return 1;
case 0x7ce8:
*indexout = index + 1;
return 1;
case 0x7cf8:
*indexout = index + 1;
return 1;
case 0x7d00:
*indexout = index + 1;
return 1;
case 0x7d10:
*indexout = index + 1;
return 1;
case 0x7d22:
*indexout = index + 1;
return 1;
case 0x7d2f:
*indexout = index + 1;
return 1;
case 0x7d42:
*indexout = index + 1;
return 1;
case 0x7d5b:
*indexout = index + 1;
return 1;
case 0x7d63:
*indexout = index + 1;
return 1;
case 0x7da0:
*indexout = index + 1;
return 1;
case 0x7dbe:
*indexout = index + 1;
return 1;
case 0x7dc7:
*indexout = index + 1;
return 1;
case 0x7df4:
*indexout = index + 1;
return 1;
case 0x7e02:
*indexout = index + 1;
return 1;
case 0x7e09:
*indexout = index + 1;
return 1;
case 0x7e37:
*indexout = index + 1;
return 1;
case 0x7e41:
*indexout = index + 1;
return 1;
case 0x7e45:
*indexout = index + 1;
return 1;
case 0x7f36:
*indexout = index + 1;
return 1;
case 0x7f3e:
*indexout = index + 1;
return 1;
case 0x7f51:
*indexout = index + 1;
return 1;
case 0x7f72:
*indexout = index + 1;
return 1;
case 0x7f79:
*indexout = index + 1;
return 1;
case 0x7f7a:
*indexout = index + 1;
return 1;
case 0x7f85:
*indexout = index + 1;
return 1;
case 0x7f8a:
*indexout = index + 1;
return 1;
case 0x7f95:
*indexout = index + 1;
return 1;
case 0x7f9a:
*indexout = index + 1;
return 1;
case 0x7fbd:
*indexout = index + 1;
return 1;
case 0x7ffa:
*indexout = index + 1;
return 1;
case 0x8001:
*indexout = index + 1;
return 1;
case 0x8005:
*indexout = index + 1;
return 1;
case 0x800c:
*indexout = index + 1;
return 1;
case 0x8012:
*indexout = index + 1;
return 1;
case 0x8033:
*indexout = index + 1;
return 1;
case 0x8046:
*indexout = index + 1;
return 1;
case 0x8060:
*indexout = index + 1;
return 1;
case 0x806f:
*indexout = index + 1;
return 1;
case 0x8070:
*indexout = index + 1;
return 1;
case 0x807e:
*indexout = index + 1;
return 1;
case 0x807f:
*indexout = index + 1;
return 1;
case 0x8089:
*indexout = index + 1;
return 1;
case 0x808b:
*indexout = index + 1;
return 1;
case 0x80ad:
*indexout = index + 1;
return 1;
case 0x80b2:
*indexout = index + 1;
return 1;
case 0x8103:
*indexout = index + 1;
return 1;
case 0x813e:
*indexout = index + 1;
return 1;
case 0x81d8:
*indexout = index + 1;
return 1;
case 0x81e3:
*indexout = index + 1;
return 1;
case 0x81e8:
*indexout = index + 1;
return 1;
case 0x81ea:
*indexout = index + 1;
return 1;
case 0x81ed:
*indexout = index + 1;
return 1;
case 0x81f3:
*indexout = index + 1;
return 1;
case 0x81fc:
*indexout = index + 1;
return 1;
case 0x8201:
*indexout = index + 1;
return 1;
case 0x8204:
*indexout = index + 1;
return 1;
case 0x820c:
*indexout = index + 1;
return 1;
case 0x8218:
*indexout = index + 1;
return 1;
case 0x821b:
*indexout = index + 1;
return 1;
case 0x821f:
*indexout = index + 1;
return 1;
case 0x826e:
*indexout = index + 1;
return 1;
case 0x826f:
*indexout = index + 1;
return 1;
case 0x8272:
*indexout = index + 1;
return 1;
case 0x8278:
*indexout = index + 1;
return 1;
case 0x8279:
*indexout = index + 1;
return 1;
case 0x828b:
*indexout = index + 1;
return 1;
case 0x8291:
*indexout = index + 1;
return 1;
case 0x829d:
*indexout = index + 1;
return 1;
case 0x82b1:
*indexout = index + 1;
return 1;
case 0x82b3:
*indexout = index + 1;
return 1;
case 0x82bd:
*indexout = index + 1;
return 1;
case 0x82e5:
*indexout = index + 1;
return 1;
case 0x82e6:
*indexout = index + 1;
return 1;
case 0x831d:
*indexout = index + 1;
return 1;
case 0x8323:
*indexout = index + 1;
return 1;
case 0x8336:
*indexout = index + 1;
return 1;
case 0x8352:
*indexout = index + 1;
return 1;
case 0x8353:
*indexout = index + 1;
return 1;
case 0x8363:
*indexout = index + 1;
return 1;
case 0x83ad:
*indexout = index + 1;
return 1;
case 0x83bd:
*indexout = index + 1;
return 1;
case 0x83c9:
*indexout = index + 1;
return 1;
case 0x83ca:
*indexout = index + 1;
return 1;
case 0x83cc:
*indexout = index + 1;
return 1;
case 0x83dc:
*indexout = index + 1;
return 1;
case 0x83e7:
*indexout = index + 1;
return 1;
case 0x83ef:
*indexout = index + 1;
return 1;
case 0x83f1:
*indexout = index + 1;
return 1;
case 0x843d:
*indexout = index + 1;
return 1;
case 0x8449:
*indexout = index + 1;
return 1;
case 0x8457:
*indexout = index + 1;
return 1;
case 0x84ee:
*indexout = index + 1;
return 1;
case 0x84f1:
*indexout = index + 1;
return 1;
case 0x84f3:
*indexout = index + 1;
return 1;
case 0x84fc:
*indexout = index + 1;
return 1;
case 0x8516:
*indexout = index + 1;
return 1;
case 0x8564:
*indexout = index + 1;
return 1;
case 0x85cd:
*indexout = index + 1;
return 1;
case 0x85fa:
*indexout = index + 1;
return 1;
case 0x8606:
*indexout = index + 1;
return 1;
case 0x8612:
*indexout = index + 1;
return 1;
case 0x862d:
*indexout = index + 1;
return 1;
case 0x863f:
*indexout = index + 1;
return 1;
case 0x864d:
*indexout = index + 1;
return 1;
case 0x8650:
*indexout = index + 1;
return 1;
case 0x865c:
*indexout = index + 1;
return 1;
case 0x8667:
*indexout = index + 1;
return 1;
case 0x8669:
*indexout = index + 1;
return 1;
case 0x866b:
*indexout = index + 1;
return 1;
case 0x8688:
*indexout = index + 1;
return 1;
case 0x86a9:
*indexout = index + 1;
return 1;
case 0x86e2:
*indexout = index + 1;
return 1;
case 0x870e:
*indexout = index + 1;
return 1;
case 0x8728:
*indexout = index + 1;
return 1;
case 0x876b:
*indexout = index + 1;
return 1;
case 0x8779:
*indexout = index + 1;
return 1;
case 0x8786:
*indexout = index + 1;
return 1;
case 0x87ba:
*indexout = index + 1;
return 1;
case 0x87e1:
*indexout = index + 1;
return 1;
case 0x8801:
*indexout = index + 1;
return 1;
case 0x881f:
*indexout = index + 1;
return 1;
case 0x8840:
*indexout = index + 1;
return 1;
case 0x884c:
*indexout = index + 1;
return 1;
case 0x8860:
*indexout = index + 1;
return 1;
case 0x8863:
*indexout = index + 1;
return 1;
case 0x88c2:
*indexout = index + 1;
return 1;
case 0x88cf:
*indexout = index + 1;
return 1;
case 0x88d7:
*indexout = index + 1;
return 1;
case 0x88de:
*indexout = index + 1;
return 1;
case 0x88e1:
*indexout = index + 1;
return 1;
case 0x88f8:
*indexout = index + 1;
return 1;
case 0x88fa:
*indexout = index + 1;
return 1;
case 0x8910:
*indexout = index + 1;
return 1;
case 0x8941:
*indexout = index + 1;
return 1;
case 0x8964:
*indexout = index + 1;
return 1;
case 0x897e:
*indexout = index + 1;
return 1;
case 0x8986:
*indexout = index + 1;
return 1;
case 0x898b:
*indexout = index + 1;
return 1;
case 0x8996:
*indexout = index + 1;
return 1;
case 0x89d2:
*indexout = index + 1;
return 1;
case 0x89e3:
*indexout = index + 1;
return 1;
case 0x8a00:
*indexout = index + 1;
return 1;
case 0x8aa0:
*indexout = index + 1;
return 1;
case 0x8aaa:
*indexout = index + 1;
return 1;
case 0x8abf:
*indexout = index + 1;
return 1;
case 0x8acb:
*indexout = index + 1;
return 1;
case 0x8ad2:
*indexout = index + 1;
return 1;
case 0x8ad6:
*indexout = index + 1;
return 1;
case 0x8aed:
*indexout = index + 1;
return 1;
case 0x8af8:
*indexout = index + 1;
return 1;
case 0x8afe:
*indexout = index + 1;
return 1;
case 0x8b01:
*indexout = index + 1;
return 1;
case 0x8b39:
*indexout = index + 1;
return 1;
case 0x8b58:
*indexout = index + 1;
return 1;
case 0x8b80:
*indexout = index + 1;
return 1;
case 0x8b8a:
*indexout = index + 1;
return 1;
case 0x8c37:
*indexout = index + 1;
return 1;
case 0x8c46:
*indexout = index + 1;
return 1;
case 0x8c48:
*indexout = index + 1;
return 1;
case 0x8c55:
*indexout = index + 1;
return 1;
case 0x8c78:
*indexout = index + 1;
return 1;
case 0x8c9d:
*indexout = index + 1;
return 1;
case 0x8ca1:
*indexout = index + 1;
return 1;
case 0x8ca9:
*indexout = index + 1;
return 1;
case 0x8cab:
*indexout = index + 1;
return 1;
case 0x8cc1:
*indexout = index + 1;
return 1;
case 0x8cc2:
*indexout = index + 1;
return 1;
case 0x8cc7:
*indexout = index + 1;
return 1;
case 0x8cc8:
*indexout = index + 1;
return 1;
case 0x8cd3:
*indexout = index + 1;
return 1;
case 0x8d08:
*indexout = index + 1;
return 1;
case 0x8d1b:
*indexout = index + 1;
return 1;
case 0x8d64:
*indexout = index + 1;
return 1;
case 0x8d70:
*indexout = index + 1;
return 1;
case 0x8d77:
*indexout = index + 1;
return 1;
case 0x8db3:
*indexout = index + 1;
return 1;
case 0x8dbc:
*indexout = index + 1;
return 1;
case 0x8dcb:
*indexout = index + 1;
return 1;
case 0x8def:
*indexout = index + 1;
return 1;
case 0x8df0:
*indexout = index + 1;
return 1;
case 0x8eab:
*indexout = index + 1;
return 1;
case 0x8eca:
*indexout = index + 1;
return 1;
case 0x8ed4:
*indexout = index + 1;
return 1;
case 0x8f26:
*indexout = index + 1;
return 1;
case 0x8f2a:
*indexout = index + 1;
return 1;
case 0x8f38:
*indexout = index + 1;
return 1;
case 0x8f3b:
*indexout = index + 1;
return 1;
case 0x8f62:
*indexout = index + 1;
return 1;
case 0x8f9b:
*indexout = index + 1;
return 1;
case 0x8f9e:
*indexout = index + 1;
return 1;
case 0x8fb0:
*indexout = index + 1;
return 1;
case 0x8fb5:
*indexout = index + 1;
return 1;
case 0x8fb6:
*indexout = index + 1;
return 1;
case 0x9023:
*indexout = index + 1;
return 1;
case 0x9038:
*indexout = index + 1;
return 1;
case 0x904a:
*indexout = index + 1;
return 1;
case 0x9069:
*indexout = index + 1;
return 1;
case 0x9072:
*indexout = index + 1;
return 1;
case 0x907c:
*indexout = index + 1;
return 1;
case 0x908f:
*indexout = index + 1;
return 1;
case 0x9091:
*indexout = index + 1;
return 1;
case 0x9094:
*indexout = index + 1;
return 1;
case 0x90ce:
*indexout = index + 1;
return 1;
case 0x90de:
*indexout = index + 1;
return 1;
case 0x90f1:
*indexout = index + 1;
return 1;
case 0x90fd:
*indexout = index + 1;
return 1;
case 0x9111:
*indexout = index + 1;
return 1;
case 0x911b:
*indexout = index + 1;
return 1;
case 0x9149:
*indexout = index + 1;
return 1;
case 0x914d:
*indexout = index + 1;
return 1;
case 0x916a:
*indexout = index + 1;
return 1;
case 0x9199:
*indexout = index + 1;
return 1;
case 0x91b4:
*indexout = index + 1;
return 1;
case 0x91c6:
*indexout = index + 1;
return 1;
case 0x91cc:
*indexout = index + 1;
return 1;
case 0x91cf:
*indexout = index + 1;
return 1;
case 0x91d1:
*indexout = index + 1;
return 1;
case 0x9234:
*indexout = index + 1;
return 1;
case 0x9238:
*indexout = index + 1;
return 1;
case 0x9276:
*indexout = index + 1;
return 1;
case 0x927c:
*indexout = index + 1;
return 1;
case 0x92d7:
*indexout = index + 1;
return 1;
case 0x92d8:
*indexout = index + 1;
return 1;
case 0x9304:
*indexout = index + 1;
return 1;
case 0x934a:
*indexout = index + 1;
return 1;
case 0x93f9:
*indexout = index + 1;
return 1;
case 0x9415:
*indexout = index + 1;
return 1;
case 0x9577:
*indexout = index + 1;
return 1;
case 0x9580:
*indexout = index + 1;
return 1;
case 0x958b:
*indexout = index + 1;
return 1;
case 0x95ad:
*indexout = index + 1;
return 1;
case 0x95b7:
*indexout = index + 1;
return 1;
case 0x961c:
*indexout = index + 1;
return 1;
case 0x962e:
*indexout = index + 1;
return 1;
case 0x964b:
*indexout = index + 1;
return 1;
case 0x964d:
*indexout = index + 1;
return 1;
case 0x9675:
*indexout = index + 1;
return 1;
case 0x9678:
*indexout = index + 1;
return 1;
case 0x967c:
*indexout = index + 1;
return 1;
case 0x9686:
*indexout = index + 1;
return 1;
case 0x96a3:
*indexout = index + 1;
return 1;
case 0x96b6:
*indexout = index + 1;
return 1;
case 0x96b7:
*indexout = index + 1;
return 1;
case 0x96b8:
*indexout = index + 1;
return 1;
case 0x96b9:
*indexout = index + 1;
return 1;
case 0x96c3:
*indexout = index + 1;
return 1;
case 0x96e2:
*indexout = index + 1;
return 1;
case 0x96e3:
*indexout = index + 1;
return 1;
case 0x96e8:
*indexout = index + 1;
return 1;
case 0x96f6:
*indexout = index + 1;
return 1;
case 0x96f7:
*indexout = index + 1;
return 1;
case 0x9723:
*indexout = index + 1;
return 1;
case 0x9732:
*indexout = index + 1;
return 1;
case 0x9748:
*indexout = index + 1;
return 1;
case 0x9751:
*indexout = index + 1;
return 1;
case 0x9756:
*indexout = index + 1;
return 1;
case 0x975e:
*indexout = index + 1;
return 1;
case 0x9762:
*indexout = index + 1;
return 1;
case 0x9769:
*indexout = index + 1;
return 1;
case 0x97cb:
*indexout = index + 1;
return 1;
case 0x97db:
*indexout = index + 1;
return 1;
case 0x97e0:
*indexout = index + 1;
return 1;
case 0x97ed:
*indexout = index + 1;
return 1;
case 0x97f3:
*indexout = index + 1;
return 1;
case 0x97ff:
*indexout = index + 1;
return 1;
case 0x9801:
*indexout = index + 1;
return 1;
case 0x9805:
*indexout = index + 1;
return 1;
case 0x980b:
*indexout = index + 1;
return 1;
case 0x9818:
*indexout = index + 1;
return 1;
case 0x9829:
*indexout = index + 1;
return 1;
case 0x983b:
*indexout = index + 1;
return 1;
case 0x985e:
*indexout = index + 1;
return 1;
case 0x98a8:
*indexout = index + 1;
return 1;
case 0x98db:
*indexout = index + 1;
return 1;
case 0x98df:
*indexout = index + 1;
return 1;
case 0x98e2:
*indexout = index + 1;
return 1;
case 0x98ef:
*indexout = index + 1;
return 1;
case 0x98fc:
*indexout = index + 1;
return 1;
case 0x9928:
*indexout = index + 1;
return 1;
case 0x9929:
*indexout = index + 1;
return 1;
case 0x9996:
*indexout = index + 1;
return 1;
case 0x9999:
*indexout = index + 1;
return 1;
case 0x99a7:
*indexout = index + 1;
return 1;
case 0x99ac:
*indexout = index + 1;
return 1;
case 0x99c2:
*indexout = index + 1;
return 1;
case 0x99f1:
*indexout = index + 1;
return 1;
case 0x99fe:
*indexout = index + 1;
return 1;
case 0x9a6a:
*indexout = index + 1;
return 1;
case 0x9aa8:
*indexout = index + 1;
return 1;
case 0x9ad8:
*indexout = index + 1;
return 1;
case 0x9adf:
*indexout = index + 1;
return 1;
case 0x9b12:
*indexout = index + 1;
return 1;
case 0x9b25:
*indexout = index + 1;
return 1;
case 0x9b2f:
*indexout = index + 1;
return 1;
case 0x9b32:
*indexout = index + 1;
return 1;
case 0x9b3c:
*indexout = index + 1;
return 1;
case 0x9b5a:
*indexout = index + 1;
return 1;
case 0x9b6f:
*indexout = index + 1;
return 1;
case 0x9c40:
*indexout = index + 1;
return 1;
case 0x9c57:
*indexout = index + 1;
return 1;
case 0x9ce5:
*indexout = index + 1;
return 1;
case 0x9cfd:
*indexout = index + 1;
return 1;
case 0x9d67:
*indexout = index + 1;
return 1;
case 0x9db4:
*indexout = index + 1;
return 1;
case 0x9dfa:
*indexout = index + 1;
return 1;
case 0x9e1e:
*indexout = index + 1;
return 1;
case 0x9e75:
*indexout = index + 1;
return 1;
case 0x9e7f:
*indexout = index + 1;
return 1;
case 0x9e97:
*indexout = index + 1;
return 1;
case 0x9e9f:
*indexout = index + 1;
return 1;
case 0x9ea5:
*indexout = index + 1;
return 1;
case 0x9ebb:
*indexout = index + 1;
return 1;
case 0x9ec3:
*indexout = index + 1;
return 1;
case 0x9ecd:
*indexout = index + 1;
return 1;
case 0x9ece:
*indexout = index + 1;
return 1;
case 0x9ed1:
*indexout = index + 1;
return 1;
case 0x9ef9:
*indexout = index + 1;
return 1;
case 0x9efd:
*indexout = index + 1;
return 1;
case 0x9efe:
*indexout = index + 1;
return 1;
case 0x9f05:
*indexout = index + 1;
return 1;
case 0x9f0e:
*indexout = index + 1;
return 1;
case 0x9f0f:
*indexout = index + 1;
return 1;
case 0x9f13:
*indexout = index + 1;
return 1;
case 0x9f16:
*indexout = index + 1;
return 1;
case 0x9f20:
*indexout = index + 1;
return 1;
case 0x9f3b:
*indexout = index + 1;
return 1;
case 0x9f43:
*indexout = index + 1;
return 1;
case 0x9f4a:
*indexout = index + 1;
return 1;
case 0x9f52:
*indexout = index + 1;
return 1;
case 0x9f8d:
*indexout = index + 1;
return 1;
case 0x9f8e:
*indexout = index + 1;
return 1;
case 0x9f9c:
*indexout = index + 1;
return 1;
case 0x9f9f:
*indexout = index + 1;
return 1;
case 0x9fa0:
*indexout = index + 1;
return 1;
case 0xa727:
*indexout = index + 1;
return 1;
case 0xa76f:
*indexout = index + 1;
return 1;
case 0xab37:
*indexout = index + 1;
return 1;
case 0xab52:
*indexout = index + 1;
return 1;
case 0xac00:
*indexout = index + 1;
return 1;
case 0xac01:
*indexout = index + 1;
return 1;
case 0xac02:
*indexout = index + 1;
return 1;
case 0xac03:
*indexout = index + 1;
return 1;
case 0xac04:
*indexout = index + 1;
return 1;
case 0xac05:
*indexout = index + 1;
return 1;
case 0xac06:
*indexout = index + 1;
return 1;
case 0xac07:
*indexout = index + 1;
return 1;
case 0xac08:
*indexout = index + 1;
return 1;
case 0xac09:
*indexout = index + 1;
return 1;
case 0xac0a:
*indexout = index + 1;
return 1;
case 0xac0b:
*indexout = index + 1;
return 1;
case 0xac0c:
*indexout = index + 1;
return 1;
case 0xac0d:
*indexout = index + 1;
return 1;
case 0xac0e:
*indexout = index + 1;
return 1;
case 0xac0f:
*indexout = index + 1;
return 1;
case 0xac10:
*indexout = index + 1;
return 1;
case 0xac11:
*indexout = index + 1;
return 1;
case 0xac12:
*indexout = index + 1;
return 1;
case 0xac13:
*indexout = index + 1;
return 1;
case 0xac14:
*indexout = index + 1;
return 1;
case 0xac15:
*indexout = index + 1;
return 1;
case 0xac16:
*indexout = index + 1;
return 1;
case 0xac17:
*indexout = index + 1;
return 1;
case 0xac18:
*indexout = index + 1;
return 1;
case 0xac19:
*indexout = index + 1;
return 1;
case 0xac1a:
*indexout = index + 1;
return 1;
case 0xac1b:
*indexout = index + 1;
return 1;
case 0xac1c:
*indexout = index + 1;
return 1;
case 0xac1d:
*indexout = index + 1;
return 1;
case 0xac1e:
*indexout = index + 1;
return 1;
case 0xac1f:
*indexout = index + 1;
return 1;
case 0xac20:
*indexout = index + 1;
return 1;
case 0xac21:
*indexout = index + 1;
return 1;
case 0xac22:
*indexout = index + 1;
return 1;
case 0xac23:
*indexout = index + 1;
return 1;
case 0xac24:
*indexout = index + 1;
return 1;
case 0xac25:
*indexout = index + 1;
return 1;
case 0xac26:
*indexout = index + 1;
return 1;
case 0xac27:
*indexout = index + 1;
return 1;
case 0xac28:
*indexout = index + 1;
return 1;
case 0xac29:
*indexout = index + 1;
return 1;
case 0xac2a:
*indexout = index + 1;
return 1;
case 0xac2b:
*indexout = index + 1;
return 1;
case 0xac2c:
*indexout = index + 1;
return 1;
case 0xac2d:
*indexout = index + 1;
return 1;
case 0xac2e:
*indexout = index + 1;
return 1;
case 0xac2f:
*indexout = index + 1;
return 1;
case 0xac30:
*indexout = index + 1;
return 1;
case 0xac31:
*indexout = index + 1;
return 1;
case 0xac32:
*indexout = index + 1;
return 1;
case 0xac33:
*indexout = index + 1;
return 1;
case 0xac34:
*indexout = index + 1;
return 1;
case 0xac35:
*indexout = index + 1;
return 1;
case 0xac36:
*indexout = index + 1;
return 1;
case 0xac37:
*indexout = index + 1;
return 1;
case 0xac38:
*indexout = index + 1;
return 1;
case 0xac39:
*indexout = index + 1;
return 1;
case 0xac3a:
*indexout = index + 1;
return 1;
case 0xac3b:
*indexout = index + 1;
return 1;
case 0xac3c:
*indexout = index + 1;
return 1;
case 0xac3d:
*indexout = index + 1;
return 1;
case 0xac3e:
*indexout = index + 1;
return 1;
case 0xac3f:
*indexout = index + 1;
return 1;
case 0xac40:
*indexout = index + 1;
return 1;
case 0xac41:
*indexout = index + 1;
return 1;
case 0xac42:
*indexout = index + 1;
return 1;
case 0xac43:
*indexout = index + 1;
return 1;
case 0xac44:
*indexout = index + 1;
return 1;
case 0xac45:
*indexout = index + 1;
return 1;
case 0xac46:
*indexout = index + 1;
return 1;
case 0xac47:
*indexout = index + 1;
return 1;
case 0xac48:
*indexout = index + 1;
return 1;
case 0xac49:
*indexout = index + 1;
return 1;
case 0xac4a:
*indexout = index + 1;
return 1;
case 0xac4b:
*indexout = index + 1;
return 1;
case 0xac4c:
*indexout = index + 1;
return 1;
case 0xac4d:
*indexout = index + 1;
return 1;
case 0xac4e:
*indexout = index + 1;
return 1;
case 0xac4f:
*indexout = index + 1;
return 1;
case 0xac50:
*indexout = index + 1;
return 1;
case 0xac51:
*indexout = index + 1;
return 1;
case 0xac52:
*indexout = index + 1;
return 1;
case 0xac53:
*indexout = index + 1;
return 1;
case 0xac54:
*indexout = index + 1;
return 1;
case 0xac55:
*indexout = index + 1;
return 1;
case 0xac56:
*indexout = index + 1;
return 1;
case 0xac57:
*indexout = index + 1;
return 1;
case 0xac58:
*indexout = index + 1;
return 1;
case 0xac59:
*indexout = index + 1;
return 1;
case 0xac5a:
*indexout = index + 1;
return 1;
case 0xac5b:
*indexout = index + 1;
return 1;
case 0xac5c:
*indexout = index + 1;
return 1;
case 0xac5d:
*indexout = index + 1;
return 1;
case 0xac5e:
*indexout = index + 1;
return 1;
case 0xac5f:
*indexout = index + 1;
return 1;
case 0xac60:
*indexout = index + 1;
return 1;
case 0xac61:
*indexout = index + 1;
return 1;
case 0xac62:
*indexout = index + 1;
return 1;
case 0xac63:
*indexout = index + 1;
return 1;
case 0xac64:
*indexout = index + 1;
return 1;
case 0xac65:
*indexout = index + 1;
return 1;
case 0xac66:
*indexout = index + 1;
return 1;
case 0xac67:
*indexout = index + 1;
return 1;
case 0xac68:
*indexout = index + 1;
return 1;
case 0xac69:
*indexout = index + 1;
return 1;
case 0xac6a:
*indexout = index + 1;
return 1;
case 0xac6b:
*indexout = index + 1;
return 1;
case 0xac6c:
*indexout = index + 1;
return 1;
case 0xac6d:
*indexout = index + 1;
return 1;
case 0xac6e:
*indexout = index + 1;
return 1;
case 0xac6f:
*indexout = index + 1;
return 1;
case 0xac70:
*indexout = index + 1;
return 1;
case 0xac71:
*indexout = index + 1;
return 1;
case 0xac72:
*indexout = index + 1;
return 1;
case 0xac73:
*indexout = index + 1;
return 1;
case 0xac74:
*indexout = index + 1;
return 1;
case 0xac75:
*indexout = index + 1;
return 1;
case 0xac76:
*indexout = index + 1;
return 1;
case 0xac77:
*indexout = index + 1;
return 1;
case 0xac78:
*indexout = index + 1;
return 1;
case 0xac79:
*indexout = index + 1;
return 1;
case 0xac7a:
*indexout = index + 1;
return 1;
case 0xac7b:
*indexout = index + 1;
return 1;
case 0xac7c:
*indexout = index + 1;
return 1;
case 0xac7d:
*indexout = index + 1;
return 1;
case 0xac7e:
*indexout = index + 1;
return 1;
case 0xac7f:
*indexout = index + 1;
return 1;
case 0xac80:
*indexout = index + 1;
return 1;
case 0xac81:
*indexout = index + 1;
return 1;
case 0xac82:
*indexout = index + 1;
return 1;
case 0xac83:
*indexout = index + 1;
return 1;
case 0xac84:
*indexout = index + 1;
return 1;
case 0xac85:
*indexout = index + 1;
return 1;
case 0xac86:
*indexout = index + 1;
return 1;
case 0xac87:
*indexout = index + 1;
return 1;
case 0xac88:
*indexout = index + 1;
return 1;
case 0xac89:
*indexout = index + 1;
return 1;
case 0xac8a:
*indexout = index + 1;
return 1;
case 0xac8b:
*indexout = index + 1;
return 1;
case 0xac8c:
*indexout = index + 1;
return 1;
case 0xac8d:
*indexout = index + 1;
return 1;
case 0xac8e:
*indexout = index + 1;
return 1;
case 0xac8f:
*indexout = index + 1;
return 1;
case 0xac90:
*indexout = index + 1;
return 1;
case 0xac91:
*indexout = index + 1;
return 1;
case 0xac92:
*indexout = index + 1;
return 1;
case 0xac93:
*indexout = index + 1;
return 1;
case 0xac94:
*indexout = index + 1;
return 1;
case 0xac95:
*indexout = index + 1;
return 1;
case 0xac96:
*indexout = index + 1;
return 1;
case 0xac97:
*indexout = index + 1;
return 1;
case 0xac98:
*indexout = index + 1;
return 1;
case 0xac99:
*indexout = index + 1;
return 1;
case 0xac9a:
*indexout = index + 1;
return 1;
case 0xac9b:
*indexout = index + 1;
return 1;
case 0xac9c:
*indexout = index + 1;
return 1;
case 0xac9d:
*indexout = index + 1;
return 1;
case 0xac9e:
*indexout = index + 1;
return 1;
case 0xac9f:
*indexout = index + 1;
return 1;
case 0xaca0:
*indexout = index + 1;
return 1;
case 0xaca1:
*indexout = index + 1;
return 1;
case 0xaca2:
*indexout = index + 1;
return 1;
case 0xaca3:
*indexout = index + 1;
return 1;
case 0xaca4:
*indexout = index + 1;
return 1;
case 0xaca5:
*indexout = index + 1;
return 1;
case 0xaca6:
*indexout = index + 1;
return 1;
case 0xaca7:
*indexout = index + 1;
return 1;
case 0xaca8:
*indexout = index + 1;
return 1;
case 0xaca9:
*indexout = index + 1;
return 1;
case 0xacaa:
*indexout = index + 1;
return 1;
case 0xacab:
*indexout = index + 1;
return 1;
case 0xacac:
*indexout = index + 1;
return 1;
case 0xacad:
*indexout = index + 1;
return 1;
case 0xacae:
*indexout = index + 1;
return 1;
case 0xacaf:
*indexout = index + 1;
return 1;
case 0xacb0:
*indexout = index + 1;
return 1;
case 0xacb1:
*indexout = index + 1;
return 1;
case 0xacb2:
*indexout = index + 1;
return 1;
case 0xacb3:
*indexout = index + 1;
return 1;
case 0xacb4:
*indexout = index + 1;
return 1;
case 0xacb5:
*indexout = index + 1;
return 1;
case 0xacb6:
*indexout = index + 1;
return 1;
case 0xacb7:
*indexout = index + 1;
return 1;
case 0xacb8:
*indexout = index + 1;
return 1;
case 0xacb9:
*indexout = index + 1;
return 1;
case 0xacba:
*indexout = index + 1;
return 1;
case 0xacbb:
*indexout = index + 1;
return 1;
case 0xacbc:
*indexout = index + 1;
return 1;
case 0xacbd:
*indexout = index + 1;
return 1;
case 0xacbe:
*indexout = index + 1;
return 1;
case 0xacbf:
*indexout = index + 1;
return 1;
case 0xacc0:
*indexout = index + 1;
return 1;
case 0xacc1:
*indexout = index + 1;
return 1;
case 0xacc2:
*indexout = index + 1;
return 1;
case 0xacc3:
*indexout = index + 1;
return 1;
case 0xacc4:
*indexout = index + 1;
return 1;
case 0xacc5:
*indexout = index + 1;
return 1;
case 0xacc6:
*indexout = index + 1;
return 1;
case 0xacc7:
*indexout = index + 1;
return 1;
case 0xacc8:
*indexout = index + 1;
return 1;
case 0xacc9:
*indexout = index + 1;
return 1;
case 0xacca:
*indexout = index + 1;
return 1;
case 0xaccb:
*indexout = index + 1;
return 1;
case 0xaccc:
*indexout = index + 1;
return 1;
case 0xaccd:
*indexout = index + 1;
return 1;
case 0xacce:
*indexout = index + 1;
return 1;
case 0xaccf:
*indexout = index + 1;
return 1;
case 0xacd0:
*indexout = index + 1;
return 1;
case 0xacd1:
*indexout = index + 1;
return 1;
case 0xacd2:
*indexout = index + 1;
return 1;
case 0xacd3:
*indexout = index + 1;
return 1;
case 0xacd4:
*indexout = index + 1;
return 1;
case 0xacd5:
*indexout = index + 1;
return 1;
case 0xacd6:
*indexout = index + 1;
return 1;
case 0xacd7:
*indexout = index + 1;
return 1;
case 0xacd8:
*indexout = index + 1;
return 1;
case 0xacd9:
*indexout = index + 1;
return 1;
case 0xacda:
*indexout = index + 1;
return 1;
case 0xacdb:
*indexout = index + 1;
return 1;
case 0xacdc:
*indexout = index + 1;
return 1;
case 0xacdd:
*indexout = index + 1;
return 1;
case 0xacde:
*indexout = index + 1;
return 1;
case 0xacdf:
*indexout = index + 1;
return 1;
case 0xace0:
*indexout = index + 1;
return 1;
case 0xace1:
*indexout = index + 1;
return 1;
case 0xace2:
*indexout = index + 1;
return 1;
case 0xace3:
*indexout = index + 1;
return 1;
case 0xace4:
*indexout = index + 1;
return 1;
case 0xace5:
*indexout = index + 1;
return 1;
case 0xace6:
*indexout = index + 1;
return 1;
case 0xace7:
*indexout = index + 1;
return 1;
case 0xace8:
*indexout = index + 1;
return 1;
case 0xace9:
*indexout = index + 1;
return 1;
case 0xacea:
*indexout = index + 1;
return 1;
case 0xaceb:
*indexout = index + 1;
return 1;
case 0xacec:
*indexout = index + 1;
return 1;
case 0xaced:
*indexout = index + 1;
return 1;
case 0xacee:
*indexout = index + 1;
return 1;
case 0xacef:
*indexout = index + 1;
return 1;
case 0xacf0:
*indexout = index + 1;
return 1;
case 0xacf1:
*indexout = index + 1;
return 1;
case 0xacf2:
*indexout = index + 1;
return 1;
case 0xacf3:
*indexout = index + 1;
return 1;
case 0xacf4:
*indexout = index + 1;
return 1;
case 0xacf5:
*indexout = index + 1;
return 1;
case 0xacf6:
*indexout = index + 1;
return 1;
case 0xacf7:
*indexout = index + 1;
return 1;
case 0xacf8:
*indexout = index + 1;
return 1;
case 0xacf9:
*indexout = index + 1;
return 1;
case 0xacfa:
*indexout = index + 1;
return 1;
case 0xacfb:
*indexout = index + 1;
return 1;
case 0xacfc:
*indexout = index + 1;
return 1;
case 0xacfd:
*indexout = index + 1;
return 1;
case 0xacfe:
*indexout = index + 1;
return 1;
case 0xacff:
*indexout = index + 1;
return 1;
case 0xb098:
*indexout = index + 1;
return 1;
case 0xb2e4:
*indexout = index + 1;
return 1;
case 0xb77c:
*indexout = index + 1;
return 1;
case 0xb9c8:
*indexout = index + 1;
return 1;
case 0xbc14:
*indexout = index + 1;
return 1;
case 0xc0ac:
*indexout = index + 1;
return 1;
case 0xc544:
*indexout = index + 1;
return 1;
case 0xc6b0:
*indexout = index + 1;
return 1;
case 0xc790:
*indexout = index + 1;
return 1;
case 0xcc28:
*indexout = index + 1;
return 1;
case 0xce74:
*indexout = index + 1;
return 1;
case 0xd0c0:
*indexout = index + 1;
return 1;
case 0xd30c:
*indexout = index + 1;
return 1;
case 0xd558:
*indexout = index + 1;
return 1;
case 0xd700:
*indexout = index + 1;
return 1;
case 0xd701:
*indexout = index + 1;
return 1;
case 0xd702:
*indexout = index + 1;
return 1;
case 0xd703:
*indexout = index + 1;
return 1;
case 0xd704:
*indexout = index + 1;
return 1;
case 0xd705:
*indexout = index + 1;
return 1;
case 0xd706:
*indexout = index + 1;
return 1;
case 0xd707:
*indexout = index + 1;
return 1;
case 0xd708:
*indexout = index + 1;
return 1;
case 0xd709:
*indexout = index + 1;
return 1;
case 0xd70a:
*indexout = index + 1;
return 1;
case 0xd70b:
*indexout = index + 1;
return 1;
case 0xd70c:
*indexout = index + 1;
return 1;
case 0xd70d:
*indexout = index + 1;
return 1;
case 0xd70e:
*indexout = index + 1;
return 1;
case 0xd70f:
*indexout = index + 1;
return 1;
case 0xd710:
*indexout = index + 1;
return 1;
case 0xd711:
*indexout = index + 1;
return 1;
case 0xd712:
*indexout = index + 1;
return 1;
case 0xd713:
*indexout = index + 1;
return 1;
case 0xd714:
*indexout = index + 1;
return 1;
case 0xd715:
*indexout = index + 1;
return 1;
case 0xd716:
*indexout = index + 1;
return 1;
case 0xd717:
*indexout = index + 1;
return 1;
case 0xd718:
*indexout = index + 1;
return 1;
case 0xd719:
*indexout = index + 1;
return 1;
case 0xd71a:
*indexout = index + 1;
return 1;
case 0xd71b:
*indexout = index + 1;
return 1;
case 0xd71c:
*indexout = index + 1;
return 1;
case 0xd71d:
*indexout = index + 1;
return 1;
case 0xd71e:
*indexout = index + 1;
return 1;
case 0xd71f:
*indexout = index + 1;
return 1;
case 0xd720:
*indexout = index + 1;
return 1;
case 0xd721:
*indexout = index + 1;
return 1;
case 0xd722:
*indexout = index + 1;
return 1;
case 0xd723:
*indexout = index + 1;
return 1;
case 0xd724:
*indexout = index + 1;
return 1;
case 0xd725:
*indexout = index + 1;
return 1;
case 0xd726:
*indexout = index + 1;
return 1;
case 0xd727:
*indexout = index + 1;
return 1;
case 0xd728:
*indexout = index + 1;
return 1;
case 0xd729:
*indexout = index + 1;
return 1;
case 0xd72a:
*indexout = index + 1;
return 1;
case 0xd72b:
*indexout = index + 1;
return 1;
case 0xd72c:
*indexout = index + 1;
return 1;
case 0xd72d:
*indexout = index + 1;
return 1;
case 0xd72e:
*indexout = index + 1;
return 1;
case 0xd72f:
*indexout = index + 1;
return 1;
case 0xd730:
*indexout = index + 1;
return 1;
case 0xd731:
*indexout = index + 1;
return 1;
case 0xd732:
*indexout = index + 1;
return 1;
case 0xd733:
*indexout = index + 1;
return 1;
case 0xd734:
*indexout = index + 1;
return 1;
case 0xd735:
*indexout = index + 1;
return 1;
case 0xd736:
*indexout = index + 1;
return 1;
case 0xd737:
*indexout = index + 1;
return 1;
case 0xd738:
*indexout = index + 1;
return 1;
case 0xd739:
*indexout = index + 1;
return 1;
case 0xd73a:
*indexout = index + 1;
return 1;
case 0xd73b:
*indexout = index + 1;
return 1;
case 0xd73c:
*indexout = index + 1;
return 1;
case 0xd73d:
*indexout = index + 1;
return 1;
case 0xd73e:
*indexout = index + 1;
return 1;
case 0xd73f:
*indexout = index + 1;
return 1;
case 0xd740:
*indexout = index + 1;
return 1;
case 0xd741:
*indexout = index + 1;
return 1;
case 0xd742:
*indexout = index + 1;
return 1;
case 0xd743:
*indexout = index + 1;
return 1;
case 0xd744:
*indexout = index + 1;
return 1;
case 0xd745:
*indexout = index + 1;
return 1;
case 0xd746:
*indexout = index + 1;
return 1;
case 0xd747:
*indexout = index + 1;
return 1;
case 0xd748:
*indexout = index + 1;
return 1;
case 0xd749:
*indexout = index + 1;
return 1;
case 0xd74a:
*indexout = index + 1;
return 1;
case 0xd74b:
*indexout = index + 1;
return 1;
case 0xd74c:
*indexout = index + 1;
return 1;
case 0xd74d:
*indexout = index + 1;
return 1;
case 0xd74e:
*indexout = index + 1;
return 1;
case 0xd74f:
*indexout = index + 1;
return 1;
case 0xd750:
*indexout = index + 1;
return 1;
case 0xd751:
*indexout = index + 1;
return 1;
case 0xd752:
*indexout = index + 1;
return 1;
case 0xd753:
*indexout = index + 1;
return 1;
case 0xd754:
*indexout = index + 1;
return 1;
case 0xd755:
*indexout = index + 1;
return 1;
case 0xd756:
*indexout = index + 1;
return 1;
case 0xd757:
*indexout = index + 1;
return 1;
case 0xd758:
*indexout = index + 1;
return 1;
case 0xd759:
*indexout = index + 1;
return 1;
case 0xd75a:
*indexout = index + 1;
return 1;
case 0xd75b:
*indexout = index + 1;
return 1;
case 0xd75c:
*indexout = index + 1;
return 1;
case 0xd75d:
*indexout = index + 1;
return 1;
case 0xd75e:
*indexout = index + 1;
return 1;
case 0xd75f:
*indexout = index + 1;
return 1;
case 0xd760:
*indexout = index + 1;
return 1;
case 0xd761:
*indexout = index + 1;
return 1;
case 0xd762:
*indexout = index + 1;
return 1;
case 0xd763:
*indexout = index + 1;
return 1;
case 0xd764:
*indexout = index + 1;
return 1;
case 0xd765:
*indexout = index + 1;
return 1;
case 0xd766:
*indexout = index + 1;
return 1;
case 0xd767:
*indexout = index + 1;
return 1;
case 0xd768:
*indexout = index + 1;
return 1;
case 0xd769:
*indexout = index + 1;
return 1;
case 0xd76a:
*indexout = index + 1;
return 1;
case 0xd76b:
*indexout = index + 1;
return 1;
case 0xd76c:
*indexout = index + 1;
return 1;
case 0xd76d:
*indexout = index + 1;
return 1;
case 0xd76e:
*indexout = index + 1;
return 1;
case 0xd76f:
*indexout = index + 1;
return 1;
case 0xd770:
*indexout = index + 1;
return 1;
case 0xd771:
*indexout = index + 1;
return 1;
case 0xd772:
*indexout = index + 1;
return 1;
case 0xd773:
*indexout = index + 1;
return 1;
case 0xd774:
*indexout = index + 1;
return 1;
case 0xd775:
*indexout = index + 1;
return 1;
case 0xd776:
*indexout = index + 1;
return 1;
case 0xd777:
*indexout = index + 1;
return 1;
case 0xd778:
*indexout = index + 1;
return 1;
case 0xd779:
*indexout = index + 1;
return 1;
case 0xd77a:
*indexout = index + 1;
return 1;
case 0xd77b:
*indexout = index + 1;
return 1;
case 0xd77c:
*indexout = index + 1;
return 1;
case 0xd77d:
*indexout = index + 1;
return 1;
case 0xd77e:
*indexout = index + 1;
return 1;
case 0xd77f:
*indexout = index + 1;
return 1;
case 0xd780:
*indexout = index + 1;
return 1;
case 0xd781:
*indexout = index + 1;
return 1;
case 0xd782:
*indexout = index + 1;
return 1;
case 0xd783:
*indexout = index + 1;
return 1;
case 0xd784:
*indexout = index + 1;
return 1;
case 0xd785:
*indexout = index + 1;
return 1;
case 0xd786:
*indexout = index + 1;
return 1;
case 0xd787:
*indexout = index + 1;
return 1;
case 0xd788:
*indexout = index + 1;
return 1;
case 0xd789:
*indexout = index + 1;
return 1;
case 0xd78a:
*indexout = index + 1;
return 1;
case 0xd78b:
*indexout = index + 1;
return 1;
case 0xd78c:
*indexout = index + 1;
return 1;
case 0xd78d:
*indexout = index + 1;
return 1;
case 0xd78e:
*indexout = index + 1;
return 1;
case 0xd78f:
*indexout = index + 1;
return 1;
case 0xd790:
*indexout = index + 1;
return 1;
case 0xd791:
*indexout = index + 1;
return 1;
case 0xd792:
*indexout = index + 1;
return 1;
case 0xd793:
*indexout = index + 1;
return 1;
case 0xd794:
*indexout = index + 1;
return 1;
case 0xd795:
*indexout = index + 1;
return 1;
case 0xd796:
*indexout = index + 1;
return 1;
case 0xd797:
*indexout = index + 1;
return 1;
case 0xd798:
*indexout = index + 1;
return 1;
case 0xd799:
*indexout = index + 1;
return 1;
case 0xd79a:
*indexout = index + 1;
return 1;
case 0xd79b:
*indexout = index + 1;
return 1;
case 0xd79c:
*indexout = index + 1;
return 1;
case 0xd79d:
*indexout = index + 1;
return 1;
case 0xd79e:
*indexout = index + 1;
return 1;
case 0xd79f:
*indexout = index + 1;
return 1;
case 0xd7a0:
*indexout = index + 1;
return 1;
case 0xd7a1:
*indexout = index + 1;
return 1;
case 0xd7a2:
*indexout = index + 1;
return 1;
case 0xd7a3:
*indexout = index + 1;
return 1;
case 0x1109a:
*indexout = index + 1;
return 1;
case 0x1109c:
*indexout = index + 1;
return 1;
case 0x110ab:
*indexout = index + 1;
return 1;
case 0x1112e:
*indexout = index + 1;
return 1;
case 0x1112f:
*indexout = index + 1;
return 1;
case 0x1134b:
*indexout = index + 1;
return 1;
case 0x1134c:
*indexout = index + 1;
return 1;
case 0x114bb:
*indexout = index + 1;
return 1;
case 0x114bc:
*indexout = index + 1;
return 1;
case 0x114be:
*indexout = index + 1;
return 1;
case 0x115ba:
*indexout = index + 1;
return 1;
case 0x115bb:
*indexout = index + 1;
return 1;
case 0x20122:
*indexout = index + 1;
return 1;
case 0x2051c:
*indexout = index + 1;
return 1;
case 0x20525:
*indexout = index + 1;
return 1;
case 0x2054b:
*indexout = index + 1;
return 1;
case 0x2063a:
*indexout = index + 1;
return 1;
case 0x20804:
*indexout = index + 1;
return 1;
case 0x208de:
*indexout = index + 1;
return 1;
case 0x20a2c:
*indexout = index + 1;
return 1;
case 0x20b63:
*indexout = index + 1;
return 1;
case 0x214e4:
*indexout = index + 1;
return 1;
case 0x216a8:
*indexout = index + 1;
return 1;
case 0x216ea:
*indexout = index + 1;
return 1;
case 0x219c8:
*indexout = index + 1;
return 1;
case 0x21b18:
*indexout = index + 1;
return 1;
case 0x21d0b:
*indexout = index + 1;
return 1;
case 0x21de4:
*indexout = index + 1;
return 1;
case 0x21de6:
*indexout = index + 1;
return 1;
case 0x22183:
*indexout = index + 1;
return 1;
case 0x2219f:
*indexout = index + 1;
return 1;
case 0x22331:
*indexout = index + 1;
return 1;
case 0x226d4:
*indexout = index + 1;
return 1;
case 0x22844:
*indexout = index + 1;
return 1;
case 0x2284a:
*indexout = index + 1;
return 1;
case 0x22b0c:
*indexout = index + 1;
return 1;
case 0x22bf1:
*indexout = index + 1;
return 1;
case 0x2300a:
*indexout = index + 1;
return 1;
case 0x232b8:
*indexout = index + 1;
return 1;
case 0x2335f:
*indexout = index + 1;
return 1;
case 0x23393:
*indexout = index + 1;
return 1;
case 0x2339c:
*indexout = index + 1;
return 1;
case 0x233c3:
*indexout = index + 1;
return 1;
case 0x233d5:
*indexout = index + 1;
return 1;
case 0x2346d:
*indexout = index + 1;
return 1;
case 0x236a3:
*indexout = index + 1;
return 1;
case 0x238a7:
*indexout = index + 1;
return 1;
case 0x23a8d:
*indexout = index + 1;
return 1;
case 0x23afa:
*indexout = index + 1;
return 1;
case 0x23cbc:
*indexout = index + 1;
return 1;
case 0x23d1e:
*indexout = index + 1;
return 1;
case 0x23ed1:
*indexout = index + 1;
return 1;
case 0x23f5e:
*indexout = index + 1;
return 1;
case 0x23f8e:
*indexout = index + 1;
return 1;
case 0x24263:
*indexout = index + 1;
return 1;
case 0x242ee:
*indexout = index + 1;
return 1;
case 0x243ab:
*indexout = index + 1;
return 1;
case 0x24608:
*indexout = index + 1;
return 1;
case 0x24735:
*indexout = index + 1;
return 1;
case 0x24814:
*indexout = index + 1;
return 1;
case 0x24c36:
*indexout = index + 1;
return 1;
case 0x24c92:
*indexout = index + 1;
return 1;
case 0x24fa1:
*indexout = index + 1;
return 1;
case 0x24fb8:
*indexout = index + 1;
return 1;
case 0x25044:
*indexout = index + 1;
return 1;
case 0x250f2:
*indexout = index + 1;
return 1;
case 0x250f3:
*indexout = index + 1;
return 1;
case 0x25119:
*indexout = index + 1;
return 1;
case 0x25133:
*indexout = index + 1;
return 1;
case 0x25249:
*indexout = index + 1;
return 1;
case 0x2541d:
*indexout = index + 1;
return 1;
case 0x25626:
*indexout = index + 1;
return 1;
case 0x2569a:
*indexout = index + 1;
return 1;
case 0x256c5:
*indexout = index + 1;
return 1;
case 0x2597c:
*indexout = index + 1;
return 1;
case 0x25aa7:
*indexout = index + 1;
return 1;
case 0x25bab:
*indexout = index + 1;
return 1;
case 0x25c80:
*indexout = index + 1;
return 1;
case 0x25cd0:
*indexout = index + 1;
return 1;
case 0x25f86:
*indexout = index + 1;
return 1;
case 0x261da:
*indexout = index + 1;
return 1;
case 0x26228:
*indexout = index + 1;
return 1;
case 0x26247:
*indexout = index + 1;
return 1;
case 0x262d9:
*indexout = index + 1;
return 1;
case 0x2633e:
*indexout = index + 1;
return 1;
case 0x264da:
*indexout = index + 1;
return 1;
case 0x26523:
*indexout = index + 1;
return 1;
case 0x265a8:
*indexout = index + 1;
return 1;
case 0x267a7:
*indexout = index + 1;
return 1;
case 0x267b5:
*indexout = index + 1;
return 1;
case 0x26b3c:
*indexout = index + 1;
return 1;
case 0x26c36:
*indexout = index + 1;
return 1;
case 0x26cd5:
*indexout = index + 1;
return 1;
case 0x26d6b:
*indexout = index + 1;
return 1;
case 0x26f2c:
*indexout = index + 1;
return 1;
case 0x26fb1:
*indexout = index + 1;
return 1;
case 0x270d2:
*indexout = index + 1;
return 1;
case 0x273ca:
*indexout = index + 1;
return 1;
case 0x27667:
*indexout = index + 1;
return 1;
case 0x278ae:
*indexout = index + 1;
return 1;
case 0x27966:
*indexout = index + 1;
return 1;
case 0x27ca8:
*indexout = index + 1;
return 1;
case 0x27ed3:
*indexout = index + 1;
return 1;
case 0x27f2f:
*indexout = index + 1;
return 1;
case 0x285d2:
*indexout = index + 1;
return 1;
case 0x285ed:
*indexout = index + 1;
return 1;
case 0x2872e:
*indexout = index + 1;
return 1;
case 0x28bfa:
*indexout = index + 1;
return 1;
case 0x28d77:
*indexout = index + 1;
return 1;
case 0x29145:
*indexout = index + 1;
return 1;
case 0x291df:
*indexout = index + 1;
return 1;
case 0x2921a:
*indexout = index + 1;
return 1;
case 0x2940a:
*indexout = index + 1;
return 1;
case 0x29496:
*indexout = index + 1;
return 1;
case 0x295b6:
*indexout = index + 1;
return 1;
case 0x29b30:
*indexout = index + 1;
return 1;
case 0x2a0ce:
*indexout = index + 1;
return 1;
case 0x2a105:
*indexout = index + 1;
return 1;
case 0x2a20e:
*indexout = index + 1;
return 1;
case 0x2a291:
*indexout = index + 1;
return 1;
case 0x2a392:
*indexout = index + 1;
return 1;
case 0x2a600:
*indexout = index + 1;
return 1;
default:
*indexout = index +1;
return 0;
}
}
*indexout = index +1;
return 0;
}
