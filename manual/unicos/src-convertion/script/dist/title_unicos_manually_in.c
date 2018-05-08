#include <unico.h>
#include <stddef.h>

int title_unicos_manually_in (size_t index, size_t end, unicos *uniout, size_t *indexout){
if (0 <= end - index){
switch (get_unicos(index +0, uniout)){
case 0x61: {
unico data[] = {0x41};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x62: {
unico data[] = {0x42};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x63: {
unico data[] = {0x43};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x64: {
unico data[] = {0x44};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x65: {
unico data[] = {0x45};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x66: {
unico data[] = {0x46};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x67: {
unico data[] = {0x47};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x68: {
unico data[] = {0x48};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x69: {
unico data[] = {0x49};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x6a: {
unico data[] = {0x4a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x6b: {
unico data[] = {0x4b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x6c: {
unico data[] = {0x4c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x6d: {
unico data[] = {0x4d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x6e: {
unico data[] = {0x4e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x6f: {
unico data[] = {0x4f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x70: {
unico data[] = {0x50};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x71: {
unico data[] = {0x51};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x72: {
unico data[] = {0x52};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x73: {
unico data[] = {0x53};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x74: {
unico data[] = {0x54};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x75: {
unico data[] = {0x55};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x76: {
unico data[] = {0x56};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x77: {
unico data[] = {0x57};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x78: {
unico data[] = {0x58};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x79: {
unico data[] = {0x59};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x7a: {
unico data[] = {0x5a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xb5: {
unico data[] = {0x39c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xdf: {
unico data[] = {0x53, 0x73};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe0: {
unico data[] = {0xc0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe1: {
unico data[] = {0xc1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe2: {
unico data[] = {0xc2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe3: {
unico data[] = {0xc3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe4: {
unico data[] = {0xc4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe5: {
unico data[] = {0xc5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe6: {
unico data[] = {0xc6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe7: {
unico data[] = {0xc7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe8: {
unico data[] = {0xc8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xe9: {
unico data[] = {0xc9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xea: {
unico data[] = {0xca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xeb: {
unico data[] = {0xcb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xec: {
unico data[] = {0xcc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xed: {
unico data[] = {0xcd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xee: {
unico data[] = {0xce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xef: {
unico data[] = {0xcf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf0: {
unico data[] = {0xd0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf1: {
unico data[] = {0xd1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf2: {
unico data[] = {0xd2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf3: {
unico data[] = {0xd3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf4: {
unico data[] = {0xd4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf5: {
unico data[] = {0xd5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf6: {
unico data[] = {0xd6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf8: {
unico data[] = {0xd8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xf9: {
unico data[] = {0xd9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfa: {
unico data[] = {0xda};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb: {
unico data[] = {0xdb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfc: {
unico data[] = {0xdc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfd: {
unico data[] = {0xdd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfe: {
unico data[] = {0xde};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff: {
unico data[] = {0x178};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x101: {
unico data[] = {0x100};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x103: {
unico data[] = {0x102};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x105: {
unico data[] = {0x104};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x107: {
unico data[] = {0x106};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x109: {
unico data[] = {0x108};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10b: {
unico data[] = {0x10a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10d: {
unico data[] = {0x10c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10f: {
unico data[] = {0x10e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x111: {
unico data[] = {0x110};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x113: {
unico data[] = {0x112};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x115: {
unico data[] = {0x114};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x117: {
unico data[] = {0x116};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x119: {
unico data[] = {0x118};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x11b: {
unico data[] = {0x11a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x11d: {
unico data[] = {0x11c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x11f: {
unico data[] = {0x11e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x121: {
unico data[] = {0x120};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x123: {
unico data[] = {0x122};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x125: {
unico data[] = {0x124};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x127: {
unico data[] = {0x126};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x129: {
unico data[] = {0x128};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x12b: {
unico data[] = {0x12a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x12d: {
unico data[] = {0x12c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x12f: {
unico data[] = {0x12e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x131: {
unico data[] = {0x49};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x133: {
unico data[] = {0x132};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x135: {
unico data[] = {0x134};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x137: {
unico data[] = {0x136};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13a: {
unico data[] = {0x139};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13c: {
unico data[] = {0x13b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13e: {
unico data[] = {0x13d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x140: {
unico data[] = {0x13f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x142: {
unico data[] = {0x141};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x144: {
unico data[] = {0x143};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x146: {
unico data[] = {0x145};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x148: {
unico data[] = {0x147};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x149: {
unico data[] = {0x2bc, 0x4e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x14b: {
unico data[] = {0x14a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x14d: {
unico data[] = {0x14c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x14f: {
unico data[] = {0x14e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x151: {
unico data[] = {0x150};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x153: {
unico data[] = {0x152};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x155: {
unico data[] = {0x154};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x157: {
unico data[] = {0x156};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x159: {
unico data[] = {0x158};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x15b: {
unico data[] = {0x15a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x15d: {
unico data[] = {0x15c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x15f: {
unico data[] = {0x15e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x161: {
unico data[] = {0x160};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x163: {
unico data[] = {0x162};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x165: {
unico data[] = {0x164};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x167: {
unico data[] = {0x166};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x169: {
unico data[] = {0x168};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x16b: {
unico data[] = {0x16a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x16d: {
unico data[] = {0x16c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x16f: {
unico data[] = {0x16e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x171: {
unico data[] = {0x170};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x173: {
unico data[] = {0x172};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x175: {
unico data[] = {0x174};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x177: {
unico data[] = {0x176};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17a: {
unico data[] = {0x179};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17c: {
unico data[] = {0x17b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17e: {
unico data[] = {0x17d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x17f: {
unico data[] = {0x53};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x180: {
unico data[] = {0x243};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x183: {
unico data[] = {0x182};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x185: {
unico data[] = {0x184};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x188: {
unico data[] = {0x187};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x18c: {
unico data[] = {0x18b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x192: {
unico data[] = {0x191};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x195: {
unico data[] = {0x1f6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x199: {
unico data[] = {0x198};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x19a: {
unico data[] = {0x23d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x19e: {
unico data[] = {0x220};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a1: {
unico data[] = {0x1a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a3: {
unico data[] = {0x1a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a5: {
unico data[] = {0x1a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1a8: {
unico data[] = {0x1a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ad: {
unico data[] = {0x1ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b0: {
unico data[] = {0x1af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b4: {
unico data[] = {0x1b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b6: {
unico data[] = {0x1b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1b9: {
unico data[] = {0x1b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1bd: {
unico data[] = {0x1bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1bf: {
unico data[] = {0x1f7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c4: {
unico data[] = {0x1c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c6: {
unico data[] = {0x1c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c7: {
unico data[] = {0x1c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c9: {
unico data[] = {0x1c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ca: {
unico data[] = {0x1cb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1cc: {
unico data[] = {0x1cb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ce: {
unico data[] = {0x1cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d0: {
unico data[] = {0x1cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d2: {
unico data[] = {0x1d1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d4: {
unico data[] = {0x1d3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d6: {
unico data[] = {0x1d5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d8: {
unico data[] = {0x1d7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1da: {
unico data[] = {0x1d9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dc: {
unico data[] = {0x1db};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1dd: {
unico data[] = {0x18e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1df: {
unico data[] = {0x1de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1: {
unico data[] = {0x1e0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3: {
unico data[] = {0x1e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5: {
unico data[] = {0x1e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7: {
unico data[] = {0x1e6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e9: {
unico data[] = {0x1e8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb: {
unico data[] = {0x1ea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed: {
unico data[] = {0x1ec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef: {
unico data[] = {0x1ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f0: {
unico data[] = {0x4a, 0x30c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f1: {
unico data[] = {0x1f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f3: {
unico data[] = {0x1f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f5: {
unico data[] = {0x1f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f9: {
unico data[] = {0x1f8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb: {
unico data[] = {0x1fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd: {
unico data[] = {0x1fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff: {
unico data[] = {0x1fe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x201: {
unico data[] = {0x200};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x203: {
unico data[] = {0x202};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x205: {
unico data[] = {0x204};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x207: {
unico data[] = {0x206};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x209: {
unico data[] = {0x208};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20b: {
unico data[] = {0x20a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20d: {
unico data[] = {0x20c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x20f: {
unico data[] = {0x20e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x211: {
unico data[] = {0x210};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x213: {
unico data[] = {0x212};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x215: {
unico data[] = {0x214};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217: {
unico data[] = {0x216};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x219: {
unico data[] = {0x218};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x21b: {
unico data[] = {0x21a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x21d: {
unico data[] = {0x21c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x21f: {
unico data[] = {0x21e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x223: {
unico data[] = {0x222};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x225: {
unico data[] = {0x224};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x227: {
unico data[] = {0x226};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x229: {
unico data[] = {0x228};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x22b: {
unico data[] = {0x22a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x22d: {
unico data[] = {0x22c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x22f: {
unico data[] = {0x22e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x231: {
unico data[] = {0x230};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x233: {
unico data[] = {0x232};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x23c: {
unico data[] = {0x23b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x23f: {
unico data[] = {0x2c7e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x240: {
unico data[] = {0x2c7f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x242: {
unico data[] = {0x241};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x247: {
unico data[] = {0x246};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x249: {
unico data[] = {0x248};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24b: {
unico data[] = {0x24a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d: {
unico data[] = {0x24c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24f: {
unico data[] = {0x24e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x250: {
unico data[] = {0x2c6f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x251: {
unico data[] = {0x2c6d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x252: {
unico data[] = {0x2c70};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x253: {
unico data[] = {0x181};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x254: {
unico data[] = {0x186};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x256: {
unico data[] = {0x189};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x257: {
unico data[] = {0x18a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x259: {
unico data[] = {0x18f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x25b: {
unico data[] = {0x190};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x25c: {
unico data[] = {0xa7ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x260: {
unico data[] = {0x193};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x261: {
unico data[] = {0xa7ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x263: {
unico data[] = {0x194};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x265: {
unico data[] = {0xa78d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x266: {
unico data[] = {0xa7aa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x268: {
unico data[] = {0x197};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x269: {
unico data[] = {0x196};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x26a: {
unico data[] = {0xa7ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x26b: {
unico data[] = {0x2c62};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x26c: {
unico data[] = {0xa7ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x26f: {
unico data[] = {0x19c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x271: {
unico data[] = {0x2c6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x272: {
unico data[] = {0x19d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x275: {
unico data[] = {0x19f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x27d: {
unico data[] = {0x2c64};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x280: {
unico data[] = {0x1a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x283: {
unico data[] = {0x1a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x287: {
unico data[] = {0xa7b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x288: {
unico data[] = {0x1ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x289: {
unico data[] = {0x244};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x28a: {
unico data[] = {0x1b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x28b: {
unico data[] = {0x1b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x28c: {
unico data[] = {0x245};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x292: {
unico data[] = {0x1b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x29d: {
unico data[] = {0xa7b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x29e: {
unico data[] = {0xa7b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x345: {
unico data[] = {0x399};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x371: {
unico data[] = {0x370};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x373: {
unico data[] = {0x372};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x377: {
unico data[] = {0x376};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37b: {
unico data[] = {0x3fd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37c: {
unico data[] = {0x3fe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x37d: {
unico data[] = {0x3ff};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x390: {
unico data[] = {0x399, 0x308, 0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ac: {
unico data[] = {0x386};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ad: {
unico data[] = {0x388};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ae: {
unico data[] = {0x389};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3af: {
unico data[] = {0x38a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b0: {
unico data[] = {0x3a5, 0x308, 0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b1: {
unico data[] = {0x391};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b2: {
unico data[] = {0x392};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b3: {
unico data[] = {0x393};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b4: {
unico data[] = {0x394};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b5: {
unico data[] = {0x395};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b6: {
unico data[] = {0x396};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b7: {
unico data[] = {0x397};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b8: {
unico data[] = {0x398};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3b9: {
unico data[] = {0x399};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ba: {
unico data[] = {0x39a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3bb: {
unico data[] = {0x39b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3bc: {
unico data[] = {0x39c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3bd: {
unico data[] = {0x39d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3be: {
unico data[] = {0x39e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3bf: {
unico data[] = {0x39f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c0: {
unico data[] = {0x3a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c1: {
unico data[] = {0x3a1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c2: {
unico data[] = {0x3a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c3: {
unico data[] = {0x3a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c4: {
unico data[] = {0x3a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c5: {
unico data[] = {0x3a5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c6: {
unico data[] = {0x3a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c7: {
unico data[] = {0x3a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c8: {
unico data[] = {0x3a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3c9: {
unico data[] = {0x3a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ca: {
unico data[] = {0x3aa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3cb: {
unico data[] = {0x3ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3cc: {
unico data[] = {0x38c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3cd: {
unico data[] = {0x38e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ce: {
unico data[] = {0x38f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d0: {
unico data[] = {0x392};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d1: {
unico data[] = {0x398};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d5: {
unico data[] = {0x3a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d6: {
unico data[] = {0x3a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d7: {
unico data[] = {0x3cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3d9: {
unico data[] = {0x3d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3db: {
unico data[] = {0x3da};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3dd: {
unico data[] = {0x3dc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3df: {
unico data[] = {0x3de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e1: {
unico data[] = {0x3e0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e3: {
unico data[] = {0x3e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e5: {
unico data[] = {0x3e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e7: {
unico data[] = {0x3e6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3e9: {
unico data[] = {0x3e8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3eb: {
unico data[] = {0x3ea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ed: {
unico data[] = {0x3ec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3ef: {
unico data[] = {0x3ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f0: {
unico data[] = {0x39a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f1: {
unico data[] = {0x3a1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f2: {
unico data[] = {0x3f9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f3: {
unico data[] = {0x37f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f5: {
unico data[] = {0x395};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3f8: {
unico data[] = {0x3f7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x3fb: {
unico data[] = {0x3fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x430: {
unico data[] = {0x410};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x431: {
unico data[] = {0x411};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x432: {
unico data[] = {0x412};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x433: {
unico data[] = {0x413};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x434: {
unico data[] = {0x414};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x435: {
unico data[] = {0x415};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x436: {
unico data[] = {0x416};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x437: {
unico data[] = {0x417};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x438: {
unico data[] = {0x418};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x439: {
unico data[] = {0x419};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43a: {
unico data[] = {0x41a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43b: {
unico data[] = {0x41b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43c: {
unico data[] = {0x41c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43d: {
unico data[] = {0x41d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43e: {
unico data[] = {0x41e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x43f: {
unico data[] = {0x41f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x440: {
unico data[] = {0x420};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x441: {
unico data[] = {0x421};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x442: {
unico data[] = {0x422};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x443: {
unico data[] = {0x423};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x444: {
unico data[] = {0x424};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x445: {
unico data[] = {0x425};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x446: {
unico data[] = {0x426};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x447: {
unico data[] = {0x427};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x448: {
unico data[] = {0x428};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x449: {
unico data[] = {0x429};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44a: {
unico data[] = {0x42a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44b: {
unico data[] = {0x42b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44c: {
unico data[] = {0x42c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44d: {
unico data[] = {0x42d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44e: {
unico data[] = {0x42e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x44f: {
unico data[] = {0x42f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x450: {
unico data[] = {0x400};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x451: {
unico data[] = {0x401};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x452: {
unico data[] = {0x402};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x453: {
unico data[] = {0x403};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x454: {
unico data[] = {0x404};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x455: {
unico data[] = {0x405};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x456: {
unico data[] = {0x406};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x457: {
unico data[] = {0x407};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x458: {
unico data[] = {0x408};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x459: {
unico data[] = {0x409};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45a: {
unico data[] = {0x40a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45b: {
unico data[] = {0x40b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45c: {
unico data[] = {0x40c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45d: {
unico data[] = {0x40d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45e: {
unico data[] = {0x40e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x45f: {
unico data[] = {0x40f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x461: {
unico data[] = {0x460};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x463: {
unico data[] = {0x462};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x465: {
unico data[] = {0x464};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x467: {
unico data[] = {0x466};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x469: {
unico data[] = {0x468};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46b: {
unico data[] = {0x46a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46d: {
unico data[] = {0x46c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x46f: {
unico data[] = {0x46e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x471: {
unico data[] = {0x470};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x473: {
unico data[] = {0x472};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x475: {
unico data[] = {0x474};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x477: {
unico data[] = {0x476};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x479: {
unico data[] = {0x478};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47b: {
unico data[] = {0x47a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47d: {
unico data[] = {0x47c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x47f: {
unico data[] = {0x47e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x481: {
unico data[] = {0x480};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48b: {
unico data[] = {0x48a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48d: {
unico data[] = {0x48c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x48f: {
unico data[] = {0x48e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x491: {
unico data[] = {0x490};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x493: {
unico data[] = {0x492};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x495: {
unico data[] = {0x494};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x497: {
unico data[] = {0x496};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x499: {
unico data[] = {0x498};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49b: {
unico data[] = {0x49a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49d: {
unico data[] = {0x49c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x49f: {
unico data[] = {0x49e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a1: {
unico data[] = {0x4a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a3: {
unico data[] = {0x4a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a5: {
unico data[] = {0x4a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a7: {
unico data[] = {0x4a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4a9: {
unico data[] = {0x4a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ab: {
unico data[] = {0x4aa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ad: {
unico data[] = {0x4ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4af: {
unico data[] = {0x4ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b1: {
unico data[] = {0x4b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b3: {
unico data[] = {0x4b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b5: {
unico data[] = {0x4b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b7: {
unico data[] = {0x4b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4b9: {
unico data[] = {0x4b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4bb: {
unico data[] = {0x4ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4bd: {
unico data[] = {0x4bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4bf: {
unico data[] = {0x4be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c2: {
unico data[] = {0x4c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c4: {
unico data[] = {0x4c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c6: {
unico data[] = {0x4c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4c8: {
unico data[] = {0x4c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ca: {
unico data[] = {0x4c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4cc: {
unico data[] = {0x4cb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ce: {
unico data[] = {0x4cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4cf: {
unico data[] = {0x4c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d1: {
unico data[] = {0x4d0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d3: {
unico data[] = {0x4d2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d5: {
unico data[] = {0x4d4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d7: {
unico data[] = {0x4d6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4d9: {
unico data[] = {0x4d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4db: {
unico data[] = {0x4da};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4dd: {
unico data[] = {0x4dc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4df: {
unico data[] = {0x4de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e1: {
unico data[] = {0x4e0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e3: {
unico data[] = {0x4e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e5: {
unico data[] = {0x4e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e7: {
unico data[] = {0x4e6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4e9: {
unico data[] = {0x4e8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4eb: {
unico data[] = {0x4ea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ed: {
unico data[] = {0x4ec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ef: {
unico data[] = {0x4ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f1: {
unico data[] = {0x4f0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f3: {
unico data[] = {0x4f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f5: {
unico data[] = {0x4f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f7: {
unico data[] = {0x4f6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4f9: {
unico data[] = {0x4f8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4fb: {
unico data[] = {0x4fa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4fd: {
unico data[] = {0x4fc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x4ff: {
unico data[] = {0x4fe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x501: {
unico data[] = {0x500};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x503: {
unico data[] = {0x502};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x505: {
unico data[] = {0x504};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x507: {
unico data[] = {0x506};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x509: {
unico data[] = {0x508};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50b: {
unico data[] = {0x50a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50d: {
unico data[] = {0x50c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x50f: {
unico data[] = {0x50e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x511: {
unico data[] = {0x510};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x513: {
unico data[] = {0x512};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x515: {
unico data[] = {0x514};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x517: {
unico data[] = {0x516};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x519: {
unico data[] = {0x518};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51b: {
unico data[] = {0x51a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51d: {
unico data[] = {0x51c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x51f: {
unico data[] = {0x51e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x521: {
unico data[] = {0x520};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x523: {
unico data[] = {0x522};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x525: {
unico data[] = {0x524};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x527: {
unico data[] = {0x526};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x529: {
unico data[] = {0x528};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52b: {
unico data[] = {0x52a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52d: {
unico data[] = {0x52c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x52f: {
unico data[] = {0x52e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x561: {
unico data[] = {0x531};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x562: {
unico data[] = {0x532};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x563: {
unico data[] = {0x533};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x564: {
unico data[] = {0x534};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x565: {
unico data[] = {0x535};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x566: {
unico data[] = {0x536};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x567: {
unico data[] = {0x537};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x568: {
unico data[] = {0x538};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x569: {
unico data[] = {0x539};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56a: {
unico data[] = {0x53a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56b: {
unico data[] = {0x53b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56c: {
unico data[] = {0x53c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56d: {
unico data[] = {0x53d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56e: {
unico data[] = {0x53e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x56f: {
unico data[] = {0x53f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x570: {
unico data[] = {0x540};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x571: {
unico data[] = {0x541};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x572: {
unico data[] = {0x542};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x573: {
unico data[] = {0x543};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x574: {
unico data[] = {0x544};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x575: {
unico data[] = {0x545};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x576: {
unico data[] = {0x546};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x577: {
unico data[] = {0x547};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x578: {
unico data[] = {0x548};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x579: {
unico data[] = {0x549};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57a: {
unico data[] = {0x54a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57b: {
unico data[] = {0x54b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57c: {
unico data[] = {0x54c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57d: {
unico data[] = {0x54d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57e: {
unico data[] = {0x54e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x57f: {
unico data[] = {0x54f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x580: {
unico data[] = {0x550};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x581: {
unico data[] = {0x551};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x582: {
unico data[] = {0x552};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x583: {
unico data[] = {0x553};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x584: {
unico data[] = {0x554};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x585: {
unico data[] = {0x555};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x586: {
unico data[] = {0x556};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x587: {
unico data[] = {0x535, 0x582};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f8: {
unico data[] = {0x13f0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13f9: {
unico data[] = {0x13f1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13fa: {
unico data[] = {0x13f2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13fb: {
unico data[] = {0x13f3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13fc: {
unico data[] = {0x13f4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x13fd: {
unico data[] = {0x13f5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c80: {
unico data[] = {0x412};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c81: {
unico data[] = {0x414};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c82: {
unico data[] = {0x41e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c83: {
unico data[] = {0x421};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c84: {
unico data[] = {0x422};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c85: {
unico data[] = {0x422};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c86: {
unico data[] = {0x42a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c87: {
unico data[] = {0x462};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1c88: {
unico data[] = {0xa64a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d79: {
unico data[] = {0xa77d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1d7d: {
unico data[] = {0x2c63};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e01: {
unico data[] = {0x1e00};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e03: {
unico data[] = {0x1e02};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e05: {
unico data[] = {0x1e04};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e07: {
unico data[] = {0x1e06};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e09: {
unico data[] = {0x1e08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0b: {
unico data[] = {0x1e0a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0d: {
unico data[] = {0x1e0c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e0f: {
unico data[] = {0x1e0e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e11: {
unico data[] = {0x1e10};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e13: {
unico data[] = {0x1e12};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e15: {
unico data[] = {0x1e14};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e17: {
unico data[] = {0x1e16};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e19: {
unico data[] = {0x1e18};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1b: {
unico data[] = {0x1e1a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1d: {
unico data[] = {0x1e1c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e1f: {
unico data[] = {0x1e1e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e21: {
unico data[] = {0x1e20};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e23: {
unico data[] = {0x1e22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e25: {
unico data[] = {0x1e24};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e27: {
unico data[] = {0x1e26};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e29: {
unico data[] = {0x1e28};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2b: {
unico data[] = {0x1e2a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2d: {
unico data[] = {0x1e2c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e2f: {
unico data[] = {0x1e2e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e31: {
unico data[] = {0x1e30};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e33: {
unico data[] = {0x1e32};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e35: {
unico data[] = {0x1e34};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e37: {
unico data[] = {0x1e36};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e39: {
unico data[] = {0x1e38};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3b: {
unico data[] = {0x1e3a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3d: {
unico data[] = {0x1e3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e3f: {
unico data[] = {0x1e3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e41: {
unico data[] = {0x1e40};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e43: {
unico data[] = {0x1e42};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e45: {
unico data[] = {0x1e44};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e47: {
unico data[] = {0x1e46};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e49: {
unico data[] = {0x1e48};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4b: {
unico data[] = {0x1e4a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4d: {
unico data[] = {0x1e4c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e4f: {
unico data[] = {0x1e4e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e51: {
unico data[] = {0x1e50};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e53: {
unico data[] = {0x1e52};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e55: {
unico data[] = {0x1e54};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e57: {
unico data[] = {0x1e56};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e59: {
unico data[] = {0x1e58};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5b: {
unico data[] = {0x1e5a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5d: {
unico data[] = {0x1e5c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e5f: {
unico data[] = {0x1e5e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e61: {
unico data[] = {0x1e60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e63: {
unico data[] = {0x1e62};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e65: {
unico data[] = {0x1e64};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e67: {
unico data[] = {0x1e66};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e69: {
unico data[] = {0x1e68};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6b: {
unico data[] = {0x1e6a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6d: {
unico data[] = {0x1e6c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e6f: {
unico data[] = {0x1e6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e71: {
unico data[] = {0x1e70};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e73: {
unico data[] = {0x1e72};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e75: {
unico data[] = {0x1e74};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e77: {
unico data[] = {0x1e76};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e79: {
unico data[] = {0x1e78};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7b: {
unico data[] = {0x1e7a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7d: {
unico data[] = {0x1e7c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e7f: {
unico data[] = {0x1e7e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e81: {
unico data[] = {0x1e80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e83: {
unico data[] = {0x1e82};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e85: {
unico data[] = {0x1e84};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e87: {
unico data[] = {0x1e86};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e89: {
unico data[] = {0x1e88};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8b: {
unico data[] = {0x1e8a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8d: {
unico data[] = {0x1e8c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e8f: {
unico data[] = {0x1e8e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e91: {
unico data[] = {0x1e90};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93: {
unico data[] = {0x1e92};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e95: {
unico data[] = {0x1e94};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e96: {
unico data[] = {0x48, 0x331};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e97: {
unico data[] = {0x54, 0x308};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e98: {
unico data[] = {0x57, 0x30a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e99: {
unico data[] = {0x59, 0x30a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e9a: {
unico data[] = {0x41, 0x2be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e9b: {
unico data[] = {0x1e60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea1: {
unico data[] = {0x1ea0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea3: {
unico data[] = {0x1ea2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea5: {
unico data[] = {0x1ea4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea7: {
unico data[] = {0x1ea6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ea9: {
unico data[] = {0x1ea8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eab: {
unico data[] = {0x1eaa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ead: {
unico data[] = {0x1eac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eaf: {
unico data[] = {0x1eae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb1: {
unico data[] = {0x1eb0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb3: {
unico data[] = {0x1eb2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb5: {
unico data[] = {0x1eb4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb7: {
unico data[] = {0x1eb6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eb9: {
unico data[] = {0x1eb8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ebb: {
unico data[] = {0x1eba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ebd: {
unico data[] = {0x1ebc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ebf: {
unico data[] = {0x1ebe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec1: {
unico data[] = {0x1ec0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec3: {
unico data[] = {0x1ec2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec5: {
unico data[] = {0x1ec4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec7: {
unico data[] = {0x1ec6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ec9: {
unico data[] = {0x1ec8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ecb: {
unico data[] = {0x1eca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ecd: {
unico data[] = {0x1ecc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ecf: {
unico data[] = {0x1ece};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed1: {
unico data[] = {0x1ed0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed3: {
unico data[] = {0x1ed2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed5: {
unico data[] = {0x1ed4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed7: {
unico data[] = {0x1ed6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ed9: {
unico data[] = {0x1ed8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1edb: {
unico data[] = {0x1eda};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1edd: {
unico data[] = {0x1edc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1edf: {
unico data[] = {0x1ede};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee1: {
unico data[] = {0x1ee0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee3: {
unico data[] = {0x1ee2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee5: {
unico data[] = {0x1ee4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee7: {
unico data[] = {0x1ee6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ee9: {
unico data[] = {0x1ee8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eeb: {
unico data[] = {0x1eea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eed: {
unico data[] = {0x1eec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eef: {
unico data[] = {0x1eee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef1: {
unico data[] = {0x1ef0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef3: {
unico data[] = {0x1ef2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef5: {
unico data[] = {0x1ef4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef7: {
unico data[] = {0x1ef6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ef9: {
unico data[] = {0x1ef8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1efb: {
unico data[] = {0x1efa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1efd: {
unico data[] = {0x1efc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1eff: {
unico data[] = {0x1efe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f00: {
unico data[] = {0x1f08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f01: {
unico data[] = {0x1f09};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f02: {
unico data[] = {0x1f0a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f03: {
unico data[] = {0x1f0b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f04: {
unico data[] = {0x1f0c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f05: {
unico data[] = {0x1f0d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f06: {
unico data[] = {0x1f0e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f07: {
unico data[] = {0x1f0f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f10: {
unico data[] = {0x1f18};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f11: {
unico data[] = {0x1f19};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f12: {
unico data[] = {0x1f1a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f13: {
unico data[] = {0x1f1b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f14: {
unico data[] = {0x1f1c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f15: {
unico data[] = {0x1f1d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f20: {
unico data[] = {0x1f28};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f21: {
unico data[] = {0x1f29};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f22: {
unico data[] = {0x1f2a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f23: {
unico data[] = {0x1f2b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f24: {
unico data[] = {0x1f2c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f25: {
unico data[] = {0x1f2d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f26: {
unico data[] = {0x1f2e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f27: {
unico data[] = {0x1f2f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f30: {
unico data[] = {0x1f38};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f31: {
unico data[] = {0x1f39};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f32: {
unico data[] = {0x1f3a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f33: {
unico data[] = {0x1f3b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f34: {
unico data[] = {0x1f3c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f35: {
unico data[] = {0x1f3d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f36: {
unico data[] = {0x1f3e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f37: {
unico data[] = {0x1f3f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f40: {
unico data[] = {0x1f48};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f41: {
unico data[] = {0x1f49};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f42: {
unico data[] = {0x1f4a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f43: {
unico data[] = {0x1f4b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f44: {
unico data[] = {0x1f4c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f45: {
unico data[] = {0x1f4d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f50: {
unico data[] = {0x3a5, 0x313};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f51: {
unico data[] = {0x1f59};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f52: {
unico data[] = {0x3a5, 0x313, 0x300};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f53: {
unico data[] = {0x1f5b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f54: {
unico data[] = {0x3a5, 0x313, 0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f55: {
unico data[] = {0x1f5d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f56: {
unico data[] = {0x3a5, 0x313, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f57: {
unico data[] = {0x1f5f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f60: {
unico data[] = {0x1f68};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f61: {
unico data[] = {0x1f69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f62: {
unico data[] = {0x1f6a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f63: {
unico data[] = {0x1f6b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f64: {
unico data[] = {0x1f6c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f65: {
unico data[] = {0x1f6d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f66: {
unico data[] = {0x1f6e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f67: {
unico data[] = {0x1f6f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f70: {
unico data[] = {0x1fba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f71: {
unico data[] = {0x1fbb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f72: {
unico data[] = {0x1fc8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f73: {
unico data[] = {0x1fc9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f74: {
unico data[] = {0x1fca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f75: {
unico data[] = {0x1fcb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f76: {
unico data[] = {0x1fda};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f77: {
unico data[] = {0x1fdb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f78: {
unico data[] = {0x1ff8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f79: {
unico data[] = {0x1ff9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7a: {
unico data[] = {0x1fea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7b: {
unico data[] = {0x1feb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7c: {
unico data[] = {0x1ffa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f7d: {
unico data[] = {0x1ffb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f80: {
unico data[] = {0x1f88};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f81: {
unico data[] = {0x1f89};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f82: {
unico data[] = {0x1f8a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f83: {
unico data[] = {0x1f8b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f84: {
unico data[] = {0x1f8c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f85: {
unico data[] = {0x1f8d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f86: {
unico data[] = {0x1f8e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f87: {
unico data[] = {0x1f8f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f90: {
unico data[] = {0x1f98};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f91: {
unico data[] = {0x1f99};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f92: {
unico data[] = {0x1f9a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f93: {
unico data[] = {0x1f9b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f94: {
unico data[] = {0x1f9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f95: {
unico data[] = {0x1f9d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f96: {
unico data[] = {0x1f9e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1f97: {
unico data[] = {0x1f9f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa0: {
unico data[] = {0x1fa8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa1: {
unico data[] = {0x1fa9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa2: {
unico data[] = {0x1faa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa3: {
unico data[] = {0x1fab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa4: {
unico data[] = {0x1fac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa5: {
unico data[] = {0x1fad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa6: {
unico data[] = {0x1fae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fa7: {
unico data[] = {0x1faf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb0: {
unico data[] = {0x1fb8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb1: {
unico data[] = {0x1fb9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb2: {
unico data[] = {0x1fba, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb3: {
unico data[] = {0x1fbc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb4: {
unico data[] = {0x386, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb6: {
unico data[] = {0x391, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fb7: {
unico data[] = {0x391, 0x342, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fbe: {
unico data[] = {0x399};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc2: {
unico data[] = {0x1fca, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc3: {
unico data[] = {0x1fcc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc4: {
unico data[] = {0x389, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc6: {
unico data[] = {0x397, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fc7: {
unico data[] = {0x397, 0x342, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd0: {
unico data[] = {0x1fd8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd1: {
unico data[] = {0x1fd9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd2: {
unico data[] = {0x399, 0x308, 0x300};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd3: {
unico data[] = {0x399, 0x308, 0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd6: {
unico data[] = {0x399, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fd7: {
unico data[] = {0x399, 0x308, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe0: {
unico data[] = {0x1fe8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe1: {
unico data[] = {0x1fe9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe2: {
unico data[] = {0x3a5, 0x308, 0x300};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe3: {
unico data[] = {0x3a5, 0x308, 0x301};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe4: {
unico data[] = {0x3a1, 0x313};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe5: {
unico data[] = {0x1fec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe6: {
unico data[] = {0x3a5, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1fe7: {
unico data[] = {0x3a5, 0x308, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff2: {
unico data[] = {0x1ffa, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff3: {
unico data[] = {0x1ffc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff4: {
unico data[] = {0x38f, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff6: {
unico data[] = {0x3a9, 0x342};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1ff7: {
unico data[] = {0x3a9, 0x342, 0x345};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x214e: {
unico data[] = {0x2132};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2170: {
unico data[] = {0x2160};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2171: {
unico data[] = {0x2161};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2172: {
unico data[] = {0x2162};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2173: {
unico data[] = {0x2163};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2174: {
unico data[] = {0x2164};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2175: {
unico data[] = {0x2165};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2176: {
unico data[] = {0x2166};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2177: {
unico data[] = {0x2167};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2178: {
unico data[] = {0x2168};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2179: {
unico data[] = {0x2169};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217a: {
unico data[] = {0x216a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217b: {
unico data[] = {0x216b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217c: {
unico data[] = {0x216c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217d: {
unico data[] = {0x216d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217e: {
unico data[] = {0x216e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x217f: {
unico data[] = {0x216f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2184: {
unico data[] = {0x2183};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d0: {
unico data[] = {0x24b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d1: {
unico data[] = {0x24b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d2: {
unico data[] = {0x24b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d3: {
unico data[] = {0x24b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d4: {
unico data[] = {0x24ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d5: {
unico data[] = {0x24bb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d6: {
unico data[] = {0x24bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d7: {
unico data[] = {0x24bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d8: {
unico data[] = {0x24be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24d9: {
unico data[] = {0x24bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24da: {
unico data[] = {0x24c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24db: {
unico data[] = {0x24c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24dc: {
unico data[] = {0x24c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24dd: {
unico data[] = {0x24c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24de: {
unico data[] = {0x24c4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24df: {
unico data[] = {0x24c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e0: {
unico data[] = {0x24c6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e1: {
unico data[] = {0x24c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e2: {
unico data[] = {0x24c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e3: {
unico data[] = {0x24c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e4: {
unico data[] = {0x24ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e5: {
unico data[] = {0x24cb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e6: {
unico data[] = {0x24cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e7: {
unico data[] = {0x24cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e8: {
unico data[] = {0x24ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x24e9: {
unico data[] = {0x24cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c30: {
unico data[] = {0x2c00};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c31: {
unico data[] = {0x2c01};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c32: {
unico data[] = {0x2c02};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c33: {
unico data[] = {0x2c03};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c34: {
unico data[] = {0x2c04};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c35: {
unico data[] = {0x2c05};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c36: {
unico data[] = {0x2c06};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c37: {
unico data[] = {0x2c07};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c38: {
unico data[] = {0x2c08};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c39: {
unico data[] = {0x2c09};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c3a: {
unico data[] = {0x2c0a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c3b: {
unico data[] = {0x2c0b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c3c: {
unico data[] = {0x2c0c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c3d: {
unico data[] = {0x2c0d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c3e: {
unico data[] = {0x2c0e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c3f: {
unico data[] = {0x2c0f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c40: {
unico data[] = {0x2c10};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c41: {
unico data[] = {0x2c11};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c42: {
unico data[] = {0x2c12};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c43: {
unico data[] = {0x2c13};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c44: {
unico data[] = {0x2c14};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c45: {
unico data[] = {0x2c15};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c46: {
unico data[] = {0x2c16};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c47: {
unico data[] = {0x2c17};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c48: {
unico data[] = {0x2c18};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c49: {
unico data[] = {0x2c19};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c4a: {
unico data[] = {0x2c1a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c4b: {
unico data[] = {0x2c1b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c4c: {
unico data[] = {0x2c1c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c4d: {
unico data[] = {0x2c1d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c4e: {
unico data[] = {0x2c1e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c4f: {
unico data[] = {0x2c1f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c50: {
unico data[] = {0x2c20};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c51: {
unico data[] = {0x2c21};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c52: {
unico data[] = {0x2c22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c53: {
unico data[] = {0x2c23};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c54: {
unico data[] = {0x2c24};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c55: {
unico data[] = {0x2c25};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c56: {
unico data[] = {0x2c26};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c57: {
unico data[] = {0x2c27};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c58: {
unico data[] = {0x2c28};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c59: {
unico data[] = {0x2c29};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c5a: {
unico data[] = {0x2c2a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c5b: {
unico data[] = {0x2c2b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c5c: {
unico data[] = {0x2c2c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c5d: {
unico data[] = {0x2c2d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c5e: {
unico data[] = {0x2c2e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c61: {
unico data[] = {0x2c60};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c65: {
unico data[] = {0x23a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c66: {
unico data[] = {0x23e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c68: {
unico data[] = {0x2c67};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c6a: {
unico data[] = {0x2c69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c6c: {
unico data[] = {0x2c6b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c73: {
unico data[] = {0x2c72};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c76: {
unico data[] = {0x2c75};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c81: {
unico data[] = {0x2c80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c83: {
unico data[] = {0x2c82};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c85: {
unico data[] = {0x2c84};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c87: {
unico data[] = {0x2c86};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c89: {
unico data[] = {0x2c88};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c8b: {
unico data[] = {0x2c8a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c8d: {
unico data[] = {0x2c8c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c8f: {
unico data[] = {0x2c8e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c91: {
unico data[] = {0x2c90};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c93: {
unico data[] = {0x2c92};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c95: {
unico data[] = {0x2c94};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c97: {
unico data[] = {0x2c96};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c99: {
unico data[] = {0x2c98};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c9b: {
unico data[] = {0x2c9a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c9d: {
unico data[] = {0x2c9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2c9f: {
unico data[] = {0x2c9e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca1: {
unico data[] = {0x2ca0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca3: {
unico data[] = {0x2ca2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca5: {
unico data[] = {0x2ca4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca7: {
unico data[] = {0x2ca6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ca9: {
unico data[] = {0x2ca8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cab: {
unico data[] = {0x2caa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cad: {
unico data[] = {0x2cac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2caf: {
unico data[] = {0x2cae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb1: {
unico data[] = {0x2cb0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb3: {
unico data[] = {0x2cb2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb5: {
unico data[] = {0x2cb4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb7: {
unico data[] = {0x2cb6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cb9: {
unico data[] = {0x2cb8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cbb: {
unico data[] = {0x2cba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cbd: {
unico data[] = {0x2cbc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cbf: {
unico data[] = {0x2cbe};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc1: {
unico data[] = {0x2cc0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc3: {
unico data[] = {0x2cc2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc5: {
unico data[] = {0x2cc4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc7: {
unico data[] = {0x2cc6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cc9: {
unico data[] = {0x2cc8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ccb: {
unico data[] = {0x2cca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ccd: {
unico data[] = {0x2ccc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ccf: {
unico data[] = {0x2cce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd1: {
unico data[] = {0x2cd0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd3: {
unico data[] = {0x2cd2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd5: {
unico data[] = {0x2cd4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd7: {
unico data[] = {0x2cd6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cd9: {
unico data[] = {0x2cd8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cdb: {
unico data[] = {0x2cda};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cdd: {
unico data[] = {0x2cdc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cdf: {
unico data[] = {0x2cde};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ce1: {
unico data[] = {0x2ce0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2ce3: {
unico data[] = {0x2ce2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cec: {
unico data[] = {0x2ceb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cee: {
unico data[] = {0x2ced};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2cf3: {
unico data[] = {0x2cf2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d00: {
unico data[] = {0x10a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d01: {
unico data[] = {0x10a1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d02: {
unico data[] = {0x10a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d03: {
unico data[] = {0x10a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d04: {
unico data[] = {0x10a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d05: {
unico data[] = {0x10a5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d06: {
unico data[] = {0x10a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d07: {
unico data[] = {0x10a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d08: {
unico data[] = {0x10a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d09: {
unico data[] = {0x10a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d0a: {
unico data[] = {0x10aa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d0b: {
unico data[] = {0x10ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d0c: {
unico data[] = {0x10ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d0d: {
unico data[] = {0x10ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d0e: {
unico data[] = {0x10ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d0f: {
unico data[] = {0x10af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d10: {
unico data[] = {0x10b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d11: {
unico data[] = {0x10b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d12: {
unico data[] = {0x10b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d13: {
unico data[] = {0x10b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d14: {
unico data[] = {0x10b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d15: {
unico data[] = {0x10b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d16: {
unico data[] = {0x10b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d17: {
unico data[] = {0x10b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d18: {
unico data[] = {0x10b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d19: {
unico data[] = {0x10b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d1a: {
unico data[] = {0x10ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d1b: {
unico data[] = {0x10bb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d1c: {
unico data[] = {0x10bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d1d: {
unico data[] = {0x10bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d1e: {
unico data[] = {0x10be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d1f: {
unico data[] = {0x10bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d20: {
unico data[] = {0x10c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d21: {
unico data[] = {0x10c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d22: {
unico data[] = {0x10c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d23: {
unico data[] = {0x10c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d24: {
unico data[] = {0x10c4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d25: {
unico data[] = {0x10c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d27: {
unico data[] = {0x10c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x2d2d: {
unico data[] = {0x10cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa641: {
unico data[] = {0xa640};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa643: {
unico data[] = {0xa642};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa645: {
unico data[] = {0xa644};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa647: {
unico data[] = {0xa646};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa649: {
unico data[] = {0xa648};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa64b: {
unico data[] = {0xa64a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa64d: {
unico data[] = {0xa64c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa64f: {
unico data[] = {0xa64e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa651: {
unico data[] = {0xa650};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa653: {
unico data[] = {0xa652};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa655: {
unico data[] = {0xa654};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa657: {
unico data[] = {0xa656};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa659: {
unico data[] = {0xa658};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa65b: {
unico data[] = {0xa65a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa65d: {
unico data[] = {0xa65c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa65f: {
unico data[] = {0xa65e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa661: {
unico data[] = {0xa660};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa663: {
unico data[] = {0xa662};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa665: {
unico data[] = {0xa664};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa667: {
unico data[] = {0xa666};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa669: {
unico data[] = {0xa668};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa66b: {
unico data[] = {0xa66a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa66d: {
unico data[] = {0xa66c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa681: {
unico data[] = {0xa680};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa683: {
unico data[] = {0xa682};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa685: {
unico data[] = {0xa684};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa687: {
unico data[] = {0xa686};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa689: {
unico data[] = {0xa688};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa68b: {
unico data[] = {0xa68a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa68d: {
unico data[] = {0xa68c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa68f: {
unico data[] = {0xa68e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa691: {
unico data[] = {0xa690};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa693: {
unico data[] = {0xa692};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa695: {
unico data[] = {0xa694};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa697: {
unico data[] = {0xa696};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa699: {
unico data[] = {0xa698};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa69b: {
unico data[] = {0xa69a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa723: {
unico data[] = {0xa722};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa725: {
unico data[] = {0xa724};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa727: {
unico data[] = {0xa726};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa729: {
unico data[] = {0xa728};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa72b: {
unico data[] = {0xa72a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa72d: {
unico data[] = {0xa72c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa72f: {
unico data[] = {0xa72e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa733: {
unico data[] = {0xa732};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa735: {
unico data[] = {0xa734};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa737: {
unico data[] = {0xa736};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa739: {
unico data[] = {0xa738};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa73b: {
unico data[] = {0xa73a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa73d: {
unico data[] = {0xa73c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa73f: {
unico data[] = {0xa73e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa741: {
unico data[] = {0xa740};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa743: {
unico data[] = {0xa742};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa745: {
unico data[] = {0xa744};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa747: {
unico data[] = {0xa746};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa749: {
unico data[] = {0xa748};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa74b: {
unico data[] = {0xa74a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa74d: {
unico data[] = {0xa74c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa74f: {
unico data[] = {0xa74e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa751: {
unico data[] = {0xa750};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa753: {
unico data[] = {0xa752};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa755: {
unico data[] = {0xa754};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa757: {
unico data[] = {0xa756};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa759: {
unico data[] = {0xa758};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa75b: {
unico data[] = {0xa75a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa75d: {
unico data[] = {0xa75c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa75f: {
unico data[] = {0xa75e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa761: {
unico data[] = {0xa760};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa763: {
unico data[] = {0xa762};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa765: {
unico data[] = {0xa764};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa767: {
unico data[] = {0xa766};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa769: {
unico data[] = {0xa768};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa76b: {
unico data[] = {0xa76a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa76d: {
unico data[] = {0xa76c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa76f: {
unico data[] = {0xa76e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa77a: {
unico data[] = {0xa779};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa77c: {
unico data[] = {0xa77b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa77f: {
unico data[] = {0xa77e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa781: {
unico data[] = {0xa780};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa783: {
unico data[] = {0xa782};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa785: {
unico data[] = {0xa784};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa787: {
unico data[] = {0xa786};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa78c: {
unico data[] = {0xa78b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa791: {
unico data[] = {0xa790};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa793: {
unico data[] = {0xa792};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa797: {
unico data[] = {0xa796};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa799: {
unico data[] = {0xa798};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa79b: {
unico data[] = {0xa79a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa79d: {
unico data[] = {0xa79c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa79f: {
unico data[] = {0xa79e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a1: {
unico data[] = {0xa7a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a3: {
unico data[] = {0xa7a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a5: {
unico data[] = {0xa7a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a7: {
unico data[] = {0xa7a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7a9: {
unico data[] = {0xa7a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b5: {
unico data[] = {0xa7b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xa7b7: {
unico data[] = {0xa7b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab53: {
unico data[] = {0xa7b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab70: {
unico data[] = {0x13a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab71: {
unico data[] = {0x13a1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab72: {
unico data[] = {0x13a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab73: {
unico data[] = {0x13a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab74: {
unico data[] = {0x13a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab75: {
unico data[] = {0x13a5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab76: {
unico data[] = {0x13a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab77: {
unico data[] = {0x13a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab78: {
unico data[] = {0x13a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab79: {
unico data[] = {0x13a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab7a: {
unico data[] = {0x13aa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab7b: {
unico data[] = {0x13ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab7c: {
unico data[] = {0x13ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab7d: {
unico data[] = {0x13ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab7e: {
unico data[] = {0x13ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab7f: {
unico data[] = {0x13af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab80: {
unico data[] = {0x13b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab81: {
unico data[] = {0x13b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab82: {
unico data[] = {0x13b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab83: {
unico data[] = {0x13b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab84: {
unico data[] = {0x13b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab85: {
unico data[] = {0x13b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab86: {
unico data[] = {0x13b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab87: {
unico data[] = {0x13b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab88: {
unico data[] = {0x13b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab89: {
unico data[] = {0x13b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab8a: {
unico data[] = {0x13ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab8b: {
unico data[] = {0x13bb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab8c: {
unico data[] = {0x13bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab8d: {
unico data[] = {0x13bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab8e: {
unico data[] = {0x13be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab8f: {
unico data[] = {0x13bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab90: {
unico data[] = {0x13c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab91: {
unico data[] = {0x13c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab92: {
unico data[] = {0x13c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab93: {
unico data[] = {0x13c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab94: {
unico data[] = {0x13c4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab95: {
unico data[] = {0x13c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab96: {
unico data[] = {0x13c6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab97: {
unico data[] = {0x13c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab98: {
unico data[] = {0x13c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab99: {
unico data[] = {0x13c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab9a: {
unico data[] = {0x13ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab9b: {
unico data[] = {0x13cb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab9c: {
unico data[] = {0x13cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab9d: {
unico data[] = {0x13cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab9e: {
unico data[] = {0x13ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xab9f: {
unico data[] = {0x13cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba0: {
unico data[] = {0x13d0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba1: {
unico data[] = {0x13d1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba2: {
unico data[] = {0x13d2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba3: {
unico data[] = {0x13d3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba4: {
unico data[] = {0x13d4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba5: {
unico data[] = {0x13d5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba6: {
unico data[] = {0x13d6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba7: {
unico data[] = {0x13d7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba8: {
unico data[] = {0x13d8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xaba9: {
unico data[] = {0x13d9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabaa: {
unico data[] = {0x13da};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabab: {
unico data[] = {0x13db};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabac: {
unico data[] = {0x13dc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabad: {
unico data[] = {0x13dd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabae: {
unico data[] = {0x13de};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabaf: {
unico data[] = {0x13df};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb0: {
unico data[] = {0x13e0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb1: {
unico data[] = {0x13e1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb2: {
unico data[] = {0x13e2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb3: {
unico data[] = {0x13e3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb4: {
unico data[] = {0x13e4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb5: {
unico data[] = {0x13e5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb6: {
unico data[] = {0x13e6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb7: {
unico data[] = {0x13e7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb8: {
unico data[] = {0x13e8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabb9: {
unico data[] = {0x13e9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabba: {
unico data[] = {0x13ea};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabbb: {
unico data[] = {0x13eb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabbc: {
unico data[] = {0x13ec};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabbd: {
unico data[] = {0x13ed};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabbe: {
unico data[] = {0x13ee};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xabbf: {
unico data[] = {0x13ef};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb00: {
unico data[] = {0x46, 0x66};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb01: {
unico data[] = {0x46, 0x69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb02: {
unico data[] = {0x46, 0x6c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb03: {
unico data[] = {0x46, 0x66, 0x69};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb04: {
unico data[] = {0x46, 0x66, 0x6c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb05: {
unico data[] = {0x53, 0x74};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb06: {
unico data[] = {0x53, 0x74};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb13: {
unico data[] = {0x544, 0x576};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb14: {
unico data[] = {0x544, 0x565};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb15: {
unico data[] = {0x544, 0x56b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb16: {
unico data[] = {0x54e, 0x576};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xfb17: {
unico data[] = {0x544, 0x56d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff41: {
unico data[] = {0xff21};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff42: {
unico data[] = {0xff22};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff43: {
unico data[] = {0xff23};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff44: {
unico data[] = {0xff24};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff45: {
unico data[] = {0xff25};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff46: {
unico data[] = {0xff26};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff47: {
unico data[] = {0xff27};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff48: {
unico data[] = {0xff28};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff49: {
unico data[] = {0xff29};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4a: {
unico data[] = {0xff2a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4b: {
unico data[] = {0xff2b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4c: {
unico data[] = {0xff2c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4d: {
unico data[] = {0xff2d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4e: {
unico data[] = {0xff2e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff4f: {
unico data[] = {0xff2f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff50: {
unico data[] = {0xff30};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff51: {
unico data[] = {0xff31};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff52: {
unico data[] = {0xff32};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff53: {
unico data[] = {0xff33};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff54: {
unico data[] = {0xff34};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff55: {
unico data[] = {0xff35};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff56: {
unico data[] = {0xff36};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff57: {
unico data[] = {0xff37};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff58: {
unico data[] = {0xff38};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff59: {
unico data[] = {0xff39};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0xff5a: {
unico data[] = {0xff3a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10428: {
unico data[] = {0x10400};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10429: {
unico data[] = {0x10401};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1042a: {
unico data[] = {0x10402};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1042b: {
unico data[] = {0x10403};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1042c: {
unico data[] = {0x10404};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1042d: {
unico data[] = {0x10405};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1042e: {
unico data[] = {0x10406};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1042f: {
unico data[] = {0x10407};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10430: {
unico data[] = {0x10408};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10431: {
unico data[] = {0x10409};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10432: {
unico data[] = {0x1040a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10433: {
unico data[] = {0x1040b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10434: {
unico data[] = {0x1040c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10435: {
unico data[] = {0x1040d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10436: {
unico data[] = {0x1040e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10437: {
unico data[] = {0x1040f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10438: {
unico data[] = {0x10410};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10439: {
unico data[] = {0x10411};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1043a: {
unico data[] = {0x10412};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1043b: {
unico data[] = {0x10413};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1043c: {
unico data[] = {0x10414};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1043d: {
unico data[] = {0x10415};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1043e: {
unico data[] = {0x10416};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1043f: {
unico data[] = {0x10417};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10440: {
unico data[] = {0x10418};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10441: {
unico data[] = {0x10419};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10442: {
unico data[] = {0x1041a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10443: {
unico data[] = {0x1041b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10444: {
unico data[] = {0x1041c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10445: {
unico data[] = {0x1041d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10446: {
unico data[] = {0x1041e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10447: {
unico data[] = {0x1041f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10448: {
unico data[] = {0x10420};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10449: {
unico data[] = {0x10421};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1044a: {
unico data[] = {0x10422};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1044b: {
unico data[] = {0x10423};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1044c: {
unico data[] = {0x10424};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1044d: {
unico data[] = {0x10425};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1044e: {
unico data[] = {0x10426};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1044f: {
unico data[] = {0x10427};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104d8: {
unico data[] = {0x104b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104d9: {
unico data[] = {0x104b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104da: {
unico data[] = {0x104b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104db: {
unico data[] = {0x104b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104dc: {
unico data[] = {0x104b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104dd: {
unico data[] = {0x104b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104de: {
unico data[] = {0x104b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104df: {
unico data[] = {0x104b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e0: {
unico data[] = {0x104b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e1: {
unico data[] = {0x104b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e2: {
unico data[] = {0x104ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e3: {
unico data[] = {0x104bb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e4: {
unico data[] = {0x104bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e5: {
unico data[] = {0x104bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e6: {
unico data[] = {0x104be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e7: {
unico data[] = {0x104bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e8: {
unico data[] = {0x104c0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104e9: {
unico data[] = {0x104c1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ea: {
unico data[] = {0x104c2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104eb: {
unico data[] = {0x104c3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ec: {
unico data[] = {0x104c4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ed: {
unico data[] = {0x104c5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ee: {
unico data[] = {0x104c6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104ef: {
unico data[] = {0x104c7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f0: {
unico data[] = {0x104c8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f1: {
unico data[] = {0x104c9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f2: {
unico data[] = {0x104ca};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f3: {
unico data[] = {0x104cb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f4: {
unico data[] = {0x104cc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f5: {
unico data[] = {0x104cd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f6: {
unico data[] = {0x104ce};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f7: {
unico data[] = {0x104cf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f8: {
unico data[] = {0x104d0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104f9: {
unico data[] = {0x104d1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104fa: {
unico data[] = {0x104d2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x104fb: {
unico data[] = {0x104d3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc0: {
unico data[] = {0x10c80};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc1: {
unico data[] = {0x10c81};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc2: {
unico data[] = {0x10c82};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc3: {
unico data[] = {0x10c83};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc4: {
unico data[] = {0x10c84};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc5: {
unico data[] = {0x10c85};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc6: {
unico data[] = {0x10c86};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc7: {
unico data[] = {0x10c87};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc8: {
unico data[] = {0x10c88};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cc9: {
unico data[] = {0x10c89};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cca: {
unico data[] = {0x10c8a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ccb: {
unico data[] = {0x10c8b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ccc: {
unico data[] = {0x10c8c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ccd: {
unico data[] = {0x10c8d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cce: {
unico data[] = {0x10c8e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ccf: {
unico data[] = {0x10c8f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd0: {
unico data[] = {0x10c90};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd1: {
unico data[] = {0x10c91};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd2: {
unico data[] = {0x10c92};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd3: {
unico data[] = {0x10c93};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd4: {
unico data[] = {0x10c94};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd5: {
unico data[] = {0x10c95};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd6: {
unico data[] = {0x10c96};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd7: {
unico data[] = {0x10c97};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd8: {
unico data[] = {0x10c98};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cd9: {
unico data[] = {0x10c99};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cda: {
unico data[] = {0x10c9a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cdb: {
unico data[] = {0x10c9b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cdc: {
unico data[] = {0x10c9c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cdd: {
unico data[] = {0x10c9d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cde: {
unico data[] = {0x10c9e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cdf: {
unico data[] = {0x10c9f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce0: {
unico data[] = {0x10ca0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce1: {
unico data[] = {0x10ca1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce2: {
unico data[] = {0x10ca2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce3: {
unico data[] = {0x10ca3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce4: {
unico data[] = {0x10ca4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce5: {
unico data[] = {0x10ca5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce6: {
unico data[] = {0x10ca6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce7: {
unico data[] = {0x10ca7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce8: {
unico data[] = {0x10ca8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ce9: {
unico data[] = {0x10ca9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cea: {
unico data[] = {0x10caa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ceb: {
unico data[] = {0x10cab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cec: {
unico data[] = {0x10cac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10ced: {
unico data[] = {0x10cad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cee: {
unico data[] = {0x10cae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cef: {
unico data[] = {0x10caf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cf0: {
unico data[] = {0x10cb0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cf1: {
unico data[] = {0x10cb1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x10cf2: {
unico data[] = {0x10cb2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c0: {
unico data[] = {0x118a0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c1: {
unico data[] = {0x118a1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c2: {
unico data[] = {0x118a2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c3: {
unico data[] = {0x118a3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c4: {
unico data[] = {0x118a4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c5: {
unico data[] = {0x118a5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c6: {
unico data[] = {0x118a6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c7: {
unico data[] = {0x118a7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c8: {
unico data[] = {0x118a8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118c9: {
unico data[] = {0x118a9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ca: {
unico data[] = {0x118aa};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118cb: {
unico data[] = {0x118ab};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118cc: {
unico data[] = {0x118ac};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118cd: {
unico data[] = {0x118ad};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118ce: {
unico data[] = {0x118ae};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118cf: {
unico data[] = {0x118af};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d0: {
unico data[] = {0x118b0};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d1: {
unico data[] = {0x118b1};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d2: {
unico data[] = {0x118b2};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d3: {
unico data[] = {0x118b3};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d4: {
unico data[] = {0x118b4};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d5: {
unico data[] = {0x118b5};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d6: {
unico data[] = {0x118b6};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d7: {
unico data[] = {0x118b7};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d8: {
unico data[] = {0x118b8};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118d9: {
unico data[] = {0x118b9};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118da: {
unico data[] = {0x118ba};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118db: {
unico data[] = {0x118bb};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118dc: {
unico data[] = {0x118bc};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118dd: {
unico data[] = {0x118bd};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118de: {
unico data[] = {0x118be};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x118df: {
unico data[] = {0x118bf};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e922: {
unico data[] = {0x1e900};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e923: {
unico data[] = {0x1e901};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e924: {
unico data[] = {0x1e902};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e925: {
unico data[] = {0x1e903};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e926: {
unico data[] = {0x1e904};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e927: {
unico data[] = {0x1e905};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e928: {
unico data[] = {0x1e906};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e929: {
unico data[] = {0x1e907};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92a: {
unico data[] = {0x1e908};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92b: {
unico data[] = {0x1e909};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92c: {
unico data[] = {0x1e90a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92d: {
unico data[] = {0x1e90b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92e: {
unico data[] = {0x1e90c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e92f: {
unico data[] = {0x1e90d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e930: {
unico data[] = {0x1e90e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e931: {
unico data[] = {0x1e90f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e932: {
unico data[] = {0x1e910};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e933: {
unico data[] = {0x1e911};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e934: {
unico data[] = {0x1e912};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e935: {
unico data[] = {0x1e913};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e936: {
unico data[] = {0x1e914};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e937: {
unico data[] = {0x1e915};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e938: {
unico data[] = {0x1e916};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e939: {
unico data[] = {0x1e917};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93a: {
unico data[] = {0x1e918};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93b: {
unico data[] = {0x1e919};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93c: {
unico data[] = {0x1e91a};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93d: {
unico data[] = {0x1e91b};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93e: {
unico data[] = {0x1e91c};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e93f: {
unico data[] = {0x1e91d};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e940: {
unico data[] = {0x1e91e};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e941: {
unico data[] = {0x1e91f};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e942: {
unico data[] = {0x1e920};
*indexout = index + 1;
return sub_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +1, uniout);
}
case 0x1e943: {
unico data[] = {0x1e921};
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
