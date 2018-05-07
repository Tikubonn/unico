#include <unico.h>
#include <stddef.h>

int normalize_nfkc_unicos_manually_in (size_t index, size_t end, unicos *uniout, size_t *indexout){
if (0 <= end - index){
switch (get_unicos(index +0, uniout)){
case 0xa0: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa8: {
unico data[] = {0x20, 0x308};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaa: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaf: {
unico data[] = {0x20, 0x304};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb2: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb3: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb4: {
unico data[] = {0x20, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb5: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb8: {
unico data[] = {0x20, 0x327};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb9: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xba: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xbc: {
unico data[] = {0x31, 0x2044, 0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xbd: {
unico data[] = {0x31, 0x2044, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xbe: {
unico data[] = {0x33, 0x2044, 0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x132: {
unico data[] = {0x49, 0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x133: {
unico data[] = {0x69, 0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f: {
unico data[] = {0x4c, 0xb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x140: {
unico data[] = {0x6c, 0xb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x149: {
unico data[] = {0x2bc, 0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17f: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c4: {
unico data[] = {0x44, 0x17d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c5: {
unico data[] = {0x44, 0x17e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c6: {
unico data[] = {0x64, 0x17e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c7: {
unico data[] = {0x4c, 0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c8: {
unico data[] = {0x4c, 0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c9: {
unico data[] = {0x6c, 0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ca: {
unico data[] = {0x4e, 0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1cb: {
unico data[] = {0x4e, 0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1cc: {
unico data[] = {0x6e, 0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1: {
unico data[] = {0x44, 0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2: {
unico data[] = {0x44, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3: {
unico data[] = {0x64, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b0: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b1: {
unico data[] = {0x266};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b2: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b3: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b4: {
unico data[] = {0x279};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b5: {
unico data[] = {0x27b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b6: {
unico data[] = {0x281};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b7: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2b8: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d8: {
unico data[] = {0x20, 0x306};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d9: {
unico data[] = {0x20, 0x307};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2da: {
unico data[] = {0x20, 0x30a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2db: {
unico data[] = {0x20, 0x328};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2dc: {
unico data[] = {0x20, 0x303};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2dd: {
unico data[] = {0x20, 0x30b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2e0: {
unico data[] = {0x263};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2e1: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2e2: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2e3: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2e4: {
unico data[] = {0x295};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x340: {
unico data[] = {0x300};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x341: {
unico data[] = {0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x343: {
unico data[] = {0x313};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x344: {
unico data[] = {0x308, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x374: {
unico data[] = {0x2b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37a: {
unico data[] = {0x20, 0x345};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37e: {
unico data[] = {0x3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x384: {
unico data[] = {0x20, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x385: {
unico data[] = {0x20, 0x308, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x387: {
unico data[] = {0xb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d0: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d1: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d2: {
unico data[] = {0x3a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d3: {
unico data[] = {0x38e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d4: {
unico data[] = {0x3ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d5: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d6: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f0: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f1: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f2: {
unico data[] = {0x3c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f4: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f5: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f9: {
unico data[] = {0x3a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x587: {
unico data[] = {0x565, 0x582};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x675: {
unico data[] = {0x627, 0x674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x676: {
unico data[] = {0x648, 0x674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x677: {
unico data[] = {0x6c7, 0x674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x678: {
unico data[] = {0x64a, 0x674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x958: {
unico data[] = {0x915, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x959: {
unico data[] = {0x916, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95a: {
unico data[] = {0x917, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95b: {
unico data[] = {0x91c, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95c: {
unico data[] = {0x921, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95d: {
unico data[] = {0x922, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95e: {
unico data[] = {0x92b, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95f: {
unico data[] = {0x92f, 0x93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x9dc: {
unico data[] = {0x9a1, 0x9bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x9dd: {
unico data[] = {0x9a2, 0x9bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x9df: {
unico data[] = {0x9af, 0x9bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa33: {
unico data[] = {0xa32, 0xa3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa36: {
unico data[] = {0xa38, 0xa3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa59: {
unico data[] = {0xa16, 0xa3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa5a: {
unico data[] = {0xa17, 0xa3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa5b: {
unico data[] = {0xa1c, 0xa3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa5e: {
unico data[] = {0xa2b, 0xa3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb5c: {
unico data[] = {0xb21, 0xb3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb5d: {
unico data[] = {0xb22, 0xb3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xeb3: {
unico data[] = {0xecd, 0xeb2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xedc: {
unico data[] = {0xeab, 0xe99};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xedd: {
unico data[] = {0xeab, 0xea1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf0c: {
unico data[] = {0xf0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf43: {
unico data[] = {0xf42, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf4d: {
unico data[] = {0xf4c, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf52: {
unico data[] = {0xf51, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf57: {
unico data[] = {0xf56, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf5c: {
unico data[] = {0xf5b, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf69: {
unico data[] = {0xf40, 0xfb5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf73: {
unico data[] = {0xf71, 0xf72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf75: {
unico data[] = {0xf71, 0xf74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf76: {
unico data[] = {0xfb2, 0xf80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf77: {
unico data[] = {0xfb2, 0xf71, 0xf80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf78: {
unico data[] = {0xfb3, 0xf80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf79: {
unico data[] = {0xfb3, 0xf71, 0xf80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf81: {
unico data[] = {0xf71, 0xf80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93: {
unico data[] = {0xf92, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d: {
unico data[] = {0xf9c, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2: {
unico data[] = {0xfa1, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7: {
unico data[] = {0xfa6, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac: {
unico data[] = {0xfab, 0xfb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9: {
unico data[] = {0xf90, 0xfb5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10fc: {
unico data[] = {0x10dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d2c: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d2d: {
unico data[] = {0xc6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d2e: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d30: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d31: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d32: {
unico data[] = {0x18e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d33: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d34: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d35: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d36: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d37: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d38: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d39: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d3a: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d3c: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d3d: {
unico data[] = {0x222};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d3e: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d3f: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44: {
unico data[] = {0x250};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45: {
unico data[] = {0x251};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46: {
unico data[] = {0x1d02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d49: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4a: {
unico data[] = {0x259};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b: {
unico data[] = {0x25b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c: {
unico data[] = {0x25c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d50: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d51: {
unico data[] = {0x14b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d53: {
unico data[] = {0x254};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54: {
unico data[] = {0x1d16};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55: {
unico data[] = {0x1d17};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59: {
unico data[] = {0x1d1d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a: {
unico data[] = {0x26f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c: {
unico data[] = {0x1d25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78: {
unico data[] = {0x43d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d9b: {
unico data[] = {0x252};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d9c: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d9d: {
unico data[] = {0x255};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d9e: {
unico data[] = {0xf0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d9f: {
unico data[] = {0x25c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da0: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da1: {
unico data[] = {0x25f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da2: {
unico data[] = {0x261};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da3: {
unico data[] = {0x265};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da4: {
unico data[] = {0x268};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da5: {
unico data[] = {0x269};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da6: {
unico data[] = {0x26a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da7: {
unico data[] = {0x1d7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da8: {
unico data[] = {0x29d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da9: {
unico data[] = {0x26d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1daa: {
unico data[] = {0x1d85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dab: {
unico data[] = {0x29f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dac: {
unico data[] = {0x271};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dad: {
unico data[] = {0x270};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dae: {
unico data[] = {0x272};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1daf: {
unico data[] = {0x273};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db0: {
unico data[] = {0x274};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db1: {
unico data[] = {0x275};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db2: {
unico data[] = {0x278};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db3: {
unico data[] = {0x282};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db4: {
unico data[] = {0x283};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db5: {
unico data[] = {0x1ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db6: {
unico data[] = {0x289};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db7: {
unico data[] = {0x28a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db8: {
unico data[] = {0x1d1c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db9: {
unico data[] = {0x28b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dba: {
unico data[] = {0x28c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dbb: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dbc: {
unico data[] = {0x290};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dbd: {
unico data[] = {0x291};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dbe: {
unico data[] = {0x292};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dbf: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e9a: {
unico data[] = {0x61, 0x2be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e9b: {
unico data[] = {0x1e61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f71: {
unico data[] = {0x3ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f73: {
unico data[] = {0x3ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f75: {
unico data[] = {0x3ae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f77: {
unico data[] = {0x3af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f79: {
unico data[] = {0x3cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7b: {
unico data[] = {0x3cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7d: {
unico data[] = {0x3ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbb: {
unico data[] = {0x386};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbd: {
unico data[] = {0x20, 0x313};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbe: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbf: {
unico data[] = {0x20, 0x313};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc0: {
unico data[] = {0x20, 0x342};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc1: {
unico data[] = {0x20, 0x308, 0x342};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc9: {
unico data[] = {0x388};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fcb: {
unico data[] = {0x389};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fcd: {
unico data[] = {0x20, 0x313, 0x300};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fce: {
unico data[] = {0x20, 0x313, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fcf: {
unico data[] = {0x20, 0x313, 0x342};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd3: {
unico data[] = {0x390};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fdb: {
unico data[] = {0x38a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fdd: {
unico data[] = {0x20, 0x314, 0x300};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fde: {
unico data[] = {0x20, 0x314, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fdf: {
unico data[] = {0x20, 0x314, 0x342};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe3: {
unico data[] = {0x3b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1feb: {
unico data[] = {0x38e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fed: {
unico data[] = {0x20, 0x308, 0x300};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fee: {
unico data[] = {0x20, 0x308, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fef: {
unico data[] = {0x60};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff9: {
unico data[] = {0x38c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffb: {
unico data[] = {0x38f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffd: {
unico data[] = {0x20, 0x301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffe: {
unico data[] = {0x20, 0x314};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2000: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2001: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2002: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2003: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2004: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2005: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2006: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2007: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2008: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2009: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x200a: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2011: {
unico data[] = {0x2010};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2017: {
unico data[] = {0x20, 0x333};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2024: {
unico data[] = {0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2025: {
unico data[] = {0x2e, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2026: {
unico data[] = {0x2e, 0x2e, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x202f: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2033: {
unico data[] = {0x2032, 0x2032};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2034: {
unico data[] = {0x2032, 0x2032, 0x2032};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2036: {
unico data[] = {0x2035, 0x2035};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2037: {
unico data[] = {0x2035, 0x2035, 0x2035};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x203c: {
unico data[] = {0x21, 0x21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x203e: {
unico data[] = {0x20, 0x305};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2047: {
unico data[] = {0x3f, 0x3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2048: {
unico data[] = {0x3f, 0x21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2049: {
unico data[] = {0x21, 0x3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2057: {
unico data[] = {0x2032, 0x2032, 0x2032, 0x2032};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x205f: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2070: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2071: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2074: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2075: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2076: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2077: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2078: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2079: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207a: {
unico data[] = {0x2b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207b: {
unico data[] = {0x2212};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207c: {
unico data[] = {0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207d: {
unico data[] = {0x28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207e: {
unico data[] = {0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207f: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2080: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2081: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2082: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2083: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2084: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2085: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2086: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2087: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2088: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2089: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x208a: {
unico data[] = {0x2b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x208b: {
unico data[] = {0x2212};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x208c: {
unico data[] = {0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x208d: {
unico data[] = {0x28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x208e: {
unico data[] = {0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2090: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2091: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2092: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2093: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2094: {
unico data[] = {0x259};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2095: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2096: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2097: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2098: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2099: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x209a: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x209b: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x209c: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20a8: {
unico data[] = {0x52, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2100: {
unico data[] = {0x61, 0x2f, 0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2101: {
unico data[] = {0x61, 0x2f, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2102: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2103: {
unico data[] = {0xb0, 0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2105: {
unico data[] = {0x63, 0x2f, 0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2106: {
unico data[] = {0x63, 0x2f, 0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2107: {
unico data[] = {0x190};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2109: {
unico data[] = {0xb0, 0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210a: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210b: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210c: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210d: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210e: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210f: {
unico data[] = {0x127};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2110: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2111: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2112: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2113: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2115: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2116: {
unico data[] = {0x4e, 0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2119: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x211a: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x211b: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x211c: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x211d: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2120: {
unico data[] = {0x53, 0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2121: {
unico data[] = {0x54, 0x45, 0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2122: {
unico data[] = {0x54, 0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2124: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2126: {
unico data[] = {0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2128: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212a: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212b: {
unico data[] = {0xc5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212c: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212d: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212f: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2130: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2131: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2133: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2134: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2135: {
unico data[] = {0x5d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2136: {
unico data[] = {0x5d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2137: {
unico data[] = {0x5d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2138: {
unico data[] = {0x5d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2139: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x213b: {
unico data[] = {0x46, 0x41, 0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x213c: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x213d: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x213e: {
unico data[] = {0x393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x213f: {
unico data[] = {0x3a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2140: {
unico data[] = {0x2211};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2145: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2146: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2147: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2148: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2149: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2150: {
unico data[] = {0x31, 0x2044, 0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2151: {
unico data[] = {0x31, 0x2044, 0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2152: {
unico data[] = {0x31, 0x2044, 0x31, 0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2153: {
unico data[] = {0x31, 0x2044, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2154: {
unico data[] = {0x32, 0x2044, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2155: {
unico data[] = {0x31, 0x2044, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2156: {
unico data[] = {0x32, 0x2044, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2157: {
unico data[] = {0x33, 0x2044, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2158: {
unico data[] = {0x34, 0x2044, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2159: {
unico data[] = {0x31, 0x2044, 0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215a: {
unico data[] = {0x35, 0x2044, 0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215b: {
unico data[] = {0x31, 0x2044, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215c: {
unico data[] = {0x33, 0x2044, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215d: {
unico data[] = {0x35, 0x2044, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215e: {
unico data[] = {0x37, 0x2044, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215f: {
unico data[] = {0x31, 0x2044};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2160: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2161: {
unico data[] = {0x49, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2162: {
unico data[] = {0x49, 0x49, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2163: {
unico data[] = {0x49, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2164: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2165: {
unico data[] = {0x56, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2166: {
unico data[] = {0x56, 0x49, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2167: {
unico data[] = {0x56, 0x49, 0x49, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2168: {
unico data[] = {0x49, 0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2169: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216a: {
unico data[] = {0x58, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216b: {
unico data[] = {0x58, 0x49, 0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216c: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216d: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216e: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216f: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2170: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2171: {
unico data[] = {0x69, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2172: {
unico data[] = {0x69, 0x69, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2173: {
unico data[] = {0x69, 0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2174: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2175: {
unico data[] = {0x76, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2176: {
unico data[] = {0x76, 0x69, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2177: {
unico data[] = {0x76, 0x69, 0x69, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2178: {
unico data[] = {0x69, 0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2179: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217a: {
unico data[] = {0x78, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217b: {
unico data[] = {0x78, 0x69, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217c: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217d: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217e: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217f: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2189: {
unico data[] = {0x30, 0x2044, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x222c: {
unico data[] = {0x222b, 0x222b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x222d: {
unico data[] = {0x222b, 0x222b, 0x222b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x222f: {
unico data[] = {0x222e, 0x222e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2230: {
unico data[] = {0x222e, 0x222e, 0x222e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2329: {
unico data[] = {0x3008};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x232a: {
unico data[] = {0x3009};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2460: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2461: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2462: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2463: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2464: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2465: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2466: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2467: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2468: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2469: {
unico data[] = {0x31, 0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246a: {
unico data[] = {0x31, 0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246b: {
unico data[] = {0x31, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246c: {
unico data[] = {0x31, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246d: {
unico data[] = {0x31, 0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246e: {
unico data[] = {0x31, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246f: {
unico data[] = {0x31, 0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2470: {
unico data[] = {0x31, 0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2471: {
unico data[] = {0x31, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2472: {
unico data[] = {0x31, 0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2473: {
unico data[] = {0x32, 0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2474: {
unico data[] = {0x28, 0x31, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2475: {
unico data[] = {0x28, 0x32, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2476: {
unico data[] = {0x28, 0x33, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2477: {
unico data[] = {0x28, 0x34, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2478: {
unico data[] = {0x28, 0x35, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2479: {
unico data[] = {0x28, 0x36, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247a: {
unico data[] = {0x28, 0x37, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247b: {
unico data[] = {0x28, 0x38, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247c: {
unico data[] = {0x28, 0x39, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247d: {
unico data[] = {0x28, 0x31, 0x30, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247e: {
unico data[] = {0x28, 0x31, 0x31, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247f: {
unico data[] = {0x28, 0x31, 0x32, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2480: {
unico data[] = {0x28, 0x31, 0x33, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2481: {
unico data[] = {0x28, 0x31, 0x34, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2482: {
unico data[] = {0x28, 0x31, 0x35, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2483: {
unico data[] = {0x28, 0x31, 0x36, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2484: {
unico data[] = {0x28, 0x31, 0x37, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2485: {
unico data[] = {0x28, 0x31, 0x38, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2486: {
unico data[] = {0x28, 0x31, 0x39, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2487: {
unico data[] = {0x28, 0x32, 0x30, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2488: {
unico data[] = {0x31, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2489: {
unico data[] = {0x32, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248a: {
unico data[] = {0x33, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248b: {
unico data[] = {0x34, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248c: {
unico data[] = {0x35, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248d: {
unico data[] = {0x36, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248e: {
unico data[] = {0x37, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248f: {
unico data[] = {0x38, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2490: {
unico data[] = {0x39, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2491: {
unico data[] = {0x31, 0x30, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2492: {
unico data[] = {0x31, 0x31, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2493: {
unico data[] = {0x31, 0x32, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2494: {
unico data[] = {0x31, 0x33, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2495: {
unico data[] = {0x31, 0x34, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2496: {
unico data[] = {0x31, 0x35, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2497: {
unico data[] = {0x31, 0x36, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2498: {
unico data[] = {0x31, 0x37, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2499: {
unico data[] = {0x31, 0x38, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249a: {
unico data[] = {0x31, 0x39, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249b: {
unico data[] = {0x32, 0x30, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249c: {
unico data[] = {0x28, 0x61, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249d: {
unico data[] = {0x28, 0x62, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249e: {
unico data[] = {0x28, 0x63, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249f: {
unico data[] = {0x28, 0x64, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a0: {
unico data[] = {0x28, 0x65, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a1: {
unico data[] = {0x28, 0x66, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a2: {
unico data[] = {0x28, 0x67, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a3: {
unico data[] = {0x28, 0x68, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a4: {
unico data[] = {0x28, 0x69, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a5: {
unico data[] = {0x28, 0x6a, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a6: {
unico data[] = {0x28, 0x6b, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a7: {
unico data[] = {0x28, 0x6c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a8: {
unico data[] = {0x28, 0x6d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a9: {
unico data[] = {0x28, 0x6e, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24aa: {
unico data[] = {0x28, 0x6f, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ab: {
unico data[] = {0x28, 0x70, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ac: {
unico data[] = {0x28, 0x71, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ad: {
unico data[] = {0x28, 0x72, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ae: {
unico data[] = {0x28, 0x73, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24af: {
unico data[] = {0x28, 0x74, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b0: {
unico data[] = {0x28, 0x75, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b1: {
unico data[] = {0x28, 0x76, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b2: {
unico data[] = {0x28, 0x77, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b3: {
unico data[] = {0x28, 0x78, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b4: {
unico data[] = {0x28, 0x79, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b5: {
unico data[] = {0x28, 0x7a, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b6: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b7: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b8: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b9: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ba: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bb: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bc: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bd: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24be: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bf: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c0: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c1: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c2: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c3: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c4: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c5: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c6: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c7: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c8: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c9: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ca: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cb: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cc: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cd: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ce: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cf: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d0: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d1: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d2: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d3: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d4: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d5: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d6: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d7: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d8: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d9: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24da: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24db: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24dc: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24dd: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24de: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24df: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e0: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e1: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e2: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e3: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e4: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e5: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e6: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e7: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e8: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e9: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ea: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2a0c: {
unico data[] = {0x222b, 0x222b, 0x222b, 0x222b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2a74: {
unico data[] = {0x3a, 0x3a, 0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2a75: {
unico data[] = {0x3d, 0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2a76: {
unico data[] = {0x3d, 0x3d, 0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2adc: {
unico data[] = {0x2add, 0x338};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c7c: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c7d: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d6f: {
unico data[] = {0x2d61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2e9f: {
unico data[] = {0x6bcd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ef3: {
unico data[] = {0x9f9f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f00: {
unico data[] = {0x4e00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f01: {
unico data[] = {0x4e28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f02: {
unico data[] = {0x4e36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f03: {
unico data[] = {0x4e3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f04: {
unico data[] = {0x4e59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f05: {
unico data[] = {0x4e85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f06: {
unico data[] = {0x4e8c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f07: {
unico data[] = {0x4ea0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f08: {
unico data[] = {0x4eba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f09: {
unico data[] = {0x513f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f0a: {
unico data[] = {0x5165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f0b: {
unico data[] = {0x516b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f0c: {
unico data[] = {0x5182};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f0d: {
unico data[] = {0x5196};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f0e: {
unico data[] = {0x51ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f0f: {
unico data[] = {0x51e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f10: {
unico data[] = {0x51f5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f11: {
unico data[] = {0x5200};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f12: {
unico data[] = {0x529b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f13: {
unico data[] = {0x52f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f14: {
unico data[] = {0x5315};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f15: {
unico data[] = {0x531a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f16: {
unico data[] = {0x5338};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f17: {
unico data[] = {0x5341};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f18: {
unico data[] = {0x535c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f19: {
unico data[] = {0x5369};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f1a: {
unico data[] = {0x5382};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f1b: {
unico data[] = {0x53b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f1c: {
unico data[] = {0x53c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f1d: {
unico data[] = {0x53e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f1e: {
unico data[] = {0x56d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f1f: {
unico data[] = {0x571f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f20: {
unico data[] = {0x58eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f21: {
unico data[] = {0x5902};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f22: {
unico data[] = {0x590a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f23: {
unico data[] = {0x5915};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f24: {
unico data[] = {0x5927};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f25: {
unico data[] = {0x5973};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f26: {
unico data[] = {0x5b50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f27: {
unico data[] = {0x5b80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f28: {
unico data[] = {0x5bf8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f29: {
unico data[] = {0x5c0f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f2a: {
unico data[] = {0x5c22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f2b: {
unico data[] = {0x5c38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f2c: {
unico data[] = {0x5c6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f2d: {
unico data[] = {0x5c71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f2e: {
unico data[] = {0x5ddb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f2f: {
unico data[] = {0x5de5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f30: {
unico data[] = {0x5df1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f31: {
unico data[] = {0x5dfe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f32: {
unico data[] = {0x5e72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f33: {
unico data[] = {0x5e7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f34: {
unico data[] = {0x5e7f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f35: {
unico data[] = {0x5ef4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f36: {
unico data[] = {0x5efe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f37: {
unico data[] = {0x5f0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f38: {
unico data[] = {0x5f13};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f39: {
unico data[] = {0x5f50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f3a: {
unico data[] = {0x5f61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f3b: {
unico data[] = {0x5f73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f3c: {
unico data[] = {0x5fc3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f3d: {
unico data[] = {0x6208};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f3e: {
unico data[] = {0x6236};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f3f: {
unico data[] = {0x624b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f40: {
unico data[] = {0x652f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f41: {
unico data[] = {0x6534};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f42: {
unico data[] = {0x6587};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f43: {
unico data[] = {0x6597};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f44: {
unico data[] = {0x65a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f45: {
unico data[] = {0x65b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f46: {
unico data[] = {0x65e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f47: {
unico data[] = {0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f48: {
unico data[] = {0x66f0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f49: {
unico data[] = {0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f4a: {
unico data[] = {0x6728};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f4b: {
unico data[] = {0x6b20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f4c: {
unico data[] = {0x6b62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f4d: {
unico data[] = {0x6b79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f4e: {
unico data[] = {0x6bb3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f4f: {
unico data[] = {0x6bcb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f50: {
unico data[] = {0x6bd4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f51: {
unico data[] = {0x6bdb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f52: {
unico data[] = {0x6c0f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f53: {
unico data[] = {0x6c14};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f54: {
unico data[] = {0x6c34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f55: {
unico data[] = {0x706b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f56: {
unico data[] = {0x722a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f57: {
unico data[] = {0x7236};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f58: {
unico data[] = {0x723b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f59: {
unico data[] = {0x723f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f5a: {
unico data[] = {0x7247};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f5b: {
unico data[] = {0x7259};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f5c: {
unico data[] = {0x725b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f5d: {
unico data[] = {0x72ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f5e: {
unico data[] = {0x7384};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f5f: {
unico data[] = {0x7389};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f60: {
unico data[] = {0x74dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f61: {
unico data[] = {0x74e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f62: {
unico data[] = {0x7518};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f63: {
unico data[] = {0x751f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f64: {
unico data[] = {0x7528};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f65: {
unico data[] = {0x7530};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f66: {
unico data[] = {0x758b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f67: {
unico data[] = {0x7592};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f68: {
unico data[] = {0x7676};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f69: {
unico data[] = {0x767d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f6a: {
unico data[] = {0x76ae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f6b: {
unico data[] = {0x76bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f6c: {
unico data[] = {0x76ee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f6d: {
unico data[] = {0x77db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f6e: {
unico data[] = {0x77e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f6f: {
unico data[] = {0x77f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f70: {
unico data[] = {0x793a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f71: {
unico data[] = {0x79b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f72: {
unico data[] = {0x79be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f73: {
unico data[] = {0x7a74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f74: {
unico data[] = {0x7acb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f75: {
unico data[] = {0x7af9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f76: {
unico data[] = {0x7c73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f77: {
unico data[] = {0x7cf8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f78: {
unico data[] = {0x7f36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f79: {
unico data[] = {0x7f51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f7a: {
unico data[] = {0x7f8a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f7b: {
unico data[] = {0x7fbd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f7c: {
unico data[] = {0x8001};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f7d: {
unico data[] = {0x800c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f7e: {
unico data[] = {0x8012};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f7f: {
unico data[] = {0x8033};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80: {
unico data[] = {0x807f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81: {
unico data[] = {0x8089};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82: {
unico data[] = {0x81e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83: {
unico data[] = {0x81ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84: {
unico data[] = {0x81f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85: {
unico data[] = {0x81fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86: {
unico data[] = {0x820c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87: {
unico data[] = {0x821b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88: {
unico data[] = {0x821f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89: {
unico data[] = {0x826e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a: {
unico data[] = {0x8272};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b: {
unico data[] = {0x8278};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c: {
unico data[] = {0x864d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d: {
unico data[] = {0x866b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e: {
unico data[] = {0x8840};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f: {
unico data[] = {0x884c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90: {
unico data[] = {0x8863};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91: {
unico data[] = {0x897e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92: {
unico data[] = {0x898b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93: {
unico data[] = {0x89d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94: {
unico data[] = {0x8a00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95: {
unico data[] = {0x8c37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96: {
unico data[] = {0x8c46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97: {
unico data[] = {0x8c55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98: {
unico data[] = {0x8c78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99: {
unico data[] = {0x8c9d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a: {
unico data[] = {0x8d64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b: {
unico data[] = {0x8d70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c: {
unico data[] = {0x8db3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d: {
unico data[] = {0x8eab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e: {
unico data[] = {0x8eca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f: {
unico data[] = {0x8f9b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0: {
unico data[] = {0x8fb0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1: {
unico data[] = {0x8fb5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa2: {
unico data[] = {0x9091};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa3: {
unico data[] = {0x9149};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa4: {
unico data[] = {0x91c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa5: {
unico data[] = {0x91cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa6: {
unico data[] = {0x91d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa7: {
unico data[] = {0x9577};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa8: {
unico data[] = {0x9580};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa9: {
unico data[] = {0x961c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2faa: {
unico data[] = {0x96b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fab: {
unico data[] = {0x96b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fac: {
unico data[] = {0x96e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fad: {
unico data[] = {0x9751};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fae: {
unico data[] = {0x975e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2faf: {
unico data[] = {0x9762};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb0: {
unico data[] = {0x9769};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb1: {
unico data[] = {0x97cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb2: {
unico data[] = {0x97ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb3: {
unico data[] = {0x97f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb4: {
unico data[] = {0x9801};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb5: {
unico data[] = {0x98a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb6: {
unico data[] = {0x98db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb7: {
unico data[] = {0x98df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb8: {
unico data[] = {0x9996};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fb9: {
unico data[] = {0x9999};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fba: {
unico data[] = {0x99ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fbb: {
unico data[] = {0x9aa8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fbc: {
unico data[] = {0x9ad8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fbd: {
unico data[] = {0x9adf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fbe: {
unico data[] = {0x9b25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fbf: {
unico data[] = {0x9b2f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc0: {
unico data[] = {0x9b32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc1: {
unico data[] = {0x9b3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc2: {
unico data[] = {0x9b5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc3: {
unico data[] = {0x9ce5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc4: {
unico data[] = {0x9e75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc5: {
unico data[] = {0x9e7f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc6: {
unico data[] = {0x9ea5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc7: {
unico data[] = {0x9ebb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc8: {
unico data[] = {0x9ec3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fc9: {
unico data[] = {0x9ecd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fca: {
unico data[] = {0x9ed1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fcb: {
unico data[] = {0x9ef9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fcc: {
unico data[] = {0x9efd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fcd: {
unico data[] = {0x9f0e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fce: {
unico data[] = {0x9f13};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fcf: {
unico data[] = {0x9f20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fd0: {
unico data[] = {0x9f3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fd1: {
unico data[] = {0x9f4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fd2: {
unico data[] = {0x9f52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fd3: {
unico data[] = {0x9f8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fd4: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fd5: {
unico data[] = {0x9fa0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3000: {
unico data[] = {0x20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3036: {
unico data[] = {0x3012};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3038: {
unico data[] = {0x5341};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3039: {
unico data[] = {0x5344};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x303a: {
unico data[] = {0x5345};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x309b: {
unico data[] = {0x20, 0x3099};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x309c: {
unico data[] = {0x20, 0x309a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x309f: {
unico data[] = {0x3088, 0x308a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x30ff: {
unico data[] = {0x30b3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3131: {
unico data[] = {0x1100};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3132: {
unico data[] = {0x1101};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3133: {
unico data[] = {0x11aa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3134: {
unico data[] = {0x1102};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3135: {
unico data[] = {0x11ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3136: {
unico data[] = {0x11ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3137: {
unico data[] = {0x1103};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3138: {
unico data[] = {0x1104};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3139: {
unico data[] = {0x1105};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x313a: {
unico data[] = {0x11b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x313b: {
unico data[] = {0x11b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x313c: {
unico data[] = {0x11b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x313d: {
unico data[] = {0x11b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x313e: {
unico data[] = {0x11b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x313f: {
unico data[] = {0x11b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3140: {
unico data[] = {0x111a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3141: {
unico data[] = {0x1106};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3142: {
unico data[] = {0x1107};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3143: {
unico data[] = {0x1108};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3144: {
unico data[] = {0x1121};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3145: {
unico data[] = {0x1109};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3146: {
unico data[] = {0x110a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3147: {
unico data[] = {0x110b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3148: {
unico data[] = {0x110c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3149: {
unico data[] = {0x110d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x314a: {
unico data[] = {0x110e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x314b: {
unico data[] = {0x110f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x314c: {
unico data[] = {0x1110};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x314d: {
unico data[] = {0x1111};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x314e: {
unico data[] = {0x1112};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x314f: {
unico data[] = {0x1161};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3150: {
unico data[] = {0x1162};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3151: {
unico data[] = {0x1163};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3152: {
unico data[] = {0x1164};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3153: {
unico data[] = {0x1165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3154: {
unico data[] = {0x1166};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3155: {
unico data[] = {0x1167};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3156: {
unico data[] = {0x1168};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3157: {
unico data[] = {0x1169};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3158: {
unico data[] = {0x116a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3159: {
unico data[] = {0x116b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x315a: {
unico data[] = {0x116c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x315b: {
unico data[] = {0x116d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x315c: {
unico data[] = {0x116e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x315d: {
unico data[] = {0x116f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x315e: {
unico data[] = {0x1170};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x315f: {
unico data[] = {0x1171};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3160: {
unico data[] = {0x1172};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3161: {
unico data[] = {0x1173};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3162: {
unico data[] = {0x1174};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3163: {
unico data[] = {0x1175};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3164: {
unico data[] = {0x1160};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3165: {
unico data[] = {0x1114};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3166: {
unico data[] = {0x1115};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3167: {
unico data[] = {0x11c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3168: {
unico data[] = {0x11c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3169: {
unico data[] = {0x11cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x316a: {
unico data[] = {0x11ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x316b: {
unico data[] = {0x11d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x316c: {
unico data[] = {0x11d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x316d: {
unico data[] = {0x11d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x316e: {
unico data[] = {0x111c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x316f: {
unico data[] = {0x11dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3170: {
unico data[] = {0x11df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3171: {
unico data[] = {0x111d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3172: {
unico data[] = {0x111e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3173: {
unico data[] = {0x1120};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3174: {
unico data[] = {0x1122};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3175: {
unico data[] = {0x1123};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3176: {
unico data[] = {0x1127};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3177: {
unico data[] = {0x1129};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3178: {
unico data[] = {0x112b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3179: {
unico data[] = {0x112c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x317a: {
unico data[] = {0x112d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x317b: {
unico data[] = {0x112e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x317c: {
unico data[] = {0x112f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x317d: {
unico data[] = {0x1132};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x317e: {
unico data[] = {0x1136};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x317f: {
unico data[] = {0x1140};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3180: {
unico data[] = {0x1147};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3181: {
unico data[] = {0x114c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3182: {
unico data[] = {0x11f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3183: {
unico data[] = {0x11f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3184: {
unico data[] = {0x1157};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3185: {
unico data[] = {0x1158};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3186: {
unico data[] = {0x1159};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3187: {
unico data[] = {0x1184};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3188: {
unico data[] = {0x1185};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3189: {
unico data[] = {0x1188};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x318a: {
unico data[] = {0x1191};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x318b: {
unico data[] = {0x1192};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x318c: {
unico data[] = {0x1194};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x318d: {
unico data[] = {0x119e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x318e: {
unico data[] = {0x11a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3192: {
unico data[] = {0x4e00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3193: {
unico data[] = {0x4e8c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3194: {
unico data[] = {0x4e09};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3195: {
unico data[] = {0x56db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3196: {
unico data[] = {0x4e0a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3197: {
unico data[] = {0x4e2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3198: {
unico data[] = {0x4e0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3199: {
unico data[] = {0x7532};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x319a: {
unico data[] = {0x4e59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x319b: {
unico data[] = {0x4e19};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x319c: {
unico data[] = {0x4e01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x319d: {
unico data[] = {0x5929};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x319e: {
unico data[] = {0x5730};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x319f: {
unico data[] = {0x4eba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3200: {
unico data[] = {0x28, 0x1100, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3201: {
unico data[] = {0x28, 0x1102, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3202: {
unico data[] = {0x28, 0x1103, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3203: {
unico data[] = {0x28, 0x1105, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3204: {
unico data[] = {0x28, 0x1106, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3205: {
unico data[] = {0x28, 0x1107, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3206: {
unico data[] = {0x28, 0x1109, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3207: {
unico data[] = {0x28, 0x110b, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3208: {
unico data[] = {0x28, 0x110c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3209: {
unico data[] = {0x28, 0x110e, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x320a: {
unico data[] = {0x28, 0x110f, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x320b: {
unico data[] = {0x28, 0x1110, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x320c: {
unico data[] = {0x28, 0x1111, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x320d: {
unico data[] = {0x28, 0x1112, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x320e: {
unico data[] = {0x28, 0xac00, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x320f: {
unico data[] = {0x28, 0xb098, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3210: {
unico data[] = {0x28, 0xb2e4, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3211: {
unico data[] = {0x28, 0xb77c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3212: {
unico data[] = {0x28, 0xb9c8, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3213: {
unico data[] = {0x28, 0xbc14, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3214: {
unico data[] = {0x28, 0xc0ac, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3215: {
unico data[] = {0x28, 0xc544, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3216: {
unico data[] = {0x28, 0xc790, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3217: {
unico data[] = {0x28, 0xcc28, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3218: {
unico data[] = {0x28, 0xce74, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3219: {
unico data[] = {0x28, 0xd0c0, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x321a: {
unico data[] = {0x28, 0xd30c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x321b: {
unico data[] = {0x28, 0xd558, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x321c: {
unico data[] = {0x28, 0xc8fc, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x321d: {
unico data[] = {0x28, 0xc624, 0xc804, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x321e: {
unico data[] = {0x28, 0xc624, 0xd6c4, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3220: {
unico data[] = {0x28, 0x4e00, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3221: {
unico data[] = {0x28, 0x4e8c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3222: {
unico data[] = {0x28, 0x4e09, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3223: {
unico data[] = {0x28, 0x56db, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3224: {
unico data[] = {0x28, 0x4e94, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3225: {
unico data[] = {0x28, 0x516d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3226: {
unico data[] = {0x28, 0x4e03, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3227: {
unico data[] = {0x28, 0x516b, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3228: {
unico data[] = {0x28, 0x4e5d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3229: {
unico data[] = {0x28, 0x5341, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x322a: {
unico data[] = {0x28, 0x6708, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x322b: {
unico data[] = {0x28, 0x706b, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x322c: {
unico data[] = {0x28, 0x6c34, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x322d: {
unico data[] = {0x28, 0x6728, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x322e: {
unico data[] = {0x28, 0x91d1, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x322f: {
unico data[] = {0x28, 0x571f, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3230: {
unico data[] = {0x28, 0x65e5, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3231: {
unico data[] = {0x28, 0x682a, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3232: {
unico data[] = {0x28, 0x6709, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3233: {
unico data[] = {0x28, 0x793e, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3234: {
unico data[] = {0x28, 0x540d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3235: {
unico data[] = {0x28, 0x7279, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3236: {
unico data[] = {0x28, 0x8ca1, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3237: {
unico data[] = {0x28, 0x795d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3238: {
unico data[] = {0x28, 0x52b4, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3239: {
unico data[] = {0x28, 0x4ee3, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x323a: {
unico data[] = {0x28, 0x547c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x323b: {
unico data[] = {0x28, 0x5b66, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x323c: {
unico data[] = {0x28, 0x76e3, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x323d: {
unico data[] = {0x28, 0x4f01, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x323e: {
unico data[] = {0x28, 0x8cc7, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x323f: {
unico data[] = {0x28, 0x5354, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3240: {
unico data[] = {0x28, 0x796d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3241: {
unico data[] = {0x28, 0x4f11, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3242: {
unico data[] = {0x28, 0x81ea, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3243: {
unico data[] = {0x28, 0x81f3, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3244: {
unico data[] = {0x554f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3245: {
unico data[] = {0x5e7c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3246: {
unico data[] = {0x6587};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3247: {
unico data[] = {0x7b8f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3250: {
unico data[] = {0x50, 0x54, 0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3251: {
unico data[] = {0x32, 0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3252: {
unico data[] = {0x32, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3253: {
unico data[] = {0x32, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3254: {
unico data[] = {0x32, 0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3255: {
unico data[] = {0x32, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3256: {
unico data[] = {0x32, 0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3257: {
unico data[] = {0x32, 0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3258: {
unico data[] = {0x32, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3259: {
unico data[] = {0x32, 0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x325a: {
unico data[] = {0x33, 0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x325b: {
unico data[] = {0x33, 0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x325c: {
unico data[] = {0x33, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x325d: {
unico data[] = {0x33, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x325e: {
unico data[] = {0x33, 0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x325f: {
unico data[] = {0x33, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3260: {
unico data[] = {0x1100};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3261: {
unico data[] = {0x1102};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3262: {
unico data[] = {0x1103};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3263: {
unico data[] = {0x1105};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3264: {
unico data[] = {0x1106};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3265: {
unico data[] = {0x1107};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3266: {
unico data[] = {0x1109};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3267: {
unico data[] = {0x110b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3268: {
unico data[] = {0x110c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3269: {
unico data[] = {0x110e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x326a: {
unico data[] = {0x110f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x326b: {
unico data[] = {0x1110};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x326c: {
unico data[] = {0x1111};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x326d: {
unico data[] = {0x1112};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x326e: {
unico data[] = {0xac00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x326f: {
unico data[] = {0xb098};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3270: {
unico data[] = {0xb2e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3271: {
unico data[] = {0xb77c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3272: {
unico data[] = {0xb9c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3273: {
unico data[] = {0xbc14};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3274: {
unico data[] = {0xc0ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3275: {
unico data[] = {0xc544};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3276: {
unico data[] = {0xc790};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3277: {
unico data[] = {0xcc28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3278: {
unico data[] = {0xce74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3279: {
unico data[] = {0xd0c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x327a: {
unico data[] = {0xd30c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x327b: {
unico data[] = {0xd558};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x327c: {
unico data[] = {0xcc38, 0xace0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x327d: {
unico data[] = {0xc8fc, 0xc758};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x327e: {
unico data[] = {0xc6b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3280: {
unico data[] = {0x4e00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3281: {
unico data[] = {0x4e8c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3282: {
unico data[] = {0x4e09};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3283: {
unico data[] = {0x56db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3284: {
unico data[] = {0x4e94};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3285: {
unico data[] = {0x516d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3286: {
unico data[] = {0x4e03};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3287: {
unico data[] = {0x516b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3288: {
unico data[] = {0x4e5d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3289: {
unico data[] = {0x5341};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x328a: {
unico data[] = {0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x328b: {
unico data[] = {0x706b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x328c: {
unico data[] = {0x6c34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x328d: {
unico data[] = {0x6728};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x328e: {
unico data[] = {0x91d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x328f: {
unico data[] = {0x571f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3290: {
unico data[] = {0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3291: {
unico data[] = {0x682a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3292: {
unico data[] = {0x6709};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3293: {
unico data[] = {0x793e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3294: {
unico data[] = {0x540d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3295: {
unico data[] = {0x7279};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3296: {
unico data[] = {0x8ca1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3297: {
unico data[] = {0x795d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3298: {
unico data[] = {0x52b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3299: {
unico data[] = {0x79d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x329a: {
unico data[] = {0x7537};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x329b: {
unico data[] = {0x5973};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x329c: {
unico data[] = {0x9069};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x329d: {
unico data[] = {0x512a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x329e: {
unico data[] = {0x5370};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x329f: {
unico data[] = {0x6ce8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a0: {
unico data[] = {0x9805};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a1: {
unico data[] = {0x4f11};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a2: {
unico data[] = {0x5199};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a3: {
unico data[] = {0x6b63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a4: {
unico data[] = {0x4e0a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a5: {
unico data[] = {0x4e2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a6: {
unico data[] = {0x4e0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a7: {
unico data[] = {0x5de6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a8: {
unico data[] = {0x53f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32a9: {
unico data[] = {0x533b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32aa: {
unico data[] = {0x5b97};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ab: {
unico data[] = {0x5b66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ac: {
unico data[] = {0x76e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ad: {
unico data[] = {0x4f01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ae: {
unico data[] = {0x8cc7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32af: {
unico data[] = {0x5354};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b0: {
unico data[] = {0x591c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b1: {
unico data[] = {0x33, 0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b2: {
unico data[] = {0x33, 0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b3: {
unico data[] = {0x33, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b4: {
unico data[] = {0x33, 0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b5: {
unico data[] = {0x34, 0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b6: {
unico data[] = {0x34, 0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b7: {
unico data[] = {0x34, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b8: {
unico data[] = {0x34, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32b9: {
unico data[] = {0x34, 0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ba: {
unico data[] = {0x34, 0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32bb: {
unico data[] = {0x34, 0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32bc: {
unico data[] = {0x34, 0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32bd: {
unico data[] = {0x34, 0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32be: {
unico data[] = {0x34, 0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32bf: {
unico data[] = {0x35, 0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c0: {
unico data[] = {0x31, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c1: {
unico data[] = {0x32, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c2: {
unico data[] = {0x33, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c3: {
unico data[] = {0x34, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c4: {
unico data[] = {0x35, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c5: {
unico data[] = {0x36, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c6: {
unico data[] = {0x37, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c7: {
unico data[] = {0x38, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c8: {
unico data[] = {0x39, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32c9: {
unico data[] = {0x31, 0x30, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ca: {
unico data[] = {0x31, 0x31, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32cb: {
unico data[] = {0x31, 0x32, 0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32cc: {
unico data[] = {0x48, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32cd: {
unico data[] = {0x65, 0x72, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ce: {
unico data[] = {0x65, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32cf: {
unico data[] = {0x4c, 0x54, 0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d0: {
unico data[] = {0x30a2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d1: {
unico data[] = {0x30a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d2: {
unico data[] = {0x30a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d3: {
unico data[] = {0x30a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d4: {
unico data[] = {0x30aa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d5: {
unico data[] = {0x30ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d6: {
unico data[] = {0x30ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d7: {
unico data[] = {0x30af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d8: {
unico data[] = {0x30b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32d9: {
unico data[] = {0x30b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32da: {
unico data[] = {0x30b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32db: {
unico data[] = {0x30b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32dc: {
unico data[] = {0x30b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32dd: {
unico data[] = {0x30bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32de: {
unico data[] = {0x30bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32df: {
unico data[] = {0x30bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e0: {
unico data[] = {0x30c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e1: {
unico data[] = {0x30c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e2: {
unico data[] = {0x30c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e3: {
unico data[] = {0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e4: {
unico data[] = {0x30ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e5: {
unico data[] = {0x30cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e6: {
unico data[] = {0x30cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e7: {
unico data[] = {0x30cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e8: {
unico data[] = {0x30ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32e9: {
unico data[] = {0x30cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ea: {
unico data[] = {0x30d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32eb: {
unico data[] = {0x30d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ec: {
unico data[] = {0x30d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ed: {
unico data[] = {0x30db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ee: {
unico data[] = {0x30de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32ef: {
unico data[] = {0x30df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f0: {
unico data[] = {0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f1: {
unico data[] = {0x30e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f2: {
unico data[] = {0x30e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f3: {
unico data[] = {0x30e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f4: {
unico data[] = {0x30e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f5: {
unico data[] = {0x30e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f6: {
unico data[] = {0x30e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f7: {
unico data[] = {0x30ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f8: {
unico data[] = {0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32f9: {
unico data[] = {0x30ec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32fa: {
unico data[] = {0x30ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32fb: {
unico data[] = {0x30ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32fc: {
unico data[] = {0x30f0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32fd: {
unico data[] = {0x30f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x32fe: {
unico data[] = {0x30f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3300: {
unico data[] = {0x30a2, 0x30d1, 0x30fc, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3301: {
unico data[] = {0x30a2, 0x30eb, 0x30d5, 0x30a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3302: {
unico data[] = {0x30a2, 0x30f3, 0x30da, 0x30a2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3303: {
unico data[] = {0x30a2, 0x30fc, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3304: {
unico data[] = {0x30a4, 0x30cb, 0x30f3, 0x30b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3305: {
unico data[] = {0x30a4, 0x30f3, 0x30c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3306: {
unico data[] = {0x30a6, 0x30a9, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3307: {
unico data[] = {0x30a8, 0x30b9, 0x30af, 0x30fc, 0x30c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3308: {
unico data[] = {0x30a8, 0x30fc, 0x30ab, 0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3309: {
unico data[] = {0x30aa, 0x30f3, 0x30b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x330a: {
unico data[] = {0x30aa, 0x30fc, 0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x330b: {
unico data[] = {0x30ab, 0x30a4, 0x30ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x330c: {
unico data[] = {0x30ab, 0x30e9, 0x30c3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x330d: {
unico data[] = {0x30ab, 0x30ed, 0x30ea, 0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x330e: {
unico data[] = {0x30ac, 0x30ed, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x330f: {
unico data[] = {0x30ac, 0x30f3, 0x30de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3310: {
unico data[] = {0x30ae, 0x30ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3311: {
unico data[] = {0x30ae, 0x30cb, 0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3312: {
unico data[] = {0x30ad, 0x30e5, 0x30ea, 0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3313: {
unico data[] = {0x30ae, 0x30eb, 0x30c0, 0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3314: {
unico data[] = {0x30ad, 0x30ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3315: {
unico data[] = {0x30ad, 0x30ed, 0x30b0, 0x30e9, 0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3316: {
unico data[] = {0x30ad, 0x30ed, 0x30e1, 0x30fc, 0x30c8, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3317: {
unico data[] = {0x30ad, 0x30ed, 0x30ef, 0x30c3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3318: {
unico data[] = {0x30b0, 0x30e9, 0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3319: {
unico data[] = {0x30b0, 0x30e9, 0x30e0, 0x30c8, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x331a: {
unico data[] = {0x30af, 0x30eb, 0x30bc, 0x30a4, 0x30ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x331b: {
unico data[] = {0x30af, 0x30ed, 0x30fc, 0x30cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x331c: {
unico data[] = {0x30b1, 0x30fc, 0x30b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x331d: {
unico data[] = {0x30b3, 0x30eb, 0x30ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x331e: {
unico data[] = {0x30b3, 0x30fc, 0x30dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x331f: {
unico data[] = {0x30b5, 0x30a4, 0x30af, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3320: {
unico data[] = {0x30b5, 0x30f3, 0x30c1, 0x30fc, 0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3321: {
unico data[] = {0x30b7, 0x30ea, 0x30f3, 0x30b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3322: {
unico data[] = {0x30bb, 0x30f3, 0x30c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3323: {
unico data[] = {0x30bb, 0x30f3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3324: {
unico data[] = {0x30c0, 0x30fc, 0x30b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3325: {
unico data[] = {0x30c7, 0x30b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3326: {
unico data[] = {0x30c9, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3327: {
unico data[] = {0x30c8, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3328: {
unico data[] = {0x30ca, 0x30ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3329: {
unico data[] = {0x30ce, 0x30c3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x332a: {
unico data[] = {0x30cf, 0x30a4, 0x30c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x332b: {
unico data[] = {0x30d1, 0x30fc, 0x30bb, 0x30f3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x332c: {
unico data[] = {0x30d1, 0x30fc, 0x30c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x332d: {
unico data[] = {0x30d0, 0x30fc, 0x30ec, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x332e: {
unico data[] = {0x30d4, 0x30a2, 0x30b9, 0x30c8, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x332f: {
unico data[] = {0x30d4, 0x30af, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3330: {
unico data[] = {0x30d4, 0x30b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3331: {
unico data[] = {0x30d3, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3332: {
unico data[] = {0x30d5, 0x30a1, 0x30e9, 0x30c3, 0x30c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3333: {
unico data[] = {0x30d5, 0x30a3, 0x30fc, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3334: {
unico data[] = {0x30d6, 0x30c3, 0x30b7, 0x30a7, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3335: {
unico data[] = {0x30d5, 0x30e9, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3336: {
unico data[] = {0x30d8, 0x30af, 0x30bf, 0x30fc, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3337: {
unico data[] = {0x30da, 0x30bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3338: {
unico data[] = {0x30da, 0x30cb, 0x30d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3339: {
unico data[] = {0x30d8, 0x30eb, 0x30c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x333a: {
unico data[] = {0x30da, 0x30f3, 0x30b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x333b: {
unico data[] = {0x30da, 0x30fc, 0x30b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x333c: {
unico data[] = {0x30d9, 0x30fc, 0x30bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x333d: {
unico data[] = {0x30dd, 0x30a4, 0x30f3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x333e: {
unico data[] = {0x30dc, 0x30eb, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x333f: {
unico data[] = {0x30db, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3340: {
unico data[] = {0x30dd, 0x30f3, 0x30c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3341: {
unico data[] = {0x30db, 0x30fc, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3342: {
unico data[] = {0x30db, 0x30fc, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3343: {
unico data[] = {0x30de, 0x30a4, 0x30af, 0x30ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3344: {
unico data[] = {0x30de, 0x30a4, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3345: {
unico data[] = {0x30de, 0x30c3, 0x30cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3346: {
unico data[] = {0x30de, 0x30eb, 0x30af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3347: {
unico data[] = {0x30de, 0x30f3, 0x30b7, 0x30e7, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3348: {
unico data[] = {0x30df, 0x30af, 0x30ed, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3349: {
unico data[] = {0x30df, 0x30ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x334a: {
unico data[] = {0x30df, 0x30ea, 0x30d0, 0x30fc, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x334b: {
unico data[] = {0x30e1, 0x30ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x334c: {
unico data[] = {0x30e1, 0x30ac, 0x30c8, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x334d: {
unico data[] = {0x30e1, 0x30fc, 0x30c8, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x334e: {
unico data[] = {0x30e4, 0x30fc, 0x30c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x334f: {
unico data[] = {0x30e4, 0x30fc, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3350: {
unico data[] = {0x30e6, 0x30a2, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3351: {
unico data[] = {0x30ea, 0x30c3, 0x30c8, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3352: {
unico data[] = {0x30ea, 0x30e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3353: {
unico data[] = {0x30eb, 0x30d4, 0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3354: {
unico data[] = {0x30eb, 0x30fc, 0x30d6, 0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3355: {
unico data[] = {0x30ec, 0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3356: {
unico data[] = {0x30ec, 0x30f3, 0x30c8, 0x30b2, 0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3357: {
unico data[] = {0x30ef, 0x30c3, 0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3358: {
unico data[] = {0x30, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3359: {
unico data[] = {0x31, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x335a: {
unico data[] = {0x32, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x335b: {
unico data[] = {0x33, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x335c: {
unico data[] = {0x34, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x335d: {
unico data[] = {0x35, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x335e: {
unico data[] = {0x36, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x335f: {
unico data[] = {0x37, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3360: {
unico data[] = {0x38, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3361: {
unico data[] = {0x39, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3362: {
unico data[] = {0x31, 0x30, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3363: {
unico data[] = {0x31, 0x31, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3364: {
unico data[] = {0x31, 0x32, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3365: {
unico data[] = {0x31, 0x33, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3366: {
unico data[] = {0x31, 0x34, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3367: {
unico data[] = {0x31, 0x35, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3368: {
unico data[] = {0x31, 0x36, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3369: {
unico data[] = {0x31, 0x37, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x336a: {
unico data[] = {0x31, 0x38, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x336b: {
unico data[] = {0x31, 0x39, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x336c: {
unico data[] = {0x32, 0x30, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x336d: {
unico data[] = {0x32, 0x31, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x336e: {
unico data[] = {0x32, 0x32, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x336f: {
unico data[] = {0x32, 0x33, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3370: {
unico data[] = {0x32, 0x34, 0x70b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3371: {
unico data[] = {0x68, 0x50, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3372: {
unico data[] = {0x64, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3373: {
unico data[] = {0x41, 0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3374: {
unico data[] = {0x62, 0x61, 0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3375: {
unico data[] = {0x6f, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3376: {
unico data[] = {0x70, 0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3377: {
unico data[] = {0x64, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3378: {
unico data[] = {0x64, 0x6d, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3379: {
unico data[] = {0x64, 0x6d, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x337a: {
unico data[] = {0x49, 0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x337b: {
unico data[] = {0x5e73, 0x6210};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x337c: {
unico data[] = {0x662d, 0x548c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x337d: {
unico data[] = {0x5927, 0x6b63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x337e: {
unico data[] = {0x660e, 0x6cbb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x337f: {
unico data[] = {0x682a, 0x5f0f, 0x4f1a, 0x793e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3380: {
unico data[] = {0x70, 0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3381: {
unico data[] = {0x6e, 0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3382: {
unico data[] = {0x3bc, 0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3383: {
unico data[] = {0x6d, 0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3384: {
unico data[] = {0x6b, 0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3385: {
unico data[] = {0x4b, 0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3386: {
unico data[] = {0x4d, 0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3387: {
unico data[] = {0x47, 0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3388: {
unico data[] = {0x63, 0x61, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3389: {
unico data[] = {0x6b, 0x63, 0x61, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x338a: {
unico data[] = {0x70, 0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x338b: {
unico data[] = {0x6e, 0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x338c: {
unico data[] = {0x3bc, 0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x338d: {
unico data[] = {0x3bc, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x338e: {
unico data[] = {0x6d, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x338f: {
unico data[] = {0x6b, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3390: {
unico data[] = {0x48, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3391: {
unico data[] = {0x6b, 0x48, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3392: {
unico data[] = {0x4d, 0x48, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3393: {
unico data[] = {0x47, 0x48, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3394: {
unico data[] = {0x54, 0x48, 0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3395: {
unico data[] = {0x3bc, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3396: {
unico data[] = {0x6d, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3397: {
unico data[] = {0x64, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3398: {
unico data[] = {0x6b, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3399: {
unico data[] = {0x66, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x339a: {
unico data[] = {0x6e, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x339b: {
unico data[] = {0x3bc, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x339c: {
unico data[] = {0x6d, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x339d: {
unico data[] = {0x63, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x339e: {
unico data[] = {0x6b, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x339f: {
unico data[] = {0x6d, 0x6d, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a0: {
unico data[] = {0x63, 0x6d, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a1: {
unico data[] = {0x6d, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a2: {
unico data[] = {0x6b, 0x6d, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a3: {
unico data[] = {0x6d, 0x6d, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a4: {
unico data[] = {0x63, 0x6d, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a5: {
unico data[] = {0x6d, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a6: {
unico data[] = {0x6b, 0x6d, 0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a7: {
unico data[] = {0x6d, 0x2215, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a8: {
unico data[] = {0x6d, 0x2215, 0x73, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33a9: {
unico data[] = {0x50, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33aa: {
unico data[] = {0x6b, 0x50, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ab: {
unico data[] = {0x4d, 0x50, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ac: {
unico data[] = {0x47, 0x50, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ad: {
unico data[] = {0x72, 0x61, 0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ae: {
unico data[] = {0x72, 0x61, 0x64, 0x2215, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33af: {
unico data[] = {0x72, 0x61, 0x64, 0x2215, 0x73, 0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b0: {
unico data[] = {0x70, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b1: {
unico data[] = {0x6e, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b2: {
unico data[] = {0x3bc, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b3: {
unico data[] = {0x6d, 0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b4: {
unico data[] = {0x70, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b5: {
unico data[] = {0x6e, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b6: {
unico data[] = {0x3bc, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b7: {
unico data[] = {0x6d, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b8: {
unico data[] = {0x6b, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33b9: {
unico data[] = {0x4d, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ba: {
unico data[] = {0x70, 0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33bb: {
unico data[] = {0x6e, 0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33bc: {
unico data[] = {0x3bc, 0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33bd: {
unico data[] = {0x6d, 0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33be: {
unico data[] = {0x6b, 0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33bf: {
unico data[] = {0x4d, 0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c0: {
unico data[] = {0x6b, 0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c1: {
unico data[] = {0x4d, 0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c2: {
unico data[] = {0x61, 0x2e, 0x6d, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c3: {
unico data[] = {0x42, 0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c4: {
unico data[] = {0x63, 0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c5: {
unico data[] = {0x63, 0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c6: {
unico data[] = {0x43, 0x2215, 0x6b, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c7: {
unico data[] = {0x43, 0x6f, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c8: {
unico data[] = {0x64, 0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33c9: {
unico data[] = {0x47, 0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ca: {
unico data[] = {0x68, 0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33cb: {
unico data[] = {0x48, 0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33cc: {
unico data[] = {0x69, 0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33cd: {
unico data[] = {0x4b, 0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ce: {
unico data[] = {0x4b, 0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33cf: {
unico data[] = {0x6b, 0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d0: {
unico data[] = {0x6c, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d1: {
unico data[] = {0x6c, 0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d2: {
unico data[] = {0x6c, 0x6f, 0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d3: {
unico data[] = {0x6c, 0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d4: {
unico data[] = {0x6d, 0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d5: {
unico data[] = {0x6d, 0x69, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d6: {
unico data[] = {0x6d, 0x6f, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d7: {
unico data[] = {0x50, 0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d8: {
unico data[] = {0x70, 0x2e, 0x6d, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33d9: {
unico data[] = {0x50, 0x50, 0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33da: {
unico data[] = {0x50, 0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33db: {
unico data[] = {0x73, 0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33dc: {
unico data[] = {0x53, 0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33dd: {
unico data[] = {0x57, 0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33de: {
unico data[] = {0x56, 0x2215, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33df: {
unico data[] = {0x41, 0x2215, 0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e0: {
unico data[] = {0x31, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e1: {
unico data[] = {0x32, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e2: {
unico data[] = {0x33, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e3: {
unico data[] = {0x34, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e4: {
unico data[] = {0x35, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e5: {
unico data[] = {0x36, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e6: {
unico data[] = {0x37, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e7: {
unico data[] = {0x38, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e8: {
unico data[] = {0x39, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33e9: {
unico data[] = {0x31, 0x30, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ea: {
unico data[] = {0x31, 0x31, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33eb: {
unico data[] = {0x31, 0x32, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ec: {
unico data[] = {0x31, 0x33, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ed: {
unico data[] = {0x31, 0x34, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ee: {
unico data[] = {0x31, 0x35, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ef: {
unico data[] = {0x31, 0x36, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f0: {
unico data[] = {0x31, 0x37, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f1: {
unico data[] = {0x31, 0x38, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f2: {
unico data[] = {0x31, 0x39, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f3: {
unico data[] = {0x32, 0x30, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f4: {
unico data[] = {0x32, 0x31, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f5: {
unico data[] = {0x32, 0x32, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f6: {
unico data[] = {0x32, 0x33, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f7: {
unico data[] = {0x32, 0x34, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f8: {
unico data[] = {0x32, 0x35, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33f9: {
unico data[] = {0x32, 0x36, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33fa: {
unico data[] = {0x32, 0x37, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33fb: {
unico data[] = {0x32, 0x38, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33fc: {
unico data[] = {0x32, 0x39, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33fd: {
unico data[] = {0x33, 0x30, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33fe: {
unico data[] = {0x33, 0x31, 0x65e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x33ff: {
unico data[] = {0x67, 0x61, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa69c: {
unico data[] = {0x44a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa69d: {
unico data[] = {0x44c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa770: {
unico data[] = {0xa76f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7f8: {
unico data[] = {0x126};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7f9: {
unico data[] = {0x153};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab5c: {
unico data[] = {0xa727};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab5d: {
unico data[] = {0xab37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab5e: {
unico data[] = {0x26b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab5f: {
unico data[] = {0xab52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf900: {
unico data[] = {0x8c48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf901: {
unico data[] = {0x66f4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf902: {
unico data[] = {0x8eca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf903: {
unico data[] = {0x8cc8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf904: {
unico data[] = {0x6ed1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf905: {
unico data[] = {0x4e32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf906: {
unico data[] = {0x53e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf907: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf908: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf909: {
unico data[] = {0x5951};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90a: {
unico data[] = {0x91d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90b: {
unico data[] = {0x5587};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90c: {
unico data[] = {0x5948};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90d: {
unico data[] = {0x61f6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90e: {
unico data[] = {0x7669};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90f: {
unico data[] = {0x7f85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf910: {
unico data[] = {0x863f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf911: {
unico data[] = {0x87ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf912: {
unico data[] = {0x88f8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf913: {
unico data[] = {0x908f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf914: {
unico data[] = {0x6a02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf915: {
unico data[] = {0x6d1b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf916: {
unico data[] = {0x70d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf917: {
unico data[] = {0x73de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf918: {
unico data[] = {0x843d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf919: {
unico data[] = {0x916a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91a: {
unico data[] = {0x99f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91b: {
unico data[] = {0x4e82};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91c: {
unico data[] = {0x5375};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91d: {
unico data[] = {0x6b04};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91e: {
unico data[] = {0x721b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91f: {
unico data[] = {0x862d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf920: {
unico data[] = {0x9e1e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf921: {
unico data[] = {0x5d50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf922: {
unico data[] = {0x6feb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf923: {
unico data[] = {0x85cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf924: {
unico data[] = {0x8964};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf925: {
unico data[] = {0x62c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf926: {
unico data[] = {0x81d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf927: {
unico data[] = {0x881f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf928: {
unico data[] = {0x5eca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf929: {
unico data[] = {0x6717};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92a: {
unico data[] = {0x6d6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92b: {
unico data[] = {0x72fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92c: {
unico data[] = {0x90ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92d: {
unico data[] = {0x4f86};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92e: {
unico data[] = {0x51b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92f: {
unico data[] = {0x52de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf930: {
unico data[] = {0x64c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf931: {
unico data[] = {0x6ad3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf932: {
unico data[] = {0x7210};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf933: {
unico data[] = {0x76e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf934: {
unico data[] = {0x8001};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf935: {
unico data[] = {0x8606};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf936: {
unico data[] = {0x865c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf937: {
unico data[] = {0x8def};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf938: {
unico data[] = {0x9732};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf939: {
unico data[] = {0x9b6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93a: {
unico data[] = {0x9dfa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93b: {
unico data[] = {0x788c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93c: {
unico data[] = {0x797f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93d: {
unico data[] = {0x7da0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93e: {
unico data[] = {0x83c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93f: {
unico data[] = {0x9304};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf940: {
unico data[] = {0x9e7f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf941: {
unico data[] = {0x8ad6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf942: {
unico data[] = {0x58df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf943: {
unico data[] = {0x5f04};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf944: {
unico data[] = {0x7c60};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf945: {
unico data[] = {0x807e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf946: {
unico data[] = {0x7262};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf947: {
unico data[] = {0x78ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf948: {
unico data[] = {0x8cc2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf949: {
unico data[] = {0x96f7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94a: {
unico data[] = {0x58d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94b: {
unico data[] = {0x5c62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94c: {
unico data[] = {0x6a13};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94d: {
unico data[] = {0x6dda};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94e: {
unico data[] = {0x6f0f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94f: {
unico data[] = {0x7d2f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf950: {
unico data[] = {0x7e37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf951: {
unico data[] = {0x964b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf952: {
unico data[] = {0x52d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf953: {
unico data[] = {0x808b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf954: {
unico data[] = {0x51dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf955: {
unico data[] = {0x51cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf956: {
unico data[] = {0x7a1c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf957: {
unico data[] = {0x7dbe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf958: {
unico data[] = {0x83f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf959: {
unico data[] = {0x9675};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95a: {
unico data[] = {0x8b80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95b: {
unico data[] = {0x62cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95c: {
unico data[] = {0x6a02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95d: {
unico data[] = {0x8afe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95e: {
unico data[] = {0x4e39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95f: {
unico data[] = {0x5be7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf960: {
unico data[] = {0x6012};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf961: {
unico data[] = {0x7387};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf962: {
unico data[] = {0x7570};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf963: {
unico data[] = {0x5317};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf964: {
unico data[] = {0x78fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf965: {
unico data[] = {0x4fbf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf966: {
unico data[] = {0x5fa9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf967: {
unico data[] = {0x4e0d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf968: {
unico data[] = {0x6ccc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf969: {
unico data[] = {0x6578};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96a: {
unico data[] = {0x7d22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96b: {
unico data[] = {0x53c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96c: {
unico data[] = {0x585e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96d: {
unico data[] = {0x7701};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96e: {
unico data[] = {0x8449};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96f: {
unico data[] = {0x8aaa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf970: {
unico data[] = {0x6bba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf971: {
unico data[] = {0x8fb0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf972: {
unico data[] = {0x6c88};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf973: {
unico data[] = {0x62fe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf974: {
unico data[] = {0x82e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf975: {
unico data[] = {0x63a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf976: {
unico data[] = {0x7565};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf977: {
unico data[] = {0x4eae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf978: {
unico data[] = {0x5169};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf979: {
unico data[] = {0x51c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97a: {
unico data[] = {0x6881};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97b: {
unico data[] = {0x7ce7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97c: {
unico data[] = {0x826f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97d: {
unico data[] = {0x8ad2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97e: {
unico data[] = {0x91cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97f: {
unico data[] = {0x52f5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf980: {
unico data[] = {0x5442};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf981: {
unico data[] = {0x5973};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf982: {
unico data[] = {0x5eec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf983: {
unico data[] = {0x65c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf984: {
unico data[] = {0x6ffe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf985: {
unico data[] = {0x792a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf986: {
unico data[] = {0x95ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf987: {
unico data[] = {0x9a6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf988: {
unico data[] = {0x9e97};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf989: {
unico data[] = {0x9ece};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98a: {
unico data[] = {0x529b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98b: {
unico data[] = {0x66c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98c: {
unico data[] = {0x6b77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98d: {
unico data[] = {0x8f62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98e: {
unico data[] = {0x5e74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98f: {
unico data[] = {0x6190};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf990: {
unico data[] = {0x6200};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf991: {
unico data[] = {0x649a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf992: {
unico data[] = {0x6f23};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf993: {
unico data[] = {0x7149};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf994: {
unico data[] = {0x7489};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf995: {
unico data[] = {0x79ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf996: {
unico data[] = {0x7df4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf997: {
unico data[] = {0x806f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf998: {
unico data[] = {0x8f26};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf999: {
unico data[] = {0x84ee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99a: {
unico data[] = {0x9023};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99b: {
unico data[] = {0x934a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99c: {
unico data[] = {0x5217};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99d: {
unico data[] = {0x52a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99e: {
unico data[] = {0x54bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99f: {
unico data[] = {0x70c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a0: {
unico data[] = {0x88c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a1: {
unico data[] = {0x8aaa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a2: {
unico data[] = {0x5ec9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a3: {
unico data[] = {0x5ff5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a4: {
unico data[] = {0x637b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a5: {
unico data[] = {0x6bae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a6: {
unico data[] = {0x7c3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a7: {
unico data[] = {0x7375};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a8: {
unico data[] = {0x4ee4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a9: {
unico data[] = {0x56f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9aa: {
unico data[] = {0x5be7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ab: {
unico data[] = {0x5dba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ac: {
unico data[] = {0x601c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ad: {
unico data[] = {0x73b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ae: {
unico data[] = {0x7469};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9af: {
unico data[] = {0x7f9a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b0: {
unico data[] = {0x8046};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b1: {
unico data[] = {0x9234};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b2: {
unico data[] = {0x96f6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b3: {
unico data[] = {0x9748};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b4: {
unico data[] = {0x9818};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b5: {
unico data[] = {0x4f8b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b6: {
unico data[] = {0x79ae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b7: {
unico data[] = {0x91b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b8: {
unico data[] = {0x96b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b9: {
unico data[] = {0x60e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ba: {
unico data[] = {0x4e86};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bb: {
unico data[] = {0x50da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bc: {
unico data[] = {0x5bee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bd: {
unico data[] = {0x5c3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9be: {
unico data[] = {0x6599};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bf: {
unico data[] = {0x6a02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c0: {
unico data[] = {0x71ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c1: {
unico data[] = {0x7642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c2: {
unico data[] = {0x84fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c3: {
unico data[] = {0x907c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c4: {
unico data[] = {0x9f8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c5: {
unico data[] = {0x6688};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c6: {
unico data[] = {0x962e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c7: {
unico data[] = {0x5289};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c8: {
unico data[] = {0x677b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c9: {
unico data[] = {0x67f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ca: {
unico data[] = {0x6d41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cb: {
unico data[] = {0x6e9c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cc: {
unico data[] = {0x7409};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cd: {
unico data[] = {0x7559};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ce: {
unico data[] = {0x786b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cf: {
unico data[] = {0x7d10};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d0: {
unico data[] = {0x985e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d1: {
unico data[] = {0x516d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d2: {
unico data[] = {0x622e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d3: {
unico data[] = {0x9678};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d4: {
unico data[] = {0x502b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d5: {
unico data[] = {0x5d19};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d6: {
unico data[] = {0x6dea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d7: {
unico data[] = {0x8f2a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d8: {
unico data[] = {0x5f8b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d9: {
unico data[] = {0x6144};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9da: {
unico data[] = {0x6817};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9db: {
unico data[] = {0x7387};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9dc: {
unico data[] = {0x9686};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9dd: {
unico data[] = {0x5229};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9de: {
unico data[] = {0x540f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9df: {
unico data[] = {0x5c65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e0: {
unico data[] = {0x6613};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e1: {
unico data[] = {0x674e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e2: {
unico data[] = {0x68a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e3: {
unico data[] = {0x6ce5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e4: {
unico data[] = {0x7406};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e5: {
unico data[] = {0x75e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e6: {
unico data[] = {0x7f79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e7: {
unico data[] = {0x88cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e8: {
unico data[] = {0x88e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e9: {
unico data[] = {0x91cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ea: {
unico data[] = {0x96e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9eb: {
unico data[] = {0x533f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ec: {
unico data[] = {0x6eba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ed: {
unico data[] = {0x541d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ee: {
unico data[] = {0x71d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ef: {
unico data[] = {0x7498};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f0: {
unico data[] = {0x85fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f1: {
unico data[] = {0x96a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f2: {
unico data[] = {0x9c57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f3: {
unico data[] = {0x9e9f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f4: {
unico data[] = {0x6797};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f5: {
unico data[] = {0x6dcb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f6: {
unico data[] = {0x81e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f7: {
unico data[] = {0x7acb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f8: {
unico data[] = {0x7b20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f9: {
unico data[] = {0x7c92};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fa: {
unico data[] = {0x72c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fb: {
unico data[] = {0x7099};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fc: {
unico data[] = {0x8b58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fd: {
unico data[] = {0x4ec0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fe: {
unico data[] = {0x8336};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ff: {
unico data[] = {0x523a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa00: {
unico data[] = {0x5207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa01: {
unico data[] = {0x5ea6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa02: {
unico data[] = {0x62d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa03: {
unico data[] = {0x7cd6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa04: {
unico data[] = {0x5b85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa05: {
unico data[] = {0x6d1e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa06: {
unico data[] = {0x66b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa07: {
unico data[] = {0x8f3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa08: {
unico data[] = {0x884c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa09: {
unico data[] = {0x964d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0a: {
unico data[] = {0x898b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0b: {
unico data[] = {0x5ed3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0c: {
unico data[] = {0x5140};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0d: {
unico data[] = {0x55c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa10: {
unico data[] = {0x585a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa12: {
unico data[] = {0x6674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa15: {
unico data[] = {0x51de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa16: {
unico data[] = {0x732a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa17: {
unico data[] = {0x76ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa18: {
unico data[] = {0x793c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa19: {
unico data[] = {0x795e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1a: {
unico data[] = {0x7965};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1b: {
unico data[] = {0x798f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1c: {
unico data[] = {0x9756};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1d: {
unico data[] = {0x7cbe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1e: {
unico data[] = {0x7fbd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa20: {
unico data[] = {0x8612};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa22: {
unico data[] = {0x8af8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa25: {
unico data[] = {0x9038};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa26: {
unico data[] = {0x90fd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2a: {
unico data[] = {0x98ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2b: {
unico data[] = {0x98fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2c: {
unico data[] = {0x9928};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2d: {
unico data[] = {0x9db4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2e: {
unico data[] = {0x90de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2f: {
unico data[] = {0x96b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa30: {
unico data[] = {0x4fae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa31: {
unico data[] = {0x50e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa32: {
unico data[] = {0x514d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa33: {
unico data[] = {0x52c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa34: {
unico data[] = {0x52e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa35: {
unico data[] = {0x5351};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa36: {
unico data[] = {0x559d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa37: {
unico data[] = {0x5606};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa38: {
unico data[] = {0x5668};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa39: {
unico data[] = {0x5840};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3a: {
unico data[] = {0x58a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3b: {
unico data[] = {0x5c64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3c: {
unico data[] = {0x5c6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3d: {
unico data[] = {0x6094};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3e: {
unico data[] = {0x6168};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3f: {
unico data[] = {0x618e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa40: {
unico data[] = {0x61f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa41: {
unico data[] = {0x654f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa42: {
unico data[] = {0x65e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa43: {
unico data[] = {0x6691};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa44: {
unico data[] = {0x6885};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa45: {
unico data[] = {0x6d77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa46: {
unico data[] = {0x6e1a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa47: {
unico data[] = {0x6f22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa48: {
unico data[] = {0x716e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa49: {
unico data[] = {0x722b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4a: {
unico data[] = {0x7422};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4b: {
unico data[] = {0x7891};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4c: {
unico data[] = {0x793e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4d: {
unico data[] = {0x7949};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4e: {
unico data[] = {0x7948};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4f: {
unico data[] = {0x7950};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa50: {
unico data[] = {0x7956};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa51: {
unico data[] = {0x795d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa52: {
unico data[] = {0x798d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa53: {
unico data[] = {0x798e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa54: {
unico data[] = {0x7a40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa55: {
unico data[] = {0x7a81};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa56: {
unico data[] = {0x7bc0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa57: {
unico data[] = {0x7df4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa58: {
unico data[] = {0x7e09};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa59: {
unico data[] = {0x7e41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5a: {
unico data[] = {0x7f72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5b: {
unico data[] = {0x8005};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5c: {
unico data[] = {0x81ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5d: {
unico data[] = {0x8279};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5e: {
unico data[] = {0x8279};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5f: {
unico data[] = {0x8457};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa60: {
unico data[] = {0x8910};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa61: {
unico data[] = {0x8996};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa62: {
unico data[] = {0x8b01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa63: {
unico data[] = {0x8b39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa64: {
unico data[] = {0x8cd3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa65: {
unico data[] = {0x8d08};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa66: {
unico data[] = {0x8fb6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa67: {
unico data[] = {0x9038};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa68: {
unico data[] = {0x96e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa69: {
unico data[] = {0x97ff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6a: {
unico data[] = {0x983b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6b: {
unico data[] = {0x6075};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6c: {
unico data[] = {0x242ee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6d: {
unico data[] = {0x8218};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa70: {
unico data[] = {0x4e26};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa71: {
unico data[] = {0x51b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa72: {
unico data[] = {0x5168};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa73: {
unico data[] = {0x4f80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa74: {
unico data[] = {0x5145};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa75: {
unico data[] = {0x5180};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa76: {
unico data[] = {0x52c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa77: {
unico data[] = {0x52fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa78: {
unico data[] = {0x559d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa79: {
unico data[] = {0x5555};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7a: {
unico data[] = {0x5599};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7b: {
unico data[] = {0x55e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7c: {
unico data[] = {0x585a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7d: {
unico data[] = {0x58b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7e: {
unico data[] = {0x5944};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7f: {
unico data[] = {0x5954};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa80: {
unico data[] = {0x5a62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa81: {
unico data[] = {0x5b28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa82: {
unico data[] = {0x5ed2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa83: {
unico data[] = {0x5ed9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa84: {
unico data[] = {0x5f69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa85: {
unico data[] = {0x5fad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa86: {
unico data[] = {0x60d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa87: {
unico data[] = {0x614e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa88: {
unico data[] = {0x6108};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa89: {
unico data[] = {0x618e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8a: {
unico data[] = {0x6160};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8b: {
unico data[] = {0x61f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8c: {
unico data[] = {0x6234};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8d: {
unico data[] = {0x63c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8e: {
unico data[] = {0x641c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8f: {
unico data[] = {0x6452};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa90: {
unico data[] = {0x6556};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa91: {
unico data[] = {0x6674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa92: {
unico data[] = {0x6717};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa93: {
unico data[] = {0x671b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa94: {
unico data[] = {0x6756};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa95: {
unico data[] = {0x6b79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa96: {
unico data[] = {0x6bba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa97: {
unico data[] = {0x6d41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa98: {
unico data[] = {0x6edb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa99: {
unico data[] = {0x6ecb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9a: {
unico data[] = {0x6f22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9b: {
unico data[] = {0x701e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9c: {
unico data[] = {0x716e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9d: {
unico data[] = {0x77a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9e: {
unico data[] = {0x7235};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9f: {
unico data[] = {0x72af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa0: {
unico data[] = {0x732a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa1: {
unico data[] = {0x7471};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa2: {
unico data[] = {0x7506};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa3: {
unico data[] = {0x753b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa4: {
unico data[] = {0x761d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa5: {
unico data[] = {0x761f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa6: {
unico data[] = {0x76ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa7: {
unico data[] = {0x76db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa8: {
unico data[] = {0x76f4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa9: {
unico data[] = {0x774a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaaa: {
unico data[] = {0x7740};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaab: {
unico data[] = {0x78cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaac: {
unico data[] = {0x7ab1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaad: {
unico data[] = {0x7bc0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaae: {
unico data[] = {0x7c7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaaf: {
unico data[] = {0x7d5b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab0: {
unico data[] = {0x7df4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab1: {
unico data[] = {0x7f3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab2: {
unico data[] = {0x8005};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab3: {
unico data[] = {0x8352};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab4: {
unico data[] = {0x83ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab5: {
unico data[] = {0x8779};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab6: {
unico data[] = {0x8941};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab7: {
unico data[] = {0x8986};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab8: {
unico data[] = {0x8996};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab9: {
unico data[] = {0x8abf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaba: {
unico data[] = {0x8af8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabb: {
unico data[] = {0x8acb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabc: {
unico data[] = {0x8b01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabd: {
unico data[] = {0x8afe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabe: {
unico data[] = {0x8aed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabf: {
unico data[] = {0x8b39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac0: {
unico data[] = {0x8b8a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac1: {
unico data[] = {0x8d08};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac2: {
unico data[] = {0x8f38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac3: {
unico data[] = {0x9072};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac4: {
unico data[] = {0x9199};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac5: {
unico data[] = {0x9276};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac6: {
unico data[] = {0x967c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac7: {
unico data[] = {0x96e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac8: {
unico data[] = {0x9756};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac9: {
unico data[] = {0x97db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaca: {
unico data[] = {0x97ff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacb: {
unico data[] = {0x980b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacc: {
unico data[] = {0x983b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacd: {
unico data[] = {0x9b12};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xface: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacf: {
unico data[] = {0x2284a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad0: {
unico data[] = {0x22844};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad1: {
unico data[] = {0x233d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad2: {
unico data[] = {0x3b9d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad3: {
unico data[] = {0x4018};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad4: {
unico data[] = {0x4039};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad5: {
unico data[] = {0x25249};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad6: {
unico data[] = {0x25cd0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad7: {
unico data[] = {0x27ed3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad8: {
unico data[] = {0x9f43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad9: {
unico data[] = {0x9f8e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb00: {
unico data[] = {0x66, 0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb01: {
unico data[] = {0x66, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb02: {
unico data[] = {0x66, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb03: {
unico data[] = {0x66, 0x66, 0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb04: {
unico data[] = {0x66, 0x66, 0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb05: {
unico data[] = {0x73, 0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb06: {
unico data[] = {0x73, 0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb13: {
unico data[] = {0x574, 0x576};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb14: {
unico data[] = {0x574, 0x565};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb15: {
unico data[] = {0x574, 0x56b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb16: {
unico data[] = {0x57e, 0x576};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb17: {
unico data[] = {0x574, 0x56d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb1d: {
unico data[] = {0x5d9, 0x5b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb1f: {
unico data[] = {0x5f2, 0x5b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb20: {
unico data[] = {0x5e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb21: {
unico data[] = {0x5d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb22: {
unico data[] = {0x5d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb23: {
unico data[] = {0x5d4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb24: {
unico data[] = {0x5db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb25: {
unico data[] = {0x5dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb26: {
unico data[] = {0x5dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb27: {
unico data[] = {0x5e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb28: {
unico data[] = {0x5ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb29: {
unico data[] = {0x2b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2a: {
unico data[] = {0x5e9, 0x5c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2b: {
unico data[] = {0x5e9, 0x5c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2c: {
unico data[] = {0x5e9, 0x5bc, 0x5c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2d: {
unico data[] = {0x5e9, 0x5bc, 0x5c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2e: {
unico data[] = {0x5d0, 0x5b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2f: {
unico data[] = {0x5d0, 0x5b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb30: {
unico data[] = {0x5d0, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb31: {
unico data[] = {0x5d1, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb32: {
unico data[] = {0x5d2, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb33: {
unico data[] = {0x5d3, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb34: {
unico data[] = {0x5d4, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb35: {
unico data[] = {0x5d5, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb36: {
unico data[] = {0x5d6, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb38: {
unico data[] = {0x5d8, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb39: {
unico data[] = {0x5d9, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3a: {
unico data[] = {0x5da, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3b: {
unico data[] = {0x5db, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3c: {
unico data[] = {0x5dc, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3e: {
unico data[] = {0x5de, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb40: {
unico data[] = {0x5e0, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb41: {
unico data[] = {0x5e1, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb43: {
unico data[] = {0x5e3, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb44: {
unico data[] = {0x5e4, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb46: {
unico data[] = {0x5e6, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb47: {
unico data[] = {0x5e7, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb48: {
unico data[] = {0x5e8, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb49: {
unico data[] = {0x5e9, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4a: {
unico data[] = {0x5ea, 0x5bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4b: {
unico data[] = {0x5d5, 0x5b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4c: {
unico data[] = {0x5d1, 0x5bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4d: {
unico data[] = {0x5db, 0x5bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4e: {
unico data[] = {0x5e4, 0x5bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4f: {
unico data[] = {0x5d0, 0x5dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb50: {
unico data[] = {0x671};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb51: {
unico data[] = {0x671};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb52: {
unico data[] = {0x67b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb53: {
unico data[] = {0x67b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb54: {
unico data[] = {0x67b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb55: {
unico data[] = {0x67b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb56: {
unico data[] = {0x67e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb57: {
unico data[] = {0x67e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb58: {
unico data[] = {0x67e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb59: {
unico data[] = {0x67e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb5a: {
unico data[] = {0x680};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb5b: {
unico data[] = {0x680};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb5c: {
unico data[] = {0x680};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb5d: {
unico data[] = {0x680};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb5e: {
unico data[] = {0x67a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb5f: {
unico data[] = {0x67a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb60: {
unico data[] = {0x67a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb61: {
unico data[] = {0x67a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb62: {
unico data[] = {0x67f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb63: {
unico data[] = {0x67f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb64: {
unico data[] = {0x67f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb65: {
unico data[] = {0x67f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb66: {
unico data[] = {0x679};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb67: {
unico data[] = {0x679};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb68: {
unico data[] = {0x679};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb69: {
unico data[] = {0x679};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb6a: {
unico data[] = {0x6a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb6b: {
unico data[] = {0x6a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb6c: {
unico data[] = {0x6a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb6d: {
unico data[] = {0x6a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb6e: {
unico data[] = {0x6a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb6f: {
unico data[] = {0x6a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb70: {
unico data[] = {0x6a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb71: {
unico data[] = {0x6a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb72: {
unico data[] = {0x684};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb73: {
unico data[] = {0x684};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb74: {
unico data[] = {0x684};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb75: {
unico data[] = {0x684};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb76: {
unico data[] = {0x683};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb77: {
unico data[] = {0x683};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb78: {
unico data[] = {0x683};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb79: {
unico data[] = {0x683};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb7a: {
unico data[] = {0x686};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb7b: {
unico data[] = {0x686};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb7c: {
unico data[] = {0x686};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb7d: {
unico data[] = {0x686};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb7e: {
unico data[] = {0x687};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb7f: {
unico data[] = {0x687};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb80: {
unico data[] = {0x687};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb81: {
unico data[] = {0x687};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb82: {
unico data[] = {0x68d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb83: {
unico data[] = {0x68d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb84: {
unico data[] = {0x68c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb85: {
unico data[] = {0x68c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb86: {
unico data[] = {0x68e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb87: {
unico data[] = {0x68e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb88: {
unico data[] = {0x688};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb89: {
unico data[] = {0x688};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb8a: {
unico data[] = {0x698};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb8b: {
unico data[] = {0x698};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb8c: {
unico data[] = {0x691};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb8d: {
unico data[] = {0x691};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb8e: {
unico data[] = {0x6a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb8f: {
unico data[] = {0x6a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb90: {
unico data[] = {0x6a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb91: {
unico data[] = {0x6a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb92: {
unico data[] = {0x6af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb93: {
unico data[] = {0x6af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb94: {
unico data[] = {0x6af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb95: {
unico data[] = {0x6af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb96: {
unico data[] = {0x6b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb97: {
unico data[] = {0x6b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb98: {
unico data[] = {0x6b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb99: {
unico data[] = {0x6b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9a: {
unico data[] = {0x6b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9b: {
unico data[] = {0x6b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9c: {
unico data[] = {0x6b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9d: {
unico data[] = {0x6b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9e: {
unico data[] = {0x6ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9f: {
unico data[] = {0x6ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba0: {
unico data[] = {0x6bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba1: {
unico data[] = {0x6bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba2: {
unico data[] = {0x6bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba3: {
unico data[] = {0x6bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba4: {
unico data[] = {0x6c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba5: {
unico data[] = {0x6c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba6: {
unico data[] = {0x6c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba7: {
unico data[] = {0x6c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba8: {
unico data[] = {0x6c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfba9: {
unico data[] = {0x6c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbaa: {
unico data[] = {0x6be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbab: {
unico data[] = {0x6be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbac: {
unico data[] = {0x6be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbad: {
unico data[] = {0x6be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbae: {
unico data[] = {0x6d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbaf: {
unico data[] = {0x6d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbb0: {
unico data[] = {0x6d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbb1: {
unico data[] = {0x6d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd3: {
unico data[] = {0x6ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd4: {
unico data[] = {0x6ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd5: {
unico data[] = {0x6ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd6: {
unico data[] = {0x6ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd7: {
unico data[] = {0x6c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd8: {
unico data[] = {0x6c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbd9: {
unico data[] = {0x6c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbda: {
unico data[] = {0x6c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbdb: {
unico data[] = {0x6c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbdc: {
unico data[] = {0x6c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbdd: {
unico data[] = {0x6c7, 0x674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbde: {
unico data[] = {0x6cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbdf: {
unico data[] = {0x6cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe0: {
unico data[] = {0x6c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe1: {
unico data[] = {0x6c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe2: {
unico data[] = {0x6c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe3: {
unico data[] = {0x6c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe4: {
unico data[] = {0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe5: {
unico data[] = {0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe6: {
unico data[] = {0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe7: {
unico data[] = {0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe8: {
unico data[] = {0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbe9: {
unico data[] = {0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbea: {
unico data[] = {0x626, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbeb: {
unico data[] = {0x626, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbec: {
unico data[] = {0x626, 0x6d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbed: {
unico data[] = {0x626, 0x6d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbee: {
unico data[] = {0x626, 0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbef: {
unico data[] = {0x626, 0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf0: {
unico data[] = {0x626, 0x6c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf1: {
unico data[] = {0x626, 0x6c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf2: {
unico data[] = {0x626, 0x6c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf3: {
unico data[] = {0x626, 0x6c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf4: {
unico data[] = {0x626, 0x6c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf5: {
unico data[] = {0x626, 0x6c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf6: {
unico data[] = {0x626, 0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf7: {
unico data[] = {0x626, 0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf8: {
unico data[] = {0x626, 0x6d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbf9: {
unico data[] = {0x626, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbfa: {
unico data[] = {0x626, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbfb: {
unico data[] = {0x626, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbfc: {
unico data[] = {0x6cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbfd: {
unico data[] = {0x6cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbfe: {
unico data[] = {0x6cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfbff: {
unico data[] = {0x6cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc00: {
unico data[] = {0x626, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc01: {
unico data[] = {0x626, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc02: {
unico data[] = {0x626, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc03: {
unico data[] = {0x626, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc04: {
unico data[] = {0x626, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc05: {
unico data[] = {0x628, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc06: {
unico data[] = {0x628, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc07: {
unico data[] = {0x628, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc08: {
unico data[] = {0x628, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc09: {
unico data[] = {0x628, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc0a: {
unico data[] = {0x628, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc0b: {
unico data[] = {0x62a, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc0c: {
unico data[] = {0x62a, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc0d: {
unico data[] = {0x62a, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc0e: {
unico data[] = {0x62a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc0f: {
unico data[] = {0x62a, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc10: {
unico data[] = {0x62a, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc11: {
unico data[] = {0x62b, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc12: {
unico data[] = {0x62b, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc13: {
unico data[] = {0x62b, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc14: {
unico data[] = {0x62b, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc15: {
unico data[] = {0x62c, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc16: {
unico data[] = {0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc17: {
unico data[] = {0x62d, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc18: {
unico data[] = {0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc19: {
unico data[] = {0x62e, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc1a: {
unico data[] = {0x62e, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc1b: {
unico data[] = {0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc1c: {
unico data[] = {0x633, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc1d: {
unico data[] = {0x633, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc1e: {
unico data[] = {0x633, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc1f: {
unico data[] = {0x633, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc20: {
unico data[] = {0x635, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc21: {
unico data[] = {0x635, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc22: {
unico data[] = {0x636, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc23: {
unico data[] = {0x636, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc24: {
unico data[] = {0x636, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc25: {
unico data[] = {0x636, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc26: {
unico data[] = {0x637, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc27: {
unico data[] = {0x637, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc28: {
unico data[] = {0x638, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc29: {
unico data[] = {0x639, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc2a: {
unico data[] = {0x639, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc2b: {
unico data[] = {0x63a, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc2c: {
unico data[] = {0x63a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc2d: {
unico data[] = {0x641, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc2e: {
unico data[] = {0x641, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc2f: {
unico data[] = {0x641, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc30: {
unico data[] = {0x641, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc31: {
unico data[] = {0x641, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc32: {
unico data[] = {0x641, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc33: {
unico data[] = {0x642, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc34: {
unico data[] = {0x642, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc35: {
unico data[] = {0x642, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc36: {
unico data[] = {0x642, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc37: {
unico data[] = {0x643, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc38: {
unico data[] = {0x643, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc39: {
unico data[] = {0x643, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc3a: {
unico data[] = {0x643, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc3b: {
unico data[] = {0x643, 0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc3c: {
unico data[] = {0x643, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc3d: {
unico data[] = {0x643, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc3e: {
unico data[] = {0x643, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc3f: {
unico data[] = {0x644, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc40: {
unico data[] = {0x644, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc41: {
unico data[] = {0x644, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc42: {
unico data[] = {0x644, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc43: {
unico data[] = {0x644, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc44: {
unico data[] = {0x644, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc45: {
unico data[] = {0x645, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc46: {
unico data[] = {0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc47: {
unico data[] = {0x645, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc48: {
unico data[] = {0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc49: {
unico data[] = {0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc4a: {
unico data[] = {0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc4b: {
unico data[] = {0x646, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc4c: {
unico data[] = {0x646, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc4d: {
unico data[] = {0x646, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc4e: {
unico data[] = {0x646, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc4f: {
unico data[] = {0x646, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc50: {
unico data[] = {0x646, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc51: {
unico data[] = {0x647, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc52: {
unico data[] = {0x647, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc53: {
unico data[] = {0x647, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc54: {
unico data[] = {0x647, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc55: {
unico data[] = {0x64a, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc56: {
unico data[] = {0x64a, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc57: {
unico data[] = {0x64a, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc58: {
unico data[] = {0x64a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc59: {
unico data[] = {0x64a, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc5a: {
unico data[] = {0x64a, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc5b: {
unico data[] = {0x630, 0x670};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc5c: {
unico data[] = {0x631, 0x670};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc5d: {
unico data[] = {0x649, 0x670};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc5e: {
unico data[] = {0x20, 0x64c, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc5f: {
unico data[] = {0x20, 0x64d, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc60: {
unico data[] = {0x20, 0x64e, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc61: {
unico data[] = {0x20, 0x64f, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc62: {
unico data[] = {0x20, 0x650, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc63: {
unico data[] = {0x20, 0x651, 0x670};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc64: {
unico data[] = {0x626, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc65: {
unico data[] = {0x626, 0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc66: {
unico data[] = {0x626, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc67: {
unico data[] = {0x626, 0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc68: {
unico data[] = {0x626, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc69: {
unico data[] = {0x626, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc6a: {
unico data[] = {0x628, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc6b: {
unico data[] = {0x628, 0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc6c: {
unico data[] = {0x628, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc6d: {
unico data[] = {0x628, 0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc6e: {
unico data[] = {0x628, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc6f: {
unico data[] = {0x628, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc70: {
unico data[] = {0x62a, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc71: {
unico data[] = {0x62a, 0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc72: {
unico data[] = {0x62a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc73: {
unico data[] = {0x62a, 0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc74: {
unico data[] = {0x62a, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc75: {
unico data[] = {0x62a, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc76: {
unico data[] = {0x62b, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc77: {
unico data[] = {0x62b, 0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc78: {
unico data[] = {0x62b, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc79: {
unico data[] = {0x62b, 0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc7a: {
unico data[] = {0x62b, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc7b: {
unico data[] = {0x62b, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc7c: {
unico data[] = {0x641, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc7d: {
unico data[] = {0x641, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc7e: {
unico data[] = {0x642, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc7f: {
unico data[] = {0x642, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc80: {
unico data[] = {0x643, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc81: {
unico data[] = {0x643, 0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc82: {
unico data[] = {0x643, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc83: {
unico data[] = {0x643, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc84: {
unico data[] = {0x643, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc85: {
unico data[] = {0x644, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc86: {
unico data[] = {0x644, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc87: {
unico data[] = {0x644, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc88: {
unico data[] = {0x645, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc89: {
unico data[] = {0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc8a: {
unico data[] = {0x646, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc8b: {
unico data[] = {0x646, 0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc8c: {
unico data[] = {0x646, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc8d: {
unico data[] = {0x646, 0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc8e: {
unico data[] = {0x646, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc8f: {
unico data[] = {0x646, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc90: {
unico data[] = {0x649, 0x670};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc91: {
unico data[] = {0x64a, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc92: {
unico data[] = {0x64a, 0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc93: {
unico data[] = {0x64a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc94: {
unico data[] = {0x64a, 0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc95: {
unico data[] = {0x64a, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc96: {
unico data[] = {0x64a, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc97: {
unico data[] = {0x626, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc98: {
unico data[] = {0x626, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc99: {
unico data[] = {0x626, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc9a: {
unico data[] = {0x626, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc9b: {
unico data[] = {0x626, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc9c: {
unico data[] = {0x628, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc9d: {
unico data[] = {0x628, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc9e: {
unico data[] = {0x628, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc9f: {
unico data[] = {0x628, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca0: {
unico data[] = {0x628, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca1: {
unico data[] = {0x62a, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca2: {
unico data[] = {0x62a, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca3: {
unico data[] = {0x62a, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca4: {
unico data[] = {0x62a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca5: {
unico data[] = {0x62a, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca6: {
unico data[] = {0x62b, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca7: {
unico data[] = {0x62c, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca8: {
unico data[] = {0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfca9: {
unico data[] = {0x62d, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcaa: {
unico data[] = {0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcab: {
unico data[] = {0x62e, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcac: {
unico data[] = {0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcad: {
unico data[] = {0x633, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcae: {
unico data[] = {0x633, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcaf: {
unico data[] = {0x633, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb0: {
unico data[] = {0x633, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb1: {
unico data[] = {0x635, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb2: {
unico data[] = {0x635, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb3: {
unico data[] = {0x635, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb4: {
unico data[] = {0x636, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb5: {
unico data[] = {0x636, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb6: {
unico data[] = {0x636, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb7: {
unico data[] = {0x636, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb8: {
unico data[] = {0x637, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcb9: {
unico data[] = {0x638, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcba: {
unico data[] = {0x639, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcbb: {
unico data[] = {0x639, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcbc: {
unico data[] = {0x63a, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcbd: {
unico data[] = {0x63a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcbe: {
unico data[] = {0x641, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcbf: {
unico data[] = {0x641, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc0: {
unico data[] = {0x641, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc1: {
unico data[] = {0x641, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc2: {
unico data[] = {0x642, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc3: {
unico data[] = {0x642, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc4: {
unico data[] = {0x643, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc5: {
unico data[] = {0x643, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc6: {
unico data[] = {0x643, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc7: {
unico data[] = {0x643, 0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc8: {
unico data[] = {0x643, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcc9: {
unico data[] = {0x644, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcca: {
unico data[] = {0x644, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfccb: {
unico data[] = {0x644, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfccc: {
unico data[] = {0x644, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfccd: {
unico data[] = {0x644, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcce: {
unico data[] = {0x645, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfccf: {
unico data[] = {0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd0: {
unico data[] = {0x645, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd1: {
unico data[] = {0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd2: {
unico data[] = {0x646, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd3: {
unico data[] = {0x646, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd4: {
unico data[] = {0x646, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd5: {
unico data[] = {0x646, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd6: {
unico data[] = {0x646, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd7: {
unico data[] = {0x647, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd8: {
unico data[] = {0x647, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcd9: {
unico data[] = {0x647, 0x670};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcda: {
unico data[] = {0x64a, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcdb: {
unico data[] = {0x64a, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcdc: {
unico data[] = {0x64a, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcdd: {
unico data[] = {0x64a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcde: {
unico data[] = {0x64a, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcdf: {
unico data[] = {0x626, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce0: {
unico data[] = {0x626, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce1: {
unico data[] = {0x628, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce2: {
unico data[] = {0x628, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce3: {
unico data[] = {0x62a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce4: {
unico data[] = {0x62a, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce5: {
unico data[] = {0x62b, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce6: {
unico data[] = {0x62b, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce7: {
unico data[] = {0x633, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce8: {
unico data[] = {0x633, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfce9: {
unico data[] = {0x634, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcea: {
unico data[] = {0x634, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfceb: {
unico data[] = {0x643, 0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcec: {
unico data[] = {0x643, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfced: {
unico data[] = {0x644, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcee: {
unico data[] = {0x646, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcef: {
unico data[] = {0x646, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf0: {
unico data[] = {0x64a, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf1: {
unico data[] = {0x64a, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf2: {
unico data[] = {0x640, 0x64e, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf3: {
unico data[] = {0x640, 0x64f, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf4: {
unico data[] = {0x640, 0x650, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf5: {
unico data[] = {0x637, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf6: {
unico data[] = {0x637, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf7: {
unico data[] = {0x639, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf8: {
unico data[] = {0x639, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcf9: {
unico data[] = {0x63a, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcfa: {
unico data[] = {0x63a, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcfb: {
unico data[] = {0x633, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcfc: {
unico data[] = {0x633, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcfd: {
unico data[] = {0x634, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcfe: {
unico data[] = {0x634, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfcff: {
unico data[] = {0x62d, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd00: {
unico data[] = {0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd01: {
unico data[] = {0x62c, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd02: {
unico data[] = {0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd03: {
unico data[] = {0x62e, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd04: {
unico data[] = {0x62e, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd05: {
unico data[] = {0x635, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd06: {
unico data[] = {0x635, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd07: {
unico data[] = {0x636, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd08: {
unico data[] = {0x636, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd09: {
unico data[] = {0x634, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd0a: {
unico data[] = {0x634, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd0b: {
unico data[] = {0x634, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd0c: {
unico data[] = {0x634, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd0d: {
unico data[] = {0x634, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd0e: {
unico data[] = {0x633, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd0f: {
unico data[] = {0x635, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd10: {
unico data[] = {0x636, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd11: {
unico data[] = {0x637, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd12: {
unico data[] = {0x637, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd13: {
unico data[] = {0x639, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd14: {
unico data[] = {0x639, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd15: {
unico data[] = {0x63a, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd16: {
unico data[] = {0x63a, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd17: {
unico data[] = {0x633, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd18: {
unico data[] = {0x633, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd19: {
unico data[] = {0x634, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd1a: {
unico data[] = {0x634, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd1b: {
unico data[] = {0x62d, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd1c: {
unico data[] = {0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd1d: {
unico data[] = {0x62c, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd1e: {
unico data[] = {0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd1f: {
unico data[] = {0x62e, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd20: {
unico data[] = {0x62e, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd21: {
unico data[] = {0x635, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd22: {
unico data[] = {0x635, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd23: {
unico data[] = {0x636, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd24: {
unico data[] = {0x636, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd25: {
unico data[] = {0x634, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd26: {
unico data[] = {0x634, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd27: {
unico data[] = {0x634, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd28: {
unico data[] = {0x634, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd29: {
unico data[] = {0x634, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd2a: {
unico data[] = {0x633, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd2b: {
unico data[] = {0x635, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd2c: {
unico data[] = {0x636, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd2d: {
unico data[] = {0x634, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd2e: {
unico data[] = {0x634, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd2f: {
unico data[] = {0x634, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd30: {
unico data[] = {0x634, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd31: {
unico data[] = {0x633, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd32: {
unico data[] = {0x634, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd33: {
unico data[] = {0x637, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd34: {
unico data[] = {0x633, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd35: {
unico data[] = {0x633, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd36: {
unico data[] = {0x633, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd37: {
unico data[] = {0x634, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd38: {
unico data[] = {0x634, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd39: {
unico data[] = {0x634, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd3a: {
unico data[] = {0x637, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd3b: {
unico data[] = {0x638, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd3c: {
unico data[] = {0x627, 0x64b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd3d: {
unico data[] = {0x627, 0x64b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd50: {
unico data[] = {0x62a, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd51: {
unico data[] = {0x62a, 0x62d, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd52: {
unico data[] = {0x62a, 0x62d, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd53: {
unico data[] = {0x62a, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd54: {
unico data[] = {0x62a, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd55: {
unico data[] = {0x62a, 0x645, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd56: {
unico data[] = {0x62a, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd57: {
unico data[] = {0x62a, 0x645, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd58: {
unico data[] = {0x62c, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd59: {
unico data[] = {0x62c, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd5a: {
unico data[] = {0x62d, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd5b: {
unico data[] = {0x62d, 0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd5c: {
unico data[] = {0x633, 0x62d, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd5d: {
unico data[] = {0x633, 0x62c, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd5e: {
unico data[] = {0x633, 0x62c, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd5f: {
unico data[] = {0x633, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd60: {
unico data[] = {0x633, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd61: {
unico data[] = {0x633, 0x645, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd62: {
unico data[] = {0x633, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd63: {
unico data[] = {0x633, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd64: {
unico data[] = {0x635, 0x62d, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd65: {
unico data[] = {0x635, 0x62d, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd66: {
unico data[] = {0x635, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd67: {
unico data[] = {0x634, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd68: {
unico data[] = {0x634, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd69: {
unico data[] = {0x634, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd6a: {
unico data[] = {0x634, 0x645, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd6b: {
unico data[] = {0x634, 0x645, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd6c: {
unico data[] = {0x634, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd6d: {
unico data[] = {0x634, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd6e: {
unico data[] = {0x636, 0x62d, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd6f: {
unico data[] = {0x636, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd70: {
unico data[] = {0x636, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd71: {
unico data[] = {0x637, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd72: {
unico data[] = {0x637, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd73: {
unico data[] = {0x637, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd74: {
unico data[] = {0x637, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd75: {
unico data[] = {0x639, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd76: {
unico data[] = {0x639, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd77: {
unico data[] = {0x639, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd78: {
unico data[] = {0x639, 0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd79: {
unico data[] = {0x63a, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd7a: {
unico data[] = {0x63a, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd7b: {
unico data[] = {0x63a, 0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd7c: {
unico data[] = {0x641, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd7d: {
unico data[] = {0x641, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd7e: {
unico data[] = {0x642, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd7f: {
unico data[] = {0x642, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd80: {
unico data[] = {0x644, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd81: {
unico data[] = {0x644, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd82: {
unico data[] = {0x644, 0x62d, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd83: {
unico data[] = {0x644, 0x62c, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd84: {
unico data[] = {0x644, 0x62c, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd85: {
unico data[] = {0x644, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd86: {
unico data[] = {0x644, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd87: {
unico data[] = {0x644, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd88: {
unico data[] = {0x644, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd89: {
unico data[] = {0x645, 0x62d, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd8a: {
unico data[] = {0x645, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd8b: {
unico data[] = {0x645, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd8c: {
unico data[] = {0x645, 0x62c, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd8d: {
unico data[] = {0x645, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd8e: {
unico data[] = {0x645, 0x62e, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd8f: {
unico data[] = {0x645, 0x62e, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd92: {
unico data[] = {0x645, 0x62c, 0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd93: {
unico data[] = {0x647, 0x645, 0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd94: {
unico data[] = {0x647, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd95: {
unico data[] = {0x646, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd96: {
unico data[] = {0x646, 0x62d, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd97: {
unico data[] = {0x646, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd98: {
unico data[] = {0x646, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd99: {
unico data[] = {0x646, 0x62c, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd9a: {
unico data[] = {0x646, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd9b: {
unico data[] = {0x646, 0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd9c: {
unico data[] = {0x64a, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd9d: {
unico data[] = {0x64a, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd9e: {
unico data[] = {0x628, 0x62e, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd9f: {
unico data[] = {0x62a, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda0: {
unico data[] = {0x62a, 0x62c, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda1: {
unico data[] = {0x62a, 0x62e, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda2: {
unico data[] = {0x62a, 0x62e, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda3: {
unico data[] = {0x62a, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda4: {
unico data[] = {0x62a, 0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda5: {
unico data[] = {0x62c, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda6: {
unico data[] = {0x62c, 0x62d, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda7: {
unico data[] = {0x62c, 0x645, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda8: {
unico data[] = {0x633, 0x62e, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfda9: {
unico data[] = {0x635, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdaa: {
unico data[] = {0x634, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdab: {
unico data[] = {0x636, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdac: {
unico data[] = {0x644, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdad: {
unico data[] = {0x644, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdae: {
unico data[] = {0x64a, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdaf: {
unico data[] = {0x64a, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb0: {
unico data[] = {0x64a, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb1: {
unico data[] = {0x645, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb2: {
unico data[] = {0x642, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb3: {
unico data[] = {0x646, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb4: {
unico data[] = {0x642, 0x645, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb5: {
unico data[] = {0x644, 0x62d, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb6: {
unico data[] = {0x639, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb7: {
unico data[] = {0x643, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb8: {
unico data[] = {0x646, 0x62c, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdb9: {
unico data[] = {0x645, 0x62e, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdba: {
unico data[] = {0x644, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdbb: {
unico data[] = {0x643, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdbc: {
unico data[] = {0x644, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdbd: {
unico data[] = {0x646, 0x62c, 0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdbe: {
unico data[] = {0x62c, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdbf: {
unico data[] = {0x62d, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc0: {
unico data[] = {0x645, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc1: {
unico data[] = {0x641, 0x645, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc2: {
unico data[] = {0x628, 0x62d, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc3: {
unico data[] = {0x643, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc4: {
unico data[] = {0x639, 0x62c, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc5: {
unico data[] = {0x635, 0x645, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc6: {
unico data[] = {0x633, 0x62e, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdc7: {
unico data[] = {0x646, 0x62c, 0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf0: {
unico data[] = {0x635, 0x644, 0x6d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf1: {
unico data[] = {0x642, 0x644, 0x6d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf2: {
unico data[] = {0x627, 0x644, 0x644, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf3: {
unico data[] = {0x627, 0x643, 0x628, 0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf4: {
unico data[] = {0x645, 0x62d, 0x645, 0x62f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf5: {
unico data[] = {0x635, 0x644, 0x639, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf6: {
unico data[] = {0x631, 0x633, 0x648, 0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf7: {
unico data[] = {0x639, 0x644, 0x64a, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf8: {
unico data[] = {0x648, 0x633, 0x644, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdf9: {
unico data[] = {0x635, 0x644, 0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdfa: {
unico data[] = {0x635, 0x644, 0x649, 0x20, 0x627, 0x644, 0x644, 0x647, 0x20, 0x639, 0x644, 0x64a, 0x647, 0x20, 0x648, 0x633, 0x644, 0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdfb: {
unico data[] = {0x62c, 0x644, 0x20, 0x62c, 0x644, 0x627, 0x644, 0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfdfc: {
unico data[] = {0x631, 0x6cc, 0x627, 0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe10: {
unico data[] = {0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe11: {
unico data[] = {0x3001};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe12: {
unico data[] = {0x3002};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe13: {
unico data[] = {0x3a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe14: {
unico data[] = {0x3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe15: {
unico data[] = {0x21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe16: {
unico data[] = {0x3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe17: {
unico data[] = {0x3016};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe18: {
unico data[] = {0x3017};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe19: {
unico data[] = {0x2e, 0x2e, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe30: {
unico data[] = {0x2e, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe31: {
unico data[] = {0x2014};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe32: {
unico data[] = {0x2013};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe33: {
unico data[] = {0x5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe34: {
unico data[] = {0x5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe35: {
unico data[] = {0x28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe36: {
unico data[] = {0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe37: {
unico data[] = {0x7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe38: {
unico data[] = {0x7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe39: {
unico data[] = {0x3014};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe3a: {
unico data[] = {0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe3b: {
unico data[] = {0x3010};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe3c: {
unico data[] = {0x3011};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe3d: {
unico data[] = {0x300a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe3e: {
unico data[] = {0x300b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe3f: {
unico data[] = {0x3008};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe40: {
unico data[] = {0x3009};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe41: {
unico data[] = {0x300c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe42: {
unico data[] = {0x300d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe43: {
unico data[] = {0x300e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe44: {
unico data[] = {0x300f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe47: {
unico data[] = {0x5b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe48: {
unico data[] = {0x5d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe49: {
unico data[] = {0x20, 0x305};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe4a: {
unico data[] = {0x20, 0x305};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe4b: {
unico data[] = {0x20, 0x305};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe4c: {
unico data[] = {0x20, 0x305};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe4d: {
unico data[] = {0x5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe4e: {
unico data[] = {0x5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe4f: {
unico data[] = {0x5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe50: {
unico data[] = {0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe51: {
unico data[] = {0x3001};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe52: {
unico data[] = {0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe54: {
unico data[] = {0x3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe55: {
unico data[] = {0x3a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe56: {
unico data[] = {0x3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe57: {
unico data[] = {0x21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe58: {
unico data[] = {0x2014};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe59: {
unico data[] = {0x28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe5a: {
unico data[] = {0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe5b: {
unico data[] = {0x7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe5c: {
unico data[] = {0x7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe5d: {
unico data[] = {0x3014};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe5e: {
unico data[] = {0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe5f: {
unico data[] = {0x23};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe60: {
unico data[] = {0x26};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe61: {
unico data[] = {0x2a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe62: {
unico data[] = {0x2b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe63: {
unico data[] = {0x2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe64: {
unico data[] = {0x3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe65: {
unico data[] = {0x3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe66: {
unico data[] = {0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe68: {
unico data[] = {0x5c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe69: {
unico data[] = {0x24};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe6a: {
unico data[] = {0x25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe6b: {
unico data[] = {0x40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe70: {
unico data[] = {0x20, 0x64b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe71: {
unico data[] = {0x640, 0x64b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe72: {
unico data[] = {0x20, 0x64c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe74: {
unico data[] = {0x20, 0x64d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe76: {
unico data[] = {0x20, 0x64e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe77: {
unico data[] = {0x640, 0x64e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe78: {
unico data[] = {0x20, 0x64f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe79: {
unico data[] = {0x640, 0x64f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe7a: {
unico data[] = {0x20, 0x650};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe7b: {
unico data[] = {0x640, 0x650};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe7c: {
unico data[] = {0x20, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe7d: {
unico data[] = {0x640, 0x651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe7e: {
unico data[] = {0x20, 0x652};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe7f: {
unico data[] = {0x640, 0x652};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe80: {
unico data[] = {0x621};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe81: {
unico data[] = {0x622};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe82: {
unico data[] = {0x622};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe83: {
unico data[] = {0x623};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe84: {
unico data[] = {0x623};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe85: {
unico data[] = {0x624};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe86: {
unico data[] = {0x624};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe87: {
unico data[] = {0x625};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe88: {
unico data[] = {0x625};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe89: {
unico data[] = {0x626};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe8a: {
unico data[] = {0x626};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe8b: {
unico data[] = {0x626};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe8c: {
unico data[] = {0x626};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe8d: {
unico data[] = {0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe8e: {
unico data[] = {0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe8f: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe90: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe91: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe92: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe93: {
unico data[] = {0x629};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe94: {
unico data[] = {0x629};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe95: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe96: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe97: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe98: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe99: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe9a: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe9b: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe9c: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe9d: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe9e: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe9f: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea0: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea1: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea2: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea3: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea4: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea5: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea6: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea7: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea8: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfea9: {
unico data[] = {0x62f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeaa: {
unico data[] = {0x62f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeab: {
unico data[] = {0x630};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeac: {
unico data[] = {0x630};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfead: {
unico data[] = {0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeae: {
unico data[] = {0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeaf: {
unico data[] = {0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb0: {
unico data[] = {0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb1: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb2: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb3: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb4: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb5: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb6: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb7: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb8: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeb9: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeba: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfebb: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfebc: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfebd: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfebe: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfebf: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec0: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec1: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec2: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec3: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec4: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec5: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec6: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec7: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec8: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfec9: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeca: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfecb: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfecc: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfecd: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfece: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfecf: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed0: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed1: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed2: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed3: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed4: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed5: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed6: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed7: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed8: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfed9: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeda: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfedb: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfedc: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfedd: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfede: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfedf: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee0: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee1: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee2: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee3: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee4: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee5: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee6: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee7: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee8: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfee9: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeea: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeeb: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeec: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeed: {
unico data[] = {0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeee: {
unico data[] = {0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfeef: {
unico data[] = {0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef0: {
unico data[] = {0x649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef1: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef2: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef3: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef4: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef5: {
unico data[] = {0x644, 0x622};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef6: {
unico data[] = {0x644, 0x622};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef7: {
unico data[] = {0x644, 0x623};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef8: {
unico data[] = {0x644, 0x623};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfef9: {
unico data[] = {0x644, 0x625};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfefa: {
unico data[] = {0x644, 0x625};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfefb: {
unico data[] = {0x644, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfefc: {
unico data[] = {0x644, 0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff01: {
unico data[] = {0x21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff02: {
unico data[] = {0x22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff03: {
unico data[] = {0x23};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff04: {
unico data[] = {0x24};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff05: {
unico data[] = {0x25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff06: {
unico data[] = {0x26};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff07: {
unico data[] = {0x27};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff08: {
unico data[] = {0x28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff09: {
unico data[] = {0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff0a: {
unico data[] = {0x2a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff0b: {
unico data[] = {0x2b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff0c: {
unico data[] = {0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff0d: {
unico data[] = {0x2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff0e: {
unico data[] = {0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff0f: {
unico data[] = {0x2f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff10: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff11: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff12: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff13: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff14: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff15: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff16: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff17: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff18: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff19: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff1a: {
unico data[] = {0x3a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff1b: {
unico data[] = {0x3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff1c: {
unico data[] = {0x3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff1d: {
unico data[] = {0x3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff1e: {
unico data[] = {0x3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff1f: {
unico data[] = {0x3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff20: {
unico data[] = {0x40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff21: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff22: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff23: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff24: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff25: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff26: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff27: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff28: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff29: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2a: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2b: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2c: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2d: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2e: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2f: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff30: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff31: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff32: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff33: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff34: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff35: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff36: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff37: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff38: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff39: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3a: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3b: {
unico data[] = {0x5b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3c: {
unico data[] = {0x5c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3d: {
unico data[] = {0x5d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3e: {
unico data[] = {0x5e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3f: {
unico data[] = {0x5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff40: {
unico data[] = {0x60};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff41: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff42: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff43: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff44: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff45: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff46: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff47: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff48: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff49: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4a: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4b: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4c: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4d: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4e: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4f: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff50: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff51: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff52: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff53: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff54: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff55: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff56: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff57: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff58: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff59: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5a: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5b: {
unico data[] = {0x7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5c: {
unico data[] = {0x7c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5d: {
unico data[] = {0x7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5e: {
unico data[] = {0x7e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5f: {
unico data[] = {0x2985};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff60: {
unico data[] = {0x2986};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff61: {
unico data[] = {0x3002};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff62: {
unico data[] = {0x300c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff63: {
unico data[] = {0x300d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff64: {
unico data[] = {0x3001};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff65: {
unico data[] = {0x30fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff66: {
unico data[] = {0x30f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff67: {
unico data[] = {0x30a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff68: {
unico data[] = {0x30a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff69: {
unico data[] = {0x30a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff6a: {
unico data[] = {0x30a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff6b: {
unico data[] = {0x30a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff6c: {
unico data[] = {0x30e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff6d: {
unico data[] = {0x30e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff6e: {
unico data[] = {0x30e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff6f: {
unico data[] = {0x30c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff70: {
unico data[] = {0x30fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff71: {
unico data[] = {0x30a2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff72: {
unico data[] = {0x30a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff73: {
unico data[] = {0x30a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff74: {
unico data[] = {0x30a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff75: {
unico data[] = {0x30aa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff76: {
unico data[] = {0x30ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff77: {
unico data[] = {0x30ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff78: {
unico data[] = {0x30af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff79: {
unico data[] = {0x30b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff7a: {
unico data[] = {0x30b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff7b: {
unico data[] = {0x30b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff7c: {
unico data[] = {0x30b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff7d: {
unico data[] = {0x30b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff7e: {
unico data[] = {0x30bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff7f: {
unico data[] = {0x30bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff80: {
unico data[] = {0x30bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff81: {
unico data[] = {0x30c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff82: {
unico data[] = {0x30c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff83: {
unico data[] = {0x30c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff84: {
unico data[] = {0x30c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff85: {
unico data[] = {0x30ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff86: {
unico data[] = {0x30cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff87: {
unico data[] = {0x30cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff88: {
unico data[] = {0x30cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff89: {
unico data[] = {0x30ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff8a: {
unico data[] = {0x30cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff8b: {
unico data[] = {0x30d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff8c: {
unico data[] = {0x30d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff8d: {
unico data[] = {0x30d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff8e: {
unico data[] = {0x30db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff8f: {
unico data[] = {0x30de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff90: {
unico data[] = {0x30df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff91: {
unico data[] = {0x30e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff92: {
unico data[] = {0x30e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff93: {
unico data[] = {0x30e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff94: {
unico data[] = {0x30e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff95: {
unico data[] = {0x30e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff96: {
unico data[] = {0x30e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff97: {
unico data[] = {0x30e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff98: {
unico data[] = {0x30ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff99: {
unico data[] = {0x30eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff9a: {
unico data[] = {0x30ec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff9b: {
unico data[] = {0x30ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff9c: {
unico data[] = {0x30ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff9d: {
unico data[] = {0x30f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff9e: {
unico data[] = {0x3099};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff9f: {
unico data[] = {0x309a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa0: {
unico data[] = {0x1160};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa1: {
unico data[] = {0x1100};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa2: {
unico data[] = {0x1101};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa3: {
unico data[] = {0x11aa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa4: {
unico data[] = {0x1102};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa5: {
unico data[] = {0x11ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa6: {
unico data[] = {0x11ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa7: {
unico data[] = {0x1103};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa8: {
unico data[] = {0x1104};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffa9: {
unico data[] = {0x1105};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffaa: {
unico data[] = {0x11b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffab: {
unico data[] = {0x11b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffac: {
unico data[] = {0x11b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffad: {
unico data[] = {0x11b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffae: {
unico data[] = {0x11b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffaf: {
unico data[] = {0x11b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb0: {
unico data[] = {0x111a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb1: {
unico data[] = {0x1106};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb2: {
unico data[] = {0x1107};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb3: {
unico data[] = {0x1108};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb4: {
unico data[] = {0x1121};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb5: {
unico data[] = {0x1109};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb6: {
unico data[] = {0x110a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb7: {
unico data[] = {0x110b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb8: {
unico data[] = {0x110c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffb9: {
unico data[] = {0x110d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffba: {
unico data[] = {0x110e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffbb: {
unico data[] = {0x110f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffbc: {
unico data[] = {0x1110};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffbd: {
unico data[] = {0x1111};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffbe: {
unico data[] = {0x1112};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffc2: {
unico data[] = {0x1161};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffc3: {
unico data[] = {0x1162};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffc4: {
unico data[] = {0x1163};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffc5: {
unico data[] = {0x1164};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffc6: {
unico data[] = {0x1165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffc7: {
unico data[] = {0x1166};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffca: {
unico data[] = {0x1167};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffcb: {
unico data[] = {0x1168};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffcc: {
unico data[] = {0x1169};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffcd: {
unico data[] = {0x116a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffce: {
unico data[] = {0x116b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffcf: {
unico data[] = {0x116c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffd2: {
unico data[] = {0x116d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffd3: {
unico data[] = {0x116e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffd4: {
unico data[] = {0x116f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffd5: {
unico data[] = {0x1170};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffd6: {
unico data[] = {0x1171};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffd7: {
unico data[] = {0x1172};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffda: {
unico data[] = {0x1173};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffdb: {
unico data[] = {0x1174};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffdc: {
unico data[] = {0x1175};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe0: {
unico data[] = {0xa2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe1: {
unico data[] = {0xa3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe2: {
unico data[] = {0xac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe3: {
unico data[] = {0x20, 0x304};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe4: {
unico data[] = {0xa6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe5: {
unico data[] = {0xa5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe6: {
unico data[] = {0x20a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe8: {
unico data[] = {0x2502};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffe9: {
unico data[] = {0x2190};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffea: {
unico data[] = {0x2191};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffeb: {
unico data[] = {0x2192};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffec: {
unico data[] = {0x2193};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffed: {
unico data[] = {0x25a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xffee: {
unico data[] = {0x25cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d15e: {
unico data[] = {0x1d157, 0x1d165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d15f: {
unico data[] = {0x1d158, 0x1d165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d160: {
unico data[] = {0x1d158, 0x1d165, 0x1d16e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d161: {
unico data[] = {0x1d158, 0x1d165, 0x1d16f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d162: {
unico data[] = {0x1d158, 0x1d165, 0x1d170};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d163: {
unico data[] = {0x1d158, 0x1d165, 0x1d171};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d164: {
unico data[] = {0x1d158, 0x1d165, 0x1d172};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bb: {
unico data[] = {0x1d1b9, 0x1d165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bc: {
unico data[] = {0x1d1ba, 0x1d165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bd: {
unico data[] = {0x1d1b9, 0x1d165, 0x1d16e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1be: {
unico data[] = {0x1d1ba, 0x1d165, 0x1d16e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bf: {
unico data[] = {0x1d1b9, 0x1d165, 0x1d16f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1c0: {
unico data[] = {0x1d1ba, 0x1d165, 0x1d16f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d400: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d401: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d402: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d403: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d404: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d405: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d406: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d407: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d408: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d409: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40a: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40b: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40c: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40d: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40e: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d40f: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d410: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d411: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d412: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d413: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d414: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d415: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d416: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d417: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d418: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d419: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41a: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41b: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41c: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41d: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41e: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d41f: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d420: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d421: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d422: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d423: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d424: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d425: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d426: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d427: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d428: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d429: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42a: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42b: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42c: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42d: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42e: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d42f: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d430: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d431: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d432: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d433: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d434: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d435: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d436: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d437: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d438: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d439: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43a: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43b: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43c: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43d: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43e: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d43f: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d440: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d441: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d442: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d443: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d444: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d445: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d446: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d447: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d448: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d449: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44a: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44b: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44c: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44d: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44e: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d44f: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d450: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d451: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d452: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d453: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d454: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d456: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d457: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d458: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d459: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45a: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45b: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45c: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45d: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45e: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d45f: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d460: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d461: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d462: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d463: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d464: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d465: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d466: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d467: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d468: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d469: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46a: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46b: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46c: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46d: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46e: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d46f: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d470: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d471: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d472: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d473: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d474: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d475: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d476: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d477: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d478: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d479: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47a: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47b: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47c: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47d: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47e: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d47f: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d480: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d481: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d482: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d483: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d484: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d485: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d486: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d487: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d488: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d489: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48a: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48b: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48c: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48d: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48e: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d48f: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d490: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d491: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d492: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d493: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d494: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d495: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d496: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d497: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d498: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d499: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d49a: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d49b: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d49c: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d49e: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d49f: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4a2: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4a5: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4a6: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4a9: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4aa: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ab: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ac: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ae: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4af: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b0: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b1: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b2: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b3: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b4: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b5: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b6: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b7: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b8: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4b9: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4bb: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4bd: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4be: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4bf: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c0: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c1: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c2: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c3: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c5: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c6: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c7: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c8: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4c9: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ca: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4cb: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4cc: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4cd: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ce: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4cf: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d0: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d1: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d2: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d3: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d4: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d5: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d6: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d7: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d8: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4d9: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4da: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4db: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4dc: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4dd: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4de: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4df: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e0: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e1: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e2: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e3: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e4: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e5: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e6: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e7: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e8: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4e9: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ea: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4eb: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ec: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ed: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ee: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ef: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f0: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f1: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f2: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f3: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f4: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f5: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f6: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f7: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f8: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4f9: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4fa: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4fb: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4fc: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4fd: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4fe: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4ff: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d500: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d501: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d502: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d503: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d504: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d505: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d507: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d508: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d509: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d50a: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d50d: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d50e: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d50f: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d510: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d511: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d512: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d513: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d514: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d516: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d517: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d518: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d519: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d51a: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d51b: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d51c: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d51e: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d51f: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d520: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d521: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d522: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d523: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d524: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d525: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d526: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d527: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d528: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d529: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52a: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52b: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52c: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52d: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52e: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d52f: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d530: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d531: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d532: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d533: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d534: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d535: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d536: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d537: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d538: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d539: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d53b: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d53c: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d53d: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d53e: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d540: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d541: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d542: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d543: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d544: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d546: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54a: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54b: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54c: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54d: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54e: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d54f: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d550: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d552: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d553: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d554: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d555: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d556: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d557: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d558: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d559: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55a: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55b: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55c: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55d: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55e: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d55f: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d560: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d561: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d562: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d563: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d564: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d565: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d566: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d567: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d568: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d569: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56a: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56b: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56c: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56d: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56e: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d56f: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d570: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d571: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d572: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d573: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d574: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d575: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d576: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d577: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d578: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d579: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57a: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57b: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57c: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57d: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57e: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d57f: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d580: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d581: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d582: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d583: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d584: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d585: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d586: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d587: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d588: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d589: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58a: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58b: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58c: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58d: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58e: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d58f: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d590: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d591: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d592: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d593: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d594: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d595: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d596: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d597: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d598: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d599: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59a: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59b: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59c: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59d: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59e: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d59f: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a0: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a1: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a2: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a3: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a4: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a5: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a6: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a7: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a8: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5a9: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5aa: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ab: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ac: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ad: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ae: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5af: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b0: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b1: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b2: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b3: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b4: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b5: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b6: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b7: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b8: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5b9: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ba: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5bb: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5bc: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5bd: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5be: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5bf: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c0: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c1: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c2: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c3: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c4: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c5: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c6: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c7: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c8: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5c9: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ca: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5cb: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5cc: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5cd: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ce: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5cf: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d0: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d1: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d2: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d3: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d4: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d5: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d6: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d7: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d8: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5d9: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5da: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5db: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5dc: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5dd: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5de: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5df: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e0: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e1: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e2: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e3: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e4: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e5: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e6: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e7: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e8: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5e9: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ea: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5eb: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ec: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ed: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ee: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ef: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f0: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f1: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f2: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f3: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f4: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f5: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f6: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f7: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f8: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5f9: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5fa: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5fb: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5fc: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5fd: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5fe: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5ff: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d600: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d601: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d602: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d603: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d604: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d605: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d606: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d607: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d608: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d609: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60a: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60b: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60c: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60d: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60e: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d60f: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d610: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d611: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d612: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d613: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d614: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d615: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d616: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d617: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d618: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d619: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61a: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61b: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61c: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61d: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61e: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d61f: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d620: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d621: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d622: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d623: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d624: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d625: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d626: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d627: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d628: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d629: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62a: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62b: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62c: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62d: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62e: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d62f: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d630: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d631: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d632: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d633: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d634: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d635: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d636: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d637: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d638: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d639: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63a: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63b: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63c: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63d: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63e: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d63f: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d640: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d641: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d642: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d643: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d644: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d645: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d646: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d647: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d648: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d649: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64a: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64b: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64c: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64d: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64e: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d64f: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d650: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d651: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d652: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d653: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d654: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d655: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d656: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d657: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d658: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d659: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65a: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65b: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65c: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65d: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65e: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d65f: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d660: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d661: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d662: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d663: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d664: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d665: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d666: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d667: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d668: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d669: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66a: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66b: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66c: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66d: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66e: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d66f: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d670: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d671: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d672: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d673: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d674: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d675: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d676: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d677: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d678: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d679: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67a: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67b: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67c: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67d: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67e: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d67f: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d680: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d681: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d682: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d683: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d684: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d685: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d686: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d687: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d688: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d689: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68a: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68b: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68c: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68d: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68e: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d68f: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d690: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d691: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d692: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d693: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d694: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d695: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d696: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d697: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d698: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d699: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69a: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69b: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69c: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69d: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69e: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d69f: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a0: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a1: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a2: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a3: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a4: {
unico data[] = {0x131};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a5: {
unico data[] = {0x237};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a8: {
unico data[] = {0x391};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6a9: {
unico data[] = {0x392};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6aa: {
unico data[] = {0x393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ab: {
unico data[] = {0x394};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ac: {
unico data[] = {0x395};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ad: {
unico data[] = {0x396};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ae: {
unico data[] = {0x397};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6af: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b0: {
unico data[] = {0x399};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b1: {
unico data[] = {0x39a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b2: {
unico data[] = {0x39b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b3: {
unico data[] = {0x39c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b4: {
unico data[] = {0x39d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b5: {
unico data[] = {0x39e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b6: {
unico data[] = {0x39f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b7: {
unico data[] = {0x3a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b8: {
unico data[] = {0x3a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6b9: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ba: {
unico data[] = {0x3a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6bb: {
unico data[] = {0x3a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6bc: {
unico data[] = {0x3a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6bd: {
unico data[] = {0x3a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6be: {
unico data[] = {0x3a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6bf: {
unico data[] = {0x3a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c0: {
unico data[] = {0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c1: {
unico data[] = {0x2207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c2: {
unico data[] = {0x3b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c3: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c4: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c5: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c6: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c7: {
unico data[] = {0x3b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c8: {
unico data[] = {0x3b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6c9: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ca: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6cb: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6cc: {
unico data[] = {0x3bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6cd: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ce: {
unico data[] = {0x3bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6cf: {
unico data[] = {0x3be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d0: {
unico data[] = {0x3bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d1: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d2: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d3: {
unico data[] = {0x3c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d4: {
unico data[] = {0x3c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d5: {
unico data[] = {0x3c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d6: {
unico data[] = {0x3c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d7: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d8: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6d9: {
unico data[] = {0x3c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6da: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6db: {
unico data[] = {0x2202};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6dc: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6dd: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6de: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6df: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e0: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e1: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e2: {
unico data[] = {0x391};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e3: {
unico data[] = {0x392};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e4: {
unico data[] = {0x393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e5: {
unico data[] = {0x394};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e6: {
unico data[] = {0x395};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e7: {
unico data[] = {0x396};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e8: {
unico data[] = {0x397};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6e9: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ea: {
unico data[] = {0x399};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6eb: {
unico data[] = {0x39a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ec: {
unico data[] = {0x39b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ed: {
unico data[] = {0x39c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ee: {
unico data[] = {0x39d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ef: {
unico data[] = {0x39e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f0: {
unico data[] = {0x39f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f1: {
unico data[] = {0x3a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f2: {
unico data[] = {0x3a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f3: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f4: {
unico data[] = {0x3a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f5: {
unico data[] = {0x3a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f6: {
unico data[] = {0x3a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f7: {
unico data[] = {0x3a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f8: {
unico data[] = {0x3a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6f9: {
unico data[] = {0x3a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6fa: {
unico data[] = {0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6fb: {
unico data[] = {0x2207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6fc: {
unico data[] = {0x3b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6fd: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6fe: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6ff: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d700: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d701: {
unico data[] = {0x3b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d702: {
unico data[] = {0x3b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d703: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d704: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d705: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d706: {
unico data[] = {0x3bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d707: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d708: {
unico data[] = {0x3bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d709: {
unico data[] = {0x3be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d70a: {
unico data[] = {0x3bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d70b: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d70c: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d70d: {
unico data[] = {0x3c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d70e: {
unico data[] = {0x3c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d70f: {
unico data[] = {0x3c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d710: {
unico data[] = {0x3c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d711: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d712: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d713: {
unico data[] = {0x3c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d714: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d715: {
unico data[] = {0x2202};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d716: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d717: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d718: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d719: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d71a: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d71b: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d71c: {
unico data[] = {0x391};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d71d: {
unico data[] = {0x392};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d71e: {
unico data[] = {0x393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d71f: {
unico data[] = {0x394};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d720: {
unico data[] = {0x395};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d721: {
unico data[] = {0x396};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d722: {
unico data[] = {0x397};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d723: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d724: {
unico data[] = {0x399};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d725: {
unico data[] = {0x39a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d726: {
unico data[] = {0x39b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d727: {
unico data[] = {0x39c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d728: {
unico data[] = {0x39d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d729: {
unico data[] = {0x39e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d72a: {
unico data[] = {0x39f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d72b: {
unico data[] = {0x3a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d72c: {
unico data[] = {0x3a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d72d: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d72e: {
unico data[] = {0x3a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d72f: {
unico data[] = {0x3a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d730: {
unico data[] = {0x3a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d731: {
unico data[] = {0x3a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d732: {
unico data[] = {0x3a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d733: {
unico data[] = {0x3a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d734: {
unico data[] = {0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d735: {
unico data[] = {0x2207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d736: {
unico data[] = {0x3b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d737: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d738: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d739: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d73a: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d73b: {
unico data[] = {0x3b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d73c: {
unico data[] = {0x3b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d73d: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d73e: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d73f: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d740: {
unico data[] = {0x3bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d741: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d742: {
unico data[] = {0x3bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d743: {
unico data[] = {0x3be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d744: {
unico data[] = {0x3bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d745: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d746: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d747: {
unico data[] = {0x3c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d748: {
unico data[] = {0x3c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d749: {
unico data[] = {0x3c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d74a: {
unico data[] = {0x3c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d74b: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d74c: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d74d: {
unico data[] = {0x3c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d74e: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d74f: {
unico data[] = {0x2202};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d750: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d751: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d752: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d753: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d754: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d755: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d756: {
unico data[] = {0x391};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d757: {
unico data[] = {0x392};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d758: {
unico data[] = {0x393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d759: {
unico data[] = {0x394};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d75a: {
unico data[] = {0x395};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d75b: {
unico data[] = {0x396};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d75c: {
unico data[] = {0x397};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d75d: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d75e: {
unico data[] = {0x399};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d75f: {
unico data[] = {0x39a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d760: {
unico data[] = {0x39b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d761: {
unico data[] = {0x39c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d762: {
unico data[] = {0x39d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d763: {
unico data[] = {0x39e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d764: {
unico data[] = {0x39f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d765: {
unico data[] = {0x3a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d766: {
unico data[] = {0x3a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d767: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d768: {
unico data[] = {0x3a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d769: {
unico data[] = {0x3a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d76a: {
unico data[] = {0x3a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d76b: {
unico data[] = {0x3a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d76c: {
unico data[] = {0x3a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d76d: {
unico data[] = {0x3a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d76e: {
unico data[] = {0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d76f: {
unico data[] = {0x2207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d770: {
unico data[] = {0x3b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d771: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d772: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d773: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d774: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d775: {
unico data[] = {0x3b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d776: {
unico data[] = {0x3b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d777: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d778: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d779: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d77a: {
unico data[] = {0x3bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d77b: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d77c: {
unico data[] = {0x3bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d77d: {
unico data[] = {0x3be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d77e: {
unico data[] = {0x3bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d77f: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d780: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d781: {
unico data[] = {0x3c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d782: {
unico data[] = {0x3c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d783: {
unico data[] = {0x3c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d784: {
unico data[] = {0x3c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d785: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d786: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d787: {
unico data[] = {0x3c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d788: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d789: {
unico data[] = {0x2202};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78a: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78b: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78c: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78d: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78e: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d78f: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d790: {
unico data[] = {0x391};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d791: {
unico data[] = {0x392};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d792: {
unico data[] = {0x393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d793: {
unico data[] = {0x394};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d794: {
unico data[] = {0x395};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d795: {
unico data[] = {0x396};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d796: {
unico data[] = {0x397};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d797: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d798: {
unico data[] = {0x399};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d799: {
unico data[] = {0x39a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79a: {
unico data[] = {0x39b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79b: {
unico data[] = {0x39c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79c: {
unico data[] = {0x39d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79d: {
unico data[] = {0x39e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79e: {
unico data[] = {0x39f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79f: {
unico data[] = {0x3a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a0: {
unico data[] = {0x3a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a1: {
unico data[] = {0x398};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a2: {
unico data[] = {0x3a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a3: {
unico data[] = {0x3a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a4: {
unico data[] = {0x3a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a5: {
unico data[] = {0x3a6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a6: {
unico data[] = {0x3a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a7: {
unico data[] = {0x3a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a8: {
unico data[] = {0x3a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7a9: {
unico data[] = {0x2207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7aa: {
unico data[] = {0x3b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ab: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ac: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ad: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ae: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7af: {
unico data[] = {0x3b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b0: {
unico data[] = {0x3b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b1: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b2: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b3: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b4: {
unico data[] = {0x3bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b5: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b6: {
unico data[] = {0x3bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b7: {
unico data[] = {0x3be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b8: {
unico data[] = {0x3bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7b9: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ba: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7bb: {
unico data[] = {0x3c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7bc: {
unico data[] = {0x3c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7bd: {
unico data[] = {0x3c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7be: {
unico data[] = {0x3c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7bf: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c0: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c1: {
unico data[] = {0x3c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c2: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c3: {
unico data[] = {0x2202};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c4: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c5: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c6: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c7: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c8: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7c9: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ca: {
unico data[] = {0x3dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7cb: {
unico data[] = {0x3dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ce: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7cf: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d0: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d1: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d2: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d3: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d4: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d5: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d6: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d7: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d8: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d9: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7da: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7db: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7dc: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7dd: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7de: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7df: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e0: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e1: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e2: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e3: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e4: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e5: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e6: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e7: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e8: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7e9: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ea: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7eb: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ec: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ed: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ee: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ef: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f0: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f1: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f2: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f3: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f4: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f5: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f6: {
unico data[] = {0x30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f7: {
unico data[] = {0x31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f8: {
unico data[] = {0x32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7f9: {
unico data[] = {0x33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7fa: {
unico data[] = {0x34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7fb: {
unico data[] = {0x35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7fc: {
unico data[] = {0x36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7fd: {
unico data[] = {0x37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7fe: {
unico data[] = {0x38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7ff: {
unico data[] = {0x39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee00: {
unico data[] = {0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee01: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee02: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee03: {
unico data[] = {0x62f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee05: {
unico data[] = {0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee06: {
unico data[] = {0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee07: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee08: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee09: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0a: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0b: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0c: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0d: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0e: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0f: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee10: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee11: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee12: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee13: {
unico data[] = {0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee14: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee15: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee16: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee17: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee18: {
unico data[] = {0x630};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee19: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1a: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1b: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1c: {
unico data[] = {0x66e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1d: {
unico data[] = {0x6ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1e: {
unico data[] = {0x6a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1f: {
unico data[] = {0x66f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee21: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee22: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee24: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee27: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee29: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2a: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2b: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2c: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2d: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2e: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2f: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee30: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee31: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee32: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee34: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee35: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee36: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee37: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee39: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee3b: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee42: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee47: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee49: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee4b: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee4d: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee4e: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee4f: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee51: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee52: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee54: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee57: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee59: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee5b: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee5d: {
unico data[] = {0x6ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee5f: {
unico data[] = {0x66f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee61: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee62: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee64: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee67: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee68: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee69: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee6a: {
unico data[] = {0x643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee6c: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee6d: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee6e: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee6f: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee70: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee71: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee72: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee74: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee75: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee76: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee77: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee79: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee7a: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee7b: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee7c: {
unico data[] = {0x66e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee7e: {
unico data[] = {0x6a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee80: {
unico data[] = {0x627};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee81: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee82: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee83: {
unico data[] = {0x62f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee84: {
unico data[] = {0x647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee85: {
unico data[] = {0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee86: {
unico data[] = {0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee87: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee88: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee89: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee8b: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee8c: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee8d: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee8e: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee8f: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee90: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee91: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee92: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee93: {
unico data[] = {0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee94: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee95: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee96: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee97: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee98: {
unico data[] = {0x630};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee99: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee9a: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee9b: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea1: {
unico data[] = {0x628};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea2: {
unico data[] = {0x62c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea3: {
unico data[] = {0x62f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea5: {
unico data[] = {0x648};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea6: {
unico data[] = {0x632};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea7: {
unico data[] = {0x62d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea8: {
unico data[] = {0x637};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea9: {
unico data[] = {0x64a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeab: {
unico data[] = {0x644};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeac: {
unico data[] = {0x645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eead: {
unico data[] = {0x646};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeae: {
unico data[] = {0x633};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeaf: {
unico data[] = {0x639};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb0: {
unico data[] = {0x641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb1: {
unico data[] = {0x635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb2: {
unico data[] = {0x642};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb3: {
unico data[] = {0x631};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb4: {
unico data[] = {0x634};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb5: {
unico data[] = {0x62a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb6: {
unico data[] = {0x62b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb7: {
unico data[] = {0x62e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb8: {
unico data[] = {0x630};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb9: {
unico data[] = {0x636};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeba: {
unico data[] = {0x638};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eebb: {
unico data[] = {0x63a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f100: {
unico data[] = {0x30, 0x2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f101: {
unico data[] = {0x30, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f102: {
unico data[] = {0x31, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f103: {
unico data[] = {0x32, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f104: {
unico data[] = {0x33, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f105: {
unico data[] = {0x34, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f106: {
unico data[] = {0x35, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f107: {
unico data[] = {0x36, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f108: {
unico data[] = {0x37, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f109: {
unico data[] = {0x38, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f10a: {
unico data[] = {0x39, 0x2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f110: {
unico data[] = {0x28, 0x41, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f111: {
unico data[] = {0x28, 0x42, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f112: {
unico data[] = {0x28, 0x43, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f113: {
unico data[] = {0x28, 0x44, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f114: {
unico data[] = {0x28, 0x45, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f115: {
unico data[] = {0x28, 0x46, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f116: {
unico data[] = {0x28, 0x47, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f117: {
unico data[] = {0x28, 0x48, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f118: {
unico data[] = {0x28, 0x49, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f119: {
unico data[] = {0x28, 0x4a, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11a: {
unico data[] = {0x28, 0x4b, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11b: {
unico data[] = {0x28, 0x4c, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11c: {
unico data[] = {0x28, 0x4d, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11d: {
unico data[] = {0x28, 0x4e, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11e: {
unico data[] = {0x28, 0x4f, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11f: {
unico data[] = {0x28, 0x50, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f120: {
unico data[] = {0x28, 0x51, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f121: {
unico data[] = {0x28, 0x52, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f122: {
unico data[] = {0x28, 0x53, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f123: {
unico data[] = {0x28, 0x54, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f124: {
unico data[] = {0x28, 0x55, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f125: {
unico data[] = {0x28, 0x56, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f126: {
unico data[] = {0x28, 0x57, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f127: {
unico data[] = {0x28, 0x58, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f128: {
unico data[] = {0x28, 0x59, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f129: {
unico data[] = {0x28, 0x5a, 0x29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f12a: {
unico data[] = {0x3014, 0x53, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f12b: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f12c: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f12d: {
unico data[] = {0x43, 0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f12e: {
unico data[] = {0x57, 0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f130: {
unico data[] = {0x41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f131: {
unico data[] = {0x42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f132: {
unico data[] = {0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f133: {
unico data[] = {0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f134: {
unico data[] = {0x45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f135: {
unico data[] = {0x46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f136: {
unico data[] = {0x47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f137: {
unico data[] = {0x48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f138: {
unico data[] = {0x49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f139: {
unico data[] = {0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13a: {
unico data[] = {0x4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13b: {
unico data[] = {0x4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13c: {
unico data[] = {0x4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13d: {
unico data[] = {0x4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13e: {
unico data[] = {0x4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13f: {
unico data[] = {0x50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f140: {
unico data[] = {0x51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f141: {
unico data[] = {0x52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f142: {
unico data[] = {0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f143: {
unico data[] = {0x54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f144: {
unico data[] = {0x55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f145: {
unico data[] = {0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f146: {
unico data[] = {0x57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f147: {
unico data[] = {0x58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f148: {
unico data[] = {0x59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f149: {
unico data[] = {0x5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14a: {
unico data[] = {0x48, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14b: {
unico data[] = {0x4d, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14c: {
unico data[] = {0x53, 0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14d: {
unico data[] = {0x53, 0x53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14e: {
unico data[] = {0x50, 0x50, 0x56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14f: {
unico data[] = {0x57, 0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f16a: {
unico data[] = {0x4d, 0x43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f16b: {
unico data[] = {0x4d, 0x44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f190: {
unico data[] = {0x44, 0x4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f200: {
unico data[] = {0x307b, 0x304b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f201: {
unico data[] = {0x30b3, 0x30b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f202: {
unico data[] = {0x30b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f210: {
unico data[] = {0x624b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f211: {
unico data[] = {0x5b57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f212: {
unico data[] = {0x53cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f213: {
unico data[] = {0x30c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f214: {
unico data[] = {0x4e8c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f215: {
unico data[] = {0x591a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f216: {
unico data[] = {0x89e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f217: {
unico data[] = {0x5929};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f218: {
unico data[] = {0x4ea4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f219: {
unico data[] = {0x6620};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21a: {
unico data[] = {0x7121};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21b: {
unico data[] = {0x6599};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21c: {
unico data[] = {0x524d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21d: {
unico data[] = {0x5f8c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21e: {
unico data[] = {0x518d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21f: {
unico data[] = {0x65b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f220: {
unico data[] = {0x521d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f221: {
unico data[] = {0x7d42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f222: {
unico data[] = {0x751f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f223: {
unico data[] = {0x8ca9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f224: {
unico data[] = {0x58f0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f225: {
unico data[] = {0x5439};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f226: {
unico data[] = {0x6f14};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f227: {
unico data[] = {0x6295};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f228: {
unico data[] = {0x6355};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f229: {
unico data[] = {0x4e00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22a: {
unico data[] = {0x4e09};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22b: {
unico data[] = {0x904a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22c: {
unico data[] = {0x5de6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22d: {
unico data[] = {0x4e2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22e: {
unico data[] = {0x53f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22f: {
unico data[] = {0x6307};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f230: {
unico data[] = {0x8d70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f231: {
unico data[] = {0x6253};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f232: {
unico data[] = {0x7981};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f233: {
unico data[] = {0x7a7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f234: {
unico data[] = {0x5408};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f235: {
unico data[] = {0x6e80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f236: {
unico data[] = {0x6709};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f237: {
unico data[] = {0x6708};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f238: {
unico data[] = {0x7533};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f239: {
unico data[] = {0x5272};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f23a: {
unico data[] = {0x55b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f23b: {
unico data[] = {0x914d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f240: {
unico data[] = {0x3014, 0x672c, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f241: {
unico data[] = {0x3014, 0x4e09, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f242: {
unico data[] = {0x3014, 0x4e8c, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f243: {
unico data[] = {0x3014, 0x5b89, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f244: {
unico data[] = {0x3014, 0x70b9, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f245: {
unico data[] = {0x3014, 0x6253, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f246: {
unico data[] = {0x3014, 0x76d7, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f247: {
unico data[] = {0x3014, 0x52dd, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f248: {
unico data[] = {0x3014, 0x6557, 0x3015};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f250: {
unico data[] = {0x5f97};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f251: {
unico data[] = {0x53ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f800: {
unico data[] = {0x4e3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f801: {
unico data[] = {0x4e38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f802: {
unico data[] = {0x4e41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f803: {
unico data[] = {0x20122};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f804: {
unico data[] = {0x4f60};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f805: {
unico data[] = {0x4fae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f806: {
unico data[] = {0x4fbb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f807: {
unico data[] = {0x5002};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f808: {
unico data[] = {0x507a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f809: {
unico data[] = {0x5099};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80a: {
unico data[] = {0x50e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80b: {
unico data[] = {0x50cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80c: {
unico data[] = {0x349e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80d: {
unico data[] = {0x2063a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80e: {
unico data[] = {0x514d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80f: {
unico data[] = {0x5154};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f810: {
unico data[] = {0x5164};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f811: {
unico data[] = {0x5177};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f812: {
unico data[] = {0x2051c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f813: {
unico data[] = {0x34b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f814: {
unico data[] = {0x5167};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f815: {
unico data[] = {0x518d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f816: {
unico data[] = {0x2054b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f817: {
unico data[] = {0x5197};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f818: {
unico data[] = {0x51a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f819: {
unico data[] = {0x4ecc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81a: {
unico data[] = {0x51ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81b: {
unico data[] = {0x51b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81c: {
unico data[] = {0x291df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81d: {
unico data[] = {0x51f5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81e: {
unico data[] = {0x5203};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81f: {
unico data[] = {0x34df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f820: {
unico data[] = {0x523b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f821: {
unico data[] = {0x5246};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f822: {
unico data[] = {0x5272};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f823: {
unico data[] = {0x5277};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f824: {
unico data[] = {0x3515};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f825: {
unico data[] = {0x52c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f826: {
unico data[] = {0x52c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f827: {
unico data[] = {0x52e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f828: {
unico data[] = {0x52fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f829: {
unico data[] = {0x5305};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82a: {
unico data[] = {0x5306};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82b: {
unico data[] = {0x5317};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82c: {
unico data[] = {0x5349};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82d: {
unico data[] = {0x5351};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82e: {
unico data[] = {0x535a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82f: {
unico data[] = {0x5373};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f830: {
unico data[] = {0x537d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f831: {
unico data[] = {0x537f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f832: {
unico data[] = {0x537f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f833: {
unico data[] = {0x537f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f834: {
unico data[] = {0x20a2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f835: {
unico data[] = {0x7070};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f836: {
unico data[] = {0x53ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f837: {
unico data[] = {0x53df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f838: {
unico data[] = {0x20b63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f839: {
unico data[] = {0x53eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83a: {
unico data[] = {0x53f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83b: {
unico data[] = {0x5406};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83c: {
unico data[] = {0x549e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83d: {
unico data[] = {0x5438};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83e: {
unico data[] = {0x5448};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83f: {
unico data[] = {0x5468};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f840: {
unico data[] = {0x54a2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f841: {
unico data[] = {0x54f6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f842: {
unico data[] = {0x5510};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f843: {
unico data[] = {0x5553};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f844: {
unico data[] = {0x5563};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f845: {
unico data[] = {0x5584};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f846: {
unico data[] = {0x5584};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f847: {
unico data[] = {0x5599};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f848: {
unico data[] = {0x55ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f849: {
unico data[] = {0x55b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84a: {
unico data[] = {0x55c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84b: {
unico data[] = {0x5716};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84c: {
unico data[] = {0x5606};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84d: {
unico data[] = {0x5717};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84e: {
unico data[] = {0x5651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84f: {
unico data[] = {0x5674};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f850: {
unico data[] = {0x5207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f851: {
unico data[] = {0x58ee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f852: {
unico data[] = {0x57ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f853: {
unico data[] = {0x57f4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f854: {
unico data[] = {0x580d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f855: {
unico data[] = {0x578b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f856: {
unico data[] = {0x5832};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f857: {
unico data[] = {0x5831};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f858: {
unico data[] = {0x58ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f859: {
unico data[] = {0x214e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85a: {
unico data[] = {0x58f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85b: {
unico data[] = {0x58f7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85c: {
unico data[] = {0x5906};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85d: {
unico data[] = {0x591a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85e: {
unico data[] = {0x5922};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85f: {
unico data[] = {0x5962};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f860: {
unico data[] = {0x216a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f861: {
unico data[] = {0x216ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f862: {
unico data[] = {0x59ec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f863: {
unico data[] = {0x5a1b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f864: {
unico data[] = {0x5a27};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f865: {
unico data[] = {0x59d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f866: {
unico data[] = {0x5a66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f867: {
unico data[] = {0x36ee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f868: {
unico data[] = {0x36fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f869: {
unico data[] = {0x5b08};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86a: {
unico data[] = {0x5b3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86b: {
unico data[] = {0x5b3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86c: {
unico data[] = {0x219c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86d: {
unico data[] = {0x5bc3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86e: {
unico data[] = {0x5bd8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86f: {
unico data[] = {0x5be7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f870: {
unico data[] = {0x5bf3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f871: {
unico data[] = {0x21b18};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f872: {
unico data[] = {0x5bff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f873: {
unico data[] = {0x5c06};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f874: {
unico data[] = {0x5f53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f875: {
unico data[] = {0x5c22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f876: {
unico data[] = {0x3781};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f877: {
unico data[] = {0x5c60};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f878: {
unico data[] = {0x5c6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f879: {
unico data[] = {0x5cc0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87a: {
unico data[] = {0x5c8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87b: {
unico data[] = {0x21de4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87c: {
unico data[] = {0x5d43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87d: {
unico data[] = {0x21de6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87e: {
unico data[] = {0x5d6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87f: {
unico data[] = {0x5d6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f880: {
unico data[] = {0x5d7c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f881: {
unico data[] = {0x5de1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f882: {
unico data[] = {0x5de2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f883: {
unico data[] = {0x382f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f884: {
unico data[] = {0x5dfd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f885: {
unico data[] = {0x5e28};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f886: {
unico data[] = {0x5e3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f887: {
unico data[] = {0x5e69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f888: {
unico data[] = {0x3862};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f889: {
unico data[] = {0x22183};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88a: {
unico data[] = {0x387c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88b: {
unico data[] = {0x5eb0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88c: {
unico data[] = {0x5eb3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88d: {
unico data[] = {0x5eb6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88e: {
unico data[] = {0x5eca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88f: {
unico data[] = {0x2a392};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f890: {
unico data[] = {0x5efe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f891: {
unico data[] = {0x22331};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f892: {
unico data[] = {0x22331};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f893: {
unico data[] = {0x8201};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f894: {
unico data[] = {0x5f22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f895: {
unico data[] = {0x5f22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f896: {
unico data[] = {0x38c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f897: {
unico data[] = {0x232b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f898: {
unico data[] = {0x261da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f899: {
unico data[] = {0x5f62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89a: {
unico data[] = {0x5f6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89b: {
unico data[] = {0x38e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89c: {
unico data[] = {0x5f9a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89d: {
unico data[] = {0x5fcd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89e: {
unico data[] = {0x5fd7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89f: {
unico data[] = {0x5ff9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a0: {
unico data[] = {0x6081};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a1: {
unico data[] = {0x393a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a2: {
unico data[] = {0x391c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a3: {
unico data[] = {0x6094};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a4: {
unico data[] = {0x226d4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a5: {
unico data[] = {0x60c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a6: {
unico data[] = {0x6148};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a7: {
unico data[] = {0x614c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a8: {
unico data[] = {0x614e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a9: {
unico data[] = {0x614c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8aa: {
unico data[] = {0x617a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ab: {
unico data[] = {0x618e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ac: {
unico data[] = {0x61b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ad: {
unico data[] = {0x61a4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ae: {
unico data[] = {0x61af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8af: {
unico data[] = {0x61de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b0: {
unico data[] = {0x61f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b1: {
unico data[] = {0x61f6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b2: {
unico data[] = {0x6210};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b3: {
unico data[] = {0x621b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b4: {
unico data[] = {0x625d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b5: {
unico data[] = {0x62b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b6: {
unico data[] = {0x62d4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b7: {
unico data[] = {0x6350};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b8: {
unico data[] = {0x22b0c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b9: {
unico data[] = {0x633d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ba: {
unico data[] = {0x62fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bb: {
unico data[] = {0x6368};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bc: {
unico data[] = {0x6383};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bd: {
unico data[] = {0x63e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8be: {
unico data[] = {0x22bf1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bf: {
unico data[] = {0x6422};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c0: {
unico data[] = {0x63c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c1: {
unico data[] = {0x63a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c2: {
unico data[] = {0x3a2e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c3: {
unico data[] = {0x6469};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c4: {
unico data[] = {0x647e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c5: {
unico data[] = {0x649d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c6: {
unico data[] = {0x6477};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c7: {
unico data[] = {0x3a6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c8: {
unico data[] = {0x654f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c9: {
unico data[] = {0x656c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ca: {
unico data[] = {0x2300a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cb: {
unico data[] = {0x65e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cc: {
unico data[] = {0x66f8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cd: {
unico data[] = {0x6649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ce: {
unico data[] = {0x3b19};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cf: {
unico data[] = {0x6691};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d0: {
unico data[] = {0x3b08};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d1: {
unico data[] = {0x3ae4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d2: {
unico data[] = {0x5192};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d3: {
unico data[] = {0x5195};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d4: {
unico data[] = {0x6700};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d5: {
unico data[] = {0x669c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d6: {
unico data[] = {0x80ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d7: {
unico data[] = {0x43d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d8: {
unico data[] = {0x6717};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d9: {
unico data[] = {0x671b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8da: {
unico data[] = {0x6721};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8db: {
unico data[] = {0x675e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8dc: {
unico data[] = {0x6753};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8dd: {
unico data[] = {0x233c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8de: {
unico data[] = {0x3b49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8df: {
unico data[] = {0x67fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e0: {
unico data[] = {0x6785};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e1: {
unico data[] = {0x6852};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e2: {
unico data[] = {0x6885};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e3: {
unico data[] = {0x2346d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e4: {
unico data[] = {0x688e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e5: {
unico data[] = {0x681f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e6: {
unico data[] = {0x6914};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e7: {
unico data[] = {0x3b9d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e8: {
unico data[] = {0x6942};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e9: {
unico data[] = {0x69a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ea: {
unico data[] = {0x69ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8eb: {
unico data[] = {0x6aa8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ec: {
unico data[] = {0x236a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ed: {
unico data[] = {0x6adb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ee: {
unico data[] = {0x3c18};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ef: {
unico data[] = {0x6b21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f0: {
unico data[] = {0x238a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f1: {
unico data[] = {0x6b54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f2: {
unico data[] = {0x3c4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f3: {
unico data[] = {0x6b72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f4: {
unico data[] = {0x6b9f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f5: {
unico data[] = {0x6bba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f6: {
unico data[] = {0x6bbb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f7: {
unico data[] = {0x23a8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f8: {
unico data[] = {0x21d0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f9: {
unico data[] = {0x23afa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fa: {
unico data[] = {0x6c4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fb: {
unico data[] = {0x23cbc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fc: {
unico data[] = {0x6cbf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fd: {
unico data[] = {0x6ccd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fe: {
unico data[] = {0x6c67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ff: {
unico data[] = {0x6d16};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f900: {
unico data[] = {0x6d3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f901: {
unico data[] = {0x6d77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f902: {
unico data[] = {0x6d41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f903: {
unico data[] = {0x6d69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f904: {
unico data[] = {0x6d78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f905: {
unico data[] = {0x6d85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f906: {
unico data[] = {0x23d1e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f907: {
unico data[] = {0x6d34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f908: {
unico data[] = {0x6e2f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f909: {
unico data[] = {0x6e6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90a: {
unico data[] = {0x3d33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90b: {
unico data[] = {0x6ecb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90c: {
unico data[] = {0x6ec7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90d: {
unico data[] = {0x23ed1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90e: {
unico data[] = {0x6df9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90f: {
unico data[] = {0x6f6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f910: {
unico data[] = {0x23f5e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f911: {
unico data[] = {0x23f8e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f912: {
unico data[] = {0x6fc6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f913: {
unico data[] = {0x7039};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f914: {
unico data[] = {0x701e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f915: {
unico data[] = {0x701b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f916: {
unico data[] = {0x3d96};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f917: {
unico data[] = {0x704a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f918: {
unico data[] = {0x707d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f919: {
unico data[] = {0x7077};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91a: {
unico data[] = {0x70ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91b: {
unico data[] = {0x20525};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91c: {
unico data[] = {0x7145};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91d: {
unico data[] = {0x24263};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91e: {
unico data[] = {0x719c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91f: {
unico data[] = {0x243ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f920: {
unico data[] = {0x7228};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f921: {
unico data[] = {0x7235};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f922: {
unico data[] = {0x7250};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f923: {
unico data[] = {0x24608};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f924: {
unico data[] = {0x7280};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f925: {
unico data[] = {0x7295};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f926: {
unico data[] = {0x24735};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f927: {
unico data[] = {0x24814};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f928: {
unico data[] = {0x737a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f929: {
unico data[] = {0x738b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92a: {
unico data[] = {0x3eac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92b: {
unico data[] = {0x73a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92c: {
unico data[] = {0x3eb8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92d: {
unico data[] = {0x3eb8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92e: {
unico data[] = {0x7447};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92f: {
unico data[] = {0x745c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f930: {
unico data[] = {0x7471};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f931: {
unico data[] = {0x7485};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f932: {
unico data[] = {0x74ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f933: {
unico data[] = {0x3f1b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f934: {
unico data[] = {0x7524};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f935: {
unico data[] = {0x24c36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f936: {
unico data[] = {0x753e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f937: {
unico data[] = {0x24c92};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f938: {
unico data[] = {0x7570};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f939: {
unico data[] = {0x2219f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93a: {
unico data[] = {0x7610};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93b: {
unico data[] = {0x24fa1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93c: {
unico data[] = {0x24fb8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93d: {
unico data[] = {0x25044};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93e: {
unico data[] = {0x3ffc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93f: {
unico data[] = {0x4008};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f940: {
unico data[] = {0x76f4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f941: {
unico data[] = {0x250f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f942: {
unico data[] = {0x250f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f943: {
unico data[] = {0x25119};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f944: {
unico data[] = {0x25133};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f945: {
unico data[] = {0x771e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f946: {
unico data[] = {0x771f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f947: {
unico data[] = {0x771f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f948: {
unico data[] = {0x774a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f949: {
unico data[] = {0x4039};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94a: {
unico data[] = {0x778b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94b: {
unico data[] = {0x4046};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94c: {
unico data[] = {0x4096};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94d: {
unico data[] = {0x2541d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94e: {
unico data[] = {0x784e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94f: {
unico data[] = {0x788c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f950: {
unico data[] = {0x78cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f951: {
unico data[] = {0x40e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f952: {
unico data[] = {0x25626};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f953: {
unico data[] = {0x7956};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f954: {
unico data[] = {0x2569a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f955: {
unico data[] = {0x256c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f956: {
unico data[] = {0x798f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f957: {
unico data[] = {0x79eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f958: {
unico data[] = {0x412f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f959: {
unico data[] = {0x7a40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95a: {
unico data[] = {0x7a4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95b: {
unico data[] = {0x7a4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95c: {
unico data[] = {0x2597c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95d: {
unico data[] = {0x25aa7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95e: {
unico data[] = {0x25aa7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95f: {
unico data[] = {0x7aee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f960: {
unico data[] = {0x4202};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f961: {
unico data[] = {0x25bab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f962: {
unico data[] = {0x7bc6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f963: {
unico data[] = {0x7bc9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f964: {
unico data[] = {0x4227};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f965: {
unico data[] = {0x25c80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f966: {
unico data[] = {0x7cd2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f967: {
unico data[] = {0x42a0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f968: {
unico data[] = {0x7ce8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f969: {
unico data[] = {0x7ce3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96a: {
unico data[] = {0x7d00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96b: {
unico data[] = {0x25f86};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96c: {
unico data[] = {0x7d63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96d: {
unico data[] = {0x4301};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96e: {
unico data[] = {0x7dc7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96f: {
unico data[] = {0x7e02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f970: {
unico data[] = {0x7e45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f971: {
unico data[] = {0x4334};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f972: {
unico data[] = {0x26228};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f973: {
unico data[] = {0x26247};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f974: {
unico data[] = {0x4359};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f975: {
unico data[] = {0x262d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f976: {
unico data[] = {0x7f7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f977: {
unico data[] = {0x2633e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f978: {
unico data[] = {0x7f95};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f979: {
unico data[] = {0x7ffa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97a: {
unico data[] = {0x8005};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97b: {
unico data[] = {0x264da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97c: {
unico data[] = {0x26523};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97d: {
unico data[] = {0x8060};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97e: {
unico data[] = {0x265a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97f: {
unico data[] = {0x8070};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f980: {
unico data[] = {0x2335f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f981: {
unico data[] = {0x43d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f982: {
unico data[] = {0x80b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f983: {
unico data[] = {0x8103};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f984: {
unico data[] = {0x440b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f985: {
unico data[] = {0x813e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f986: {
unico data[] = {0x5ab5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f987: {
unico data[] = {0x267a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f988: {
unico data[] = {0x267b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f989: {
unico data[] = {0x23393};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98a: {
unico data[] = {0x2339c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98b: {
unico data[] = {0x8201};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98c: {
unico data[] = {0x8204};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98d: {
unico data[] = {0x8f9e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98e: {
unico data[] = {0x446b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98f: {
unico data[] = {0x8291};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f990: {
unico data[] = {0x828b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f991: {
unico data[] = {0x829d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f992: {
unico data[] = {0x52b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f993: {
unico data[] = {0x82b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f994: {
unico data[] = {0x82b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f995: {
unico data[] = {0x82bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f996: {
unico data[] = {0x82e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f997: {
unico data[] = {0x26b3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f998: {
unico data[] = {0x82e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f999: {
unico data[] = {0x831d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99a: {
unico data[] = {0x8363};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99b: {
unico data[] = {0x83ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99c: {
unico data[] = {0x8323};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99d: {
unico data[] = {0x83bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99e: {
unico data[] = {0x83e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99f: {
unico data[] = {0x8457};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a0: {
unico data[] = {0x8353};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a1: {
unico data[] = {0x83ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a2: {
unico data[] = {0x83cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a3: {
unico data[] = {0x83dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a4: {
unico data[] = {0x26c36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a5: {
unico data[] = {0x26d6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a6: {
unico data[] = {0x26cd5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a7: {
unico data[] = {0x452b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a8: {
unico data[] = {0x84f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a9: {
unico data[] = {0x84f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9aa: {
unico data[] = {0x8516};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ab: {
unico data[] = {0x273ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ac: {
unico data[] = {0x8564};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ad: {
unico data[] = {0x26f2c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ae: {
unico data[] = {0x455d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9af: {
unico data[] = {0x4561};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b0: {
unico data[] = {0x26fb1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b1: {
unico data[] = {0x270d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b2: {
unico data[] = {0x456b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b3: {
unico data[] = {0x8650};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b4: {
unico data[] = {0x865c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b5: {
unico data[] = {0x8667};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b6: {
unico data[] = {0x8669};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b7: {
unico data[] = {0x86a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b8: {
unico data[] = {0x8688};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b9: {
unico data[] = {0x870e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ba: {
unico data[] = {0x86e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bb: {
unico data[] = {0x8779};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bc: {
unico data[] = {0x8728};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bd: {
unico data[] = {0x876b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9be: {
unico data[] = {0x8786};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bf: {
unico data[] = {0x45d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c0: {
unico data[] = {0x87e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c1: {
unico data[] = {0x8801};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c2: {
unico data[] = {0x45f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c3: {
unico data[] = {0x8860};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c4: {
unico data[] = {0x8863};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c5: {
unico data[] = {0x27667};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c6: {
unico data[] = {0x88d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c7: {
unico data[] = {0x88de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c8: {
unico data[] = {0x4635};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c9: {
unico data[] = {0x88fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ca: {
unico data[] = {0x34bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cb: {
unico data[] = {0x278ae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cc: {
unico data[] = {0x27966};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cd: {
unico data[] = {0x46be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ce: {
unico data[] = {0x46c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cf: {
unico data[] = {0x8aa0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d0: {
unico data[] = {0x8aed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d1: {
unico data[] = {0x8b8a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d2: {
unico data[] = {0x8c55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d3: {
unico data[] = {0x27ca8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d4: {
unico data[] = {0x8cab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d5: {
unico data[] = {0x8cc1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d6: {
unico data[] = {0x8d1b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d7: {
unico data[] = {0x8d77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d8: {
unico data[] = {0x27f2f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d9: {
unico data[] = {0x20804};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9da: {
unico data[] = {0x8dcb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9db: {
unico data[] = {0x8dbc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9dc: {
unico data[] = {0x8df0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9dd: {
unico data[] = {0x208de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9de: {
unico data[] = {0x8ed4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9df: {
unico data[] = {0x8f38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e0: {
unico data[] = {0x285d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e1: {
unico data[] = {0x285ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e2: {
unico data[] = {0x9094};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e3: {
unico data[] = {0x90f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e4: {
unico data[] = {0x9111};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e5: {
unico data[] = {0x2872e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e6: {
unico data[] = {0x911b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e7: {
unico data[] = {0x9238};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e8: {
unico data[] = {0x92d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e9: {
unico data[] = {0x92d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ea: {
unico data[] = {0x927c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9eb: {
unico data[] = {0x93f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ec: {
unico data[] = {0x9415};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ed: {
unico data[] = {0x28bfa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ee: {
unico data[] = {0x958b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ef: {
unico data[] = {0x4995};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f0: {
unico data[] = {0x95b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f1: {
unico data[] = {0x28d77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f2: {
unico data[] = {0x49e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f3: {
unico data[] = {0x96c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f4: {
unico data[] = {0x5db2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f5: {
unico data[] = {0x9723};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f6: {
unico data[] = {0x29145};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f7: {
unico data[] = {0x2921a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f8: {
unico data[] = {0x4a6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f9: {
unico data[] = {0x4a76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fa: {
unico data[] = {0x97e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fb: {
unico data[] = {0x2940a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fc: {
unico data[] = {0x4ab2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fd: {
unico data[] = {0x29496};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fe: {
unico data[] = {0x980b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ff: {
unico data[] = {0x980b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa00: {
unico data[] = {0x9829};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa01: {
unico data[] = {0x295b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa02: {
unico data[] = {0x98e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa03: {
unico data[] = {0x4b33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa04: {
unico data[] = {0x9929};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa05: {
unico data[] = {0x99a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa06: {
unico data[] = {0x99c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa07: {
unico data[] = {0x99fe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa08: {
unico data[] = {0x4bce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa09: {
unico data[] = {0x29b30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0a: {
unico data[] = {0x9b12};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0b: {
unico data[] = {0x9c40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0c: {
unico data[] = {0x9cfd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0d: {
unico data[] = {0x4cce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0e: {
unico data[] = {0x4ced};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0f: {
unico data[] = {0x9d67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa10: {
unico data[] = {0x2a0ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa11: {
unico data[] = {0x4cf8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa12: {
unico data[] = {0x2a105};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa13: {
unico data[] = {0x2a20e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa14: {
unico data[] = {0x2a291};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa15: {
unico data[] = {0x9ebb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa16: {
unico data[] = {0x4d56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa17: {
unico data[] = {0x9ef9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa18: {
unico data[] = {0x9efe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa19: {
unico data[] = {0x9f05};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1a: {
unico data[] = {0x9f0f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1b: {
unico data[] = {0x9f16};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1c: {
unico data[] = {0x9f3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1d: {
unico data[] = {0x2a600};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
default:
*indexout = index +1;
return 0;
}
}
*indexout = index +1;
return 0;
}
