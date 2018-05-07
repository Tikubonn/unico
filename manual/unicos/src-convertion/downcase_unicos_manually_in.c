#include <unico.h>
#include <stddef.h>

int downcase_unicos_manually_in (size_t index, size_t end, unicos *uniout, size_t *indexout){
if (0 <= end - index){
switch (get_unicos(index +0, uniout)){
case 0x41: {
unico data[] = {0x61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42: {
unico data[] = {0x62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43: {
unico data[] = {0x63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44: {
unico data[] = {0x64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45: {
unico data[] = {0x65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46: {
unico data[] = {0x66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47: {
unico data[] = {0x67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48: {
unico data[] = {0x68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a: {
unico data[] = {0x6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c: {
unico data[] = {0x6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d: {
unico data[] = {0x6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e: {
unico data[] = {0x6e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f: {
unico data[] = {0x6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50: {
unico data[] = {0x70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51: {
unico data[] = {0x71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52: {
unico data[] = {0x72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53: {
unico data[] = {0x73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54: {
unico data[] = {0x74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x55: {
unico data[] = {0x75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56: {
unico data[] = {0x76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57: {
unico data[] = {0x77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x58: {
unico data[] = {0x78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x59: {
unico data[] = {0x79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x5a: {
unico data[] = {0x7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc0: {
unico data[] = {0xe0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc1: {
unico data[] = {0xe1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc2: {
unico data[] = {0xe2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc3: {
unico data[] = {0xe3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc4: {
unico data[] = {0xe4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc5: {
unico data[] = {0xe5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc6: {
unico data[] = {0xe6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc7: {
unico data[] = {0xe7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc8: {
unico data[] = {0xe8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xc9: {
unico data[] = {0xe9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xca: {
unico data[] = {0xea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xcb: {
unico data[] = {0xeb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xcc: {
unico data[] = {0xec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xcd: {
unico data[] = {0xed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xce: {
unico data[] = {0xee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xcf: {
unico data[] = {0xef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd0: {
unico data[] = {0xf0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd1: {
unico data[] = {0xf1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd2: {
unico data[] = {0xf2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd3: {
unico data[] = {0xf3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd4: {
unico data[] = {0xf4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd5: {
unico data[] = {0xf5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd6: {
unico data[] = {0xf6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd8: {
unico data[] = {0xf8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xd9: {
unico data[] = {0xf9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xda: {
unico data[] = {0xfa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xdb: {
unico data[] = {0xfb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xdc: {
unico data[] = {0xfc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xdd: {
unico data[] = {0xfd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xde: {
unico data[] = {0xfe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x100: {
unico data[] = {0x101};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x102: {
unico data[] = {0x103};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104: {
unico data[] = {0x105};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x106: {
unico data[] = {0x107};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x108: {
unico data[] = {0x109};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a: {
unico data[] = {0x10b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c: {
unico data[] = {0x10d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10e: {
unico data[] = {0x10f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x110: {
unico data[] = {0x111};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x112: {
unico data[] = {0x113};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x114: {
unico data[] = {0x115};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x116: {
unico data[] = {0x117};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118: {
unico data[] = {0x119};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x11a: {
unico data[] = {0x11b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x11c: {
unico data[] = {0x11d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x11e: {
unico data[] = {0x11f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x120: {
unico data[] = {0x121};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x122: {
unico data[] = {0x123};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x124: {
unico data[] = {0x125};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x126: {
unico data[] = {0x127};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x128: {
unico data[] = {0x129};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x12a: {
unico data[] = {0x12b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x12c: {
unico data[] = {0x12d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x12e: {
unico data[] = {0x12f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x130: {
unico data[] = {0x69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x132: {
unico data[] = {0x133};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x134: {
unico data[] = {0x135};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x136: {
unico data[] = {0x137};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x139: {
unico data[] = {0x13a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b: {
unico data[] = {0x13c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d: {
unico data[] = {0x13e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f: {
unico data[] = {0x140};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x141: {
unico data[] = {0x142};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x143: {
unico data[] = {0x144};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x145: {
unico data[] = {0x146};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x147: {
unico data[] = {0x148};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x14a: {
unico data[] = {0x14b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x14c: {
unico data[] = {0x14d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x14e: {
unico data[] = {0x14f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x150: {
unico data[] = {0x151};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x152: {
unico data[] = {0x153};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x154: {
unico data[] = {0x155};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x156: {
unico data[] = {0x157};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x158: {
unico data[] = {0x159};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x15a: {
unico data[] = {0x15b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x15c: {
unico data[] = {0x15d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x15e: {
unico data[] = {0x15f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x160: {
unico data[] = {0x161};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x162: {
unico data[] = {0x163};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x164: {
unico data[] = {0x165};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x166: {
unico data[] = {0x167};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x168: {
unico data[] = {0x169};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x16a: {
unico data[] = {0x16b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x16c: {
unico data[] = {0x16d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x16e: {
unico data[] = {0x16f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x170: {
unico data[] = {0x171};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x172: {
unico data[] = {0x173};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x174: {
unico data[] = {0x175};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x176: {
unico data[] = {0x177};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x178: {
unico data[] = {0xff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x179: {
unico data[] = {0x17a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17b: {
unico data[] = {0x17c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17d: {
unico data[] = {0x17e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x181: {
unico data[] = {0x253};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x182: {
unico data[] = {0x183};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x184: {
unico data[] = {0x185};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x186: {
unico data[] = {0x254};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x187: {
unico data[] = {0x188};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x189: {
unico data[] = {0x256};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x18a: {
unico data[] = {0x257};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x18b: {
unico data[] = {0x18c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x18e: {
unico data[] = {0x1dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x18f: {
unico data[] = {0x259};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x190: {
unico data[] = {0x25b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x191: {
unico data[] = {0x192};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x193: {
unico data[] = {0x260};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x194: {
unico data[] = {0x263};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x196: {
unico data[] = {0x269};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x197: {
unico data[] = {0x268};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x198: {
unico data[] = {0x199};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x19c: {
unico data[] = {0x26f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x19d: {
unico data[] = {0x272};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x19f: {
unico data[] = {0x275};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a0: {
unico data[] = {0x1a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a2: {
unico data[] = {0x1a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a4: {
unico data[] = {0x1a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a6: {
unico data[] = {0x280};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a7: {
unico data[] = {0x1a8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a9: {
unico data[] = {0x283};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ac: {
unico data[] = {0x1ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ae: {
unico data[] = {0x288};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1af: {
unico data[] = {0x1b0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b1: {
unico data[] = {0x28a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b2: {
unico data[] = {0x28b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b3: {
unico data[] = {0x1b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b5: {
unico data[] = {0x1b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b7: {
unico data[] = {0x292};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b8: {
unico data[] = {0x1b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1bc: {
unico data[] = {0x1bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c4: {
unico data[] = {0x1c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c5: {
unico data[] = {0x1c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c7: {
unico data[] = {0x1c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c8: {
unico data[] = {0x1c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ca: {
unico data[] = {0x1cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1cb: {
unico data[] = {0x1cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1cd: {
unico data[] = {0x1ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1cf: {
unico data[] = {0x1d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d1: {
unico data[] = {0x1d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d3: {
unico data[] = {0x1d4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d5: {
unico data[] = {0x1d6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7: {
unico data[] = {0x1d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d9: {
unico data[] = {0x1da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1db: {
unico data[] = {0x1dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1de: {
unico data[] = {0x1df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0: {
unico data[] = {0x1e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2: {
unico data[] = {0x1e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4: {
unico data[] = {0x1e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6: {
unico data[] = {0x1e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8: {
unico data[] = {0x1e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea: {
unico data[] = {0x1eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec: {
unico data[] = {0x1ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee: {
unico data[] = {0x1ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1: {
unico data[] = {0x1f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2: {
unico data[] = {0x1f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f4: {
unico data[] = {0x1f5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6: {
unico data[] = {0x195};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7: {
unico data[] = {0x1bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8: {
unico data[] = {0x1f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa: {
unico data[] = {0x1fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc: {
unico data[] = {0x1fd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe: {
unico data[] = {0x1ff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x200: {
unico data[] = {0x201};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x202: {
unico data[] = {0x203};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x204: {
unico data[] = {0x205};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x206: {
unico data[] = {0x207};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x208: {
unico data[] = {0x209};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20a: {
unico data[] = {0x20b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20c: {
unico data[] = {0x20d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20e: {
unico data[] = {0x20f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x210: {
unico data[] = {0x211};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212: {
unico data[] = {0x213};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x214: {
unico data[] = {0x215};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216: {
unico data[] = {0x217};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x218: {
unico data[] = {0x219};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x21a: {
unico data[] = {0x21b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x21c: {
unico data[] = {0x21d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x21e: {
unico data[] = {0x21f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x220: {
unico data[] = {0x19e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x222: {
unico data[] = {0x223};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x224: {
unico data[] = {0x225};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x226: {
unico data[] = {0x227};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x228: {
unico data[] = {0x229};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x22a: {
unico data[] = {0x22b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x22c: {
unico data[] = {0x22d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x22e: {
unico data[] = {0x22f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x230: {
unico data[] = {0x231};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x232: {
unico data[] = {0x233};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x23a: {
unico data[] = {0x2c65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x23b: {
unico data[] = {0x23c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x23d: {
unico data[] = {0x19a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x23e: {
unico data[] = {0x2c66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x241: {
unico data[] = {0x242};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x243: {
unico data[] = {0x180};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x244: {
unico data[] = {0x289};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x245: {
unico data[] = {0x28c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x246: {
unico data[] = {0x247};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x248: {
unico data[] = {0x249};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24a: {
unico data[] = {0x24b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c: {
unico data[] = {0x24d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e: {
unico data[] = {0x24f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x370: {
unico data[] = {0x371};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x372: {
unico data[] = {0x373};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x376: {
unico data[] = {0x377};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37f: {
unico data[] = {0x3f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x386: {
unico data[] = {0x3ac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x388: {
unico data[] = {0x3ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x389: {
unico data[] = {0x3ae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x38a: {
unico data[] = {0x3af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x38c: {
unico data[] = {0x3cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x38e: {
unico data[] = {0x3cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x38f: {
unico data[] = {0x3ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x391: {
unico data[] = {0x3b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x392: {
unico data[] = {0x3b2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x393: {
unico data[] = {0x3b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x394: {
unico data[] = {0x3b4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x395: {
unico data[] = {0x3b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x396: {
unico data[] = {0x3b6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x397: {
unico data[] = {0x3b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x398: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x399: {
unico data[] = {0x3b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x39a: {
unico data[] = {0x3ba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x39b: {
unico data[] = {0x3bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x39c: {
unico data[] = {0x3bc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x39d: {
unico data[] = {0x3bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x39e: {
unico data[] = {0x3be};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x39f: {
unico data[] = {0x3bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a0: {
unico data[] = {0x3c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a1: {
unico data[] = {0x3c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a3: {
unico data[] = {0x3c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a4: {
unico data[] = {0x3c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a5: {
unico data[] = {0x3c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a6: {
unico data[] = {0x3c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a7: {
unico data[] = {0x3c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a8: {
unico data[] = {0x3c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3a9: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3aa: {
unico data[] = {0x3ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ab: {
unico data[] = {0x3cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3cf: {
unico data[] = {0x3d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d8: {
unico data[] = {0x3d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3da: {
unico data[] = {0x3db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3dc: {
unico data[] = {0x3dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3de: {
unico data[] = {0x3df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e0: {
unico data[] = {0x3e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e2: {
unico data[] = {0x3e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e4: {
unico data[] = {0x3e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e6: {
unico data[] = {0x3e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e8: {
unico data[] = {0x3e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ea: {
unico data[] = {0x3eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ec: {
unico data[] = {0x3ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ee: {
unico data[] = {0x3ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f4: {
unico data[] = {0x3b8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f7: {
unico data[] = {0x3f8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f9: {
unico data[] = {0x3f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3fa: {
unico data[] = {0x3fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3fd: {
unico data[] = {0x37b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3fe: {
unico data[] = {0x37c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ff: {
unico data[] = {0x37d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x400: {
unico data[] = {0x450};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x401: {
unico data[] = {0x451};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x402: {
unico data[] = {0x452};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x403: {
unico data[] = {0x453};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x404: {
unico data[] = {0x454};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x405: {
unico data[] = {0x455};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x406: {
unico data[] = {0x456};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x407: {
unico data[] = {0x457};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x408: {
unico data[] = {0x458};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x409: {
unico data[] = {0x459};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x40a: {
unico data[] = {0x45a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x40b: {
unico data[] = {0x45b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x40c: {
unico data[] = {0x45c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x40d: {
unico data[] = {0x45d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x40e: {
unico data[] = {0x45e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x40f: {
unico data[] = {0x45f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x410: {
unico data[] = {0x430};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x411: {
unico data[] = {0x431};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x412: {
unico data[] = {0x432};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x413: {
unico data[] = {0x433};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x414: {
unico data[] = {0x434};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x415: {
unico data[] = {0x435};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x416: {
unico data[] = {0x436};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x417: {
unico data[] = {0x437};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x418: {
unico data[] = {0x438};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x419: {
unico data[] = {0x439};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x41a: {
unico data[] = {0x43a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x41b: {
unico data[] = {0x43b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x41c: {
unico data[] = {0x43c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x41d: {
unico data[] = {0x43d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x41e: {
unico data[] = {0x43e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x41f: {
unico data[] = {0x43f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x420: {
unico data[] = {0x440};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x421: {
unico data[] = {0x441};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x422: {
unico data[] = {0x442};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x423: {
unico data[] = {0x443};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x424: {
unico data[] = {0x444};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x425: {
unico data[] = {0x445};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x426: {
unico data[] = {0x446};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x427: {
unico data[] = {0x447};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x428: {
unico data[] = {0x448};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x429: {
unico data[] = {0x449};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42a: {
unico data[] = {0x44a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42b: {
unico data[] = {0x44b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42c: {
unico data[] = {0x44c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42d: {
unico data[] = {0x44d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42e: {
unico data[] = {0x44e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x42f: {
unico data[] = {0x44f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x460: {
unico data[] = {0x461};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x462: {
unico data[] = {0x463};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x464: {
unico data[] = {0x465};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x466: {
unico data[] = {0x467};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x468: {
unico data[] = {0x469};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46a: {
unico data[] = {0x46b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46c: {
unico data[] = {0x46d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46e: {
unico data[] = {0x46f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x470: {
unico data[] = {0x471};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x472: {
unico data[] = {0x473};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x474: {
unico data[] = {0x475};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x476: {
unico data[] = {0x477};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x478: {
unico data[] = {0x479};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47a: {
unico data[] = {0x47b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47c: {
unico data[] = {0x47d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47e: {
unico data[] = {0x47f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x480: {
unico data[] = {0x481};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48a: {
unico data[] = {0x48b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48c: {
unico data[] = {0x48d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48e: {
unico data[] = {0x48f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x490: {
unico data[] = {0x491};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x492: {
unico data[] = {0x493};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x494: {
unico data[] = {0x495};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x496: {
unico data[] = {0x497};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x498: {
unico data[] = {0x499};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49a: {
unico data[] = {0x49b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49c: {
unico data[] = {0x49d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49e: {
unico data[] = {0x49f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a0: {
unico data[] = {0x4a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a2: {
unico data[] = {0x4a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a4: {
unico data[] = {0x4a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a6: {
unico data[] = {0x4a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a8: {
unico data[] = {0x4a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4aa: {
unico data[] = {0x4ab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ac: {
unico data[] = {0x4ad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ae: {
unico data[] = {0x4af};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b0: {
unico data[] = {0x4b1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b2: {
unico data[] = {0x4b3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b4: {
unico data[] = {0x4b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b6: {
unico data[] = {0x4b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b8: {
unico data[] = {0x4b9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ba: {
unico data[] = {0x4bb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4bc: {
unico data[] = {0x4bd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4be: {
unico data[] = {0x4bf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c0: {
unico data[] = {0x4cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c1: {
unico data[] = {0x4c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c3: {
unico data[] = {0x4c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c5: {
unico data[] = {0x4c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c7: {
unico data[] = {0x4c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c9: {
unico data[] = {0x4ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4cb: {
unico data[] = {0x4cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4cd: {
unico data[] = {0x4ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d0: {
unico data[] = {0x4d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d2: {
unico data[] = {0x4d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d4: {
unico data[] = {0x4d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d6: {
unico data[] = {0x4d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d8: {
unico data[] = {0x4d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4da: {
unico data[] = {0x4db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4dc: {
unico data[] = {0x4dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4de: {
unico data[] = {0x4df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e0: {
unico data[] = {0x4e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e2: {
unico data[] = {0x4e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e4: {
unico data[] = {0x4e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e6: {
unico data[] = {0x4e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e8: {
unico data[] = {0x4e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ea: {
unico data[] = {0x4eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ec: {
unico data[] = {0x4ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ee: {
unico data[] = {0x4ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f0: {
unico data[] = {0x4f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f2: {
unico data[] = {0x4f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f4: {
unico data[] = {0x4f5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f6: {
unico data[] = {0x4f7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f8: {
unico data[] = {0x4f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4fa: {
unico data[] = {0x4fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4fc: {
unico data[] = {0x4fd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4fe: {
unico data[] = {0x4ff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x500: {
unico data[] = {0x501};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x502: {
unico data[] = {0x503};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x504: {
unico data[] = {0x505};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x506: {
unico data[] = {0x507};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x508: {
unico data[] = {0x509};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50a: {
unico data[] = {0x50b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50c: {
unico data[] = {0x50d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50e: {
unico data[] = {0x50f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x510: {
unico data[] = {0x511};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x512: {
unico data[] = {0x513};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x514: {
unico data[] = {0x515};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x516: {
unico data[] = {0x517};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x518: {
unico data[] = {0x519};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51a: {
unico data[] = {0x51b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51c: {
unico data[] = {0x51d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51e: {
unico data[] = {0x51f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x520: {
unico data[] = {0x521};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x522: {
unico data[] = {0x523};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x524: {
unico data[] = {0x525};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x526: {
unico data[] = {0x527};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x528: {
unico data[] = {0x529};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52a: {
unico data[] = {0x52b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52c: {
unico data[] = {0x52d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52e: {
unico data[] = {0x52f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x531: {
unico data[] = {0x561};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x532: {
unico data[] = {0x562};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x533: {
unico data[] = {0x563};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x534: {
unico data[] = {0x564};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x535: {
unico data[] = {0x565};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x536: {
unico data[] = {0x566};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x537: {
unico data[] = {0x567};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x538: {
unico data[] = {0x568};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x539: {
unico data[] = {0x569};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53a: {
unico data[] = {0x56a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53b: {
unico data[] = {0x56b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53c: {
unico data[] = {0x56c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53d: {
unico data[] = {0x56d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53e: {
unico data[] = {0x56e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x53f: {
unico data[] = {0x56f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x540: {
unico data[] = {0x570};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x541: {
unico data[] = {0x571};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x542: {
unico data[] = {0x572};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x543: {
unico data[] = {0x573};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x544: {
unico data[] = {0x574};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x545: {
unico data[] = {0x575};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x546: {
unico data[] = {0x576};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x547: {
unico data[] = {0x577};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x548: {
unico data[] = {0x578};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x549: {
unico data[] = {0x579};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54a: {
unico data[] = {0x57a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54b: {
unico data[] = {0x57b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54c: {
unico data[] = {0x57c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54d: {
unico data[] = {0x57d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54e: {
unico data[] = {0x57e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x54f: {
unico data[] = {0x57f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x550: {
unico data[] = {0x580};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x551: {
unico data[] = {0x581};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x552: {
unico data[] = {0x582};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x553: {
unico data[] = {0x583};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x554: {
unico data[] = {0x584};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x555: {
unico data[] = {0x585};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x556: {
unico data[] = {0x586};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a0: {
unico data[] = {0x2d00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a1: {
unico data[] = {0x2d01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a2: {
unico data[] = {0x2d02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a3: {
unico data[] = {0x2d03};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a4: {
unico data[] = {0x2d04};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a5: {
unico data[] = {0x2d05};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a6: {
unico data[] = {0x2d06};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a7: {
unico data[] = {0x2d07};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a8: {
unico data[] = {0x2d08};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10a9: {
unico data[] = {0x2d09};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10aa: {
unico data[] = {0x2d0a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ab: {
unico data[] = {0x2d0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ac: {
unico data[] = {0x2d0c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ad: {
unico data[] = {0x2d0d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ae: {
unico data[] = {0x2d0e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10af: {
unico data[] = {0x2d0f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b0: {
unico data[] = {0x2d10};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b1: {
unico data[] = {0x2d11};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b2: {
unico data[] = {0x2d12};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b3: {
unico data[] = {0x2d13};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b4: {
unico data[] = {0x2d14};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b5: {
unico data[] = {0x2d15};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b6: {
unico data[] = {0x2d16};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b7: {
unico data[] = {0x2d17};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b8: {
unico data[] = {0x2d18};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b9: {
unico data[] = {0x2d19};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ba: {
unico data[] = {0x2d1a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10bb: {
unico data[] = {0x2d1b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10bc: {
unico data[] = {0x2d1c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10bd: {
unico data[] = {0x2d1d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10be: {
unico data[] = {0x2d1e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10bf: {
unico data[] = {0x2d1f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c0: {
unico data[] = {0x2d20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c1: {
unico data[] = {0x2d21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c2: {
unico data[] = {0x2d22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c3: {
unico data[] = {0x2d23};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c4: {
unico data[] = {0x2d24};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c5: {
unico data[] = {0x2d25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c7: {
unico data[] = {0x2d27};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd: {
unico data[] = {0x2d2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a0: {
unico data[] = {0xab70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a1: {
unico data[] = {0xab71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a2: {
unico data[] = {0xab72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a3: {
unico data[] = {0xab73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a4: {
unico data[] = {0xab74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a5: {
unico data[] = {0xab75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a6: {
unico data[] = {0xab76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a7: {
unico data[] = {0xab77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a8: {
unico data[] = {0xab78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a9: {
unico data[] = {0xab79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13aa: {
unico data[] = {0xab7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ab: {
unico data[] = {0xab7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ac: {
unico data[] = {0xab7c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ad: {
unico data[] = {0xab7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ae: {
unico data[] = {0xab7e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13af: {
unico data[] = {0xab7f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b0: {
unico data[] = {0xab80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b1: {
unico data[] = {0xab81};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b2: {
unico data[] = {0xab82};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b3: {
unico data[] = {0xab83};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b4: {
unico data[] = {0xab84};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b5: {
unico data[] = {0xab85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b6: {
unico data[] = {0xab86};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b7: {
unico data[] = {0xab87};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b8: {
unico data[] = {0xab88};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13b9: {
unico data[] = {0xab89};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ba: {
unico data[] = {0xab8a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13bb: {
unico data[] = {0xab8b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13bc: {
unico data[] = {0xab8c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13bd: {
unico data[] = {0xab8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13be: {
unico data[] = {0xab8e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13bf: {
unico data[] = {0xab8f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c0: {
unico data[] = {0xab90};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c1: {
unico data[] = {0xab91};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c2: {
unico data[] = {0xab92};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c3: {
unico data[] = {0xab93};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c4: {
unico data[] = {0xab94};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c5: {
unico data[] = {0xab95};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c6: {
unico data[] = {0xab96};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c7: {
unico data[] = {0xab97};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c8: {
unico data[] = {0xab98};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c9: {
unico data[] = {0xab99};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ca: {
unico data[] = {0xab9a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13cb: {
unico data[] = {0xab9b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13cc: {
unico data[] = {0xab9c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13cd: {
unico data[] = {0xab9d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ce: {
unico data[] = {0xab9e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13cf: {
unico data[] = {0xab9f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d0: {
unico data[] = {0xaba0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d1: {
unico data[] = {0xaba1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d2: {
unico data[] = {0xaba2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d3: {
unico data[] = {0xaba3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d4: {
unico data[] = {0xaba4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d5: {
unico data[] = {0xaba5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d6: {
unico data[] = {0xaba6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d7: {
unico data[] = {0xaba7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d8: {
unico data[] = {0xaba8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13d9: {
unico data[] = {0xaba9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13da: {
unico data[] = {0xabaa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13db: {
unico data[] = {0xabab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13dc: {
unico data[] = {0xabac};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13dd: {
unico data[] = {0xabad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13de: {
unico data[] = {0xabae};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13df: {
unico data[] = {0xabaf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e0: {
unico data[] = {0xabb0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e1: {
unico data[] = {0xabb1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e2: {
unico data[] = {0xabb2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e3: {
unico data[] = {0xabb3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e4: {
unico data[] = {0xabb4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e5: {
unico data[] = {0xabb5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e6: {
unico data[] = {0xabb6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e7: {
unico data[] = {0xabb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e8: {
unico data[] = {0xabb8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e9: {
unico data[] = {0xabb9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ea: {
unico data[] = {0xabba};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13eb: {
unico data[] = {0xabbb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ec: {
unico data[] = {0xabbc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ed: {
unico data[] = {0xabbd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ee: {
unico data[] = {0xabbe};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13ef: {
unico data[] = {0xabbf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f0: {
unico data[] = {0x13f8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f1: {
unico data[] = {0x13f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f2: {
unico data[] = {0x13fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f3: {
unico data[] = {0x13fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f4: {
unico data[] = {0x13fc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f5: {
unico data[] = {0x13fd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e00: {
unico data[] = {0x1e01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e02: {
unico data[] = {0x1e03};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e04: {
unico data[] = {0x1e05};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e06: {
unico data[] = {0x1e07};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e08: {
unico data[] = {0x1e09};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0a: {
unico data[] = {0x1e0b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0c: {
unico data[] = {0x1e0d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0e: {
unico data[] = {0x1e0f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e10: {
unico data[] = {0x1e11};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e12: {
unico data[] = {0x1e13};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e14: {
unico data[] = {0x1e15};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e16: {
unico data[] = {0x1e17};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e18: {
unico data[] = {0x1e19};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1a: {
unico data[] = {0x1e1b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1c: {
unico data[] = {0x1e1d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1e: {
unico data[] = {0x1e1f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e20: {
unico data[] = {0x1e21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e22: {
unico data[] = {0x1e23};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e24: {
unico data[] = {0x1e25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e26: {
unico data[] = {0x1e27};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e28: {
unico data[] = {0x1e29};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2a: {
unico data[] = {0x1e2b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2c: {
unico data[] = {0x1e2d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2e: {
unico data[] = {0x1e2f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e30: {
unico data[] = {0x1e31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e32: {
unico data[] = {0x1e33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e34: {
unico data[] = {0x1e35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e36: {
unico data[] = {0x1e37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e38: {
unico data[] = {0x1e39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3a: {
unico data[] = {0x1e3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3c: {
unico data[] = {0x1e3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3e: {
unico data[] = {0x1e3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e40: {
unico data[] = {0x1e41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e42: {
unico data[] = {0x1e43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e44: {
unico data[] = {0x1e45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e46: {
unico data[] = {0x1e47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e48: {
unico data[] = {0x1e49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4a: {
unico data[] = {0x1e4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4c: {
unico data[] = {0x1e4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4e: {
unico data[] = {0x1e4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e50: {
unico data[] = {0x1e51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e52: {
unico data[] = {0x1e53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e54: {
unico data[] = {0x1e55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e56: {
unico data[] = {0x1e57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e58: {
unico data[] = {0x1e59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5a: {
unico data[] = {0x1e5b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5c: {
unico data[] = {0x1e5d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5e: {
unico data[] = {0x1e5f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e60: {
unico data[] = {0x1e61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e62: {
unico data[] = {0x1e63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e64: {
unico data[] = {0x1e65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e66: {
unico data[] = {0x1e67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e68: {
unico data[] = {0x1e69};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6a: {
unico data[] = {0x1e6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6c: {
unico data[] = {0x1e6d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6e: {
unico data[] = {0x1e6f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e70: {
unico data[] = {0x1e71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e72: {
unico data[] = {0x1e73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e74: {
unico data[] = {0x1e75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e76: {
unico data[] = {0x1e77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e78: {
unico data[] = {0x1e79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7a: {
unico data[] = {0x1e7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7c: {
unico data[] = {0x1e7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7e: {
unico data[] = {0x1e7f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e80: {
unico data[] = {0x1e81};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e82: {
unico data[] = {0x1e83};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e84: {
unico data[] = {0x1e85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e86: {
unico data[] = {0x1e87};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e88: {
unico data[] = {0x1e89};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8a: {
unico data[] = {0x1e8b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8c: {
unico data[] = {0x1e8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8e: {
unico data[] = {0x1e8f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90: {
unico data[] = {0x1e91};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92: {
unico data[] = {0x1e93};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e94: {
unico data[] = {0x1e95};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e9e: {
unico data[] = {0xdf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea0: {
unico data[] = {0x1ea1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea2: {
unico data[] = {0x1ea3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea4: {
unico data[] = {0x1ea5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea6: {
unico data[] = {0x1ea7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea8: {
unico data[] = {0x1ea9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eaa: {
unico data[] = {0x1eab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eac: {
unico data[] = {0x1ead};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eae: {
unico data[] = {0x1eaf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb0: {
unico data[] = {0x1eb1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb2: {
unico data[] = {0x1eb3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb4: {
unico data[] = {0x1eb5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb6: {
unico data[] = {0x1eb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb8: {
unico data[] = {0x1eb9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eba: {
unico data[] = {0x1ebb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ebc: {
unico data[] = {0x1ebd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ebe: {
unico data[] = {0x1ebf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec0: {
unico data[] = {0x1ec1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec2: {
unico data[] = {0x1ec3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec4: {
unico data[] = {0x1ec5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec6: {
unico data[] = {0x1ec7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec8: {
unico data[] = {0x1ec9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eca: {
unico data[] = {0x1ecb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ecc: {
unico data[] = {0x1ecd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ece: {
unico data[] = {0x1ecf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed0: {
unico data[] = {0x1ed1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed2: {
unico data[] = {0x1ed3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed4: {
unico data[] = {0x1ed5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed6: {
unico data[] = {0x1ed7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed8: {
unico data[] = {0x1ed9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eda: {
unico data[] = {0x1edb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1edc: {
unico data[] = {0x1edd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ede: {
unico data[] = {0x1edf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee0: {
unico data[] = {0x1ee1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee2: {
unico data[] = {0x1ee3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee4: {
unico data[] = {0x1ee5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee6: {
unico data[] = {0x1ee7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee8: {
unico data[] = {0x1ee9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eea: {
unico data[] = {0x1eeb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eec: {
unico data[] = {0x1eed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eee: {
unico data[] = {0x1eef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef0: {
unico data[] = {0x1ef1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef2: {
unico data[] = {0x1ef3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef4: {
unico data[] = {0x1ef5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef6: {
unico data[] = {0x1ef7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef8: {
unico data[] = {0x1ef9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1efa: {
unico data[] = {0x1efb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1efc: {
unico data[] = {0x1efd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1efe: {
unico data[] = {0x1eff};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f08: {
unico data[] = {0x1f00};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f09: {
unico data[] = {0x1f01};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0a: {
unico data[] = {0x1f02};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0b: {
unico data[] = {0x1f03};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0c: {
unico data[] = {0x1f04};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0d: {
unico data[] = {0x1f05};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0e: {
unico data[] = {0x1f06};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0f: {
unico data[] = {0x1f07};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f18: {
unico data[] = {0x1f10};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f19: {
unico data[] = {0x1f11};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1a: {
unico data[] = {0x1f12};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1b: {
unico data[] = {0x1f13};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1c: {
unico data[] = {0x1f14};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1d: {
unico data[] = {0x1f15};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f28: {
unico data[] = {0x1f20};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f29: {
unico data[] = {0x1f21};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2a: {
unico data[] = {0x1f22};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2b: {
unico data[] = {0x1f23};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2c: {
unico data[] = {0x1f24};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2d: {
unico data[] = {0x1f25};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2e: {
unico data[] = {0x1f26};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f2f: {
unico data[] = {0x1f27};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f38: {
unico data[] = {0x1f30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f39: {
unico data[] = {0x1f31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3a: {
unico data[] = {0x1f32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3b: {
unico data[] = {0x1f33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3c: {
unico data[] = {0x1f34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3d: {
unico data[] = {0x1f35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3e: {
unico data[] = {0x1f36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3f: {
unico data[] = {0x1f37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f48: {
unico data[] = {0x1f40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f49: {
unico data[] = {0x1f41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f4a: {
unico data[] = {0x1f42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f4b: {
unico data[] = {0x1f43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f4c: {
unico data[] = {0x1f44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f4d: {
unico data[] = {0x1f45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f59: {
unico data[] = {0x1f51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f5b: {
unico data[] = {0x1f53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f5d: {
unico data[] = {0x1f55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f5f: {
unico data[] = {0x1f57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f68: {
unico data[] = {0x1f60};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f69: {
unico data[] = {0x1f61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6a: {
unico data[] = {0x1f62};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6b: {
unico data[] = {0x1f63};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6c: {
unico data[] = {0x1f64};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6d: {
unico data[] = {0x1f65};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6e: {
unico data[] = {0x1f66};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f6f: {
unico data[] = {0x1f67};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f88: {
unico data[] = {0x1f80};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f89: {
unico data[] = {0x1f81};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8a: {
unico data[] = {0x1f82};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8b: {
unico data[] = {0x1f83};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8c: {
unico data[] = {0x1f84};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8d: {
unico data[] = {0x1f85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8e: {
unico data[] = {0x1f86};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f8f: {
unico data[] = {0x1f87};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f98: {
unico data[] = {0x1f90};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f99: {
unico data[] = {0x1f91};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9a: {
unico data[] = {0x1f92};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9b: {
unico data[] = {0x1f93};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9c: {
unico data[] = {0x1f94};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9d: {
unico data[] = {0x1f95};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9e: {
unico data[] = {0x1f96};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9f: {
unico data[] = {0x1f97};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa8: {
unico data[] = {0x1fa0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa9: {
unico data[] = {0x1fa1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1faa: {
unico data[] = {0x1fa2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fab: {
unico data[] = {0x1fa3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fac: {
unico data[] = {0x1fa4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fad: {
unico data[] = {0x1fa5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fae: {
unico data[] = {0x1fa6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1faf: {
unico data[] = {0x1fa7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb8: {
unico data[] = {0x1fb0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb9: {
unico data[] = {0x1fb1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fba: {
unico data[] = {0x1f70};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbb: {
unico data[] = {0x1f71};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbc: {
unico data[] = {0x1fb3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc8: {
unico data[] = {0x1f72};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc9: {
unico data[] = {0x1f73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fca: {
unico data[] = {0x1f74};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fcb: {
unico data[] = {0x1f75};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fcc: {
unico data[] = {0x1fc3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd8: {
unico data[] = {0x1fd0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd9: {
unico data[] = {0x1fd1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fda: {
unico data[] = {0x1f76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fdb: {
unico data[] = {0x1f77};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe8: {
unico data[] = {0x1fe0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe9: {
unico data[] = {0x1fe1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fea: {
unico data[] = {0x1f7a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1feb: {
unico data[] = {0x1f7b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fec: {
unico data[] = {0x1fe5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff8: {
unico data[] = {0x1f78};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff9: {
unico data[] = {0x1f79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffa: {
unico data[] = {0x1f7c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffb: {
unico data[] = {0x1f7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ffc: {
unico data[] = {0x1ff3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2126: {
unico data[] = {0x3c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212a: {
unico data[] = {0x6b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x212b: {
unico data[] = {0xe5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2132: {
unico data[] = {0x214e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2160: {
unico data[] = {0x2170};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2161: {
unico data[] = {0x2171};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2162: {
unico data[] = {0x2172};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2163: {
unico data[] = {0x2173};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2164: {
unico data[] = {0x2174};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2165: {
unico data[] = {0x2175};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2166: {
unico data[] = {0x2176};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2167: {
unico data[] = {0x2177};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2168: {
unico data[] = {0x2178};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2169: {
unico data[] = {0x2179};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216a: {
unico data[] = {0x217a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216b: {
unico data[] = {0x217b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216c: {
unico data[] = {0x217c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216d: {
unico data[] = {0x217d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216e: {
unico data[] = {0x217e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x216f: {
unico data[] = {0x217f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2183: {
unico data[] = {0x2184};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b6: {
unico data[] = {0x24d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b7: {
unico data[] = {0x24d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b8: {
unico data[] = {0x24d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b9: {
unico data[] = {0x24d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ba: {
unico data[] = {0x24d4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bb: {
unico data[] = {0x24d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bc: {
unico data[] = {0x24d6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bd: {
unico data[] = {0x24d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24be: {
unico data[] = {0x24d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24bf: {
unico data[] = {0x24d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c0: {
unico data[] = {0x24da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c1: {
unico data[] = {0x24db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c2: {
unico data[] = {0x24dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c3: {
unico data[] = {0x24dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c4: {
unico data[] = {0x24de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c5: {
unico data[] = {0x24df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c6: {
unico data[] = {0x24e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c7: {
unico data[] = {0x24e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c8: {
unico data[] = {0x24e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24c9: {
unico data[] = {0x24e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ca: {
unico data[] = {0x24e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cb: {
unico data[] = {0x24e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cc: {
unico data[] = {0x24e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cd: {
unico data[] = {0x24e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24ce: {
unico data[] = {0x24e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24cf: {
unico data[] = {0x24e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c00: {
unico data[] = {0x2c30};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c01: {
unico data[] = {0x2c31};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c02: {
unico data[] = {0x2c32};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c03: {
unico data[] = {0x2c33};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c04: {
unico data[] = {0x2c34};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c05: {
unico data[] = {0x2c35};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c06: {
unico data[] = {0x2c36};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c07: {
unico data[] = {0x2c37};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c08: {
unico data[] = {0x2c38};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c09: {
unico data[] = {0x2c39};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c0a: {
unico data[] = {0x2c3a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c0b: {
unico data[] = {0x2c3b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c0c: {
unico data[] = {0x2c3c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c0d: {
unico data[] = {0x2c3d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c0e: {
unico data[] = {0x2c3e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c0f: {
unico data[] = {0x2c3f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c10: {
unico data[] = {0x2c40};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c11: {
unico data[] = {0x2c41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c12: {
unico data[] = {0x2c42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c13: {
unico data[] = {0x2c43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c14: {
unico data[] = {0x2c44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c15: {
unico data[] = {0x2c45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c16: {
unico data[] = {0x2c46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c17: {
unico data[] = {0x2c47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c18: {
unico data[] = {0x2c48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c19: {
unico data[] = {0x2c49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c1a: {
unico data[] = {0x2c4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c1b: {
unico data[] = {0x2c4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c1c: {
unico data[] = {0x2c4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c1d: {
unico data[] = {0x2c4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c1e: {
unico data[] = {0x2c4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c1f: {
unico data[] = {0x2c4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c20: {
unico data[] = {0x2c50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c21: {
unico data[] = {0x2c51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c22: {
unico data[] = {0x2c52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c23: {
unico data[] = {0x2c53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c24: {
unico data[] = {0x2c54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c25: {
unico data[] = {0x2c55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c26: {
unico data[] = {0x2c56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c27: {
unico data[] = {0x2c57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c28: {
unico data[] = {0x2c58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c29: {
unico data[] = {0x2c59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c2a: {
unico data[] = {0x2c5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c2b: {
unico data[] = {0x2c5b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c2c: {
unico data[] = {0x2c5c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c2d: {
unico data[] = {0x2c5d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c2e: {
unico data[] = {0x2c5e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c60: {
unico data[] = {0x2c61};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c62: {
unico data[] = {0x26b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c63: {
unico data[] = {0x1d7d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c64: {
unico data[] = {0x27d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c67: {
unico data[] = {0x2c68};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c69: {
unico data[] = {0x2c6a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c6b: {
unico data[] = {0x2c6c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c6d: {
unico data[] = {0x251};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c6e: {
unico data[] = {0x271};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c6f: {
unico data[] = {0x250};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c70: {
unico data[] = {0x252};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c72: {
unico data[] = {0x2c73};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c75: {
unico data[] = {0x2c76};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c7e: {
unico data[] = {0x23f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c7f: {
unico data[] = {0x240};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c80: {
unico data[] = {0x2c81};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c82: {
unico data[] = {0x2c83};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c84: {
unico data[] = {0x2c85};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c86: {
unico data[] = {0x2c87};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c88: {
unico data[] = {0x2c89};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c8a: {
unico data[] = {0x2c8b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c8c: {
unico data[] = {0x2c8d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c8e: {
unico data[] = {0x2c8f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c90: {
unico data[] = {0x2c91};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c92: {
unico data[] = {0x2c93};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c94: {
unico data[] = {0x2c95};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c96: {
unico data[] = {0x2c97};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c98: {
unico data[] = {0x2c99};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c9a: {
unico data[] = {0x2c9b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c9c: {
unico data[] = {0x2c9d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c9e: {
unico data[] = {0x2c9f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca0: {
unico data[] = {0x2ca1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca2: {
unico data[] = {0x2ca3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca4: {
unico data[] = {0x2ca5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca6: {
unico data[] = {0x2ca7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca8: {
unico data[] = {0x2ca9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2caa: {
unico data[] = {0x2cab};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cac: {
unico data[] = {0x2cad};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cae: {
unico data[] = {0x2caf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb0: {
unico data[] = {0x2cb1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb2: {
unico data[] = {0x2cb3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb4: {
unico data[] = {0x2cb5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb6: {
unico data[] = {0x2cb7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb8: {
unico data[] = {0x2cb9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cba: {
unico data[] = {0x2cbb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cbc: {
unico data[] = {0x2cbd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cbe: {
unico data[] = {0x2cbf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc0: {
unico data[] = {0x2cc1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc2: {
unico data[] = {0x2cc3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc4: {
unico data[] = {0x2cc5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc6: {
unico data[] = {0x2cc7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc8: {
unico data[] = {0x2cc9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cca: {
unico data[] = {0x2ccb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ccc: {
unico data[] = {0x2ccd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cce: {
unico data[] = {0x2ccf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd0: {
unico data[] = {0x2cd1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd2: {
unico data[] = {0x2cd3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd4: {
unico data[] = {0x2cd5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd6: {
unico data[] = {0x2cd7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd8: {
unico data[] = {0x2cd9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cda: {
unico data[] = {0x2cdb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cdc: {
unico data[] = {0x2cdd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cde: {
unico data[] = {0x2cdf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ce0: {
unico data[] = {0x2ce1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ce2: {
unico data[] = {0x2ce3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ceb: {
unico data[] = {0x2cec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ced: {
unico data[] = {0x2cee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cf2: {
unico data[] = {0x2cf3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa640: {
unico data[] = {0xa641};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa642: {
unico data[] = {0xa643};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa644: {
unico data[] = {0xa645};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa646: {
unico data[] = {0xa647};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa648: {
unico data[] = {0xa649};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa64a: {
unico data[] = {0xa64b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa64c: {
unico data[] = {0xa64d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa64e: {
unico data[] = {0xa64f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa650: {
unico data[] = {0xa651};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa652: {
unico data[] = {0xa653};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa654: {
unico data[] = {0xa655};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa656: {
unico data[] = {0xa657};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa658: {
unico data[] = {0xa659};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa65a: {
unico data[] = {0xa65b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa65c: {
unico data[] = {0xa65d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa65e: {
unico data[] = {0xa65f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa660: {
unico data[] = {0xa661};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa662: {
unico data[] = {0xa663};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa664: {
unico data[] = {0xa665};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa666: {
unico data[] = {0xa667};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa668: {
unico data[] = {0xa669};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa66a: {
unico data[] = {0xa66b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa66c: {
unico data[] = {0xa66d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa680: {
unico data[] = {0xa681};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa682: {
unico data[] = {0xa683};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa684: {
unico data[] = {0xa685};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa686: {
unico data[] = {0xa687};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa688: {
unico data[] = {0xa689};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa68a: {
unico data[] = {0xa68b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa68c: {
unico data[] = {0xa68d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa68e: {
unico data[] = {0xa68f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa690: {
unico data[] = {0xa691};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa692: {
unico data[] = {0xa693};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa694: {
unico data[] = {0xa695};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa696: {
unico data[] = {0xa697};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa698: {
unico data[] = {0xa699};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa69a: {
unico data[] = {0xa69b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa722: {
unico data[] = {0xa723};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa724: {
unico data[] = {0xa725};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa726: {
unico data[] = {0xa727};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa728: {
unico data[] = {0xa729};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa72a: {
unico data[] = {0xa72b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa72c: {
unico data[] = {0xa72d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa72e: {
unico data[] = {0xa72f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa732: {
unico data[] = {0xa733};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa734: {
unico data[] = {0xa735};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa736: {
unico data[] = {0xa737};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa738: {
unico data[] = {0xa739};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa73a: {
unico data[] = {0xa73b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa73c: {
unico data[] = {0xa73d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa73e: {
unico data[] = {0xa73f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa740: {
unico data[] = {0xa741};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa742: {
unico data[] = {0xa743};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa744: {
unico data[] = {0xa745};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa746: {
unico data[] = {0xa747};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa748: {
unico data[] = {0xa749};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa74a: {
unico data[] = {0xa74b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa74c: {
unico data[] = {0xa74d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa74e: {
unico data[] = {0xa74f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa750: {
unico data[] = {0xa751};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa752: {
unico data[] = {0xa753};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa754: {
unico data[] = {0xa755};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa756: {
unico data[] = {0xa757};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa758: {
unico data[] = {0xa759};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa75a: {
unico data[] = {0xa75b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa75c: {
unico data[] = {0xa75d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa75e: {
unico data[] = {0xa75f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa760: {
unico data[] = {0xa761};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa762: {
unico data[] = {0xa763};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa764: {
unico data[] = {0xa765};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa766: {
unico data[] = {0xa767};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa768: {
unico data[] = {0xa769};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa76a: {
unico data[] = {0xa76b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa76c: {
unico data[] = {0xa76d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa76e: {
unico data[] = {0xa76f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa779: {
unico data[] = {0xa77a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa77b: {
unico data[] = {0xa77c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa77d: {
unico data[] = {0x1d79};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa77e: {
unico data[] = {0xa77f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa780: {
unico data[] = {0xa781};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa782: {
unico data[] = {0xa783};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa784: {
unico data[] = {0xa785};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa786: {
unico data[] = {0xa787};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa78b: {
unico data[] = {0xa78c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa78d: {
unico data[] = {0x265};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa790: {
unico data[] = {0xa791};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa792: {
unico data[] = {0xa793};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa796: {
unico data[] = {0xa797};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa798: {
unico data[] = {0xa799};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa79a: {
unico data[] = {0xa79b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa79c: {
unico data[] = {0xa79d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa79e: {
unico data[] = {0xa79f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a0: {
unico data[] = {0xa7a1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a2: {
unico data[] = {0xa7a3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a4: {
unico data[] = {0xa7a5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a6: {
unico data[] = {0xa7a7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a8: {
unico data[] = {0xa7a9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7aa: {
unico data[] = {0x266};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7ab: {
unico data[] = {0x25c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7ac: {
unico data[] = {0x261};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7ad: {
unico data[] = {0x26c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7ae: {
unico data[] = {0x26a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b0: {
unico data[] = {0x29e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b1: {
unico data[] = {0x287};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b2: {
unico data[] = {0x29d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b3: {
unico data[] = {0xab53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b4: {
unico data[] = {0xa7b5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b6: {
unico data[] = {0xa7b7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff21: {
unico data[] = {0xff41};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff22: {
unico data[] = {0xff42};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff23: {
unico data[] = {0xff43};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff24: {
unico data[] = {0xff44};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff25: {
unico data[] = {0xff45};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff26: {
unico data[] = {0xff46};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff27: {
unico data[] = {0xff47};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff28: {
unico data[] = {0xff48};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff29: {
unico data[] = {0xff49};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2a: {
unico data[] = {0xff4a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2b: {
unico data[] = {0xff4b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2c: {
unico data[] = {0xff4c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2d: {
unico data[] = {0xff4d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2e: {
unico data[] = {0xff4e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff2f: {
unico data[] = {0xff4f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff30: {
unico data[] = {0xff50};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff31: {
unico data[] = {0xff51};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff32: {
unico data[] = {0xff52};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff33: {
unico data[] = {0xff53};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff34: {
unico data[] = {0xff54};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff35: {
unico data[] = {0xff55};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff36: {
unico data[] = {0xff56};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff37: {
unico data[] = {0xff57};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff38: {
unico data[] = {0xff58};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff39: {
unico data[] = {0xff59};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff3a: {
unico data[] = {0xff5a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10400: {
unico data[] = {0x10428};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10401: {
unico data[] = {0x10429};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10402: {
unico data[] = {0x1042a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10403: {
unico data[] = {0x1042b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10404: {
unico data[] = {0x1042c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10405: {
unico data[] = {0x1042d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10406: {
unico data[] = {0x1042e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10407: {
unico data[] = {0x1042f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10408: {
unico data[] = {0x10430};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10409: {
unico data[] = {0x10431};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1040a: {
unico data[] = {0x10432};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1040b: {
unico data[] = {0x10433};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1040c: {
unico data[] = {0x10434};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1040d: {
unico data[] = {0x10435};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1040e: {
unico data[] = {0x10436};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1040f: {
unico data[] = {0x10437};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10410: {
unico data[] = {0x10438};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10411: {
unico data[] = {0x10439};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10412: {
unico data[] = {0x1043a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10413: {
unico data[] = {0x1043b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10414: {
unico data[] = {0x1043c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10415: {
unico data[] = {0x1043d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10416: {
unico data[] = {0x1043e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10417: {
unico data[] = {0x1043f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10418: {
unico data[] = {0x10440};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10419: {
unico data[] = {0x10441};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1041a: {
unico data[] = {0x10442};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1041b: {
unico data[] = {0x10443};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1041c: {
unico data[] = {0x10444};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1041d: {
unico data[] = {0x10445};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1041e: {
unico data[] = {0x10446};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1041f: {
unico data[] = {0x10447};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10420: {
unico data[] = {0x10448};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10421: {
unico data[] = {0x10449};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10422: {
unico data[] = {0x1044a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10423: {
unico data[] = {0x1044b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10424: {
unico data[] = {0x1044c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10425: {
unico data[] = {0x1044d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10426: {
unico data[] = {0x1044e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10427: {
unico data[] = {0x1044f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b0: {
unico data[] = {0x104d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b1: {
unico data[] = {0x104d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b2: {
unico data[] = {0x104da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b3: {
unico data[] = {0x104db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b4: {
unico data[] = {0x104dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b5: {
unico data[] = {0x104dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b6: {
unico data[] = {0x104de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b7: {
unico data[] = {0x104df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b8: {
unico data[] = {0x104e0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104b9: {
unico data[] = {0x104e1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ba: {
unico data[] = {0x104e2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104bb: {
unico data[] = {0x104e3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104bc: {
unico data[] = {0x104e4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104bd: {
unico data[] = {0x104e5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104be: {
unico data[] = {0x104e6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104bf: {
unico data[] = {0x104e7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c0: {
unico data[] = {0x104e8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c1: {
unico data[] = {0x104e9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c2: {
unico data[] = {0x104ea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c3: {
unico data[] = {0x104eb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c4: {
unico data[] = {0x104ec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c5: {
unico data[] = {0x104ed};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c6: {
unico data[] = {0x104ee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c7: {
unico data[] = {0x104ef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c8: {
unico data[] = {0x104f0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104c9: {
unico data[] = {0x104f1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ca: {
unico data[] = {0x104f2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104cb: {
unico data[] = {0x104f3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104cc: {
unico data[] = {0x104f4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104cd: {
unico data[] = {0x104f5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ce: {
unico data[] = {0x104f6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104cf: {
unico data[] = {0x104f7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104d0: {
unico data[] = {0x104f8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104d1: {
unico data[] = {0x104f9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104d2: {
unico data[] = {0x104fa};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104d3: {
unico data[] = {0x104fb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c80: {
unico data[] = {0x10cc0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c81: {
unico data[] = {0x10cc1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c82: {
unico data[] = {0x10cc2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c83: {
unico data[] = {0x10cc3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c84: {
unico data[] = {0x10cc4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c85: {
unico data[] = {0x10cc5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c86: {
unico data[] = {0x10cc6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c87: {
unico data[] = {0x10cc7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c88: {
unico data[] = {0x10cc8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c89: {
unico data[] = {0x10cc9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c8a: {
unico data[] = {0x10cca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c8b: {
unico data[] = {0x10ccb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c8c: {
unico data[] = {0x10ccc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c8d: {
unico data[] = {0x10ccd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c8e: {
unico data[] = {0x10cce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c8f: {
unico data[] = {0x10ccf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c90: {
unico data[] = {0x10cd0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c91: {
unico data[] = {0x10cd1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c92: {
unico data[] = {0x10cd2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c93: {
unico data[] = {0x10cd3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c94: {
unico data[] = {0x10cd4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c95: {
unico data[] = {0x10cd5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c96: {
unico data[] = {0x10cd6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c97: {
unico data[] = {0x10cd7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c98: {
unico data[] = {0x10cd8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c99: {
unico data[] = {0x10cd9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c9a: {
unico data[] = {0x10cda};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c9b: {
unico data[] = {0x10cdb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c9c: {
unico data[] = {0x10cdc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c9d: {
unico data[] = {0x10cdd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c9e: {
unico data[] = {0x10cde};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10c9f: {
unico data[] = {0x10cdf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca0: {
unico data[] = {0x10ce0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca1: {
unico data[] = {0x10ce1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca2: {
unico data[] = {0x10ce2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca3: {
unico data[] = {0x10ce3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca4: {
unico data[] = {0x10ce4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca5: {
unico data[] = {0x10ce5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca6: {
unico data[] = {0x10ce6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca7: {
unico data[] = {0x10ce7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca8: {
unico data[] = {0x10ce8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ca9: {
unico data[] = {0x10ce9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10caa: {
unico data[] = {0x10cea};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cab: {
unico data[] = {0x10ceb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cac: {
unico data[] = {0x10cec};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cad: {
unico data[] = {0x10ced};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cae: {
unico data[] = {0x10cee};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10caf: {
unico data[] = {0x10cef};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cb0: {
unico data[] = {0x10cf0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cb1: {
unico data[] = {0x10cf1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cb2: {
unico data[] = {0x10cf2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a0: {
unico data[] = {0x118c0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a1: {
unico data[] = {0x118c1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a2: {
unico data[] = {0x118c2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a3: {
unico data[] = {0x118c3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a4: {
unico data[] = {0x118c4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a5: {
unico data[] = {0x118c5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a6: {
unico data[] = {0x118c6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a7: {
unico data[] = {0x118c7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a8: {
unico data[] = {0x118c8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118a9: {
unico data[] = {0x118c9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118aa: {
unico data[] = {0x118ca};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ab: {
unico data[] = {0x118cb};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ac: {
unico data[] = {0x118cc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ad: {
unico data[] = {0x118cd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ae: {
unico data[] = {0x118ce};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118af: {
unico data[] = {0x118cf};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b0: {
unico data[] = {0x118d0};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b1: {
unico data[] = {0x118d1};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b2: {
unico data[] = {0x118d2};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b3: {
unico data[] = {0x118d3};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b4: {
unico data[] = {0x118d4};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b5: {
unico data[] = {0x118d5};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b6: {
unico data[] = {0x118d6};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b7: {
unico data[] = {0x118d7};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b8: {
unico data[] = {0x118d8};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118b9: {
unico data[] = {0x118d9};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ba: {
unico data[] = {0x118da};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118bb: {
unico data[] = {0x118db};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118bc: {
unico data[] = {0x118dc};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118bd: {
unico data[] = {0x118dd};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118be: {
unico data[] = {0x118de};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118bf: {
unico data[] = {0x118df};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e900: {
unico data[] = {0x1e922};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e901: {
unico data[] = {0x1e923};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e902: {
unico data[] = {0x1e924};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e903: {
unico data[] = {0x1e925};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e904: {
unico data[] = {0x1e926};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e905: {
unico data[] = {0x1e927};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e906: {
unico data[] = {0x1e928};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e907: {
unico data[] = {0x1e929};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e908: {
unico data[] = {0x1e92a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e909: {
unico data[] = {0x1e92b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90a: {
unico data[] = {0x1e92c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90b: {
unico data[] = {0x1e92d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90c: {
unico data[] = {0x1e92e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90d: {
unico data[] = {0x1e92f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90e: {
unico data[] = {0x1e930};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e90f: {
unico data[] = {0x1e931};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e910: {
unico data[] = {0x1e932};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e911: {
unico data[] = {0x1e933};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e912: {
unico data[] = {0x1e934};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e913: {
unico data[] = {0x1e935};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e914: {
unico data[] = {0x1e936};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e915: {
unico data[] = {0x1e937};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e916: {
unico data[] = {0x1e938};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e917: {
unico data[] = {0x1e939};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e918: {
unico data[] = {0x1e93a};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e919: {
unico data[] = {0x1e93b};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91a: {
unico data[] = {0x1e93c};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91b: {
unico data[] = {0x1e93d};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91c: {
unico data[] = {0x1e93e};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91d: {
unico data[] = {0x1e93f};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91e: {
unico data[] = {0x1e940};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91f: {
unico data[] = {0x1e941};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e920: {
unico data[] = {0x1e942};
*indexout = index + 1;
return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e921: {
unico data[] = {0x1e943};
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
