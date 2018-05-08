#include <unico.h>
#include <stddef.h>

int normalize_nfc_unicos_manually_in (size_t index, size_t end, unicos *uniout, size_t *indexout){
if (0 <= end - index){
switch (get_unicos(index +0, uniout)){
case 0x340: {
unico data[] = {0x300};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x341: {
unico data[] = {0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x343: {
unico data[] = {0x313};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x344: {
unico data[] = {0x308, 0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x374: {
unico data[] = {0x2b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37e: {
unico data[] = {0x3b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x387: {
unico data[] = {0xb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x958: {
unico data[] = {0x915, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x959: {
unico data[] = {0x916, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95a: {
unico data[] = {0x917, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95b: {
unico data[] = {0x91c, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95c: {
unico data[] = {0x921, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95d: {
unico data[] = {0x922, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95e: {
unico data[] = {0x92b, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x95f: {
unico data[] = {0x92f, 0x93c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x9dc: {
unico data[] = {0x9a1, 0x9bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x9dd: {
unico data[] = {0x9a2, 0x9bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x9df: {
unico data[] = {0x9af, 0x9bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa33: {
unico data[] = {0xa32, 0xa3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa36: {
unico data[] = {0xa38, 0xa3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa59: {
unico data[] = {0xa16, 0xa3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa5a: {
unico data[] = {0xa17, 0xa3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa5b: {
unico data[] = {0xa1c, 0xa3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa5e: {
unico data[] = {0xa2b, 0xa3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb5c: {
unico data[] = {0xb21, 0xb3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb5d: {
unico data[] = {0xb22, 0xb3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf43: {
unico data[] = {0xf42, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf4d: {
unico data[] = {0xf4c, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf52: {
unico data[] = {0xf51, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf57: {
unico data[] = {0xf56, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf5c: {
unico data[] = {0xf5b, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf69: {
unico data[] = {0xf40, 0xfb5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf73: {
unico data[] = {0xf71, 0xf72};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf75: {
unico data[] = {0xf71, 0xf74};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf76: {
unico data[] = {0xfb2, 0xf80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf78: {
unico data[] = {0xfb3, 0xf80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf81: {
unico data[] = {0xf71, 0xf80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93: {
unico data[] = {0xf92, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d: {
unico data[] = {0xf9c, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2: {
unico data[] = {0xfa1, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7: {
unico data[] = {0xfa6, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac: {
unico data[] = {0xfab, 0xfb7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb9: {
unico data[] = {0xf90, 0xfb5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f71: {
unico data[] = {0x3ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f73: {
unico data[] = {0x3ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f75: {
unico data[] = {0x3ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f77: {
unico data[] = {0x3af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f79: {
unico data[] = {0x3cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7b: {
unico data[] = {0x3cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7d: {
unico data[] = {0x3ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbb: {
unico data[] = {0x386};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbe: {
unico data[] = {0x3b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc9: {
unico data[] = {0x388};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fcb: {
unico data[] = {0x389};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd3: {
unico data[] = {0x390};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fdb: {
unico data[] = {0x38a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe3: {
unico data[] = {0x3b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1feb: {
unico data[] = {0x38e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fee: {
unico data[] = {0x385};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fef: {
unico data[] = {0x60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff9: {
unico data[] = {0x38c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffb: {
unico data[] = {0x38f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffd: {
unico data[] = {0xb4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2000: {
unico data[] = {0x2002};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2001: {
unico data[] = {0x2003};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2126: {
unico data[] = {0x3a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212a: {
unico data[] = {0x4b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212b: {
unico data[] = {0xc5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2329: {
unico data[] = {0x3008};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x232a: {
unico data[] = {0x3009};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2adc: {
unico data[] = {0x2add, 0x338};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf900: {
unico data[] = {0x8c48};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf901: {
unico data[] = {0x66f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf902: {
unico data[] = {0x8eca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf903: {
unico data[] = {0x8cc8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf904: {
unico data[] = {0x6ed1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf905: {
unico data[] = {0x4e32};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf906: {
unico data[] = {0x53e5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf907: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf908: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf909: {
unico data[] = {0x5951};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90a: {
unico data[] = {0x91d1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90b: {
unico data[] = {0x5587};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90c: {
unico data[] = {0x5948};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90d: {
unico data[] = {0x61f6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90e: {
unico data[] = {0x7669};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf90f: {
unico data[] = {0x7f85};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf910: {
unico data[] = {0x863f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf911: {
unico data[] = {0x87ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf912: {
unico data[] = {0x88f8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf913: {
unico data[] = {0x908f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf914: {
unico data[] = {0x6a02};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf915: {
unico data[] = {0x6d1b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf916: {
unico data[] = {0x70d9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf917: {
unico data[] = {0x73de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf918: {
unico data[] = {0x843d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf919: {
unico data[] = {0x916a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91a: {
unico data[] = {0x99f1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91b: {
unico data[] = {0x4e82};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91c: {
unico data[] = {0x5375};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91d: {
unico data[] = {0x6b04};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91e: {
unico data[] = {0x721b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf91f: {
unico data[] = {0x862d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf920: {
unico data[] = {0x9e1e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf921: {
unico data[] = {0x5d50};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf922: {
unico data[] = {0x6feb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf923: {
unico data[] = {0x85cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf924: {
unico data[] = {0x8964};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf925: {
unico data[] = {0x62c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf926: {
unico data[] = {0x81d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf927: {
unico data[] = {0x881f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf928: {
unico data[] = {0x5eca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf929: {
unico data[] = {0x6717};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92a: {
unico data[] = {0x6d6a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92b: {
unico data[] = {0x72fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92c: {
unico data[] = {0x90ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92d: {
unico data[] = {0x4f86};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92e: {
unico data[] = {0x51b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf92f: {
unico data[] = {0x52de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf930: {
unico data[] = {0x64c4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf931: {
unico data[] = {0x6ad3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf932: {
unico data[] = {0x7210};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf933: {
unico data[] = {0x76e7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf934: {
unico data[] = {0x8001};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf935: {
unico data[] = {0x8606};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf936: {
unico data[] = {0x865c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf937: {
unico data[] = {0x8def};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf938: {
unico data[] = {0x9732};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf939: {
unico data[] = {0x9b6f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93a: {
unico data[] = {0x9dfa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93b: {
unico data[] = {0x788c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93c: {
unico data[] = {0x797f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93d: {
unico data[] = {0x7da0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93e: {
unico data[] = {0x83c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf93f: {
unico data[] = {0x9304};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf940: {
unico data[] = {0x9e7f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf941: {
unico data[] = {0x8ad6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf942: {
unico data[] = {0x58df};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf943: {
unico data[] = {0x5f04};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf944: {
unico data[] = {0x7c60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf945: {
unico data[] = {0x807e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf946: {
unico data[] = {0x7262};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf947: {
unico data[] = {0x78ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf948: {
unico data[] = {0x8cc2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf949: {
unico data[] = {0x96f7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94a: {
unico data[] = {0x58d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94b: {
unico data[] = {0x5c62};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94c: {
unico data[] = {0x6a13};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94d: {
unico data[] = {0x6dda};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94e: {
unico data[] = {0x6f0f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf94f: {
unico data[] = {0x7d2f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf950: {
unico data[] = {0x7e37};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf951: {
unico data[] = {0x964b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf952: {
unico data[] = {0x52d2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf953: {
unico data[] = {0x808b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf954: {
unico data[] = {0x51dc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf955: {
unico data[] = {0x51cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf956: {
unico data[] = {0x7a1c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf957: {
unico data[] = {0x7dbe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf958: {
unico data[] = {0x83f1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf959: {
unico data[] = {0x9675};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95a: {
unico data[] = {0x8b80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95b: {
unico data[] = {0x62cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95c: {
unico data[] = {0x6a02};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95d: {
unico data[] = {0x8afe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95e: {
unico data[] = {0x4e39};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf95f: {
unico data[] = {0x5be7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf960: {
unico data[] = {0x6012};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf961: {
unico data[] = {0x7387};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf962: {
unico data[] = {0x7570};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf963: {
unico data[] = {0x5317};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf964: {
unico data[] = {0x78fb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf965: {
unico data[] = {0x4fbf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf966: {
unico data[] = {0x5fa9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf967: {
unico data[] = {0x4e0d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf968: {
unico data[] = {0x6ccc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf969: {
unico data[] = {0x6578};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96a: {
unico data[] = {0x7d22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96b: {
unico data[] = {0x53c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96c: {
unico data[] = {0x585e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96d: {
unico data[] = {0x7701};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96e: {
unico data[] = {0x8449};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf96f: {
unico data[] = {0x8aaa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf970: {
unico data[] = {0x6bba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf971: {
unico data[] = {0x8fb0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf972: {
unico data[] = {0x6c88};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf973: {
unico data[] = {0x62fe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf974: {
unico data[] = {0x82e5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf975: {
unico data[] = {0x63a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf976: {
unico data[] = {0x7565};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf977: {
unico data[] = {0x4eae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf978: {
unico data[] = {0x5169};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf979: {
unico data[] = {0x51c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97a: {
unico data[] = {0x6881};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97b: {
unico data[] = {0x7ce7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97c: {
unico data[] = {0x826f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97d: {
unico data[] = {0x8ad2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97e: {
unico data[] = {0x91cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf97f: {
unico data[] = {0x52f5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf980: {
unico data[] = {0x5442};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf981: {
unico data[] = {0x5973};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf982: {
unico data[] = {0x5eec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf983: {
unico data[] = {0x65c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf984: {
unico data[] = {0x6ffe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf985: {
unico data[] = {0x792a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf986: {
unico data[] = {0x95ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf987: {
unico data[] = {0x9a6a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf988: {
unico data[] = {0x9e97};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf989: {
unico data[] = {0x9ece};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98a: {
unico data[] = {0x529b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98b: {
unico data[] = {0x66c6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98c: {
unico data[] = {0x6b77};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98d: {
unico data[] = {0x8f62};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98e: {
unico data[] = {0x5e74};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf98f: {
unico data[] = {0x6190};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf990: {
unico data[] = {0x6200};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf991: {
unico data[] = {0x649a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf992: {
unico data[] = {0x6f23};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf993: {
unico data[] = {0x7149};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf994: {
unico data[] = {0x7489};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf995: {
unico data[] = {0x79ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf996: {
unico data[] = {0x7df4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf997: {
unico data[] = {0x806f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf998: {
unico data[] = {0x8f26};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf999: {
unico data[] = {0x84ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99a: {
unico data[] = {0x9023};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99b: {
unico data[] = {0x934a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99c: {
unico data[] = {0x5217};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99d: {
unico data[] = {0x52a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99e: {
unico data[] = {0x54bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf99f: {
unico data[] = {0x70c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a0: {
unico data[] = {0x88c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a1: {
unico data[] = {0x8aaa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a2: {
unico data[] = {0x5ec9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a3: {
unico data[] = {0x5ff5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a4: {
unico data[] = {0x637b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a5: {
unico data[] = {0x6bae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a6: {
unico data[] = {0x7c3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a7: {
unico data[] = {0x7375};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a8: {
unico data[] = {0x4ee4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9a9: {
unico data[] = {0x56f9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9aa: {
unico data[] = {0x5be7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ab: {
unico data[] = {0x5dba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ac: {
unico data[] = {0x601c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ad: {
unico data[] = {0x73b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ae: {
unico data[] = {0x7469};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9af: {
unico data[] = {0x7f9a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b0: {
unico data[] = {0x8046};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b1: {
unico data[] = {0x9234};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b2: {
unico data[] = {0x96f6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b3: {
unico data[] = {0x9748};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b4: {
unico data[] = {0x9818};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b5: {
unico data[] = {0x4f8b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b6: {
unico data[] = {0x79ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b7: {
unico data[] = {0x91b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b8: {
unico data[] = {0x96b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9b9: {
unico data[] = {0x60e1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ba: {
unico data[] = {0x4e86};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bb: {
unico data[] = {0x50da};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bc: {
unico data[] = {0x5bee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bd: {
unico data[] = {0x5c3f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9be: {
unico data[] = {0x6599};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9bf: {
unico data[] = {0x6a02};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c0: {
unico data[] = {0x71ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c1: {
unico data[] = {0x7642};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c2: {
unico data[] = {0x84fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c3: {
unico data[] = {0x907c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c4: {
unico data[] = {0x9f8d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c5: {
unico data[] = {0x6688};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c6: {
unico data[] = {0x962e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c7: {
unico data[] = {0x5289};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c8: {
unico data[] = {0x677b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9c9: {
unico data[] = {0x67f3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ca: {
unico data[] = {0x6d41};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cb: {
unico data[] = {0x6e9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cc: {
unico data[] = {0x7409};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cd: {
unico data[] = {0x7559};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ce: {
unico data[] = {0x786b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9cf: {
unico data[] = {0x7d10};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d0: {
unico data[] = {0x985e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d1: {
unico data[] = {0x516d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d2: {
unico data[] = {0x622e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d3: {
unico data[] = {0x9678};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d4: {
unico data[] = {0x502b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d5: {
unico data[] = {0x5d19};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d6: {
unico data[] = {0x6dea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d7: {
unico data[] = {0x8f2a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d8: {
unico data[] = {0x5f8b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9d9: {
unico data[] = {0x6144};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9da: {
unico data[] = {0x6817};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9db: {
unico data[] = {0x7387};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9dc: {
unico data[] = {0x9686};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9dd: {
unico data[] = {0x5229};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9de: {
unico data[] = {0x540f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9df: {
unico data[] = {0x5c65};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e0: {
unico data[] = {0x6613};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e1: {
unico data[] = {0x674e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e2: {
unico data[] = {0x68a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e3: {
unico data[] = {0x6ce5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e4: {
unico data[] = {0x7406};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e5: {
unico data[] = {0x75e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e6: {
unico data[] = {0x7f79};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e7: {
unico data[] = {0x88cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e8: {
unico data[] = {0x88e1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9e9: {
unico data[] = {0x91cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ea: {
unico data[] = {0x96e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9eb: {
unico data[] = {0x533f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ec: {
unico data[] = {0x6eba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ed: {
unico data[] = {0x541d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ee: {
unico data[] = {0x71d0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ef: {
unico data[] = {0x7498};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f0: {
unico data[] = {0x85fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f1: {
unico data[] = {0x96a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f2: {
unico data[] = {0x9c57};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f3: {
unico data[] = {0x9e9f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f4: {
unico data[] = {0x6797};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f5: {
unico data[] = {0x6dcb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f6: {
unico data[] = {0x81e8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f7: {
unico data[] = {0x7acb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f8: {
unico data[] = {0x7b20};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9f9: {
unico data[] = {0x7c92};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fa: {
unico data[] = {0x72c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fb: {
unico data[] = {0x7099};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fc: {
unico data[] = {0x8b58};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fd: {
unico data[] = {0x4ec0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9fe: {
unico data[] = {0x8336};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9ff: {
unico data[] = {0x523a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa00: {
unico data[] = {0x5207};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa01: {
unico data[] = {0x5ea6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa02: {
unico data[] = {0x62d3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa03: {
unico data[] = {0x7cd6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa04: {
unico data[] = {0x5b85};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa05: {
unico data[] = {0x6d1e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa06: {
unico data[] = {0x66b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa07: {
unico data[] = {0x8f3b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa08: {
unico data[] = {0x884c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa09: {
unico data[] = {0x964d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0a: {
unico data[] = {0x898b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0b: {
unico data[] = {0x5ed3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0c: {
unico data[] = {0x5140};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa0d: {
unico data[] = {0x55c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa10: {
unico data[] = {0x585a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa12: {
unico data[] = {0x6674};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa15: {
unico data[] = {0x51de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa16: {
unico data[] = {0x732a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa17: {
unico data[] = {0x76ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa18: {
unico data[] = {0x793c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa19: {
unico data[] = {0x795e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1a: {
unico data[] = {0x7965};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1b: {
unico data[] = {0x798f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1c: {
unico data[] = {0x9756};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1d: {
unico data[] = {0x7cbe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa1e: {
unico data[] = {0x7fbd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa20: {
unico data[] = {0x8612};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa22: {
unico data[] = {0x8af8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa25: {
unico data[] = {0x9038};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa26: {
unico data[] = {0x90fd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2a: {
unico data[] = {0x98ef};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2b: {
unico data[] = {0x98fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2c: {
unico data[] = {0x9928};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2d: {
unico data[] = {0x9db4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2e: {
unico data[] = {0x90de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa2f: {
unico data[] = {0x96b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa30: {
unico data[] = {0x4fae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa31: {
unico data[] = {0x50e7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa32: {
unico data[] = {0x514d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa33: {
unico data[] = {0x52c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa34: {
unico data[] = {0x52e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa35: {
unico data[] = {0x5351};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa36: {
unico data[] = {0x559d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa37: {
unico data[] = {0x5606};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa38: {
unico data[] = {0x5668};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa39: {
unico data[] = {0x5840};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3a: {
unico data[] = {0x58a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3b: {
unico data[] = {0x5c64};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3c: {
unico data[] = {0x5c6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3d: {
unico data[] = {0x6094};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3e: {
unico data[] = {0x6168};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa3f: {
unico data[] = {0x618e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa40: {
unico data[] = {0x61f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa41: {
unico data[] = {0x654f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa42: {
unico data[] = {0x65e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa43: {
unico data[] = {0x6691};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa44: {
unico data[] = {0x6885};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa45: {
unico data[] = {0x6d77};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa46: {
unico data[] = {0x6e1a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa47: {
unico data[] = {0x6f22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa48: {
unico data[] = {0x716e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa49: {
unico data[] = {0x722b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4a: {
unico data[] = {0x7422};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4b: {
unico data[] = {0x7891};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4c: {
unico data[] = {0x793e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4d: {
unico data[] = {0x7949};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4e: {
unico data[] = {0x7948};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa4f: {
unico data[] = {0x7950};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa50: {
unico data[] = {0x7956};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa51: {
unico data[] = {0x795d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa52: {
unico data[] = {0x798d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa53: {
unico data[] = {0x798e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa54: {
unico data[] = {0x7a40};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa55: {
unico data[] = {0x7a81};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa56: {
unico data[] = {0x7bc0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa57: {
unico data[] = {0x7df4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa58: {
unico data[] = {0x7e09};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa59: {
unico data[] = {0x7e41};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5a: {
unico data[] = {0x7f72};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5b: {
unico data[] = {0x8005};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5c: {
unico data[] = {0x81ed};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5d: {
unico data[] = {0x8279};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5e: {
unico data[] = {0x8279};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa5f: {
unico data[] = {0x8457};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa60: {
unico data[] = {0x8910};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa61: {
unico data[] = {0x8996};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa62: {
unico data[] = {0x8b01};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa63: {
unico data[] = {0x8b39};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa64: {
unico data[] = {0x8cd3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa65: {
unico data[] = {0x8d08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa66: {
unico data[] = {0x8fb6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa67: {
unico data[] = {0x9038};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa68: {
unico data[] = {0x96e3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa69: {
unico data[] = {0x97ff};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6a: {
unico data[] = {0x983b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6b: {
unico data[] = {0x6075};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6c: {
unico data[] = {0x242ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa6d: {
unico data[] = {0x8218};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa70: {
unico data[] = {0x4e26};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa71: {
unico data[] = {0x51b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa72: {
unico data[] = {0x5168};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa73: {
unico data[] = {0x4f80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa74: {
unico data[] = {0x5145};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa75: {
unico data[] = {0x5180};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa76: {
unico data[] = {0x52c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa77: {
unico data[] = {0x52fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa78: {
unico data[] = {0x559d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa79: {
unico data[] = {0x5555};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7a: {
unico data[] = {0x5599};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7b: {
unico data[] = {0x55e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7c: {
unico data[] = {0x585a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7d: {
unico data[] = {0x58b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7e: {
unico data[] = {0x5944};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa7f: {
unico data[] = {0x5954};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa80: {
unico data[] = {0x5a62};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa81: {
unico data[] = {0x5b28};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa82: {
unico data[] = {0x5ed2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa83: {
unico data[] = {0x5ed9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa84: {
unico data[] = {0x5f69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa85: {
unico data[] = {0x5fad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa86: {
unico data[] = {0x60d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa87: {
unico data[] = {0x614e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa88: {
unico data[] = {0x6108};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa89: {
unico data[] = {0x618e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8a: {
unico data[] = {0x6160};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8b: {
unico data[] = {0x61f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8c: {
unico data[] = {0x6234};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8d: {
unico data[] = {0x63c4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8e: {
unico data[] = {0x641c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa8f: {
unico data[] = {0x6452};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa90: {
unico data[] = {0x6556};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa91: {
unico data[] = {0x6674};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa92: {
unico data[] = {0x6717};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa93: {
unico data[] = {0x671b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa94: {
unico data[] = {0x6756};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa95: {
unico data[] = {0x6b79};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa96: {
unico data[] = {0x6bba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa97: {
unico data[] = {0x6d41};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa98: {
unico data[] = {0x6edb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa99: {
unico data[] = {0x6ecb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9a: {
unico data[] = {0x6f22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9b: {
unico data[] = {0x701e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9c: {
unico data[] = {0x716e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9d: {
unico data[] = {0x77a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9e: {
unico data[] = {0x7235};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa9f: {
unico data[] = {0x72af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa0: {
unico data[] = {0x732a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa1: {
unico data[] = {0x7471};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa2: {
unico data[] = {0x7506};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa3: {
unico data[] = {0x753b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa4: {
unico data[] = {0x761d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa5: {
unico data[] = {0x761f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa6: {
unico data[] = {0x76ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa7: {
unico data[] = {0x76db};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa8: {
unico data[] = {0x76f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaa9: {
unico data[] = {0x774a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaaa: {
unico data[] = {0x7740};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaab: {
unico data[] = {0x78cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaac: {
unico data[] = {0x7ab1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaad: {
unico data[] = {0x7bc0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaae: {
unico data[] = {0x7c7b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaaf: {
unico data[] = {0x7d5b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab0: {
unico data[] = {0x7df4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab1: {
unico data[] = {0x7f3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab2: {
unico data[] = {0x8005};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab3: {
unico data[] = {0x8352};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab4: {
unico data[] = {0x83ef};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab5: {
unico data[] = {0x8779};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab6: {
unico data[] = {0x8941};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab7: {
unico data[] = {0x8986};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab8: {
unico data[] = {0x8996};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfab9: {
unico data[] = {0x8abf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaba: {
unico data[] = {0x8af8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabb: {
unico data[] = {0x8acb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabc: {
unico data[] = {0x8b01};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabd: {
unico data[] = {0x8afe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabe: {
unico data[] = {0x8aed};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfabf: {
unico data[] = {0x8b39};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac0: {
unico data[] = {0x8b8a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac1: {
unico data[] = {0x8d08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac2: {
unico data[] = {0x8f38};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac3: {
unico data[] = {0x9072};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac4: {
unico data[] = {0x9199};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac5: {
unico data[] = {0x9276};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac6: {
unico data[] = {0x967c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac7: {
unico data[] = {0x96e3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac8: {
unico data[] = {0x9756};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfac9: {
unico data[] = {0x97db};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfaca: {
unico data[] = {0x97ff};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacb: {
unico data[] = {0x980b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacc: {
unico data[] = {0x983b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacd: {
unico data[] = {0x9b12};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xface: {
unico data[] = {0x9f9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfacf: {
unico data[] = {0x2284a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad0: {
unico data[] = {0x22844};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad1: {
unico data[] = {0x233d5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad2: {
unico data[] = {0x3b9d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad3: {
unico data[] = {0x4018};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad4: {
unico data[] = {0x4039};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad5: {
unico data[] = {0x25249};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad6: {
unico data[] = {0x25cd0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad7: {
unico data[] = {0x27ed3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad8: {
unico data[] = {0x9f43};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfad9: {
unico data[] = {0x9f8e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb1d: {
unico data[] = {0x5d9, 0x5b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb1f: {
unico data[] = {0x5f2, 0x5b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2a: {
unico data[] = {0x5e9, 0x5c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2b: {
unico data[] = {0x5e9, 0x5c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2c: {
unico data[] = {0x5e9, 0x5bc, 0x5c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2d: {
unico data[] = {0x5e9, 0x5bc, 0x5c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2e: {
unico data[] = {0x5d0, 0x5b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb2f: {
unico data[] = {0x5d0, 0x5b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb30: {
unico data[] = {0x5d0, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb31: {
unico data[] = {0x5d1, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb32: {
unico data[] = {0x5d2, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb33: {
unico data[] = {0x5d3, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb34: {
unico data[] = {0x5d4, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb35: {
unico data[] = {0x5d5, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb36: {
unico data[] = {0x5d6, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb38: {
unico data[] = {0x5d8, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb39: {
unico data[] = {0x5d9, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3a: {
unico data[] = {0x5da, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3b: {
unico data[] = {0x5db, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3c: {
unico data[] = {0x5dc, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb3e: {
unico data[] = {0x5de, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb40: {
unico data[] = {0x5e0, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb41: {
unico data[] = {0x5e1, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb43: {
unico data[] = {0x5e3, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb44: {
unico data[] = {0x5e4, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb46: {
unico data[] = {0x5e6, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb47: {
unico data[] = {0x5e7, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb48: {
unico data[] = {0x5e8, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb49: {
unico data[] = {0x5e9, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4a: {
unico data[] = {0x5ea, 0x5bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4b: {
unico data[] = {0x5d5, 0x5b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4c: {
unico data[] = {0x5d1, 0x5bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4d: {
unico data[] = {0x5db, 0x5bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb4e: {
unico data[] = {0x5e4, 0x5bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d15e: {
unico data[] = {0x1d157, 0x1d165};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d15f: {
unico data[] = {0x1d158, 0x1d165};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d160: {
unico data[] = {0x1d158, 0x1d165, 0x1d16e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d161: {
unico data[] = {0x1d158, 0x1d165, 0x1d16f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d162: {
unico data[] = {0x1d158, 0x1d165, 0x1d170};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d163: {
unico data[] = {0x1d158, 0x1d165, 0x1d171};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d164: {
unico data[] = {0x1d158, 0x1d165, 0x1d172};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bb: {
unico data[] = {0x1d1b9, 0x1d165};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bc: {
unico data[] = {0x1d1ba, 0x1d165};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bd: {
unico data[] = {0x1d1b9, 0x1d165, 0x1d16e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1be: {
unico data[] = {0x1d1ba, 0x1d165, 0x1d16e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1bf: {
unico data[] = {0x1d1b9, 0x1d165, 0x1d16f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1c0: {
unico data[] = {0x1d1ba, 0x1d165, 0x1d16f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f800: {
unico data[] = {0x4e3d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f801: {
unico data[] = {0x4e38};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f802: {
unico data[] = {0x4e41};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f803: {
unico data[] = {0x20122};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f804: {
unico data[] = {0x4f60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f805: {
unico data[] = {0x4fae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f806: {
unico data[] = {0x4fbb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f807: {
unico data[] = {0x5002};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f808: {
unico data[] = {0x507a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f809: {
unico data[] = {0x5099};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80a: {
unico data[] = {0x50e7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80b: {
unico data[] = {0x50cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80c: {
unico data[] = {0x349e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80d: {
unico data[] = {0x2063a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80e: {
unico data[] = {0x514d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f80f: {
unico data[] = {0x5154};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f810: {
unico data[] = {0x5164};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f811: {
unico data[] = {0x5177};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f812: {
unico data[] = {0x2051c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f813: {
unico data[] = {0x34b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f814: {
unico data[] = {0x5167};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f815: {
unico data[] = {0x518d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f816: {
unico data[] = {0x2054b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f817: {
unico data[] = {0x5197};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f818: {
unico data[] = {0x51a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f819: {
unico data[] = {0x4ecc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81a: {
unico data[] = {0x51ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81b: {
unico data[] = {0x51b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81c: {
unico data[] = {0x291df};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81d: {
unico data[] = {0x51f5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81e: {
unico data[] = {0x5203};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f81f: {
unico data[] = {0x34df};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f820: {
unico data[] = {0x523b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f821: {
unico data[] = {0x5246};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f822: {
unico data[] = {0x5272};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f823: {
unico data[] = {0x5277};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f824: {
unico data[] = {0x3515};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f825: {
unico data[] = {0x52c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f826: {
unico data[] = {0x52c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f827: {
unico data[] = {0x52e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f828: {
unico data[] = {0x52fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f829: {
unico data[] = {0x5305};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82a: {
unico data[] = {0x5306};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82b: {
unico data[] = {0x5317};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82c: {
unico data[] = {0x5349};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82d: {
unico data[] = {0x5351};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82e: {
unico data[] = {0x535a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f82f: {
unico data[] = {0x5373};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f830: {
unico data[] = {0x537d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f831: {
unico data[] = {0x537f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f832: {
unico data[] = {0x537f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f833: {
unico data[] = {0x537f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f834: {
unico data[] = {0x20a2c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f835: {
unico data[] = {0x7070};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f836: {
unico data[] = {0x53ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f837: {
unico data[] = {0x53df};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f838: {
unico data[] = {0x20b63};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f839: {
unico data[] = {0x53eb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83a: {
unico data[] = {0x53f1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83b: {
unico data[] = {0x5406};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83c: {
unico data[] = {0x549e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83d: {
unico data[] = {0x5438};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83e: {
unico data[] = {0x5448};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f83f: {
unico data[] = {0x5468};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f840: {
unico data[] = {0x54a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f841: {
unico data[] = {0x54f6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f842: {
unico data[] = {0x5510};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f843: {
unico data[] = {0x5553};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f844: {
unico data[] = {0x5563};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f845: {
unico data[] = {0x5584};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f846: {
unico data[] = {0x5584};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f847: {
unico data[] = {0x5599};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f848: {
unico data[] = {0x55ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f849: {
unico data[] = {0x55b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84a: {
unico data[] = {0x55c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84b: {
unico data[] = {0x5716};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84c: {
unico data[] = {0x5606};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84d: {
unico data[] = {0x5717};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84e: {
unico data[] = {0x5651};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f84f: {
unico data[] = {0x5674};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f850: {
unico data[] = {0x5207};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f851: {
unico data[] = {0x58ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f852: {
unico data[] = {0x57ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f853: {
unico data[] = {0x57f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f854: {
unico data[] = {0x580d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f855: {
unico data[] = {0x578b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f856: {
unico data[] = {0x5832};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f857: {
unico data[] = {0x5831};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f858: {
unico data[] = {0x58ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f859: {
unico data[] = {0x214e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85a: {
unico data[] = {0x58f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85b: {
unico data[] = {0x58f7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85c: {
unico data[] = {0x5906};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85d: {
unico data[] = {0x591a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85e: {
unico data[] = {0x5922};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f85f: {
unico data[] = {0x5962};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f860: {
unico data[] = {0x216a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f861: {
unico data[] = {0x216ea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f862: {
unico data[] = {0x59ec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f863: {
unico data[] = {0x5a1b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f864: {
unico data[] = {0x5a27};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f865: {
unico data[] = {0x59d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f866: {
unico data[] = {0x5a66};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f867: {
unico data[] = {0x36ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f868: {
unico data[] = {0x36fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f869: {
unico data[] = {0x5b08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86a: {
unico data[] = {0x5b3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86b: {
unico data[] = {0x5b3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86c: {
unico data[] = {0x219c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86d: {
unico data[] = {0x5bc3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86e: {
unico data[] = {0x5bd8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f86f: {
unico data[] = {0x5be7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f870: {
unico data[] = {0x5bf3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f871: {
unico data[] = {0x21b18};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f872: {
unico data[] = {0x5bff};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f873: {
unico data[] = {0x5c06};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f874: {
unico data[] = {0x5f53};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f875: {
unico data[] = {0x5c22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f876: {
unico data[] = {0x3781};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f877: {
unico data[] = {0x5c60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f878: {
unico data[] = {0x5c6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f879: {
unico data[] = {0x5cc0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87a: {
unico data[] = {0x5c8d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87b: {
unico data[] = {0x21de4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87c: {
unico data[] = {0x5d43};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87d: {
unico data[] = {0x21de6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87e: {
unico data[] = {0x5d6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f87f: {
unico data[] = {0x5d6b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f880: {
unico data[] = {0x5d7c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f881: {
unico data[] = {0x5de1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f882: {
unico data[] = {0x5de2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f883: {
unico data[] = {0x382f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f884: {
unico data[] = {0x5dfd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f885: {
unico data[] = {0x5e28};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f886: {
unico data[] = {0x5e3d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f887: {
unico data[] = {0x5e69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f888: {
unico data[] = {0x3862};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f889: {
unico data[] = {0x22183};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88a: {
unico data[] = {0x387c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88b: {
unico data[] = {0x5eb0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88c: {
unico data[] = {0x5eb3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88d: {
unico data[] = {0x5eb6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88e: {
unico data[] = {0x5eca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f88f: {
unico data[] = {0x2a392};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f890: {
unico data[] = {0x5efe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f891: {
unico data[] = {0x22331};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f892: {
unico data[] = {0x22331};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f893: {
unico data[] = {0x8201};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f894: {
unico data[] = {0x5f22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f895: {
unico data[] = {0x5f22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f896: {
unico data[] = {0x38c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f897: {
unico data[] = {0x232b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f898: {
unico data[] = {0x261da};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f899: {
unico data[] = {0x5f62};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89a: {
unico data[] = {0x5f6b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89b: {
unico data[] = {0x38e3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89c: {
unico data[] = {0x5f9a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89d: {
unico data[] = {0x5fcd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89e: {
unico data[] = {0x5fd7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f89f: {
unico data[] = {0x5ff9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a0: {
unico data[] = {0x6081};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a1: {
unico data[] = {0x393a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a2: {
unico data[] = {0x391c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a3: {
unico data[] = {0x6094};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a4: {
unico data[] = {0x226d4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a5: {
unico data[] = {0x60c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a6: {
unico data[] = {0x6148};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a7: {
unico data[] = {0x614c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a8: {
unico data[] = {0x614e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8a9: {
unico data[] = {0x614c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8aa: {
unico data[] = {0x617a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ab: {
unico data[] = {0x618e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ac: {
unico data[] = {0x61b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ad: {
unico data[] = {0x61a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ae: {
unico data[] = {0x61af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8af: {
unico data[] = {0x61de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b0: {
unico data[] = {0x61f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b1: {
unico data[] = {0x61f6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b2: {
unico data[] = {0x6210};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b3: {
unico data[] = {0x621b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b4: {
unico data[] = {0x625d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b5: {
unico data[] = {0x62b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b6: {
unico data[] = {0x62d4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b7: {
unico data[] = {0x6350};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b8: {
unico data[] = {0x22b0c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8b9: {
unico data[] = {0x633d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ba: {
unico data[] = {0x62fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bb: {
unico data[] = {0x6368};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bc: {
unico data[] = {0x6383};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bd: {
unico data[] = {0x63e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8be: {
unico data[] = {0x22bf1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8bf: {
unico data[] = {0x6422};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c0: {
unico data[] = {0x63c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c1: {
unico data[] = {0x63a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c2: {
unico data[] = {0x3a2e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c3: {
unico data[] = {0x6469};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c4: {
unico data[] = {0x647e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c5: {
unico data[] = {0x649d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c6: {
unico data[] = {0x6477};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c7: {
unico data[] = {0x3a6c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c8: {
unico data[] = {0x654f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8c9: {
unico data[] = {0x656c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ca: {
unico data[] = {0x2300a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cb: {
unico data[] = {0x65e3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cc: {
unico data[] = {0x66f8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cd: {
unico data[] = {0x6649};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ce: {
unico data[] = {0x3b19};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8cf: {
unico data[] = {0x6691};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d0: {
unico data[] = {0x3b08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d1: {
unico data[] = {0x3ae4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d2: {
unico data[] = {0x5192};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d3: {
unico data[] = {0x5195};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d4: {
unico data[] = {0x6700};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d5: {
unico data[] = {0x669c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d6: {
unico data[] = {0x80ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d7: {
unico data[] = {0x43d9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d8: {
unico data[] = {0x6717};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8d9: {
unico data[] = {0x671b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8da: {
unico data[] = {0x6721};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8db: {
unico data[] = {0x675e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8dc: {
unico data[] = {0x6753};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8dd: {
unico data[] = {0x233c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8de: {
unico data[] = {0x3b49};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8df: {
unico data[] = {0x67fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e0: {
unico data[] = {0x6785};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e1: {
unico data[] = {0x6852};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e2: {
unico data[] = {0x6885};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e3: {
unico data[] = {0x2346d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e4: {
unico data[] = {0x688e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e5: {
unico data[] = {0x681f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e6: {
unico data[] = {0x6914};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e7: {
unico data[] = {0x3b9d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e8: {
unico data[] = {0x6942};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8e9: {
unico data[] = {0x69a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ea: {
unico data[] = {0x69ea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8eb: {
unico data[] = {0x6aa8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ec: {
unico data[] = {0x236a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ed: {
unico data[] = {0x6adb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ee: {
unico data[] = {0x3c18};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ef: {
unico data[] = {0x6b21};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f0: {
unico data[] = {0x238a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f1: {
unico data[] = {0x6b54};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f2: {
unico data[] = {0x3c4e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f3: {
unico data[] = {0x6b72};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f4: {
unico data[] = {0x6b9f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f5: {
unico data[] = {0x6bba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f6: {
unico data[] = {0x6bbb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f7: {
unico data[] = {0x23a8d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f8: {
unico data[] = {0x21d0b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8f9: {
unico data[] = {0x23afa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fa: {
unico data[] = {0x6c4e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fb: {
unico data[] = {0x23cbc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fc: {
unico data[] = {0x6cbf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fd: {
unico data[] = {0x6ccd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8fe: {
unico data[] = {0x6c67};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f8ff: {
unico data[] = {0x6d16};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f900: {
unico data[] = {0x6d3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f901: {
unico data[] = {0x6d77};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f902: {
unico data[] = {0x6d41};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f903: {
unico data[] = {0x6d69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f904: {
unico data[] = {0x6d78};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f905: {
unico data[] = {0x6d85};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f906: {
unico data[] = {0x23d1e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f907: {
unico data[] = {0x6d34};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f908: {
unico data[] = {0x6e2f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f909: {
unico data[] = {0x6e6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90a: {
unico data[] = {0x3d33};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90b: {
unico data[] = {0x6ecb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90c: {
unico data[] = {0x6ec7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90d: {
unico data[] = {0x23ed1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90e: {
unico data[] = {0x6df9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f90f: {
unico data[] = {0x6f6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f910: {
unico data[] = {0x23f5e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f911: {
unico data[] = {0x23f8e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f912: {
unico data[] = {0x6fc6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f913: {
unico data[] = {0x7039};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f914: {
unico data[] = {0x701e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f915: {
unico data[] = {0x701b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f916: {
unico data[] = {0x3d96};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f917: {
unico data[] = {0x704a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f918: {
unico data[] = {0x707d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f919: {
unico data[] = {0x7077};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91a: {
unico data[] = {0x70ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91b: {
unico data[] = {0x20525};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91c: {
unico data[] = {0x7145};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91d: {
unico data[] = {0x24263};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91e: {
unico data[] = {0x719c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f91f: {
unico data[] = {0x243ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f920: {
unico data[] = {0x7228};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f921: {
unico data[] = {0x7235};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f922: {
unico data[] = {0x7250};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f923: {
unico data[] = {0x24608};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f924: {
unico data[] = {0x7280};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f925: {
unico data[] = {0x7295};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f926: {
unico data[] = {0x24735};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f927: {
unico data[] = {0x24814};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f928: {
unico data[] = {0x737a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f929: {
unico data[] = {0x738b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92a: {
unico data[] = {0x3eac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92b: {
unico data[] = {0x73a5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92c: {
unico data[] = {0x3eb8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92d: {
unico data[] = {0x3eb8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92e: {
unico data[] = {0x7447};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f92f: {
unico data[] = {0x745c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f930: {
unico data[] = {0x7471};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f931: {
unico data[] = {0x7485};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f932: {
unico data[] = {0x74ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f933: {
unico data[] = {0x3f1b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f934: {
unico data[] = {0x7524};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f935: {
unico data[] = {0x24c36};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f936: {
unico data[] = {0x753e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f937: {
unico data[] = {0x24c92};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f938: {
unico data[] = {0x7570};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f939: {
unico data[] = {0x2219f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93a: {
unico data[] = {0x7610};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93b: {
unico data[] = {0x24fa1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93c: {
unico data[] = {0x24fb8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93d: {
unico data[] = {0x25044};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93e: {
unico data[] = {0x3ffc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f93f: {
unico data[] = {0x4008};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f940: {
unico data[] = {0x76f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f941: {
unico data[] = {0x250f3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f942: {
unico data[] = {0x250f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f943: {
unico data[] = {0x25119};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f944: {
unico data[] = {0x25133};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f945: {
unico data[] = {0x771e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f946: {
unico data[] = {0x771f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f947: {
unico data[] = {0x771f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f948: {
unico data[] = {0x774a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f949: {
unico data[] = {0x4039};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94a: {
unico data[] = {0x778b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94b: {
unico data[] = {0x4046};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94c: {
unico data[] = {0x4096};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94d: {
unico data[] = {0x2541d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94e: {
unico data[] = {0x784e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f94f: {
unico data[] = {0x788c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f950: {
unico data[] = {0x78cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f951: {
unico data[] = {0x40e3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f952: {
unico data[] = {0x25626};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f953: {
unico data[] = {0x7956};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f954: {
unico data[] = {0x2569a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f955: {
unico data[] = {0x256c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f956: {
unico data[] = {0x798f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f957: {
unico data[] = {0x79eb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f958: {
unico data[] = {0x412f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f959: {
unico data[] = {0x7a40};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95a: {
unico data[] = {0x7a4a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95b: {
unico data[] = {0x7a4f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95c: {
unico data[] = {0x2597c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95d: {
unico data[] = {0x25aa7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95e: {
unico data[] = {0x25aa7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f95f: {
unico data[] = {0x7aee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f960: {
unico data[] = {0x4202};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f961: {
unico data[] = {0x25bab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f962: {
unico data[] = {0x7bc6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f963: {
unico data[] = {0x7bc9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f964: {
unico data[] = {0x4227};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f965: {
unico data[] = {0x25c80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f966: {
unico data[] = {0x7cd2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f967: {
unico data[] = {0x42a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f968: {
unico data[] = {0x7ce8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f969: {
unico data[] = {0x7ce3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96a: {
unico data[] = {0x7d00};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96b: {
unico data[] = {0x25f86};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96c: {
unico data[] = {0x7d63};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96d: {
unico data[] = {0x4301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96e: {
unico data[] = {0x7dc7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f96f: {
unico data[] = {0x7e02};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f970: {
unico data[] = {0x7e45};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f971: {
unico data[] = {0x4334};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f972: {
unico data[] = {0x26228};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f973: {
unico data[] = {0x26247};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f974: {
unico data[] = {0x4359};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f975: {
unico data[] = {0x262d9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f976: {
unico data[] = {0x7f7a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f977: {
unico data[] = {0x2633e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f978: {
unico data[] = {0x7f95};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f979: {
unico data[] = {0x7ffa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97a: {
unico data[] = {0x8005};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97b: {
unico data[] = {0x264da};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97c: {
unico data[] = {0x26523};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97d: {
unico data[] = {0x8060};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97e: {
unico data[] = {0x265a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f97f: {
unico data[] = {0x8070};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f980: {
unico data[] = {0x2335f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f981: {
unico data[] = {0x43d5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f982: {
unico data[] = {0x80b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f983: {
unico data[] = {0x8103};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f984: {
unico data[] = {0x440b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f985: {
unico data[] = {0x813e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f986: {
unico data[] = {0x5ab5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f987: {
unico data[] = {0x267a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f988: {
unico data[] = {0x267b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f989: {
unico data[] = {0x23393};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98a: {
unico data[] = {0x2339c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98b: {
unico data[] = {0x8201};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98c: {
unico data[] = {0x8204};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98d: {
unico data[] = {0x8f9e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98e: {
unico data[] = {0x446b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f98f: {
unico data[] = {0x8291};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f990: {
unico data[] = {0x828b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f991: {
unico data[] = {0x829d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f992: {
unico data[] = {0x52b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f993: {
unico data[] = {0x82b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f994: {
unico data[] = {0x82b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f995: {
unico data[] = {0x82bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f996: {
unico data[] = {0x82e6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f997: {
unico data[] = {0x26b3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f998: {
unico data[] = {0x82e5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f999: {
unico data[] = {0x831d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99a: {
unico data[] = {0x8363};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99b: {
unico data[] = {0x83ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99c: {
unico data[] = {0x8323};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99d: {
unico data[] = {0x83bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99e: {
unico data[] = {0x83e7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f99f: {
unico data[] = {0x8457};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a0: {
unico data[] = {0x8353};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a1: {
unico data[] = {0x83ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a2: {
unico data[] = {0x83cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a3: {
unico data[] = {0x83dc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a4: {
unico data[] = {0x26c36};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a5: {
unico data[] = {0x26d6b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a6: {
unico data[] = {0x26cd5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a7: {
unico data[] = {0x452b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a8: {
unico data[] = {0x84f1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9a9: {
unico data[] = {0x84f3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9aa: {
unico data[] = {0x8516};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ab: {
unico data[] = {0x273ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ac: {
unico data[] = {0x8564};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ad: {
unico data[] = {0x26f2c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ae: {
unico data[] = {0x455d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9af: {
unico data[] = {0x4561};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b0: {
unico data[] = {0x26fb1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b1: {
unico data[] = {0x270d2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b2: {
unico data[] = {0x456b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b3: {
unico data[] = {0x8650};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b4: {
unico data[] = {0x865c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b5: {
unico data[] = {0x8667};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b6: {
unico data[] = {0x8669};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b7: {
unico data[] = {0x86a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b8: {
unico data[] = {0x8688};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9b9: {
unico data[] = {0x870e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ba: {
unico data[] = {0x86e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bb: {
unico data[] = {0x8779};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bc: {
unico data[] = {0x8728};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bd: {
unico data[] = {0x876b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9be: {
unico data[] = {0x8786};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9bf: {
unico data[] = {0x45d7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c0: {
unico data[] = {0x87e1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c1: {
unico data[] = {0x8801};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c2: {
unico data[] = {0x45f9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c3: {
unico data[] = {0x8860};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c4: {
unico data[] = {0x8863};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c5: {
unico data[] = {0x27667};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c6: {
unico data[] = {0x88d7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c7: {
unico data[] = {0x88de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c8: {
unico data[] = {0x4635};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9c9: {
unico data[] = {0x88fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ca: {
unico data[] = {0x34bb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cb: {
unico data[] = {0x278ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cc: {
unico data[] = {0x27966};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cd: {
unico data[] = {0x46be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ce: {
unico data[] = {0x46c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9cf: {
unico data[] = {0x8aa0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d0: {
unico data[] = {0x8aed};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d1: {
unico data[] = {0x8b8a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d2: {
unico data[] = {0x8c55};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d3: {
unico data[] = {0x27ca8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d4: {
unico data[] = {0x8cab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d5: {
unico data[] = {0x8cc1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d6: {
unico data[] = {0x8d1b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d7: {
unico data[] = {0x8d77};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d8: {
unico data[] = {0x27f2f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9d9: {
unico data[] = {0x20804};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9da: {
unico data[] = {0x8dcb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9db: {
unico data[] = {0x8dbc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9dc: {
unico data[] = {0x8df0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9dd: {
unico data[] = {0x208de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9de: {
unico data[] = {0x8ed4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9df: {
unico data[] = {0x8f38};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e0: {
unico data[] = {0x285d2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e1: {
unico data[] = {0x285ed};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e2: {
unico data[] = {0x9094};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e3: {
unico data[] = {0x90f1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e4: {
unico data[] = {0x9111};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e5: {
unico data[] = {0x2872e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e6: {
unico data[] = {0x911b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e7: {
unico data[] = {0x9238};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e8: {
unico data[] = {0x92d7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9e9: {
unico data[] = {0x92d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ea: {
unico data[] = {0x927c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9eb: {
unico data[] = {0x93f9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ec: {
unico data[] = {0x9415};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ed: {
unico data[] = {0x28bfa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ee: {
unico data[] = {0x958b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ef: {
unico data[] = {0x4995};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f0: {
unico data[] = {0x95b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f1: {
unico data[] = {0x28d77};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f2: {
unico data[] = {0x49e6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f3: {
unico data[] = {0x96c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f4: {
unico data[] = {0x5db2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f5: {
unico data[] = {0x9723};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f6: {
unico data[] = {0x29145};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f7: {
unico data[] = {0x2921a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f8: {
unico data[] = {0x4a6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9f9: {
unico data[] = {0x4a76};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fa: {
unico data[] = {0x97e0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fb: {
unico data[] = {0x2940a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fc: {
unico data[] = {0x4ab2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fd: {
unico data[] = {0x29496};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9fe: {
unico data[] = {0x980b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2f9ff: {
unico data[] = {0x980b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa00: {
unico data[] = {0x9829};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa01: {
unico data[] = {0x295b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa02: {
unico data[] = {0x98e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa03: {
unico data[] = {0x4b33};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa04: {
unico data[] = {0x9929};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa05: {
unico data[] = {0x99a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa06: {
unico data[] = {0x99c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa07: {
unico data[] = {0x99fe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa08: {
unico data[] = {0x4bce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa09: {
unico data[] = {0x29b30};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0a: {
unico data[] = {0x9b12};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0b: {
unico data[] = {0x9c40};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0c: {
unico data[] = {0x9cfd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0d: {
unico data[] = {0x4cce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0e: {
unico data[] = {0x4ced};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa0f: {
unico data[] = {0x9d67};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa10: {
unico data[] = {0x2a0ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa11: {
unico data[] = {0x4cf8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa12: {
unico data[] = {0x2a105};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa13: {
unico data[] = {0x2a20e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa14: {
unico data[] = {0x2a291};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa15: {
unico data[] = {0x9ebb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa16: {
unico data[] = {0x4d56};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa17: {
unico data[] = {0x9ef9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa18: {
unico data[] = {0x9efe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa19: {
unico data[] = {0x9f05};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1a: {
unico data[] = {0x9f0f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1b: {
unico data[] = {0x9f16};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1c: {
unico data[] = {0x9f3b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2fa1d: {
unico data[] = {0x2a600};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
default:
*indexout = index +1;
return 0;
}
}
*indexout = index +1;
return 0;
}
