#include <unico.h>
#include <stddef.h>

size_t normalize_nfkd_size_unicos_in (size_t index, size_t end, unicos *uni, size_t *indexout){
if (0 <= end - index){
switch (get_unicos(0, uni)){
case 0xa0:
*indexout = index + 1;
return 1;
case 0xa8:
*indexout = index + 2;
return 2;
case 0xaa:
*indexout = index + 1;
return 1;
case 0xaf:
*indexout = index + 2;
return 2;
case 0xb2:
*indexout = index + 1;
return 1;
case 0xb3:
*indexout = index + 1;
return 1;
case 0xb4:
*indexout = index + 2;
return 2;
case 0xb5:
*indexout = index + 1;
return 1;
case 0xb8:
*indexout = index + 2;
return 2;
case 0xb9:
*indexout = index + 1;
return 1;
case 0xba:
*indexout = index + 1;
return 1;
case 0xbc:
*indexout = index + 3;
return 3;
case 0xbd:
*indexout = index + 3;
return 3;
case 0xbe:
*indexout = index + 3;
return 3;
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
case 0x132:
*indexout = index + 2;
return 2;
case 0x133:
*indexout = index + 2;
return 2;
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
case 0x13f:
*indexout = index + 2;
return 2;
case 0x140:
*indexout = index + 2;
return 2;
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
case 0x149:
*indexout = index + 2;
return 2;
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
case 0x17f:
*indexout = index + 1;
return 1;
case 0x1a0:
*indexout = index + 1;
return 1;
case 0x1a1:
*indexout = index + 1;
return 1;
case 0x1af:
*indexout = index + 1;
return 1;
case 0x1b0:
*indexout = index + 1;
return 1;
case 0x1c4:
*indexout = index + 2;
return 2;
case 0x1c5:
*indexout = index + 2;
return 2;
case 0x1c6:
*indexout = index + 2;
return 2;
case 0x1c7:
*indexout = index + 2;
return 2;
case 0x1c8:
*indexout = index + 2;
return 2;
case 0x1c9:
*indexout = index + 2;
return 2;
case 0x1ca:
*indexout = index + 2;
return 2;
case 0x1cb:
*indexout = index + 2;
return 2;
case 0x1cc:
*indexout = index + 2;
return 2;
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
case 0x1f1:
*indexout = index + 2;
return 2;
case 0x1f2:
*indexout = index + 2;
return 2;
case 0x1f3:
*indexout = index + 2;
return 2;
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
case 0x2b0:
*indexout = index + 1;
return 1;
case 0x2b1:
*indexout = index + 1;
return 1;
case 0x2b2:
*indexout = index + 1;
return 1;
case 0x2b3:
*indexout = index + 1;
return 1;
case 0x2b4:
*indexout = index + 1;
return 1;
case 0x2b5:
*indexout = index + 1;
return 1;
case 0x2b6:
*indexout = index + 1;
return 1;
case 0x2b7:
*indexout = index + 1;
return 1;
case 0x2b8:
*indexout = index + 1;
return 1;
case 0x2d8:
*indexout = index + 2;
return 2;
case 0x2d9:
*indexout = index + 2;
return 2;
case 0x2da:
*indexout = index + 2;
return 2;
case 0x2db:
*indexout = index + 2;
return 2;
case 0x2dc:
*indexout = index + 2;
return 2;
case 0x2dd:
*indexout = index + 2;
return 2;
case 0x2e0:
*indexout = index + 1;
return 1;
case 0x2e1:
*indexout = index + 1;
return 1;
case 0x2e2:
*indexout = index + 1;
return 1;
case 0x2e3:
*indexout = index + 1;
return 1;
case 0x2e4:
*indexout = index + 1;
return 1;
case 0x340:
*indexout = index + 1;
return 1;
case 0x341:
*indexout = index + 1;
return 1;
case 0x343:
*indexout = index + 1;
return 1;
case 0x344:
*indexout = index + 2;
return 2;
case 0x374:
*indexout = index + 1;
return 1;
case 0x37a:
*indexout = index + 2;
return 2;
case 0x37e:
*indexout = index + 1;
return 1;
case 0x384:
*indexout = index + 2;
return 2;
case 0x385:
*indexout = index + 3;
return 3;
case 0x386:
*indexout = index + 1;
return 1;
case 0x387:
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
case 0x3d0:
*indexout = index + 1;
return 1;
case 0x3d1:
*indexout = index + 1;
return 1;
case 0x3d2:
*indexout = index + 1;
return 1;
case 0x3d3:
*indexout = index + 1;
return 1;
case 0x3d4:
*indexout = index + 1;
return 1;
case 0x3d5:
*indexout = index + 1;
return 1;
case 0x3d6:
*indexout = index + 1;
return 1;
case 0x3f0:
*indexout = index + 1;
return 1;
case 0x3f1:
*indexout = index + 1;
return 1;
case 0x3f2:
*indexout = index + 1;
return 1;
case 0x3f4:
*indexout = index + 1;
return 1;
case 0x3f5:
*indexout = index + 1;
return 1;
case 0x3f9:
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
case 0x587:
*indexout = index + 2;
return 2;
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
case 0x675:
*indexout = index + 2;
return 2;
case 0x676:
*indexout = index + 2;
return 2;
case 0x677:
*indexout = index + 2;
return 2;
case 0x678:
*indexout = index + 2;
return 2;
case 0x6c0:
*indexout = index + 1;
return 1;
case 0x6c2:
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
case 0x958:
*indexout = index + 2;
return 2;
case 0x959:
*indexout = index + 2;
return 2;
case 0x95a:
*indexout = index + 2;
return 2;
case 0x95b:
*indexout = index + 2;
return 2;
case 0x95c:
*indexout = index + 2;
return 2;
case 0x95d:
*indexout = index + 2;
return 2;
case 0x95e:
*indexout = index + 2;
return 2;
case 0x95f:
*indexout = index + 2;
return 2;
case 0x9cb:
*indexout = index + 1;
return 1;
case 0x9cc:
*indexout = index + 1;
return 1;
case 0x9dc:
*indexout = index + 2;
return 2;
case 0x9dd:
*indexout = index + 2;
return 2;
case 0x9df:
*indexout = index + 2;
return 2;
case 0xa33:
*indexout = index + 2;
return 2;
case 0xa36:
*indexout = index + 2;
return 2;
case 0xa59:
*indexout = index + 2;
return 2;
case 0xa5a:
*indexout = index + 2;
return 2;
case 0xa5b:
*indexout = index + 2;
return 2;
case 0xa5e:
*indexout = index + 2;
return 2;
case 0xb48:
*indexout = index + 1;
return 1;
case 0xb4b:
*indexout = index + 1;
return 1;
case 0xb4c:
*indexout = index + 1;
return 1;
case 0xb5c:
*indexout = index + 2;
return 2;
case 0xb5d:
*indexout = index + 2;
return 2;
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
case 0xeb3:
*indexout = index + 2;
return 2;
case 0xedc:
*indexout = index + 2;
return 2;
case 0xedd:
*indexout = index + 2;
return 2;
case 0xf0c:
*indexout = index + 1;
return 1;
case 0xf43:
*indexout = index + 2;
return 2;
case 0xf4d:
*indexout = index + 2;
return 2;
case 0xf52:
*indexout = index + 2;
return 2;
case 0xf57:
*indexout = index + 2;
return 2;
case 0xf5c:
*indexout = index + 2;
return 2;
case 0xf69:
*indexout = index + 2;
return 2;
case 0xf73:
*indexout = index + 2;
return 2;
case 0xf75:
*indexout = index + 2;
return 2;
case 0xf76:
*indexout = index + 2;
return 2;
case 0xf77:
*indexout = index + 3;
return 3;
case 0xf78:
*indexout = index + 2;
return 2;
case 0xf79:
*indexout = index + 3;
return 3;
case 0xf81:
*indexout = index + 2;
return 2;
case 0xf93:
*indexout = index + 2;
return 2;
case 0xf9d:
*indexout = index + 2;
return 2;
case 0xfa2:
*indexout = index + 2;
return 2;
case 0xfa7:
*indexout = index + 2;
return 2;
case 0xfac:
*indexout = index + 2;
return 2;
case 0xfb9:
*indexout = index + 2;
return 2;
case 0x1026:
*indexout = index + 1;
return 1;
case 0x10fc:
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
case 0x1d2c:
*indexout = index + 1;
return 1;
case 0x1d2d:
*indexout = index + 1;
return 1;
case 0x1d2e:
*indexout = index + 1;
return 1;
case 0x1d30:
*indexout = index + 1;
return 1;
case 0x1d31:
*indexout = index + 1;
return 1;
case 0x1d32:
*indexout = index + 1;
return 1;
case 0x1d33:
*indexout = index + 1;
return 1;
case 0x1d34:
*indexout = index + 1;
return 1;
case 0x1d35:
*indexout = index + 1;
return 1;
case 0x1d36:
*indexout = index + 1;
return 1;
case 0x1d37:
*indexout = index + 1;
return 1;
case 0x1d38:
*indexout = index + 1;
return 1;
case 0x1d39:
*indexout = index + 1;
return 1;
case 0x1d3a:
*indexout = index + 1;
return 1;
case 0x1d3c:
*indexout = index + 1;
return 1;
case 0x1d3d:
*indexout = index + 1;
return 1;
case 0x1d3e:
*indexout = index + 1;
return 1;
case 0x1d3f:
*indexout = index + 1;
return 1;
case 0x1d40:
*indexout = index + 1;
return 1;
case 0x1d41:
*indexout = index + 1;
return 1;
case 0x1d42:
*indexout = index + 1;
return 1;
case 0x1d43:
*indexout = index + 1;
return 1;
case 0x1d44:
*indexout = index + 1;
return 1;
case 0x1d45:
*indexout = index + 1;
return 1;
case 0x1d46:
*indexout = index + 1;
return 1;
case 0x1d47:
*indexout = index + 1;
return 1;
case 0x1d48:
*indexout = index + 1;
return 1;
case 0x1d49:
*indexout = index + 1;
return 1;
case 0x1d4a:
*indexout = index + 1;
return 1;
case 0x1d4b:
*indexout = index + 1;
return 1;
case 0x1d4c:
*indexout = index + 1;
return 1;
case 0x1d4d:
*indexout = index + 1;
return 1;
case 0x1d4f:
*indexout = index + 1;
return 1;
case 0x1d50:
*indexout = index + 1;
return 1;
case 0x1d51:
*indexout = index + 1;
return 1;
case 0x1d52:
*indexout = index + 1;
return 1;
case 0x1d53:
*indexout = index + 1;
return 1;
case 0x1d54:
*indexout = index + 1;
return 1;
case 0x1d55:
*indexout = index + 1;
return 1;
case 0x1d56:
*indexout = index + 1;
return 1;
case 0x1d57:
*indexout = index + 1;
return 1;
case 0x1d58:
*indexout = index + 1;
return 1;
case 0x1d59:
*indexout = index + 1;
return 1;
case 0x1d5a:
*indexout = index + 1;
return 1;
case 0x1d5b:
*indexout = index + 1;
return 1;
case 0x1d5c:
*indexout = index + 1;
return 1;
case 0x1d5d:
*indexout = index + 1;
return 1;
case 0x1d5e:
*indexout = index + 1;
return 1;
case 0x1d5f:
*indexout = index + 1;
return 1;
case 0x1d60:
*indexout = index + 1;
return 1;
case 0x1d61:
*indexout = index + 1;
return 1;
case 0x1d62:
*indexout = index + 1;
return 1;
case 0x1d63:
*indexout = index + 1;
return 1;
case 0x1d64:
*indexout = index + 1;
return 1;
case 0x1d65:
*indexout = index + 1;
return 1;
case 0x1d66:
*indexout = index + 1;
return 1;
case 0x1d67:
*indexout = index + 1;
return 1;
case 0x1d68:
*indexout = index + 1;
return 1;
case 0x1d69:
*indexout = index + 1;
return 1;
case 0x1d6a:
*indexout = index + 1;
return 1;
case 0x1d78:
*indexout = index + 1;
return 1;
case 0x1d9b:
*indexout = index + 1;
return 1;
case 0x1d9c:
*indexout = index + 1;
return 1;
case 0x1d9d:
*indexout = index + 1;
return 1;
case 0x1d9e:
*indexout = index + 1;
return 1;
case 0x1d9f:
*indexout = index + 1;
return 1;
case 0x1da0:
*indexout = index + 1;
return 1;
case 0x1da1:
*indexout = index + 1;
return 1;
case 0x1da2:
*indexout = index + 1;
return 1;
case 0x1da3:
*indexout = index + 1;
return 1;
case 0x1da4:
*indexout = index + 1;
return 1;
case 0x1da5:
*indexout = index + 1;
return 1;
case 0x1da6:
*indexout = index + 1;
return 1;
case 0x1da7:
*indexout = index + 1;
return 1;
case 0x1da8:
*indexout = index + 1;
return 1;
case 0x1da9:
*indexout = index + 1;
return 1;
case 0x1daa:
*indexout = index + 1;
return 1;
case 0x1dab:
*indexout = index + 1;
return 1;
case 0x1dac:
*indexout = index + 1;
return 1;
case 0x1dad:
*indexout = index + 1;
return 1;
case 0x1dae:
*indexout = index + 1;
return 1;
case 0x1daf:
*indexout = index + 1;
return 1;
case 0x1db0:
*indexout = index + 1;
return 1;
case 0x1db1:
*indexout = index + 1;
return 1;
case 0x1db2:
*indexout = index + 1;
return 1;
case 0x1db3:
*indexout = index + 1;
return 1;
case 0x1db4:
*indexout = index + 1;
return 1;
case 0x1db5:
*indexout = index + 1;
return 1;
case 0x1db6:
*indexout = index + 1;
return 1;
case 0x1db7:
*indexout = index + 1;
return 1;
case 0x1db8:
*indexout = index + 1;
return 1;
case 0x1db9:
*indexout = index + 1;
return 1;
case 0x1dba:
*indexout = index + 1;
return 1;
case 0x1dbb:
*indexout = index + 1;
return 1;
case 0x1dbc:
*indexout = index + 1;
return 1;
case 0x1dbd:
*indexout = index + 1;
return 1;
case 0x1dbe:
*indexout = index + 1;
return 1;
case 0x1dbf:
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
case 0x1e9a:
*indexout = index + 2;
return 2;
case 0x1e9b:
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
case 0x1f71:
*indexout = index + 1;
return 1;
case 0x1f72:
*indexout = index + 1;
return 1;
case 0x1f73:
*indexout = index + 1;
return 1;
case 0x1f74:
*indexout = index + 1;
return 1;
case 0x1f75:
*indexout = index + 1;
return 1;
case 0x1f76:
*indexout = index + 1;
return 1;
case 0x1f77:
*indexout = index + 1;
return 1;
case 0x1f78:
*indexout = index + 1;
return 1;
case 0x1f79:
*indexout = index + 1;
return 1;
case 0x1f7a:
*indexout = index + 1;
return 1;
case 0x1f7b:
*indexout = index + 1;
return 1;
case 0x1f7c:
*indexout = index + 1;
return 1;
case 0x1f7d:
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
case 0x1fbb:
*indexout = index + 1;
return 1;
case 0x1fbc:
*indexout = index + 1;
return 1;
case 0x1fbd:
*indexout = index + 2;
return 2;
case 0x1fbe:
*indexout = index + 1;
return 1;
case 0x1fbf:
*indexout = index + 2;
return 2;
case 0x1fc0:
*indexout = index + 2;
return 2;
case 0x1fc1:
*indexout = index + 3;
return 3;
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
case 0x1fc9:
*indexout = index + 1;
return 1;
case 0x1fca:
*indexout = index + 1;
return 1;
case 0x1fcb:
*indexout = index + 1;
return 1;
case 0x1fcc:
*indexout = index + 1;
return 1;
case 0x1fcd:
*indexout = index + 3;
return 3;
case 0x1fce:
*indexout = index + 3;
return 3;
case 0x1fcf:
*indexout = index + 3;
return 3;
case 0x1fd0:
*indexout = index + 1;
return 1;
case 0x1fd1:
*indexout = index + 1;
return 1;
case 0x1fd2:
*indexout = index + 1;
return 1;
case 0x1fd3:
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
case 0x1fdb:
*indexout = index + 1;
return 1;
case 0x1fdd:
*indexout = index + 3;
return 3;
case 0x1fde:
*indexout = index + 3;
return 3;
case 0x1fdf:
*indexout = index + 3;
return 3;
case 0x1fe0:
*indexout = index + 1;
return 1;
case 0x1fe1:
*indexout = index + 1;
return 1;
case 0x1fe2:
*indexout = index + 1;
return 1;
case 0x1fe3:
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
case 0x1feb:
*indexout = index + 1;
return 1;
case 0x1fec:
*indexout = index + 1;
return 1;
case 0x1fed:
*indexout = index + 3;
return 3;
case 0x1fee:
*indexout = index + 3;
return 3;
case 0x1fef:
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
case 0x1ff9:
*indexout = index + 1;
return 1;
case 0x1ffa:
*indexout = index + 1;
return 1;
case 0x1ffb:
*indexout = index + 1;
return 1;
case 0x1ffc:
*indexout = index + 1;
return 1;
case 0x1ffd:
*indexout = index + 2;
return 2;
case 0x1ffe:
*indexout = index + 2;
return 2;
case 0x2000:
*indexout = index + 1;
return 1;
case 0x2001:
*indexout = index + 1;
return 1;
case 0x2002:
*indexout = index + 1;
return 1;
case 0x2003:
*indexout = index + 1;
return 1;
case 0x2004:
*indexout = index + 1;
return 1;
case 0x2005:
*indexout = index + 1;
return 1;
case 0x2006:
*indexout = index + 1;
return 1;
case 0x2007:
*indexout = index + 1;
return 1;
case 0x2008:
*indexout = index + 1;
return 1;
case 0x2009:
*indexout = index + 1;
return 1;
case 0x200a:
*indexout = index + 1;
return 1;
case 0x2011:
*indexout = index + 1;
return 1;
case 0x2017:
*indexout = index + 2;
return 2;
case 0x2024:
*indexout = index + 1;
return 1;
case 0x2025:
*indexout = index + 2;
return 2;
case 0x2026:
*indexout = index + 3;
return 3;
case 0x202f:
*indexout = index + 1;
return 1;
case 0x2033:
*indexout = index + 2;
return 2;
case 0x2034:
*indexout = index + 3;
return 3;
case 0x2036:
*indexout = index + 2;
return 2;
case 0x2037:
*indexout = index + 3;
return 3;
case 0x203c:
*indexout = index + 2;
return 2;
case 0x203e:
*indexout = index + 2;
return 2;
case 0x2047:
*indexout = index + 2;
return 2;
case 0x2048:
*indexout = index + 2;
return 2;
case 0x2049:
*indexout = index + 2;
return 2;
case 0x2057:
*indexout = index + 4;
return 4;
case 0x205f:
*indexout = index + 1;
return 1;
case 0x2070:
*indexout = index + 1;
return 1;
case 0x2071:
*indexout = index + 1;
return 1;
case 0x2074:
*indexout = index + 1;
return 1;
case 0x2075:
*indexout = index + 1;
return 1;
case 0x2076:
*indexout = index + 1;
return 1;
case 0x2077:
*indexout = index + 1;
return 1;
case 0x2078:
*indexout = index + 1;
return 1;
case 0x2079:
*indexout = index + 1;
return 1;
case 0x207a:
*indexout = index + 1;
return 1;
case 0x207b:
*indexout = index + 1;
return 1;
case 0x207c:
*indexout = index + 1;
return 1;
case 0x207d:
*indexout = index + 1;
return 1;
case 0x207e:
*indexout = index + 1;
return 1;
case 0x207f:
*indexout = index + 1;
return 1;
case 0x2080:
*indexout = index + 1;
return 1;
case 0x2081:
*indexout = index + 1;
return 1;
case 0x2082:
*indexout = index + 1;
return 1;
case 0x2083:
*indexout = index + 1;
return 1;
case 0x2084:
*indexout = index + 1;
return 1;
case 0x2085:
*indexout = index + 1;
return 1;
case 0x2086:
*indexout = index + 1;
return 1;
case 0x2087:
*indexout = index + 1;
return 1;
case 0x2088:
*indexout = index + 1;
return 1;
case 0x2089:
*indexout = index + 1;
return 1;
case 0x208a:
*indexout = index + 1;
return 1;
case 0x208b:
*indexout = index + 1;
return 1;
case 0x208c:
*indexout = index + 1;
return 1;
case 0x208d:
*indexout = index + 1;
return 1;
case 0x208e:
*indexout = index + 1;
return 1;
case 0x2090:
*indexout = index + 1;
return 1;
case 0x2091:
*indexout = index + 1;
return 1;
case 0x2092:
*indexout = index + 1;
return 1;
case 0x2093:
*indexout = index + 1;
return 1;
case 0x2094:
*indexout = index + 1;
return 1;
case 0x2095:
*indexout = index + 1;
return 1;
case 0x2096:
*indexout = index + 1;
return 1;
case 0x2097:
*indexout = index + 1;
return 1;
case 0x2098:
*indexout = index + 1;
return 1;
case 0x2099:
*indexout = index + 1;
return 1;
case 0x209a:
*indexout = index + 1;
return 1;
case 0x209b:
*indexout = index + 1;
return 1;
case 0x209c:
*indexout = index + 1;
return 1;
case 0x20a8:
*indexout = index + 2;
return 2;
case 0x2100:
*indexout = index + 3;
return 3;
case 0x2101:
*indexout = index + 3;
return 3;
case 0x2102:
*indexout = index + 1;
return 1;
case 0x2103:
*indexout = index + 2;
return 2;
case 0x2105:
*indexout = index + 3;
return 3;
case 0x2106:
*indexout = index + 3;
return 3;
case 0x2107:
*indexout = index + 1;
return 1;
case 0x2109:
*indexout = index + 2;
return 2;
case 0x210a:
*indexout = index + 1;
return 1;
case 0x210b:
*indexout = index + 1;
return 1;
case 0x210c:
*indexout = index + 1;
return 1;
case 0x210d:
*indexout = index + 1;
return 1;
case 0x210e:
*indexout = index + 1;
return 1;
case 0x210f:
*indexout = index + 1;
return 1;
case 0x2110:
*indexout = index + 1;
return 1;
case 0x2111:
*indexout = index + 1;
return 1;
case 0x2112:
*indexout = index + 1;
return 1;
case 0x2113:
*indexout = index + 1;
return 1;
case 0x2115:
*indexout = index + 1;
return 1;
case 0x2116:
*indexout = index + 2;
return 2;
case 0x2119:
*indexout = index + 1;
return 1;
case 0x211a:
*indexout = index + 1;
return 1;
case 0x211b:
*indexout = index + 1;
return 1;
case 0x211c:
*indexout = index + 1;
return 1;
case 0x211d:
*indexout = index + 1;
return 1;
case 0x2120:
*indexout = index + 2;
return 2;
case 0x2121:
*indexout = index + 3;
return 3;
case 0x2122:
*indexout = index + 2;
return 2;
case 0x2124:
*indexout = index + 1;
return 1;
case 0x2126:
*indexout = index + 1;
return 1;
case 0x2128:
*indexout = index + 1;
return 1;
case 0x212a:
*indexout = index + 1;
return 1;
case 0x212b:
*indexout = index + 1;
return 1;
case 0x212c:
*indexout = index + 1;
return 1;
case 0x212d:
*indexout = index + 1;
return 1;
case 0x212f:
*indexout = index + 1;
return 1;
case 0x2130:
*indexout = index + 1;
return 1;
case 0x2131:
*indexout = index + 1;
return 1;
case 0x2133:
*indexout = index + 1;
return 1;
case 0x2134:
*indexout = index + 1;
return 1;
case 0x2135:
*indexout = index + 1;
return 1;
case 0x2136:
*indexout = index + 1;
return 1;
case 0x2137:
*indexout = index + 1;
return 1;
case 0x2138:
*indexout = index + 1;
return 1;
case 0x2139:
*indexout = index + 1;
return 1;
case 0x213b:
*indexout = index + 3;
return 3;
case 0x213c:
*indexout = index + 1;
return 1;
case 0x213d:
*indexout = index + 1;
return 1;
case 0x213e:
*indexout = index + 1;
return 1;
case 0x213f:
*indexout = index + 1;
return 1;
case 0x2140:
*indexout = index + 1;
return 1;
case 0x2145:
*indexout = index + 1;
return 1;
case 0x2146:
*indexout = index + 1;
return 1;
case 0x2147:
*indexout = index + 1;
return 1;
case 0x2148:
*indexout = index + 1;
return 1;
case 0x2149:
*indexout = index + 1;
return 1;
case 0x2150:
*indexout = index + 3;
return 3;
case 0x2151:
*indexout = index + 3;
return 3;
case 0x2152:
*indexout = index + 4;
return 4;
case 0x2153:
*indexout = index + 3;
return 3;
case 0x2154:
*indexout = index + 3;
return 3;
case 0x2155:
*indexout = index + 3;
return 3;
case 0x2156:
*indexout = index + 3;
return 3;
case 0x2157:
*indexout = index + 3;
return 3;
case 0x2158:
*indexout = index + 3;
return 3;
case 0x2159:
*indexout = index + 3;
return 3;
case 0x215a:
*indexout = index + 3;
return 3;
case 0x215b:
*indexout = index + 3;
return 3;
case 0x215c:
*indexout = index + 3;
return 3;
case 0x215d:
*indexout = index + 3;
return 3;
case 0x215e:
*indexout = index + 3;
return 3;
case 0x215f:
*indexout = index + 2;
return 2;
case 0x2160:
*indexout = index + 1;
return 1;
case 0x2161:
*indexout = index + 2;
return 2;
case 0x2162:
*indexout = index + 3;
return 3;
case 0x2163:
*indexout = index + 2;
return 2;
case 0x2164:
*indexout = index + 1;
return 1;
case 0x2165:
*indexout = index + 2;
return 2;
case 0x2166:
*indexout = index + 3;
return 3;
case 0x2167:
*indexout = index + 4;
return 4;
case 0x2168:
*indexout = index + 2;
return 2;
case 0x2169:
*indexout = index + 1;
return 1;
case 0x216a:
*indexout = index + 2;
return 2;
case 0x216b:
*indexout = index + 3;
return 3;
case 0x216c:
*indexout = index + 1;
return 1;
case 0x216d:
*indexout = index + 1;
return 1;
case 0x216e:
*indexout = index + 1;
return 1;
case 0x216f:
*indexout = index + 1;
return 1;
case 0x2170:
*indexout = index + 1;
return 1;
case 0x2171:
*indexout = index + 2;
return 2;
case 0x2172:
*indexout = index + 3;
return 3;
case 0x2173:
*indexout = index + 2;
return 2;
case 0x2174:
*indexout = index + 1;
return 1;
case 0x2175:
*indexout = index + 2;
return 2;
case 0x2176:
*indexout = index + 3;
return 3;
case 0x2177:
*indexout = index + 4;
return 4;
case 0x2178:
*indexout = index + 2;
return 2;
case 0x2179:
*indexout = index + 1;
return 1;
case 0x217a:
*indexout = index + 2;
return 2;
case 0x217b:
*indexout = index + 3;
return 3;
case 0x217c:
*indexout = index + 1;
return 1;
case 0x217d:
*indexout = index + 1;
return 1;
case 0x217e:
*indexout = index + 1;
return 1;
case 0x217f:
*indexout = index + 1;
return 1;
case 0x2189:
*indexout = index + 3;
return 3;
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
case 0x2204:
*indexout = index + 1;
return 1;
case 0x2209:
*indexout = index + 1;
return 1;
case 0x220c:
*indexout = index + 1;
return 1;
case 0x2224:
*indexout = index + 1;
return 1;
case 0x2226:
*indexout = index + 1;
return 1;
case 0x222c:
*indexout = index + 2;
return 2;
case 0x222d:
*indexout = index + 3;
return 3;
case 0x222f:
*indexout = index + 2;
return 2;
case 0x2230:
*indexout = index + 3;
return 3;
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
case 0x2329:
*indexout = index + 1;
return 1;
case 0x232a:
*indexout = index + 1;
return 1;
case 0x2460:
*indexout = index + 1;
return 1;
case 0x2461:
*indexout = index + 1;
return 1;
case 0x2462:
*indexout = index + 1;
return 1;
case 0x2463:
*indexout = index + 1;
return 1;
case 0x2464:
*indexout = index + 1;
return 1;
case 0x2465:
*indexout = index + 1;
return 1;
case 0x2466:
*indexout = index + 1;
return 1;
case 0x2467:
*indexout = index + 1;
return 1;
case 0x2468:
*indexout = index + 1;
return 1;
case 0x2469:
*indexout = index + 2;
return 2;
case 0x246a:
*indexout = index + 2;
return 2;
case 0x246b:
*indexout = index + 2;
return 2;
case 0x246c:
*indexout = index + 2;
return 2;
case 0x246d:
*indexout = index + 2;
return 2;
case 0x246e:
*indexout = index + 2;
return 2;
case 0x246f:
*indexout = index + 2;
return 2;
case 0x2470:
*indexout = index + 2;
return 2;
case 0x2471:
*indexout = index + 2;
return 2;
case 0x2472:
*indexout = index + 2;
return 2;
case 0x2473:
*indexout = index + 2;
return 2;
case 0x2474:
*indexout = index + 3;
return 3;
case 0x2475:
*indexout = index + 3;
return 3;
case 0x2476:
*indexout = index + 3;
return 3;
case 0x2477:
*indexout = index + 3;
return 3;
case 0x2478:
*indexout = index + 3;
return 3;
case 0x2479:
*indexout = index + 3;
return 3;
case 0x247a:
*indexout = index + 3;
return 3;
case 0x247b:
*indexout = index + 3;
return 3;
case 0x247c:
*indexout = index + 3;
return 3;
case 0x247d:
*indexout = index + 4;
return 4;
case 0x247e:
*indexout = index + 4;
return 4;
case 0x247f:
*indexout = index + 4;
return 4;
case 0x2480:
*indexout = index + 4;
return 4;
case 0x2481:
*indexout = index + 4;
return 4;
case 0x2482:
*indexout = index + 4;
return 4;
case 0x2483:
*indexout = index + 4;
return 4;
case 0x2484:
*indexout = index + 4;
return 4;
case 0x2485:
*indexout = index + 4;
return 4;
case 0x2486:
*indexout = index + 4;
return 4;
case 0x2487:
*indexout = index + 4;
return 4;
case 0x2488:
*indexout = index + 2;
return 2;
case 0x2489:
*indexout = index + 2;
return 2;
case 0x248a:
*indexout = index + 2;
return 2;
case 0x248b:
*indexout = index + 2;
return 2;
case 0x248c:
*indexout = index + 2;
return 2;
case 0x248d:
*indexout = index + 2;
return 2;
case 0x248e:
*indexout = index + 2;
return 2;
case 0x248f:
*indexout = index + 2;
return 2;
case 0x2490:
*indexout = index + 2;
return 2;
case 0x2491:
*indexout = index + 3;
return 3;
case 0x2492:
*indexout = index + 3;
return 3;
case 0x2493:
*indexout = index + 3;
return 3;
case 0x2494:
*indexout = index + 3;
return 3;
case 0x2495:
*indexout = index + 3;
return 3;
case 0x2496:
*indexout = index + 3;
return 3;
case 0x2497:
*indexout = index + 3;
return 3;
case 0x2498:
*indexout = index + 3;
return 3;
case 0x2499:
*indexout = index + 3;
return 3;
case 0x249a:
*indexout = index + 3;
return 3;
case 0x249b:
*indexout = index + 3;
return 3;
case 0x249c:
*indexout = index + 3;
return 3;
case 0x249d:
*indexout = index + 3;
return 3;
case 0x249e:
*indexout = index + 3;
return 3;
case 0x249f:
*indexout = index + 3;
return 3;
case 0x24a0:
*indexout = index + 3;
return 3;
case 0x24a1:
*indexout = index + 3;
return 3;
case 0x24a2:
*indexout = index + 3;
return 3;
case 0x24a3:
*indexout = index + 3;
return 3;
case 0x24a4:
*indexout = index + 3;
return 3;
case 0x24a5:
*indexout = index + 3;
return 3;
case 0x24a6:
*indexout = index + 3;
return 3;
case 0x24a7:
*indexout = index + 3;
return 3;
case 0x24a8:
*indexout = index + 3;
return 3;
case 0x24a9:
*indexout = index + 3;
return 3;
case 0x24aa:
*indexout = index + 3;
return 3;
case 0x24ab:
*indexout = index + 3;
return 3;
case 0x24ac:
*indexout = index + 3;
return 3;
case 0x24ad:
*indexout = index + 3;
return 3;
case 0x24ae:
*indexout = index + 3;
return 3;
case 0x24af:
*indexout = index + 3;
return 3;
case 0x24b0:
*indexout = index + 3;
return 3;
case 0x24b1:
*indexout = index + 3;
return 3;
case 0x24b2:
*indexout = index + 3;
return 3;
case 0x24b3:
*indexout = index + 3;
return 3;
case 0x24b4:
*indexout = index + 3;
return 3;
case 0x24b5:
*indexout = index + 3;
return 3;
case 0x24b6:
*indexout = index + 1;
return 1;
case 0x24b7:
*indexout = index + 1;
return 1;
case 0x24b8:
*indexout = index + 1;
return 1;
case 0x24b9:
*indexout = index + 1;
return 1;
case 0x24ba:
*indexout = index + 1;
return 1;
case 0x24bb:
*indexout = index + 1;
return 1;
case 0x24bc:
*indexout = index + 1;
return 1;
case 0x24bd:
*indexout = index + 1;
return 1;
case 0x24be:
*indexout = index + 1;
return 1;
case 0x24bf:
*indexout = index + 1;
return 1;
case 0x24c0:
*indexout = index + 1;
return 1;
case 0x24c1:
*indexout = index + 1;
return 1;
case 0x24c2:
*indexout = index + 1;
return 1;
case 0x24c3:
*indexout = index + 1;
return 1;
case 0x24c4:
*indexout = index + 1;
return 1;
case 0x24c5:
*indexout = index + 1;
return 1;
case 0x24c6:
*indexout = index + 1;
return 1;
case 0x24c7:
*indexout = index + 1;
return 1;
case 0x24c8:
*indexout = index + 1;
return 1;
case 0x24c9:
*indexout = index + 1;
return 1;
case 0x24ca:
*indexout = index + 1;
return 1;
case 0x24cb:
*indexout = index + 1;
return 1;
case 0x24cc:
*indexout = index + 1;
return 1;
case 0x24cd:
*indexout = index + 1;
return 1;
case 0x24ce:
*indexout = index + 1;
return 1;
case 0x24cf:
*indexout = index + 1;
return 1;
case 0x24d0:
*indexout = index + 1;
return 1;
case 0x24d1:
*indexout = index + 1;
return 1;
case 0x24d2:
*indexout = index + 1;
return 1;
case 0x24d3:
*indexout = index + 1;
return 1;
case 0x24d4:
*indexout = index + 1;
return 1;
case 0x24d5:
*indexout = index + 1;
return 1;
case 0x24d6:
*indexout = index + 1;
return 1;
case 0x24d7:
*indexout = index + 1;
return 1;
case 0x24d8:
*indexout = index + 1;
return 1;
case 0x24d9:
*indexout = index + 1;
return 1;
case 0x24da:
*indexout = index + 1;
return 1;
case 0x24db:
*indexout = index + 1;
return 1;
case 0x24dc:
*indexout = index + 1;
return 1;
case 0x24dd:
*indexout = index + 1;
return 1;
case 0x24de:
*indexout = index + 1;
return 1;
case 0x24df:
*indexout = index + 1;
return 1;
case 0x24e0:
*indexout = index + 1;
return 1;
case 0x24e1:
*indexout = index + 1;
return 1;
case 0x24e2:
*indexout = index + 1;
return 1;
case 0x24e3:
*indexout = index + 1;
return 1;
case 0x24e4:
*indexout = index + 1;
return 1;
case 0x24e5:
*indexout = index + 1;
return 1;
case 0x24e6:
*indexout = index + 1;
return 1;
case 0x24e7:
*indexout = index + 1;
return 1;
case 0x24e8:
*indexout = index + 1;
return 1;
case 0x24e9:
*indexout = index + 1;
return 1;
case 0x24ea:
*indexout = index + 1;
return 1;
case 0x2a0c:
*indexout = index + 4;
return 4;
case 0x2a74:
*indexout = index + 3;
return 3;
case 0x2a75:
*indexout = index + 2;
return 2;
case 0x2a76:
*indexout = index + 3;
return 3;
case 0x2adc:
*indexout = index + 2;
return 2;
case 0x2c7c:
*indexout = index + 1;
return 1;
case 0x2c7d:
*indexout = index + 1;
return 1;
case 0x2d6f:
*indexout = index + 1;
return 1;
case 0x2e9f:
*indexout = index + 1;
return 1;
case 0x2ef3:
*indexout = index + 1;
return 1;
case 0x2f00:
*indexout = index + 1;
return 1;
case 0x2f01:
*indexout = index + 1;
return 1;
case 0x2f02:
*indexout = index + 1;
return 1;
case 0x2f03:
*indexout = index + 1;
return 1;
case 0x2f04:
*indexout = index + 1;
return 1;
case 0x2f05:
*indexout = index + 1;
return 1;
case 0x2f06:
*indexout = index + 1;
return 1;
case 0x2f07:
*indexout = index + 1;
return 1;
case 0x2f08:
*indexout = index + 1;
return 1;
case 0x2f09:
*indexout = index + 1;
return 1;
case 0x2f0a:
*indexout = index + 1;
return 1;
case 0x2f0b:
*indexout = index + 1;
return 1;
case 0x2f0c:
*indexout = index + 1;
return 1;
case 0x2f0d:
*indexout = index + 1;
return 1;
case 0x2f0e:
*indexout = index + 1;
return 1;
case 0x2f0f:
*indexout = index + 1;
return 1;
case 0x2f10:
*indexout = index + 1;
return 1;
case 0x2f11:
*indexout = index + 1;
return 1;
case 0x2f12:
*indexout = index + 1;
return 1;
case 0x2f13:
*indexout = index + 1;
return 1;
case 0x2f14:
*indexout = index + 1;
return 1;
case 0x2f15:
*indexout = index + 1;
return 1;
case 0x2f16:
*indexout = index + 1;
return 1;
case 0x2f17:
*indexout = index + 1;
return 1;
case 0x2f18:
*indexout = index + 1;
return 1;
case 0x2f19:
*indexout = index + 1;
return 1;
case 0x2f1a:
*indexout = index + 1;
return 1;
case 0x2f1b:
*indexout = index + 1;
return 1;
case 0x2f1c:
*indexout = index + 1;
return 1;
case 0x2f1d:
*indexout = index + 1;
return 1;
case 0x2f1e:
*indexout = index + 1;
return 1;
case 0x2f1f:
*indexout = index + 1;
return 1;
case 0x2f20:
*indexout = index + 1;
return 1;
case 0x2f21:
*indexout = index + 1;
return 1;
case 0x2f22:
*indexout = index + 1;
return 1;
case 0x2f23:
*indexout = index + 1;
return 1;
case 0x2f24:
*indexout = index + 1;
return 1;
case 0x2f25:
*indexout = index + 1;
return 1;
case 0x2f26:
*indexout = index + 1;
return 1;
case 0x2f27:
*indexout = index + 1;
return 1;
case 0x2f28:
*indexout = index + 1;
return 1;
case 0x2f29:
*indexout = index + 1;
return 1;
case 0x2f2a:
*indexout = index + 1;
return 1;
case 0x2f2b:
*indexout = index + 1;
return 1;
case 0x2f2c:
*indexout = index + 1;
return 1;
case 0x2f2d:
*indexout = index + 1;
return 1;
case 0x2f2e:
*indexout = index + 1;
return 1;
case 0x2f2f:
*indexout = index + 1;
return 1;
case 0x2f30:
*indexout = index + 1;
return 1;
case 0x2f31:
*indexout = index + 1;
return 1;
case 0x2f32:
*indexout = index + 1;
return 1;
case 0x2f33:
*indexout = index + 1;
return 1;
case 0x2f34:
*indexout = index + 1;
return 1;
case 0x2f35:
*indexout = index + 1;
return 1;
case 0x2f36:
*indexout = index + 1;
return 1;
case 0x2f37:
*indexout = index + 1;
return 1;
case 0x2f38:
*indexout = index + 1;
return 1;
case 0x2f39:
*indexout = index + 1;
return 1;
case 0x2f3a:
*indexout = index + 1;
return 1;
case 0x2f3b:
*indexout = index + 1;
return 1;
case 0x2f3c:
*indexout = index + 1;
return 1;
case 0x2f3d:
*indexout = index + 1;
return 1;
case 0x2f3e:
*indexout = index + 1;
return 1;
case 0x2f3f:
*indexout = index + 1;
return 1;
case 0x2f40:
*indexout = index + 1;
return 1;
case 0x2f41:
*indexout = index + 1;
return 1;
case 0x2f42:
*indexout = index + 1;
return 1;
case 0x2f43:
*indexout = index + 1;
return 1;
case 0x2f44:
*indexout = index + 1;
return 1;
case 0x2f45:
*indexout = index + 1;
return 1;
case 0x2f46:
*indexout = index + 1;
return 1;
case 0x2f47:
*indexout = index + 1;
return 1;
case 0x2f48:
*indexout = index + 1;
return 1;
case 0x2f49:
*indexout = index + 1;
return 1;
case 0x2f4a:
*indexout = index + 1;
return 1;
case 0x2f4b:
*indexout = index + 1;
return 1;
case 0x2f4c:
*indexout = index + 1;
return 1;
case 0x2f4d:
*indexout = index + 1;
return 1;
case 0x2f4e:
*indexout = index + 1;
return 1;
case 0x2f4f:
*indexout = index + 1;
return 1;
case 0x2f50:
*indexout = index + 1;
return 1;
case 0x2f51:
*indexout = index + 1;
return 1;
case 0x2f52:
*indexout = index + 1;
return 1;
case 0x2f53:
*indexout = index + 1;
return 1;
case 0x2f54:
*indexout = index + 1;
return 1;
case 0x2f55:
*indexout = index + 1;
return 1;
case 0x2f56:
*indexout = index + 1;
return 1;
case 0x2f57:
*indexout = index + 1;
return 1;
case 0x2f58:
*indexout = index + 1;
return 1;
case 0x2f59:
*indexout = index + 1;
return 1;
case 0x2f5a:
*indexout = index + 1;
return 1;
case 0x2f5b:
*indexout = index + 1;
return 1;
case 0x2f5c:
*indexout = index + 1;
return 1;
case 0x2f5d:
*indexout = index + 1;
return 1;
case 0x2f5e:
*indexout = index + 1;
return 1;
case 0x2f5f:
*indexout = index + 1;
return 1;
case 0x2f60:
*indexout = index + 1;
return 1;
case 0x2f61:
*indexout = index + 1;
return 1;
case 0x2f62:
*indexout = index + 1;
return 1;
case 0x2f63:
*indexout = index + 1;
return 1;
case 0x2f64:
*indexout = index + 1;
return 1;
case 0x2f65:
*indexout = index + 1;
return 1;
case 0x2f66:
*indexout = index + 1;
return 1;
case 0x2f67:
*indexout = index + 1;
return 1;
case 0x2f68:
*indexout = index + 1;
return 1;
case 0x2f69:
*indexout = index + 1;
return 1;
case 0x2f6a:
*indexout = index + 1;
return 1;
case 0x2f6b:
*indexout = index + 1;
return 1;
case 0x2f6c:
*indexout = index + 1;
return 1;
case 0x2f6d:
*indexout = index + 1;
return 1;
case 0x2f6e:
*indexout = index + 1;
return 1;
case 0x2f6f:
*indexout = index + 1;
return 1;
case 0x2f70:
*indexout = index + 1;
return 1;
case 0x2f71:
*indexout = index + 1;
return 1;
case 0x2f72:
*indexout = index + 1;
return 1;
case 0x2f73:
*indexout = index + 1;
return 1;
case 0x2f74:
*indexout = index + 1;
return 1;
case 0x2f75:
*indexout = index + 1;
return 1;
case 0x2f76:
*indexout = index + 1;
return 1;
case 0x2f77:
*indexout = index + 1;
return 1;
case 0x2f78:
*indexout = index + 1;
return 1;
case 0x2f79:
*indexout = index + 1;
return 1;
case 0x2f7a:
*indexout = index + 1;
return 1;
case 0x2f7b:
*indexout = index + 1;
return 1;
case 0x2f7c:
*indexout = index + 1;
return 1;
case 0x2f7d:
*indexout = index + 1;
return 1;
case 0x2f7e:
*indexout = index + 1;
return 1;
case 0x2f7f:
*indexout = index + 1;
return 1;
case 0x2f80:
*indexout = index + 1;
return 1;
case 0x2f81:
*indexout = index + 1;
return 1;
case 0x2f82:
*indexout = index + 1;
return 1;
case 0x2f83:
*indexout = index + 1;
return 1;
case 0x2f84:
*indexout = index + 1;
return 1;
case 0x2f85:
*indexout = index + 1;
return 1;
case 0x2f86:
*indexout = index + 1;
return 1;
case 0x2f87:
*indexout = index + 1;
return 1;
case 0x2f88:
*indexout = index + 1;
return 1;
case 0x2f89:
*indexout = index + 1;
return 1;
case 0x2f8a:
*indexout = index + 1;
return 1;
case 0x2f8b:
*indexout = index + 1;
return 1;
case 0x2f8c:
*indexout = index + 1;
return 1;
case 0x2f8d:
*indexout = index + 1;
return 1;
case 0x2f8e:
*indexout = index + 1;
return 1;
case 0x2f8f:
*indexout = index + 1;
return 1;
case 0x2f90:
*indexout = index + 1;
return 1;
case 0x2f91:
*indexout = index + 1;
return 1;
case 0x2f92:
*indexout = index + 1;
return 1;
case 0x2f93:
*indexout = index + 1;
return 1;
case 0x2f94:
*indexout = index + 1;
return 1;
case 0x2f95:
*indexout = index + 1;
return 1;
case 0x2f96:
*indexout = index + 1;
return 1;
case 0x2f97:
*indexout = index + 1;
return 1;
case 0x2f98:
*indexout = index + 1;
return 1;
case 0x2f99:
*indexout = index + 1;
return 1;
case 0x2f9a:
*indexout = index + 1;
return 1;
case 0x2f9b:
*indexout = index + 1;
return 1;
case 0x2f9c:
*indexout = index + 1;
return 1;
case 0x2f9d:
*indexout = index + 1;
return 1;
case 0x2f9e:
*indexout = index + 1;
return 1;
case 0x2f9f:
*indexout = index + 1;
return 1;
case 0x2fa0:
*indexout = index + 1;
return 1;
case 0x2fa1:
*indexout = index + 1;
return 1;
case 0x2fa2:
*indexout = index + 1;
return 1;
case 0x2fa3:
*indexout = index + 1;
return 1;
case 0x2fa4:
*indexout = index + 1;
return 1;
case 0x2fa5:
*indexout = index + 1;
return 1;
case 0x2fa6:
*indexout = index + 1;
return 1;
case 0x2fa7:
*indexout = index + 1;
return 1;
case 0x2fa8:
*indexout = index + 1;
return 1;
case 0x2fa9:
*indexout = index + 1;
return 1;
case 0x2faa:
*indexout = index + 1;
return 1;
case 0x2fab:
*indexout = index + 1;
return 1;
case 0x2fac:
*indexout = index + 1;
return 1;
case 0x2fad:
*indexout = index + 1;
return 1;
case 0x2fae:
*indexout = index + 1;
return 1;
case 0x2faf:
*indexout = index + 1;
return 1;
case 0x2fb0:
*indexout = index + 1;
return 1;
case 0x2fb1:
*indexout = index + 1;
return 1;
case 0x2fb2:
*indexout = index + 1;
return 1;
case 0x2fb3:
*indexout = index + 1;
return 1;
case 0x2fb4:
*indexout = index + 1;
return 1;
case 0x2fb5:
*indexout = index + 1;
return 1;
case 0x2fb6:
*indexout = index + 1;
return 1;
case 0x2fb7:
*indexout = index + 1;
return 1;
case 0x2fb8:
*indexout = index + 1;
return 1;
case 0x2fb9:
*indexout = index + 1;
return 1;
case 0x2fba:
*indexout = index + 1;
return 1;
case 0x2fbb:
*indexout = index + 1;
return 1;
case 0x2fbc:
*indexout = index + 1;
return 1;
case 0x2fbd:
*indexout = index + 1;
return 1;
case 0x2fbe:
*indexout = index + 1;
return 1;
case 0x2fbf:
*indexout = index + 1;
return 1;
case 0x2fc0:
*indexout = index + 1;
return 1;
case 0x2fc1:
*indexout = index + 1;
return 1;
case 0x2fc2:
*indexout = index + 1;
return 1;
case 0x2fc3:
*indexout = index + 1;
return 1;
case 0x2fc4:
*indexout = index + 1;
return 1;
case 0x2fc5:
*indexout = index + 1;
return 1;
case 0x2fc6:
*indexout = index + 1;
return 1;
case 0x2fc7:
*indexout = index + 1;
return 1;
case 0x2fc8:
*indexout = index + 1;
return 1;
case 0x2fc9:
*indexout = index + 1;
return 1;
case 0x2fca:
*indexout = index + 1;
return 1;
case 0x2fcb:
*indexout = index + 1;
return 1;
case 0x2fcc:
*indexout = index + 1;
return 1;
case 0x2fcd:
*indexout = index + 1;
return 1;
case 0x2fce:
*indexout = index + 1;
return 1;
case 0x2fcf:
*indexout = index + 1;
return 1;
case 0x2fd0:
*indexout = index + 1;
return 1;
case 0x2fd1:
*indexout = index + 1;
return 1;
case 0x2fd2:
*indexout = index + 1;
return 1;
case 0x2fd3:
*indexout = index + 1;
return 1;
case 0x2fd4:
*indexout = index + 1;
return 1;
case 0x2fd5:
*indexout = index + 1;
return 1;
case 0x3000:
*indexout = index + 1;
return 1;
case 0x3036:
*indexout = index + 1;
return 1;
case 0x3038:
*indexout = index + 1;
return 1;
case 0x3039:
*indexout = index + 1;
return 1;
case 0x303a:
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
case 0x309b:
*indexout = index + 2;
return 2;
case 0x309c:
*indexout = index + 2;
return 2;
case 0x309e:
*indexout = index + 1;
return 1;
case 0x309f:
*indexout = index + 2;
return 2;
case 0x30ac:
*indexout = index + 1;
return 1;
case 0x30ae:
*indexout = index + 1;
return 1;
case 0x30b0:
*indexout = index + 1;
return 1;
case 0x30b2:
*indexout = index + 1;
return 1;
case 0x30b4:
*indexout = index + 1;
return 1;
case 0x30b6:
*indexout = index + 1;
return 1;
case 0x30b8:
*indexout = index + 1;
return 1;
case 0x30ba:
*indexout = index + 1;
return 1;
case 0x30bc:
*indexout = index + 1;
return 1;
case 0x30be:
*indexout = index + 1;
return 1;
case 0x30c0:
*indexout = index + 1;
return 1;
case 0x30c2:
*indexout = index + 1;
return 1;
case 0x30c5:
*indexout = index + 1;
return 1;
case 0x30c7:
*indexout = index + 1;
return 1;
case 0x30c9:
*indexout = index + 1;
return 1;
case 0x30d0:
*indexout = index + 1;
return 1;
case 0x30d1:
*indexout = index + 1;
return 1;
case 0x30d3:
*indexout = index + 1;
return 1;
case 0x30d4:
*indexout = index + 1;
return 1;
case 0x30d6:
*indexout = index + 1;
return 1;
case 0x30d7:
*indexout = index + 1;
return 1;
case 0x30d9:
*indexout = index + 1;
return 1;
case 0x30da:
*indexout = index + 1;
return 1;
case 0x30dc:
*indexout = index + 1;
return 1;
case 0x30dd:
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
case 0x30fe:
*indexout = index + 1;
return 1;
case 0x30ff:
*indexout = index + 2;
return 2;
case 0x3131:
*indexout = index + 1;
return 1;
case 0x3132:
*indexout = index + 1;
return 1;
case 0x3133:
*indexout = index + 1;
return 1;
case 0x3134:
*indexout = index + 1;
return 1;
case 0x3135:
*indexout = index + 1;
return 1;
case 0x3136:
*indexout = index + 1;
return 1;
case 0x3137:
*indexout = index + 1;
return 1;
case 0x3138:
*indexout = index + 1;
return 1;
case 0x3139:
*indexout = index + 1;
return 1;
case 0x313a:
*indexout = index + 1;
return 1;
case 0x313b:
*indexout = index + 1;
return 1;
case 0x313c:
*indexout = index + 1;
return 1;
case 0x313d:
*indexout = index + 1;
return 1;
case 0x313e:
*indexout = index + 1;
return 1;
case 0x313f:
*indexout = index + 1;
return 1;
case 0x3140:
*indexout = index + 1;
return 1;
case 0x3141:
*indexout = index + 1;
return 1;
case 0x3142:
*indexout = index + 1;
return 1;
case 0x3143:
*indexout = index + 1;
return 1;
case 0x3144:
*indexout = index + 1;
return 1;
case 0x3145:
*indexout = index + 1;
return 1;
case 0x3146:
*indexout = index + 1;
return 1;
case 0x3147:
*indexout = index + 1;
return 1;
case 0x3148:
*indexout = index + 1;
return 1;
case 0x3149:
*indexout = index + 1;
return 1;
case 0x314a:
*indexout = index + 1;
return 1;
case 0x314b:
*indexout = index + 1;
return 1;
case 0x314c:
*indexout = index + 1;
return 1;
case 0x314d:
*indexout = index + 1;
return 1;
case 0x314e:
*indexout = index + 1;
return 1;
case 0x314f:
*indexout = index + 1;
return 1;
case 0x3150:
*indexout = index + 1;
return 1;
case 0x3151:
*indexout = index + 1;
return 1;
case 0x3152:
*indexout = index + 1;
return 1;
case 0x3153:
*indexout = index + 1;
return 1;
case 0x3154:
*indexout = index + 1;
return 1;
case 0x3155:
*indexout = index + 1;
return 1;
case 0x3156:
*indexout = index + 1;
return 1;
case 0x3157:
*indexout = index + 1;
return 1;
case 0x3158:
*indexout = index + 1;
return 1;
case 0x3159:
*indexout = index + 1;
return 1;
case 0x315a:
*indexout = index + 1;
return 1;
case 0x315b:
*indexout = index + 1;
return 1;
case 0x315c:
*indexout = index + 1;
return 1;
case 0x315d:
*indexout = index + 1;
return 1;
case 0x315e:
*indexout = index + 1;
return 1;
case 0x315f:
*indexout = index + 1;
return 1;
case 0x3160:
*indexout = index + 1;
return 1;
case 0x3161:
*indexout = index + 1;
return 1;
case 0x3162:
*indexout = index + 1;
return 1;
case 0x3163:
*indexout = index + 1;
return 1;
case 0x3164:
*indexout = index + 1;
return 1;
case 0x3165:
*indexout = index + 1;
return 1;
case 0x3166:
*indexout = index + 1;
return 1;
case 0x3167:
*indexout = index + 1;
return 1;
case 0x3168:
*indexout = index + 1;
return 1;
case 0x3169:
*indexout = index + 1;
return 1;
case 0x316a:
*indexout = index + 1;
return 1;
case 0x316b:
*indexout = index + 1;
return 1;
case 0x316c:
*indexout = index + 1;
return 1;
case 0x316d:
*indexout = index + 1;
return 1;
case 0x316e:
*indexout = index + 1;
return 1;
case 0x316f:
*indexout = index + 1;
return 1;
case 0x3170:
*indexout = index + 1;
return 1;
case 0x3171:
*indexout = index + 1;
return 1;
case 0x3172:
*indexout = index + 1;
return 1;
case 0x3173:
*indexout = index + 1;
return 1;
case 0x3174:
*indexout = index + 1;
return 1;
case 0x3175:
*indexout = index + 1;
return 1;
case 0x3176:
*indexout = index + 1;
return 1;
case 0x3177:
*indexout = index + 1;
return 1;
case 0x3178:
*indexout = index + 1;
return 1;
case 0x3179:
*indexout = index + 1;
return 1;
case 0x317a:
*indexout = index + 1;
return 1;
case 0x317b:
*indexout = index + 1;
return 1;
case 0x317c:
*indexout = index + 1;
return 1;
case 0x317d:
*indexout = index + 1;
return 1;
case 0x317e:
*indexout = index + 1;
return 1;
case 0x317f:
*indexout = index + 1;
return 1;
case 0x3180:
*indexout = index + 1;
return 1;
case 0x3181:
*indexout = index + 1;
return 1;
case 0x3182:
*indexout = index + 1;
return 1;
case 0x3183:
*indexout = index + 1;
return 1;
case 0x3184:
*indexout = index + 1;
return 1;
case 0x3185:
*indexout = index + 1;
return 1;
case 0x3186:
*indexout = index + 1;
return 1;
case 0x3187:
*indexout = index + 1;
return 1;
case 0x3188:
*indexout = index + 1;
return 1;
case 0x3189:
*indexout = index + 1;
return 1;
case 0x318a:
*indexout = index + 1;
return 1;
case 0x318b:
*indexout = index + 1;
return 1;
case 0x318c:
*indexout = index + 1;
return 1;
case 0x318d:
*indexout = index + 1;
return 1;
case 0x318e:
*indexout = index + 1;
return 1;
case 0x3192:
*indexout = index + 1;
return 1;
case 0x3193:
*indexout = index + 1;
return 1;
case 0x3194:
*indexout = index + 1;
return 1;
case 0x3195:
*indexout = index + 1;
return 1;
case 0x3196:
*indexout = index + 1;
return 1;
case 0x3197:
*indexout = index + 1;
return 1;
case 0x3198:
*indexout = index + 1;
return 1;
case 0x3199:
*indexout = index + 1;
return 1;
case 0x319a:
*indexout = index + 1;
return 1;
case 0x319b:
*indexout = index + 1;
return 1;
case 0x319c:
*indexout = index + 1;
return 1;
case 0x319d:
*indexout = index + 1;
return 1;
case 0x319e:
*indexout = index + 1;
return 1;
case 0x319f:
*indexout = index + 1;
return 1;
case 0x3200:
*indexout = index + 3;
return 3;
case 0x3201:
*indexout = index + 3;
return 3;
case 0x3202:
*indexout = index + 3;
return 3;
case 0x3203:
*indexout = index + 3;
return 3;
case 0x3204:
*indexout = index + 3;
return 3;
case 0x3205:
*indexout = index + 3;
return 3;
case 0x3206:
*indexout = index + 3;
return 3;
case 0x3207:
*indexout = index + 3;
return 3;
case 0x3208:
*indexout = index + 3;
return 3;
case 0x3209:
*indexout = index + 3;
return 3;
case 0x320a:
*indexout = index + 3;
return 3;
case 0x320b:
*indexout = index + 3;
return 3;
case 0x320c:
*indexout = index + 3;
return 3;
case 0x320d:
*indexout = index + 3;
return 3;
case 0x320e:
*indexout = index + 3;
return 3;
case 0x320f:
*indexout = index + 3;
return 3;
case 0x3210:
*indexout = index + 3;
return 3;
case 0x3211:
*indexout = index + 3;
return 3;
case 0x3212:
*indexout = index + 3;
return 3;
case 0x3213:
*indexout = index + 3;
return 3;
case 0x3214:
*indexout = index + 3;
return 3;
case 0x3215:
*indexout = index + 3;
return 3;
case 0x3216:
*indexout = index + 3;
return 3;
case 0x3217:
*indexout = index + 3;
return 3;
case 0x3218:
*indexout = index + 3;
return 3;
case 0x3219:
*indexout = index + 3;
return 3;
case 0x321a:
*indexout = index + 3;
return 3;
case 0x321b:
*indexout = index + 3;
return 3;
case 0x321c:
*indexout = index + 3;
return 3;
case 0x321d:
*indexout = index + 4;
return 4;
case 0x321e:
*indexout = index + 4;
return 4;
case 0x3220:
*indexout = index + 3;
return 3;
case 0x3221:
*indexout = index + 3;
return 3;
case 0x3222:
*indexout = index + 3;
return 3;
case 0x3223:
*indexout = index + 3;
return 3;
case 0x3224:
*indexout = index + 3;
return 3;
case 0x3225:
*indexout = index + 3;
return 3;
case 0x3226:
*indexout = index + 3;
return 3;
case 0x3227:
*indexout = index + 3;
return 3;
case 0x3228:
*indexout = index + 3;
return 3;
case 0x3229:
*indexout = index + 3;
return 3;
case 0x322a:
*indexout = index + 3;
return 3;
case 0x322b:
*indexout = index + 3;
return 3;
case 0x322c:
*indexout = index + 3;
return 3;
case 0x322d:
*indexout = index + 3;
return 3;
case 0x322e:
*indexout = index + 3;
return 3;
case 0x322f:
*indexout = index + 3;
return 3;
case 0x3230:
*indexout = index + 3;
return 3;
case 0x3231:
*indexout = index + 3;
return 3;
case 0x3232:
*indexout = index + 3;
return 3;
case 0x3233:
*indexout = index + 3;
return 3;
case 0x3234:
*indexout = index + 3;
return 3;
case 0x3235:
*indexout = index + 3;
return 3;
case 0x3236:
*indexout = index + 3;
return 3;
case 0x3237:
*indexout = index + 3;
return 3;
case 0x3238:
*indexout = index + 3;
return 3;
case 0x3239:
*indexout = index + 3;
return 3;
case 0x323a:
*indexout = index + 3;
return 3;
case 0x323b:
*indexout = index + 3;
return 3;
case 0x323c:
*indexout = index + 3;
return 3;
case 0x323d:
*indexout = index + 3;
return 3;
case 0x323e:
*indexout = index + 3;
return 3;
case 0x323f:
*indexout = index + 3;
return 3;
case 0x3240:
*indexout = index + 3;
return 3;
case 0x3241:
*indexout = index + 3;
return 3;
case 0x3242:
*indexout = index + 3;
return 3;
case 0x3243:
*indexout = index + 3;
return 3;
case 0x3244:
*indexout = index + 1;
return 1;
case 0x3245:
*indexout = index + 1;
return 1;
case 0x3246:
*indexout = index + 1;
return 1;
case 0x3247:
*indexout = index + 1;
return 1;
case 0x3250:
*indexout = index + 3;
return 3;
case 0x3251:
*indexout = index + 2;
return 2;
case 0x3252:
*indexout = index + 2;
return 2;
case 0x3253:
*indexout = index + 2;
return 2;
case 0x3254:
*indexout = index + 2;
return 2;
case 0x3255:
*indexout = index + 2;
return 2;
case 0x3256:
*indexout = index + 2;
return 2;
case 0x3257:
*indexout = index + 2;
return 2;
case 0x3258:
*indexout = index + 2;
return 2;
case 0x3259:
*indexout = index + 2;
return 2;
case 0x325a:
*indexout = index + 2;
return 2;
case 0x325b:
*indexout = index + 2;
return 2;
case 0x325c:
*indexout = index + 2;
return 2;
case 0x325d:
*indexout = index + 2;
return 2;
case 0x325e:
*indexout = index + 2;
return 2;
case 0x325f:
*indexout = index + 2;
return 2;
case 0x3260:
*indexout = index + 1;
return 1;
case 0x3261:
*indexout = index + 1;
return 1;
case 0x3262:
*indexout = index + 1;
return 1;
case 0x3263:
*indexout = index + 1;
return 1;
case 0x3264:
*indexout = index + 1;
return 1;
case 0x3265:
*indexout = index + 1;
return 1;
case 0x3266:
*indexout = index + 1;
return 1;
case 0x3267:
*indexout = index + 1;
return 1;
case 0x3268:
*indexout = index + 1;
return 1;
case 0x3269:
*indexout = index + 1;
return 1;
case 0x326a:
*indexout = index + 1;
return 1;
case 0x326b:
*indexout = index + 1;
return 1;
case 0x326c:
*indexout = index + 1;
return 1;
case 0x326d:
*indexout = index + 1;
return 1;
case 0x326e:
*indexout = index + 1;
return 1;
case 0x326f:
*indexout = index + 1;
return 1;
case 0x3270:
*indexout = index + 1;
return 1;
case 0x3271:
*indexout = index + 1;
return 1;
case 0x3272:
*indexout = index + 1;
return 1;
case 0x3273:
*indexout = index + 1;
return 1;
case 0x3274:
*indexout = index + 1;
return 1;
case 0x3275:
*indexout = index + 1;
return 1;
case 0x3276:
*indexout = index + 1;
return 1;
case 0x3277:
*indexout = index + 1;
return 1;
case 0x3278:
*indexout = index + 1;
return 1;
case 0x3279:
*indexout = index + 1;
return 1;
case 0x327a:
*indexout = index + 1;
return 1;
case 0x327b:
*indexout = index + 1;
return 1;
case 0x327c:
*indexout = index + 2;
return 2;
case 0x327d:
*indexout = index + 2;
return 2;
case 0x327e:
*indexout = index + 1;
return 1;
case 0x3280:
*indexout = index + 1;
return 1;
case 0x3281:
*indexout = index + 1;
return 1;
case 0x3282:
*indexout = index + 1;
return 1;
case 0x3283:
*indexout = index + 1;
return 1;
case 0x3284:
*indexout = index + 1;
return 1;
case 0x3285:
*indexout = index + 1;
return 1;
case 0x3286:
*indexout = index + 1;
return 1;
case 0x3287:
*indexout = index + 1;
return 1;
case 0x3288:
*indexout = index + 1;
return 1;
case 0x3289:
*indexout = index + 1;
return 1;
case 0x328a:
*indexout = index + 1;
return 1;
case 0x328b:
*indexout = index + 1;
return 1;
case 0x328c:
*indexout = index + 1;
return 1;
case 0x328d:
*indexout = index + 1;
return 1;
case 0x328e:
*indexout = index + 1;
return 1;
case 0x328f:
*indexout = index + 1;
return 1;
case 0x3290:
*indexout = index + 1;
return 1;
case 0x3291:
*indexout = index + 1;
return 1;
case 0x3292:
*indexout = index + 1;
return 1;
case 0x3293:
*indexout = index + 1;
return 1;
case 0x3294:
*indexout = index + 1;
return 1;
case 0x3295:
*indexout = index + 1;
return 1;
case 0x3296:
*indexout = index + 1;
return 1;
case 0x3297:
*indexout = index + 1;
return 1;
case 0x3298:
*indexout = index + 1;
return 1;
case 0x3299:
*indexout = index + 1;
return 1;
case 0x329a:
*indexout = index + 1;
return 1;
case 0x329b:
*indexout = index + 1;
return 1;
case 0x329c:
*indexout = index + 1;
return 1;
case 0x329d:
*indexout = index + 1;
return 1;
case 0x329e:
*indexout = index + 1;
return 1;
case 0x329f:
*indexout = index + 1;
return 1;
case 0x32a0:
*indexout = index + 1;
return 1;
case 0x32a1:
*indexout = index + 1;
return 1;
case 0x32a2:
*indexout = index + 1;
return 1;
case 0x32a3:
*indexout = index + 1;
return 1;
case 0x32a4:
*indexout = index + 1;
return 1;
case 0x32a5:
*indexout = index + 1;
return 1;
case 0x32a6:
*indexout = index + 1;
return 1;
case 0x32a7:
*indexout = index + 1;
return 1;
case 0x32a8:
*indexout = index + 1;
return 1;
case 0x32a9:
*indexout = index + 1;
return 1;
case 0x32aa:
*indexout = index + 1;
return 1;
case 0x32ab:
*indexout = index + 1;
return 1;
case 0x32ac:
*indexout = index + 1;
return 1;
case 0x32ad:
*indexout = index + 1;
return 1;
case 0x32ae:
*indexout = index + 1;
return 1;
case 0x32af:
*indexout = index + 1;
return 1;
case 0x32b0:
*indexout = index + 1;
return 1;
case 0x32b1:
*indexout = index + 2;
return 2;
case 0x32b2:
*indexout = index + 2;
return 2;
case 0x32b3:
*indexout = index + 2;
return 2;
case 0x32b4:
*indexout = index + 2;
return 2;
case 0x32b5:
*indexout = index + 2;
return 2;
case 0x32b6:
*indexout = index + 2;
return 2;
case 0x32b7:
*indexout = index + 2;
return 2;
case 0x32b8:
*indexout = index + 2;
return 2;
case 0x32b9:
*indexout = index + 2;
return 2;
case 0x32ba:
*indexout = index + 2;
return 2;
case 0x32bb:
*indexout = index + 2;
return 2;
case 0x32bc:
*indexout = index + 2;
return 2;
case 0x32bd:
*indexout = index + 2;
return 2;
case 0x32be:
*indexout = index + 2;
return 2;
case 0x32bf:
*indexout = index + 2;
return 2;
case 0x32c0:
*indexout = index + 2;
return 2;
case 0x32c1:
*indexout = index + 2;
return 2;
case 0x32c2:
*indexout = index + 2;
return 2;
case 0x32c3:
*indexout = index + 2;
return 2;
case 0x32c4:
*indexout = index + 2;
return 2;
case 0x32c5:
*indexout = index + 2;
return 2;
case 0x32c6:
*indexout = index + 2;
return 2;
case 0x32c7:
*indexout = index + 2;
return 2;
case 0x32c8:
*indexout = index + 2;
return 2;
case 0x32c9:
*indexout = index + 3;
return 3;
case 0x32ca:
*indexout = index + 3;
return 3;
case 0x32cb:
*indexout = index + 3;
return 3;
case 0x32cc:
*indexout = index + 2;
return 2;
case 0x32cd:
*indexout = index + 3;
return 3;
case 0x32ce:
*indexout = index + 2;
return 2;
case 0x32cf:
*indexout = index + 3;
return 3;
case 0x32d0:
*indexout = index + 1;
return 1;
case 0x32d1:
*indexout = index + 1;
return 1;
case 0x32d2:
*indexout = index + 1;
return 1;
case 0x32d3:
*indexout = index + 1;
return 1;
case 0x32d4:
*indexout = index + 1;
return 1;
case 0x32d5:
*indexout = index + 1;
return 1;
case 0x32d6:
*indexout = index + 1;
return 1;
case 0x32d7:
*indexout = index + 1;
return 1;
case 0x32d8:
*indexout = index + 1;
return 1;
case 0x32d9:
*indexout = index + 1;
return 1;
case 0x32da:
*indexout = index + 1;
return 1;
case 0x32db:
*indexout = index + 1;
return 1;
case 0x32dc:
*indexout = index + 1;
return 1;
case 0x32dd:
*indexout = index + 1;
return 1;
case 0x32de:
*indexout = index + 1;
return 1;
case 0x32df:
*indexout = index + 1;
return 1;
case 0x32e0:
*indexout = index + 1;
return 1;
case 0x32e1:
*indexout = index + 1;
return 1;
case 0x32e2:
*indexout = index + 1;
return 1;
case 0x32e3:
*indexout = index + 1;
return 1;
case 0x32e4:
*indexout = index + 1;
return 1;
case 0x32e5:
*indexout = index + 1;
return 1;
case 0x32e6:
*indexout = index + 1;
return 1;
case 0x32e7:
*indexout = index + 1;
return 1;
case 0x32e8:
*indexout = index + 1;
return 1;
case 0x32e9:
*indexout = index + 1;
return 1;
case 0x32ea:
*indexout = index + 1;
return 1;
case 0x32eb:
*indexout = index + 1;
return 1;
case 0x32ec:
*indexout = index + 1;
return 1;
case 0x32ed:
*indexout = index + 1;
return 1;
case 0x32ee:
*indexout = index + 1;
return 1;
case 0x32ef:
*indexout = index + 1;
return 1;
case 0x32f0:
*indexout = index + 1;
return 1;
case 0x32f1:
*indexout = index + 1;
return 1;
case 0x32f2:
*indexout = index + 1;
return 1;
case 0x32f3:
*indexout = index + 1;
return 1;
case 0x32f4:
*indexout = index + 1;
return 1;
case 0x32f5:
*indexout = index + 1;
return 1;
case 0x32f6:
*indexout = index + 1;
return 1;
case 0x32f7:
*indexout = index + 1;
return 1;
case 0x32f8:
*indexout = index + 1;
return 1;
case 0x32f9:
*indexout = index + 1;
return 1;
case 0x32fa:
*indexout = index + 1;
return 1;
case 0x32fb:
*indexout = index + 1;
return 1;
case 0x32fc:
*indexout = index + 1;
return 1;
case 0x32fd:
*indexout = index + 1;
return 1;
case 0x32fe:
*indexout = index + 1;
return 1;
case 0x3300:
*indexout = index + 4;
return 4;
case 0x3301:
*indexout = index + 4;
return 4;
case 0x3302:
*indexout = index + 4;
return 4;
case 0x3303:
*indexout = index + 3;
return 3;
case 0x3304:
*indexout = index + 4;
return 4;
case 0x3305:
*indexout = index + 3;
return 3;
case 0x3306:
*indexout = index + 3;
return 3;
case 0x3307:
*indexout = index + 5;
return 5;
case 0x3308:
*indexout = index + 4;
return 4;
case 0x3309:
*indexout = index + 3;
return 3;
case 0x330a:
*indexout = index + 3;
return 3;
case 0x330b:
*indexout = index + 3;
return 3;
case 0x330c:
*indexout = index + 4;
return 4;
case 0x330d:
*indexout = index + 4;
return 4;
case 0x330e:
*indexout = index + 3;
return 3;
case 0x330f:
*indexout = index + 3;
return 3;
case 0x3310:
*indexout = index + 2;
return 2;
case 0x3311:
*indexout = index + 3;
return 3;
case 0x3312:
*indexout = index + 4;
return 4;
case 0x3313:
*indexout = index + 4;
return 4;
case 0x3314:
*indexout = index + 2;
return 2;
case 0x3315:
*indexout = index + 5;
return 5;
case 0x3316:
*indexout = index + 6;
return 6;
case 0x3317:
*indexout = index + 5;
return 5;
case 0x3318:
*indexout = index + 3;
return 3;
case 0x3319:
*indexout = index + 5;
return 5;
case 0x331a:
*indexout = index + 5;
return 5;
case 0x331b:
*indexout = index + 4;
return 4;
case 0x331c:
*indexout = index + 3;
return 3;
case 0x331d:
*indexout = index + 3;
return 3;
case 0x331e:
*indexout = index + 3;
return 3;
case 0x331f:
*indexout = index + 4;
return 4;
case 0x3320:
*indexout = index + 5;
return 5;
case 0x3321:
*indexout = index + 4;
return 4;
case 0x3322:
*indexout = index + 3;
return 3;
case 0x3323:
*indexout = index + 3;
return 3;
case 0x3324:
*indexout = index + 3;
return 3;
case 0x3325:
*indexout = index + 2;
return 2;
case 0x3326:
*indexout = index + 2;
return 2;
case 0x3327:
*indexout = index + 2;
return 2;
case 0x3328:
*indexout = index + 2;
return 2;
case 0x3329:
*indexout = index + 3;
return 3;
case 0x332a:
*indexout = index + 3;
return 3;
case 0x332b:
*indexout = index + 5;
return 5;
case 0x332c:
*indexout = index + 3;
return 3;
case 0x332d:
*indexout = index + 4;
return 4;
case 0x332e:
*indexout = index + 5;
return 5;
case 0x332f:
*indexout = index + 3;
return 3;
case 0x3330:
*indexout = index + 2;
return 2;
case 0x3331:
*indexout = index + 2;
return 2;
case 0x3332:
*indexout = index + 5;
return 5;
case 0x3333:
*indexout = index + 4;
return 4;
case 0x3334:
*indexout = index + 5;
return 5;
case 0x3335:
*indexout = index + 3;
return 3;
case 0x3336:
*indexout = index + 5;
return 5;
case 0x3337:
*indexout = index + 2;
return 2;
case 0x3338:
*indexout = index + 3;
return 3;
case 0x3339:
*indexout = index + 3;
return 3;
case 0x333a:
*indexout = index + 3;
return 3;
case 0x333b:
*indexout = index + 3;
return 3;
case 0x333c:
*indexout = index + 3;
return 3;
case 0x333d:
*indexout = index + 4;
return 4;
case 0x333e:
*indexout = index + 3;
return 3;
case 0x333f:
*indexout = index + 2;
return 2;
case 0x3340:
*indexout = index + 3;
return 3;
case 0x3341:
*indexout = index + 3;
return 3;
case 0x3342:
*indexout = index + 3;
return 3;
case 0x3343:
*indexout = index + 4;
return 4;
case 0x3344:
*indexout = index + 3;
return 3;
case 0x3345:
*indexout = index + 3;
return 3;
case 0x3346:
*indexout = index + 3;
return 3;
case 0x3347:
*indexout = index + 5;
return 5;
case 0x3348:
*indexout = index + 4;
return 4;
case 0x3349:
*indexout = index + 2;
return 2;
case 0x334a:
*indexout = index + 5;
return 5;
case 0x334b:
*indexout = index + 2;
return 2;
case 0x334c:
*indexout = index + 4;
return 4;
case 0x334d:
*indexout = index + 4;
return 4;
case 0x334e:
*indexout = index + 3;
return 3;
case 0x334f:
*indexout = index + 3;
return 3;
case 0x3350:
*indexout = index + 3;
return 3;
case 0x3351:
*indexout = index + 4;
return 4;
case 0x3352:
*indexout = index + 2;
return 2;
case 0x3353:
*indexout = index + 3;
return 3;
case 0x3354:
*indexout = index + 4;
return 4;
case 0x3355:
*indexout = index + 2;
return 2;
case 0x3356:
*indexout = index + 5;
return 5;
case 0x3357:
*indexout = index + 3;
return 3;
case 0x3358:
*indexout = index + 2;
return 2;
case 0x3359:
*indexout = index + 2;
return 2;
case 0x335a:
*indexout = index + 2;
return 2;
case 0x335b:
*indexout = index + 2;
return 2;
case 0x335c:
*indexout = index + 2;
return 2;
case 0x335d:
*indexout = index + 2;
return 2;
case 0x335e:
*indexout = index + 2;
return 2;
case 0x335f:
*indexout = index + 2;
return 2;
case 0x3360:
*indexout = index + 2;
return 2;
case 0x3361:
*indexout = index + 2;
return 2;
case 0x3362:
*indexout = index + 3;
return 3;
case 0x3363:
*indexout = index + 3;
return 3;
case 0x3364:
*indexout = index + 3;
return 3;
case 0x3365:
*indexout = index + 3;
return 3;
case 0x3366:
*indexout = index + 3;
return 3;
case 0x3367:
*indexout = index + 3;
return 3;
case 0x3368:
*indexout = index + 3;
return 3;
case 0x3369:
*indexout = index + 3;
return 3;
case 0x336a:
*indexout = index + 3;
return 3;
case 0x336b:
*indexout = index + 3;
return 3;
case 0x336c:
*indexout = index + 3;
return 3;
case 0x336d:
*indexout = index + 3;
return 3;
case 0x336e:
*indexout = index + 3;
return 3;
case 0x336f:
*indexout = index + 3;
return 3;
case 0x3370:
*indexout = index + 3;
return 3;
case 0x3371:
*indexout = index + 3;
return 3;
case 0x3372:
*indexout = index + 2;
return 2;
case 0x3373:
*indexout = index + 2;
return 2;
case 0x3374:
*indexout = index + 3;
return 3;
case 0x3375:
*indexout = index + 2;
return 2;
case 0x3376:
*indexout = index + 2;
return 2;
case 0x3377:
*indexout = index + 2;
return 2;
case 0x3378:
*indexout = index + 3;
return 3;
case 0x3379:
*indexout = index + 3;
return 3;
case 0x337a:
*indexout = index + 2;
return 2;
case 0x337b:
*indexout = index + 2;
return 2;
case 0x337c:
*indexout = index + 2;
return 2;
case 0x337d:
*indexout = index + 2;
return 2;
case 0x337e:
*indexout = index + 2;
return 2;
case 0x337f:
*indexout = index + 4;
return 4;
case 0x3380:
*indexout = index + 2;
return 2;
case 0x3381:
*indexout = index + 2;
return 2;
case 0x3382:
*indexout = index + 2;
return 2;
case 0x3383:
*indexout = index + 2;
return 2;
case 0x3384:
*indexout = index + 2;
return 2;
case 0x3385:
*indexout = index + 2;
return 2;
case 0x3386:
*indexout = index + 2;
return 2;
case 0x3387:
*indexout = index + 2;
return 2;
case 0x3388:
*indexout = index + 3;
return 3;
case 0x3389:
*indexout = index + 4;
return 4;
case 0x338a:
*indexout = index + 2;
return 2;
case 0x338b:
*indexout = index + 2;
return 2;
case 0x338c:
*indexout = index + 2;
return 2;
case 0x338d:
*indexout = index + 2;
return 2;
case 0x338e:
*indexout = index + 2;
return 2;
case 0x338f:
*indexout = index + 2;
return 2;
case 0x3390:
*indexout = index + 2;
return 2;
case 0x3391:
*indexout = index + 3;
return 3;
case 0x3392:
*indexout = index + 3;
return 3;
case 0x3393:
*indexout = index + 3;
return 3;
case 0x3394:
*indexout = index + 3;
return 3;
case 0x3395:
*indexout = index + 2;
return 2;
case 0x3396:
*indexout = index + 2;
return 2;
case 0x3397:
*indexout = index + 2;
return 2;
case 0x3398:
*indexout = index + 2;
return 2;
case 0x3399:
*indexout = index + 2;
return 2;
case 0x339a:
*indexout = index + 2;
return 2;
case 0x339b:
*indexout = index + 2;
return 2;
case 0x339c:
*indexout = index + 2;
return 2;
case 0x339d:
*indexout = index + 2;
return 2;
case 0x339e:
*indexout = index + 2;
return 2;
case 0x339f:
*indexout = index + 3;
return 3;
case 0x33a0:
*indexout = index + 3;
return 3;
case 0x33a1:
*indexout = index + 2;
return 2;
case 0x33a2:
*indexout = index + 3;
return 3;
case 0x33a3:
*indexout = index + 3;
return 3;
case 0x33a4:
*indexout = index + 3;
return 3;
case 0x33a5:
*indexout = index + 2;
return 2;
case 0x33a6:
*indexout = index + 3;
return 3;
case 0x33a7:
*indexout = index + 3;
return 3;
case 0x33a8:
*indexout = index + 4;
return 4;
case 0x33a9:
*indexout = index + 2;
return 2;
case 0x33aa:
*indexout = index + 3;
return 3;
case 0x33ab:
*indexout = index + 3;
return 3;
case 0x33ac:
*indexout = index + 3;
return 3;
case 0x33ad:
*indexout = index + 3;
return 3;
case 0x33ae:
*indexout = index + 5;
return 5;
case 0x33af:
*indexout = index + 6;
return 6;
case 0x33b0:
*indexout = index + 2;
return 2;
case 0x33b1:
*indexout = index + 2;
return 2;
case 0x33b2:
*indexout = index + 2;
return 2;
case 0x33b3:
*indexout = index + 2;
return 2;
case 0x33b4:
*indexout = index + 2;
return 2;
case 0x33b5:
*indexout = index + 2;
return 2;
case 0x33b6:
*indexout = index + 2;
return 2;
case 0x33b7:
*indexout = index + 2;
return 2;
case 0x33b8:
*indexout = index + 2;
return 2;
case 0x33b9:
*indexout = index + 2;
return 2;
case 0x33ba:
*indexout = index + 2;
return 2;
case 0x33bb:
*indexout = index + 2;
return 2;
case 0x33bc:
*indexout = index + 2;
return 2;
case 0x33bd:
*indexout = index + 2;
return 2;
case 0x33be:
*indexout = index + 2;
return 2;
case 0x33bf:
*indexout = index + 2;
return 2;
case 0x33c0:
*indexout = index + 2;
return 2;
case 0x33c1:
*indexout = index + 2;
return 2;
case 0x33c2:
*indexout = index + 4;
return 4;
case 0x33c3:
*indexout = index + 2;
return 2;
case 0x33c4:
*indexout = index + 2;
return 2;
case 0x33c5:
*indexout = index + 2;
return 2;
case 0x33c6:
*indexout = index + 4;
return 4;
case 0x33c7:
*indexout = index + 3;
return 3;
case 0x33c8:
*indexout = index + 2;
return 2;
case 0x33c9:
*indexout = index + 2;
return 2;
case 0x33ca:
*indexout = index + 2;
return 2;
case 0x33cb:
*indexout = index + 2;
return 2;
case 0x33cc:
*indexout = index + 2;
return 2;
case 0x33cd:
*indexout = index + 2;
return 2;
case 0x33ce:
*indexout = index + 2;
return 2;
case 0x33cf:
*indexout = index + 2;
return 2;
case 0x33d0:
*indexout = index + 2;
return 2;
case 0x33d1:
*indexout = index + 2;
return 2;
case 0x33d2:
*indexout = index + 3;
return 3;
case 0x33d3:
*indexout = index + 2;
return 2;
case 0x33d4:
*indexout = index + 2;
return 2;
case 0x33d5:
*indexout = index + 3;
return 3;
case 0x33d6:
*indexout = index + 3;
return 3;
case 0x33d7:
*indexout = index + 2;
return 2;
case 0x33d8:
*indexout = index + 4;
return 4;
case 0x33d9:
*indexout = index + 3;
return 3;
case 0x33da:
*indexout = index + 2;
return 2;
case 0x33db:
*indexout = index + 2;
return 2;
case 0x33dc:
*indexout = index + 2;
return 2;
case 0x33dd:
*indexout = index + 2;
return 2;
case 0x33de:
*indexout = index + 3;
return 3;
case 0x33df:
*indexout = index + 3;
return 3;
case 0x33e0:
*indexout = index + 2;
return 2;
case 0x33e1:
*indexout = index + 2;
return 2;
case 0x33e2:
*indexout = index + 2;
return 2;
case 0x33e3:
*indexout = index + 2;
return 2;
case 0x33e4:
*indexout = index + 2;
return 2;
case 0x33e5:
*indexout = index + 2;
return 2;
case 0x33e6:
*indexout = index + 2;
return 2;
case 0x33e7:
*indexout = index + 2;
return 2;
case 0x33e8:
*indexout = index + 2;
return 2;
case 0x33e9:
*indexout = index + 3;
return 3;
case 0x33ea:
*indexout = index + 3;
return 3;
case 0x33eb:
*indexout = index + 3;
return 3;
case 0x33ec:
*indexout = index + 3;
return 3;
case 0x33ed:
*indexout = index + 3;
return 3;
case 0x33ee:
*indexout = index + 3;
return 3;
case 0x33ef:
*indexout = index + 3;
return 3;
case 0x33f0:
*indexout = index + 3;
return 3;
case 0x33f1:
*indexout = index + 3;
return 3;
case 0x33f2:
*indexout = index + 3;
return 3;
case 0x33f3:
*indexout = index + 3;
return 3;
case 0x33f4:
*indexout = index + 3;
return 3;
case 0x33f5:
*indexout = index + 3;
return 3;
case 0x33f6:
*indexout = index + 3;
return 3;
case 0x33f7:
*indexout = index + 3;
return 3;
case 0x33f8:
*indexout = index + 3;
return 3;
case 0x33f9:
*indexout = index + 3;
return 3;
case 0x33fa:
*indexout = index + 3;
return 3;
case 0x33fb:
*indexout = index + 3;
return 3;
case 0x33fc:
*indexout = index + 3;
return 3;
case 0x33fd:
*indexout = index + 3;
return 3;
case 0x33fe:
*indexout = index + 3;
return 3;
case 0x33ff:
*indexout = index + 3;
return 3;
case 0xa69c:
*indexout = index + 1;
return 1;
case 0xa69d:
*indexout = index + 1;
return 1;
case 0xa770:
*indexout = index + 1;
return 1;
case 0xa7f8:
*indexout = index + 1;
return 1;
case 0xa7f9:
*indexout = index + 1;
return 1;
case 0xab5c:
*indexout = index + 1;
return 1;
case 0xab5d:
*indexout = index + 1;
return 1;
case 0xab5e:
*indexout = index + 1;
return 1;
case 0xab5f:
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
case 0xf900:
*indexout = index + 1;
return 1;
case 0xf901:
*indexout = index + 1;
return 1;
case 0xf902:
*indexout = index + 1;
return 1;
case 0xf903:
*indexout = index + 1;
return 1;
case 0xf904:
*indexout = index + 1;
return 1;
case 0xf905:
*indexout = index + 1;
return 1;
case 0xf906:
*indexout = index + 1;
return 1;
case 0xf907:
*indexout = index + 1;
return 1;
case 0xf908:
*indexout = index + 1;
return 1;
case 0xf909:
*indexout = index + 1;
return 1;
case 0xf90a:
*indexout = index + 1;
return 1;
case 0xf90b:
*indexout = index + 1;
return 1;
case 0xf90c:
*indexout = index + 1;
return 1;
case 0xf90d:
*indexout = index + 1;
return 1;
case 0xf90e:
*indexout = index + 1;
return 1;
case 0xf90f:
*indexout = index + 1;
return 1;
case 0xf910:
*indexout = index + 1;
return 1;
case 0xf911:
*indexout = index + 1;
return 1;
case 0xf912:
*indexout = index + 1;
return 1;
case 0xf913:
*indexout = index + 1;
return 1;
case 0xf914:
*indexout = index + 1;
return 1;
case 0xf915:
*indexout = index + 1;
return 1;
case 0xf916:
*indexout = index + 1;
return 1;
case 0xf917:
*indexout = index + 1;
return 1;
case 0xf918:
*indexout = index + 1;
return 1;
case 0xf919:
*indexout = index + 1;
return 1;
case 0xf91a:
*indexout = index + 1;
return 1;
case 0xf91b:
*indexout = index + 1;
return 1;
case 0xf91c:
*indexout = index + 1;
return 1;
case 0xf91d:
*indexout = index + 1;
return 1;
case 0xf91e:
*indexout = index + 1;
return 1;
case 0xf91f:
*indexout = index + 1;
return 1;
case 0xf920:
*indexout = index + 1;
return 1;
case 0xf921:
*indexout = index + 1;
return 1;
case 0xf922:
*indexout = index + 1;
return 1;
case 0xf923:
*indexout = index + 1;
return 1;
case 0xf924:
*indexout = index + 1;
return 1;
case 0xf925:
*indexout = index + 1;
return 1;
case 0xf926:
*indexout = index + 1;
return 1;
case 0xf927:
*indexout = index + 1;
return 1;
case 0xf928:
*indexout = index + 1;
return 1;
case 0xf929:
*indexout = index + 1;
return 1;
case 0xf92a:
*indexout = index + 1;
return 1;
case 0xf92b:
*indexout = index + 1;
return 1;
case 0xf92c:
*indexout = index + 1;
return 1;
case 0xf92d:
*indexout = index + 1;
return 1;
case 0xf92e:
*indexout = index + 1;
return 1;
case 0xf92f:
*indexout = index + 1;
return 1;
case 0xf930:
*indexout = index + 1;
return 1;
case 0xf931:
*indexout = index + 1;
return 1;
case 0xf932:
*indexout = index + 1;
return 1;
case 0xf933:
*indexout = index + 1;
return 1;
case 0xf934:
*indexout = index + 1;
return 1;
case 0xf935:
*indexout = index + 1;
return 1;
case 0xf936:
*indexout = index + 1;
return 1;
case 0xf937:
*indexout = index + 1;
return 1;
case 0xf938:
*indexout = index + 1;
return 1;
case 0xf939:
*indexout = index + 1;
return 1;
case 0xf93a:
*indexout = index + 1;
return 1;
case 0xf93b:
*indexout = index + 1;
return 1;
case 0xf93c:
*indexout = index + 1;
return 1;
case 0xf93d:
*indexout = index + 1;
return 1;
case 0xf93e:
*indexout = index + 1;
return 1;
case 0xf93f:
*indexout = index + 1;
return 1;
case 0xf940:
*indexout = index + 1;
return 1;
case 0xf941:
*indexout = index + 1;
return 1;
case 0xf942:
*indexout = index + 1;
return 1;
case 0xf943:
*indexout = index + 1;
return 1;
case 0xf944:
*indexout = index + 1;
return 1;
case 0xf945:
*indexout = index + 1;
return 1;
case 0xf946:
*indexout = index + 1;
return 1;
case 0xf947:
*indexout = index + 1;
return 1;
case 0xf948:
*indexout = index + 1;
return 1;
case 0xf949:
*indexout = index + 1;
return 1;
case 0xf94a:
*indexout = index + 1;
return 1;
case 0xf94b:
*indexout = index + 1;
return 1;
case 0xf94c:
*indexout = index + 1;
return 1;
case 0xf94d:
*indexout = index + 1;
return 1;
case 0xf94e:
*indexout = index + 1;
return 1;
case 0xf94f:
*indexout = index + 1;
return 1;
case 0xf950:
*indexout = index + 1;
return 1;
case 0xf951:
*indexout = index + 1;
return 1;
case 0xf952:
*indexout = index + 1;
return 1;
case 0xf953:
*indexout = index + 1;
return 1;
case 0xf954:
*indexout = index + 1;
return 1;
case 0xf955:
*indexout = index + 1;
return 1;
case 0xf956:
*indexout = index + 1;
return 1;
case 0xf957:
*indexout = index + 1;
return 1;
case 0xf958:
*indexout = index + 1;
return 1;
case 0xf959:
*indexout = index + 1;
return 1;
case 0xf95a:
*indexout = index + 1;
return 1;
case 0xf95b:
*indexout = index + 1;
return 1;
case 0xf95c:
*indexout = index + 1;
return 1;
case 0xf95d:
*indexout = index + 1;
return 1;
case 0xf95e:
*indexout = index + 1;
return 1;
case 0xf95f:
*indexout = index + 1;
return 1;
case 0xf960:
*indexout = index + 1;
return 1;
case 0xf961:
*indexout = index + 1;
return 1;
case 0xf962:
*indexout = index + 1;
return 1;
case 0xf963:
*indexout = index + 1;
return 1;
case 0xf964:
*indexout = index + 1;
return 1;
case 0xf965:
*indexout = index + 1;
return 1;
case 0xf966:
*indexout = index + 1;
return 1;
case 0xf967:
*indexout = index + 1;
return 1;
case 0xf968:
*indexout = index + 1;
return 1;
case 0xf969:
*indexout = index + 1;
return 1;
case 0xf96a:
*indexout = index + 1;
return 1;
case 0xf96b:
*indexout = index + 1;
return 1;
case 0xf96c:
*indexout = index + 1;
return 1;
case 0xf96d:
*indexout = index + 1;
return 1;
case 0xf96e:
*indexout = index + 1;
return 1;
case 0xf96f:
*indexout = index + 1;
return 1;
case 0xf970:
*indexout = index + 1;
return 1;
case 0xf971:
*indexout = index + 1;
return 1;
case 0xf972:
*indexout = index + 1;
return 1;
case 0xf973:
*indexout = index + 1;
return 1;
case 0xf974:
*indexout = index + 1;
return 1;
case 0xf975:
*indexout = index + 1;
return 1;
case 0xf976:
*indexout = index + 1;
return 1;
case 0xf977:
*indexout = index + 1;
return 1;
case 0xf978:
*indexout = index + 1;
return 1;
case 0xf979:
*indexout = index + 1;
return 1;
case 0xf97a:
*indexout = index + 1;
return 1;
case 0xf97b:
*indexout = index + 1;
return 1;
case 0xf97c:
*indexout = index + 1;
return 1;
case 0xf97d:
*indexout = index + 1;
return 1;
case 0xf97e:
*indexout = index + 1;
return 1;
case 0xf97f:
*indexout = index + 1;
return 1;
case 0xf980:
*indexout = index + 1;
return 1;
case 0xf981:
*indexout = index + 1;
return 1;
case 0xf982:
*indexout = index + 1;
return 1;
case 0xf983:
*indexout = index + 1;
return 1;
case 0xf984:
*indexout = index + 1;
return 1;
case 0xf985:
*indexout = index + 1;
return 1;
case 0xf986:
*indexout = index + 1;
return 1;
case 0xf987:
*indexout = index + 1;
return 1;
case 0xf988:
*indexout = index + 1;
return 1;
case 0xf989:
*indexout = index + 1;
return 1;
case 0xf98a:
*indexout = index + 1;
return 1;
case 0xf98b:
*indexout = index + 1;
return 1;
case 0xf98c:
*indexout = index + 1;
return 1;
case 0xf98d:
*indexout = index + 1;
return 1;
case 0xf98e:
*indexout = index + 1;
return 1;
case 0xf98f:
*indexout = index + 1;
return 1;
case 0xf990:
*indexout = index + 1;
return 1;
case 0xf991:
*indexout = index + 1;
return 1;
case 0xf992:
*indexout = index + 1;
return 1;
case 0xf993:
*indexout = index + 1;
return 1;
case 0xf994:
*indexout = index + 1;
return 1;
case 0xf995:
*indexout = index + 1;
return 1;
case 0xf996:
*indexout = index + 1;
return 1;
case 0xf997:
*indexout = index + 1;
return 1;
case 0xf998:
*indexout = index + 1;
return 1;
case 0xf999:
*indexout = index + 1;
return 1;
case 0xf99a:
*indexout = index + 1;
return 1;
case 0xf99b:
*indexout = index + 1;
return 1;
case 0xf99c:
*indexout = index + 1;
return 1;
case 0xf99d:
*indexout = index + 1;
return 1;
case 0xf99e:
*indexout = index + 1;
return 1;
case 0xf99f:
*indexout = index + 1;
return 1;
case 0xf9a0:
*indexout = index + 1;
return 1;
case 0xf9a1:
*indexout = index + 1;
return 1;
case 0xf9a2:
*indexout = index + 1;
return 1;
case 0xf9a3:
*indexout = index + 1;
return 1;
case 0xf9a4:
*indexout = index + 1;
return 1;
case 0xf9a5:
*indexout = index + 1;
return 1;
case 0xf9a6:
*indexout = index + 1;
return 1;
case 0xf9a7:
*indexout = index + 1;
return 1;
case 0xf9a8:
*indexout = index + 1;
return 1;
case 0xf9a9:
*indexout = index + 1;
return 1;
case 0xf9aa:
*indexout = index + 1;
return 1;
case 0xf9ab:
*indexout = index + 1;
return 1;
case 0xf9ac:
*indexout = index + 1;
return 1;
case 0xf9ad:
*indexout = index + 1;
return 1;
case 0xf9ae:
*indexout = index + 1;
return 1;
case 0xf9af:
*indexout = index + 1;
return 1;
case 0xf9b0:
*indexout = index + 1;
return 1;
case 0xf9b1:
*indexout = index + 1;
return 1;
case 0xf9b2:
*indexout = index + 1;
return 1;
case 0xf9b3:
*indexout = index + 1;
return 1;
case 0xf9b4:
*indexout = index + 1;
return 1;
case 0xf9b5:
*indexout = index + 1;
return 1;
case 0xf9b6:
*indexout = index + 1;
return 1;
case 0xf9b7:
*indexout = index + 1;
return 1;
case 0xf9b8:
*indexout = index + 1;
return 1;
case 0xf9b9:
*indexout = index + 1;
return 1;
case 0xf9ba:
*indexout = index + 1;
return 1;
case 0xf9bb:
*indexout = index + 1;
return 1;
case 0xf9bc:
*indexout = index + 1;
return 1;
case 0xf9bd:
*indexout = index + 1;
return 1;
case 0xf9be:
*indexout = index + 1;
return 1;
case 0xf9bf:
*indexout = index + 1;
return 1;
case 0xf9c0:
*indexout = index + 1;
return 1;
case 0xf9c1:
*indexout = index + 1;
return 1;
case 0xf9c2:
*indexout = index + 1;
return 1;
case 0xf9c3:
*indexout = index + 1;
return 1;
case 0xf9c4:
*indexout = index + 1;
return 1;
case 0xf9c5:
*indexout = index + 1;
return 1;
case 0xf9c6:
*indexout = index + 1;
return 1;
case 0xf9c7:
*indexout = index + 1;
return 1;
case 0xf9c8:
*indexout = index + 1;
return 1;
case 0xf9c9:
*indexout = index + 1;
return 1;
case 0xf9ca:
*indexout = index + 1;
return 1;
case 0xf9cb:
*indexout = index + 1;
return 1;
case 0xf9cc:
*indexout = index + 1;
return 1;
case 0xf9cd:
*indexout = index + 1;
return 1;
case 0xf9ce:
*indexout = index + 1;
return 1;
case 0xf9cf:
*indexout = index + 1;
return 1;
case 0xf9d0:
*indexout = index + 1;
return 1;
case 0xf9d1:
*indexout = index + 1;
return 1;
case 0xf9d2:
*indexout = index + 1;
return 1;
case 0xf9d3:
*indexout = index + 1;
return 1;
case 0xf9d4:
*indexout = index + 1;
return 1;
case 0xf9d5:
*indexout = index + 1;
return 1;
case 0xf9d6:
*indexout = index + 1;
return 1;
case 0xf9d7:
*indexout = index + 1;
return 1;
case 0xf9d8:
*indexout = index + 1;
return 1;
case 0xf9d9:
*indexout = index + 1;
return 1;
case 0xf9da:
*indexout = index + 1;
return 1;
case 0xf9db:
*indexout = index + 1;
return 1;
case 0xf9dc:
*indexout = index + 1;
return 1;
case 0xf9dd:
*indexout = index + 1;
return 1;
case 0xf9de:
*indexout = index + 1;
return 1;
case 0xf9df:
*indexout = index + 1;
return 1;
case 0xf9e0:
*indexout = index + 1;
return 1;
case 0xf9e1:
*indexout = index + 1;
return 1;
case 0xf9e2:
*indexout = index + 1;
return 1;
case 0xf9e3:
*indexout = index + 1;
return 1;
case 0xf9e4:
*indexout = index + 1;
return 1;
case 0xf9e5:
*indexout = index + 1;
return 1;
case 0xf9e6:
*indexout = index + 1;
return 1;
case 0xf9e7:
*indexout = index + 1;
return 1;
case 0xf9e8:
*indexout = index + 1;
return 1;
case 0xf9e9:
*indexout = index + 1;
return 1;
case 0xf9ea:
*indexout = index + 1;
return 1;
case 0xf9eb:
*indexout = index + 1;
return 1;
case 0xf9ec:
*indexout = index + 1;
return 1;
case 0xf9ed:
*indexout = index + 1;
return 1;
case 0xf9ee:
*indexout = index + 1;
return 1;
case 0xf9ef:
*indexout = index + 1;
return 1;
case 0xf9f0:
*indexout = index + 1;
return 1;
case 0xf9f1:
*indexout = index + 1;
return 1;
case 0xf9f2:
*indexout = index + 1;
return 1;
case 0xf9f3:
*indexout = index + 1;
return 1;
case 0xf9f4:
*indexout = index + 1;
return 1;
case 0xf9f5:
*indexout = index + 1;
return 1;
case 0xf9f6:
*indexout = index + 1;
return 1;
case 0xf9f7:
*indexout = index + 1;
return 1;
case 0xf9f8:
*indexout = index + 1;
return 1;
case 0xf9f9:
*indexout = index + 1;
return 1;
case 0xf9fa:
*indexout = index + 1;
return 1;
case 0xf9fb:
*indexout = index + 1;
return 1;
case 0xf9fc:
*indexout = index + 1;
return 1;
case 0xf9fd:
*indexout = index + 1;
return 1;
case 0xf9fe:
*indexout = index + 1;
return 1;
case 0xf9ff:
*indexout = index + 1;
return 1;
case 0xfa00:
*indexout = index + 1;
return 1;
case 0xfa01:
*indexout = index + 1;
return 1;
case 0xfa02:
*indexout = index + 1;
return 1;
case 0xfa03:
*indexout = index + 1;
return 1;
case 0xfa04:
*indexout = index + 1;
return 1;
case 0xfa05:
*indexout = index + 1;
return 1;
case 0xfa06:
*indexout = index + 1;
return 1;
case 0xfa07:
*indexout = index + 1;
return 1;
case 0xfa08:
*indexout = index + 1;
return 1;
case 0xfa09:
*indexout = index + 1;
return 1;
case 0xfa0a:
*indexout = index + 1;
return 1;
case 0xfa0b:
*indexout = index + 1;
return 1;
case 0xfa0c:
*indexout = index + 1;
return 1;
case 0xfa0d:
*indexout = index + 1;
return 1;
case 0xfa10:
*indexout = index + 1;
return 1;
case 0xfa12:
*indexout = index + 1;
return 1;
case 0xfa15:
*indexout = index + 1;
return 1;
case 0xfa16:
*indexout = index + 1;
return 1;
case 0xfa17:
*indexout = index + 1;
return 1;
case 0xfa18:
*indexout = index + 1;
return 1;
case 0xfa19:
*indexout = index + 1;
return 1;
case 0xfa1a:
*indexout = index + 1;
return 1;
case 0xfa1b:
*indexout = index + 1;
return 1;
case 0xfa1c:
*indexout = index + 1;
return 1;
case 0xfa1d:
*indexout = index + 1;
return 1;
case 0xfa1e:
*indexout = index + 1;
return 1;
case 0xfa20:
*indexout = index + 1;
return 1;
case 0xfa22:
*indexout = index + 1;
return 1;
case 0xfa25:
*indexout = index + 1;
return 1;
case 0xfa26:
*indexout = index + 1;
return 1;
case 0xfa2a:
*indexout = index + 1;
return 1;
case 0xfa2b:
*indexout = index + 1;
return 1;
case 0xfa2c:
*indexout = index + 1;
return 1;
case 0xfa2d:
*indexout = index + 1;
return 1;
case 0xfa2e:
*indexout = index + 1;
return 1;
case 0xfa2f:
*indexout = index + 1;
return 1;
case 0xfa30:
*indexout = index + 1;
return 1;
case 0xfa31:
*indexout = index + 1;
return 1;
case 0xfa32:
*indexout = index + 1;
return 1;
case 0xfa33:
*indexout = index + 1;
return 1;
case 0xfa34:
*indexout = index + 1;
return 1;
case 0xfa35:
*indexout = index + 1;
return 1;
case 0xfa36:
*indexout = index + 1;
return 1;
case 0xfa37:
*indexout = index + 1;
return 1;
case 0xfa38:
*indexout = index + 1;
return 1;
case 0xfa39:
*indexout = index + 1;
return 1;
case 0xfa3a:
*indexout = index + 1;
return 1;
case 0xfa3b:
*indexout = index + 1;
return 1;
case 0xfa3c:
*indexout = index + 1;
return 1;
case 0xfa3d:
*indexout = index + 1;
return 1;
case 0xfa3e:
*indexout = index + 1;
return 1;
case 0xfa3f:
*indexout = index + 1;
return 1;
case 0xfa40:
*indexout = index + 1;
return 1;
case 0xfa41:
*indexout = index + 1;
return 1;
case 0xfa42:
*indexout = index + 1;
return 1;
case 0xfa43:
*indexout = index + 1;
return 1;
case 0xfa44:
*indexout = index + 1;
return 1;
case 0xfa45:
*indexout = index + 1;
return 1;
case 0xfa46:
*indexout = index + 1;
return 1;
case 0xfa47:
*indexout = index + 1;
return 1;
case 0xfa48:
*indexout = index + 1;
return 1;
case 0xfa49:
*indexout = index + 1;
return 1;
case 0xfa4a:
*indexout = index + 1;
return 1;
case 0xfa4b:
*indexout = index + 1;
return 1;
case 0xfa4c:
*indexout = index + 1;
return 1;
case 0xfa4d:
*indexout = index + 1;
return 1;
case 0xfa4e:
*indexout = index + 1;
return 1;
case 0xfa4f:
*indexout = index + 1;
return 1;
case 0xfa50:
*indexout = index + 1;
return 1;
case 0xfa51:
*indexout = index + 1;
return 1;
case 0xfa52:
*indexout = index + 1;
return 1;
case 0xfa53:
*indexout = index + 1;
return 1;
case 0xfa54:
*indexout = index + 1;
return 1;
case 0xfa55:
*indexout = index + 1;
return 1;
case 0xfa56:
*indexout = index + 1;
return 1;
case 0xfa57:
*indexout = index + 1;
return 1;
case 0xfa58:
*indexout = index + 1;
return 1;
case 0xfa59:
*indexout = index + 1;
return 1;
case 0xfa5a:
*indexout = index + 1;
return 1;
case 0xfa5b:
*indexout = index + 1;
return 1;
case 0xfa5c:
*indexout = index + 1;
return 1;
case 0xfa5d:
*indexout = index + 1;
return 1;
case 0xfa5e:
*indexout = index + 1;
return 1;
case 0xfa5f:
*indexout = index + 1;
return 1;
case 0xfa60:
*indexout = index + 1;
return 1;
case 0xfa61:
*indexout = index + 1;
return 1;
case 0xfa62:
*indexout = index + 1;
return 1;
case 0xfa63:
*indexout = index + 1;
return 1;
case 0xfa64:
*indexout = index + 1;
return 1;
case 0xfa65:
*indexout = index + 1;
return 1;
case 0xfa66:
*indexout = index + 1;
return 1;
case 0xfa67:
*indexout = index + 1;
return 1;
case 0xfa68:
*indexout = index + 1;
return 1;
case 0xfa69:
*indexout = index + 1;
return 1;
case 0xfa6a:
*indexout = index + 1;
return 1;
case 0xfa6b:
*indexout = index + 1;
return 1;
case 0xfa6c:
*indexout = index + 1;
return 1;
case 0xfa6d:
*indexout = index + 1;
return 1;
case 0xfa70:
*indexout = index + 1;
return 1;
case 0xfa71:
*indexout = index + 1;
return 1;
case 0xfa72:
*indexout = index + 1;
return 1;
case 0xfa73:
*indexout = index + 1;
return 1;
case 0xfa74:
*indexout = index + 1;
return 1;
case 0xfa75:
*indexout = index + 1;
return 1;
case 0xfa76:
*indexout = index + 1;
return 1;
case 0xfa77:
*indexout = index + 1;
return 1;
case 0xfa78:
*indexout = index + 1;
return 1;
case 0xfa79:
*indexout = index + 1;
return 1;
case 0xfa7a:
*indexout = index + 1;
return 1;
case 0xfa7b:
*indexout = index + 1;
return 1;
case 0xfa7c:
*indexout = index + 1;
return 1;
case 0xfa7d:
*indexout = index + 1;
return 1;
case 0xfa7e:
*indexout = index + 1;
return 1;
case 0xfa7f:
*indexout = index + 1;
return 1;
case 0xfa80:
*indexout = index + 1;
return 1;
case 0xfa81:
*indexout = index + 1;
return 1;
case 0xfa82:
*indexout = index + 1;
return 1;
case 0xfa83:
*indexout = index + 1;
return 1;
case 0xfa84:
*indexout = index + 1;
return 1;
case 0xfa85:
*indexout = index + 1;
return 1;
case 0xfa86:
*indexout = index + 1;
return 1;
case 0xfa87:
*indexout = index + 1;
return 1;
case 0xfa88:
*indexout = index + 1;
return 1;
case 0xfa89:
*indexout = index + 1;
return 1;
case 0xfa8a:
*indexout = index + 1;
return 1;
case 0xfa8b:
*indexout = index + 1;
return 1;
case 0xfa8c:
*indexout = index + 1;
return 1;
case 0xfa8d:
*indexout = index + 1;
return 1;
case 0xfa8e:
*indexout = index + 1;
return 1;
case 0xfa8f:
*indexout = index + 1;
return 1;
case 0xfa90:
*indexout = index + 1;
return 1;
case 0xfa91:
*indexout = index + 1;
return 1;
case 0xfa92:
*indexout = index + 1;
return 1;
case 0xfa93:
*indexout = index + 1;
return 1;
case 0xfa94:
*indexout = index + 1;
return 1;
case 0xfa95:
*indexout = index + 1;
return 1;
case 0xfa96:
*indexout = index + 1;
return 1;
case 0xfa97:
*indexout = index + 1;
return 1;
case 0xfa98:
*indexout = index + 1;
return 1;
case 0xfa99:
*indexout = index + 1;
return 1;
case 0xfa9a:
*indexout = index + 1;
return 1;
case 0xfa9b:
*indexout = index + 1;
return 1;
case 0xfa9c:
*indexout = index + 1;
return 1;
case 0xfa9d:
*indexout = index + 1;
return 1;
case 0xfa9e:
*indexout = index + 1;
return 1;
case 0xfa9f:
*indexout = index + 1;
return 1;
case 0xfaa0:
*indexout = index + 1;
return 1;
case 0xfaa1:
*indexout = index + 1;
return 1;
case 0xfaa2:
*indexout = index + 1;
return 1;
case 0xfaa3:
*indexout = index + 1;
return 1;
case 0xfaa4:
*indexout = index + 1;
return 1;
case 0xfaa5:
*indexout = index + 1;
return 1;
case 0xfaa6:
*indexout = index + 1;
return 1;
case 0xfaa7:
*indexout = index + 1;
return 1;
case 0xfaa8:
*indexout = index + 1;
return 1;
case 0xfaa9:
*indexout = index + 1;
return 1;
case 0xfaaa:
*indexout = index + 1;
return 1;
case 0xfaab:
*indexout = index + 1;
return 1;
case 0xfaac:
*indexout = index + 1;
return 1;
case 0xfaad:
*indexout = index + 1;
return 1;
case 0xfaae:
*indexout = index + 1;
return 1;
case 0xfaaf:
*indexout = index + 1;
return 1;
case 0xfab0:
*indexout = index + 1;
return 1;
case 0xfab1:
*indexout = index + 1;
return 1;
case 0xfab2:
*indexout = index + 1;
return 1;
case 0xfab3:
*indexout = index + 1;
return 1;
case 0xfab4:
*indexout = index + 1;
return 1;
case 0xfab5:
*indexout = index + 1;
return 1;
case 0xfab6:
*indexout = index + 1;
return 1;
case 0xfab7:
*indexout = index + 1;
return 1;
case 0xfab8:
*indexout = index + 1;
return 1;
case 0xfab9:
*indexout = index + 1;
return 1;
case 0xfaba:
*indexout = index + 1;
return 1;
case 0xfabb:
*indexout = index + 1;
return 1;
case 0xfabc:
*indexout = index + 1;
return 1;
case 0xfabd:
*indexout = index + 1;
return 1;
case 0xfabe:
*indexout = index + 1;
return 1;
case 0xfabf:
*indexout = index + 1;
return 1;
case 0xfac0:
*indexout = index + 1;
return 1;
case 0xfac1:
*indexout = index + 1;
return 1;
case 0xfac2:
*indexout = index + 1;
return 1;
case 0xfac3:
*indexout = index + 1;
return 1;
case 0xfac4:
*indexout = index + 1;
return 1;
case 0xfac5:
*indexout = index + 1;
return 1;
case 0xfac6:
*indexout = index + 1;
return 1;
case 0xfac7:
*indexout = index + 1;
return 1;
case 0xfac8:
*indexout = index + 1;
return 1;
case 0xfac9:
*indexout = index + 1;
return 1;
case 0xfaca:
*indexout = index + 1;
return 1;
case 0xfacb:
*indexout = index + 1;
return 1;
case 0xfacc:
*indexout = index + 1;
return 1;
case 0xfacd:
*indexout = index + 1;
return 1;
case 0xface:
*indexout = index + 1;
return 1;
case 0xfacf:
*indexout = index + 1;
return 1;
case 0xfad0:
*indexout = index + 1;
return 1;
case 0xfad1:
*indexout = index + 1;
return 1;
case 0xfad2:
*indexout = index + 1;
return 1;
case 0xfad3:
*indexout = index + 1;
return 1;
case 0xfad4:
*indexout = index + 1;
return 1;
case 0xfad5:
*indexout = index + 1;
return 1;
case 0xfad6:
*indexout = index + 1;
return 1;
case 0xfad7:
*indexout = index + 1;
return 1;
case 0xfad8:
*indexout = index + 1;
return 1;
case 0xfad9:
*indexout = index + 1;
return 1;
case 0xfb00:
*indexout = index + 2;
return 2;
case 0xfb01:
*indexout = index + 2;
return 2;
case 0xfb02:
*indexout = index + 2;
return 2;
case 0xfb03:
*indexout = index + 3;
return 3;
case 0xfb04:
*indexout = index + 3;
return 3;
case 0xfb05:
*indexout = index + 2;
return 2;
case 0xfb06:
*indexout = index + 2;
return 2;
case 0xfb13:
*indexout = index + 2;
return 2;
case 0xfb14:
*indexout = index + 2;
return 2;
case 0xfb15:
*indexout = index + 2;
return 2;
case 0xfb16:
*indexout = index + 2;
return 2;
case 0xfb17:
*indexout = index + 2;
return 2;
case 0xfb1d:
*indexout = index + 2;
return 2;
case 0xfb1f:
*indexout = index + 2;
return 2;
case 0xfb20:
*indexout = index + 1;
return 1;
case 0xfb21:
*indexout = index + 1;
return 1;
case 0xfb22:
*indexout = index + 1;
return 1;
case 0xfb23:
*indexout = index + 1;
return 1;
case 0xfb24:
*indexout = index + 1;
return 1;
case 0xfb25:
*indexout = index + 1;
return 1;
case 0xfb26:
*indexout = index + 1;
return 1;
case 0xfb27:
*indexout = index + 1;
return 1;
case 0xfb28:
*indexout = index + 1;
return 1;
case 0xfb29:
*indexout = index + 1;
return 1;
case 0xfb2a:
*indexout = index + 2;
return 2;
case 0xfb2b:
*indexout = index + 2;
return 2;
case 0xfb2c:
*indexout = index + 3;
return 3;
case 0xfb2d:
*indexout = index + 3;
return 3;
case 0xfb2e:
*indexout = index + 2;
return 2;
case 0xfb2f:
*indexout = index + 2;
return 2;
case 0xfb30:
*indexout = index + 2;
return 2;
case 0xfb31:
*indexout = index + 2;
return 2;
case 0xfb32:
*indexout = index + 2;
return 2;
case 0xfb33:
*indexout = index + 2;
return 2;
case 0xfb34:
*indexout = index + 2;
return 2;
case 0xfb35:
*indexout = index + 2;
return 2;
case 0xfb36:
*indexout = index + 2;
return 2;
case 0xfb38:
*indexout = index + 2;
return 2;
case 0xfb39:
*indexout = index + 2;
return 2;
case 0xfb3a:
*indexout = index + 2;
return 2;
case 0xfb3b:
*indexout = index + 2;
return 2;
case 0xfb3c:
*indexout = index + 2;
return 2;
case 0xfb3e:
*indexout = index + 2;
return 2;
case 0xfb40:
*indexout = index + 2;
return 2;
case 0xfb41:
*indexout = index + 2;
return 2;
case 0xfb43:
*indexout = index + 2;
return 2;
case 0xfb44:
*indexout = index + 2;
return 2;
case 0xfb46:
*indexout = index + 2;
return 2;
case 0xfb47:
*indexout = index + 2;
return 2;
case 0xfb48:
*indexout = index + 2;
return 2;
case 0xfb49:
*indexout = index + 2;
return 2;
case 0xfb4a:
*indexout = index + 2;
return 2;
case 0xfb4b:
*indexout = index + 2;
return 2;
case 0xfb4c:
*indexout = index + 2;
return 2;
case 0xfb4d:
*indexout = index + 2;
return 2;
case 0xfb4e:
*indexout = index + 2;
return 2;
case 0xfb4f:
*indexout = index + 2;
return 2;
case 0xfb50:
*indexout = index + 1;
return 1;
case 0xfb51:
*indexout = index + 1;
return 1;
case 0xfb52:
*indexout = index + 1;
return 1;
case 0xfb53:
*indexout = index + 1;
return 1;
case 0xfb54:
*indexout = index + 1;
return 1;
case 0xfb55:
*indexout = index + 1;
return 1;
case 0xfb56:
*indexout = index + 1;
return 1;
case 0xfb57:
*indexout = index + 1;
return 1;
case 0xfb58:
*indexout = index + 1;
return 1;
case 0xfb59:
*indexout = index + 1;
return 1;
case 0xfb5a:
*indexout = index + 1;
return 1;
case 0xfb5b:
*indexout = index + 1;
return 1;
case 0xfb5c:
*indexout = index + 1;
return 1;
case 0xfb5d:
*indexout = index + 1;
return 1;
case 0xfb5e:
*indexout = index + 1;
return 1;
case 0xfb5f:
*indexout = index + 1;
return 1;
case 0xfb60:
*indexout = index + 1;
return 1;
case 0xfb61:
*indexout = index + 1;
return 1;
case 0xfb62:
*indexout = index + 1;
return 1;
case 0xfb63:
*indexout = index + 1;
return 1;
case 0xfb64:
*indexout = index + 1;
return 1;
case 0xfb65:
*indexout = index + 1;
return 1;
case 0xfb66:
*indexout = index + 1;
return 1;
case 0xfb67:
*indexout = index + 1;
return 1;
case 0xfb68:
*indexout = index + 1;
return 1;
case 0xfb69:
*indexout = index + 1;
return 1;
case 0xfb6a:
*indexout = index + 1;
return 1;
case 0xfb6b:
*indexout = index + 1;
return 1;
case 0xfb6c:
*indexout = index + 1;
return 1;
case 0xfb6d:
*indexout = index + 1;
return 1;
case 0xfb6e:
*indexout = index + 1;
return 1;
case 0xfb6f:
*indexout = index + 1;
return 1;
case 0xfb70:
*indexout = index + 1;
return 1;
case 0xfb71:
*indexout = index + 1;
return 1;
case 0xfb72:
*indexout = index + 1;
return 1;
case 0xfb73:
*indexout = index + 1;
return 1;
case 0xfb74:
*indexout = index + 1;
return 1;
case 0xfb75:
*indexout = index + 1;
return 1;
case 0xfb76:
*indexout = index + 1;
return 1;
case 0xfb77:
*indexout = index + 1;
return 1;
case 0xfb78:
*indexout = index + 1;
return 1;
case 0xfb79:
*indexout = index + 1;
return 1;
case 0xfb7a:
*indexout = index + 1;
return 1;
case 0xfb7b:
*indexout = index + 1;
return 1;
case 0xfb7c:
*indexout = index + 1;
return 1;
case 0xfb7d:
*indexout = index + 1;
return 1;
case 0xfb7e:
*indexout = index + 1;
return 1;
case 0xfb7f:
*indexout = index + 1;
return 1;
case 0xfb80:
*indexout = index + 1;
return 1;
case 0xfb81:
*indexout = index + 1;
return 1;
case 0xfb82:
*indexout = index + 1;
return 1;
case 0xfb83:
*indexout = index + 1;
return 1;
case 0xfb84:
*indexout = index + 1;
return 1;
case 0xfb85:
*indexout = index + 1;
return 1;
case 0xfb86:
*indexout = index + 1;
return 1;
case 0xfb87:
*indexout = index + 1;
return 1;
case 0xfb88:
*indexout = index + 1;
return 1;
case 0xfb89:
*indexout = index + 1;
return 1;
case 0xfb8a:
*indexout = index + 1;
return 1;
case 0xfb8b:
*indexout = index + 1;
return 1;
case 0xfb8c:
*indexout = index + 1;
return 1;
case 0xfb8d:
*indexout = index + 1;
return 1;
case 0xfb8e:
*indexout = index + 1;
return 1;
case 0xfb8f:
*indexout = index + 1;
return 1;
case 0xfb90:
*indexout = index + 1;
return 1;
case 0xfb91:
*indexout = index + 1;
return 1;
case 0xfb92:
*indexout = index + 1;
return 1;
case 0xfb93:
*indexout = index + 1;
return 1;
case 0xfb94:
*indexout = index + 1;
return 1;
case 0xfb95:
*indexout = index + 1;
return 1;
case 0xfb96:
*indexout = index + 1;
return 1;
case 0xfb97:
*indexout = index + 1;
return 1;
case 0xfb98:
*indexout = index + 1;
return 1;
case 0xfb99:
*indexout = index + 1;
return 1;
case 0xfb9a:
*indexout = index + 1;
return 1;
case 0xfb9b:
*indexout = index + 1;
return 1;
case 0xfb9c:
*indexout = index + 1;
return 1;
case 0xfb9d:
*indexout = index + 1;
return 1;
case 0xfb9e:
*indexout = index + 1;
return 1;
case 0xfb9f:
*indexout = index + 1;
return 1;
case 0xfba0:
*indexout = index + 1;
return 1;
case 0xfba1:
*indexout = index + 1;
return 1;
case 0xfba2:
*indexout = index + 1;
return 1;
case 0xfba3:
*indexout = index + 1;
return 1;
case 0xfba4:
*indexout = index + 1;
return 1;
case 0xfba5:
*indexout = index + 1;
return 1;
case 0xfba6:
*indexout = index + 1;
return 1;
case 0xfba7:
*indexout = index + 1;
return 1;
case 0xfba8:
*indexout = index + 1;
return 1;
case 0xfba9:
*indexout = index + 1;
return 1;
case 0xfbaa:
*indexout = index + 1;
return 1;
case 0xfbab:
*indexout = index + 1;
return 1;
case 0xfbac:
*indexout = index + 1;
return 1;
case 0xfbad:
*indexout = index + 1;
return 1;
case 0xfbae:
*indexout = index + 1;
return 1;
case 0xfbaf:
*indexout = index + 1;
return 1;
case 0xfbb0:
*indexout = index + 1;
return 1;
case 0xfbb1:
*indexout = index + 1;
return 1;
case 0xfbd3:
*indexout = index + 1;
return 1;
case 0xfbd4:
*indexout = index + 1;
return 1;
case 0xfbd5:
*indexout = index + 1;
return 1;
case 0xfbd6:
*indexout = index + 1;
return 1;
case 0xfbd7:
*indexout = index + 1;
return 1;
case 0xfbd8:
*indexout = index + 1;
return 1;
case 0xfbd9:
*indexout = index + 1;
return 1;
case 0xfbda:
*indexout = index + 1;
return 1;
case 0xfbdb:
*indexout = index + 1;
return 1;
case 0xfbdc:
*indexout = index + 1;
return 1;
case 0xfbdd:
*indexout = index + 2;
return 2;
case 0xfbde:
*indexout = index + 1;
return 1;
case 0xfbdf:
*indexout = index + 1;
return 1;
case 0xfbe0:
*indexout = index + 1;
return 1;
case 0xfbe1:
*indexout = index + 1;
return 1;
case 0xfbe2:
*indexout = index + 1;
return 1;
case 0xfbe3:
*indexout = index + 1;
return 1;
case 0xfbe4:
*indexout = index + 1;
return 1;
case 0xfbe5:
*indexout = index + 1;
return 1;
case 0xfbe6:
*indexout = index + 1;
return 1;
case 0xfbe7:
*indexout = index + 1;
return 1;
case 0xfbe8:
*indexout = index + 1;
return 1;
case 0xfbe9:
*indexout = index + 1;
return 1;
case 0xfbea:
*indexout = index + 2;
return 2;
case 0xfbeb:
*indexout = index + 2;
return 2;
case 0xfbec:
*indexout = index + 2;
return 2;
case 0xfbed:
*indexout = index + 2;
return 2;
case 0xfbee:
*indexout = index + 2;
return 2;
case 0xfbef:
*indexout = index + 2;
return 2;
case 0xfbf0:
*indexout = index + 2;
return 2;
case 0xfbf1:
*indexout = index + 2;
return 2;
case 0xfbf2:
*indexout = index + 2;
return 2;
case 0xfbf3:
*indexout = index + 2;
return 2;
case 0xfbf4:
*indexout = index + 2;
return 2;
case 0xfbf5:
*indexout = index + 2;
return 2;
case 0xfbf6:
*indexout = index + 2;
return 2;
case 0xfbf7:
*indexout = index + 2;
return 2;
case 0xfbf8:
*indexout = index + 2;
return 2;
case 0xfbf9:
*indexout = index + 2;
return 2;
case 0xfbfa:
*indexout = index + 2;
return 2;
case 0xfbfb:
*indexout = index + 2;
return 2;
case 0xfbfc:
*indexout = index + 1;
return 1;
case 0xfbfd:
*indexout = index + 1;
return 1;
case 0xfbfe:
*indexout = index + 1;
return 1;
case 0xfbff:
*indexout = index + 1;
return 1;
case 0xfc00:
*indexout = index + 2;
return 2;
case 0xfc01:
*indexout = index + 2;
return 2;
case 0xfc02:
*indexout = index + 2;
return 2;
case 0xfc03:
*indexout = index + 2;
return 2;
case 0xfc04:
*indexout = index + 2;
return 2;
case 0xfc05:
*indexout = index + 2;
return 2;
case 0xfc06:
*indexout = index + 2;
return 2;
case 0xfc07:
*indexout = index + 2;
return 2;
case 0xfc08:
*indexout = index + 2;
return 2;
case 0xfc09:
*indexout = index + 2;
return 2;
case 0xfc0a:
*indexout = index + 2;
return 2;
case 0xfc0b:
*indexout = index + 2;
return 2;
case 0xfc0c:
*indexout = index + 2;
return 2;
case 0xfc0d:
*indexout = index + 2;
return 2;
case 0xfc0e:
*indexout = index + 2;
return 2;
case 0xfc0f:
*indexout = index + 2;
return 2;
case 0xfc10:
*indexout = index + 2;
return 2;
case 0xfc11:
*indexout = index + 2;
return 2;
case 0xfc12:
*indexout = index + 2;
return 2;
case 0xfc13:
*indexout = index + 2;
return 2;
case 0xfc14:
*indexout = index + 2;
return 2;
case 0xfc15:
*indexout = index + 2;
return 2;
case 0xfc16:
*indexout = index + 2;
return 2;
case 0xfc17:
*indexout = index + 2;
return 2;
case 0xfc18:
*indexout = index + 2;
return 2;
case 0xfc19:
*indexout = index + 2;
return 2;
case 0xfc1a:
*indexout = index + 2;
return 2;
case 0xfc1b:
*indexout = index + 2;
return 2;
case 0xfc1c:
*indexout = index + 2;
return 2;
case 0xfc1d:
*indexout = index + 2;
return 2;
case 0xfc1e:
*indexout = index + 2;
return 2;
case 0xfc1f:
*indexout = index + 2;
return 2;
case 0xfc20:
*indexout = index + 2;
return 2;
case 0xfc21:
*indexout = index + 2;
return 2;
case 0xfc22:
*indexout = index + 2;
return 2;
case 0xfc23:
*indexout = index + 2;
return 2;
case 0xfc24:
*indexout = index + 2;
return 2;
case 0xfc25:
*indexout = index + 2;
return 2;
case 0xfc26:
*indexout = index + 2;
return 2;
case 0xfc27:
*indexout = index + 2;
return 2;
case 0xfc28:
*indexout = index + 2;
return 2;
case 0xfc29:
*indexout = index + 2;
return 2;
case 0xfc2a:
*indexout = index + 2;
return 2;
case 0xfc2b:
*indexout = index + 2;
return 2;
case 0xfc2c:
*indexout = index + 2;
return 2;
case 0xfc2d:
*indexout = index + 2;
return 2;
case 0xfc2e:
*indexout = index + 2;
return 2;
case 0xfc2f:
*indexout = index + 2;
return 2;
case 0xfc30:
*indexout = index + 2;
return 2;
case 0xfc31:
*indexout = index + 2;
return 2;
case 0xfc32:
*indexout = index + 2;
return 2;
case 0xfc33:
*indexout = index + 2;
return 2;
case 0xfc34:
*indexout = index + 2;
return 2;
case 0xfc35:
*indexout = index + 2;
return 2;
case 0xfc36:
*indexout = index + 2;
return 2;
case 0xfc37:
*indexout = index + 2;
return 2;
case 0xfc38:
*indexout = index + 2;
return 2;
case 0xfc39:
*indexout = index + 2;
return 2;
case 0xfc3a:
*indexout = index + 2;
return 2;
case 0xfc3b:
*indexout = index + 2;
return 2;
case 0xfc3c:
*indexout = index + 2;
return 2;
case 0xfc3d:
*indexout = index + 2;
return 2;
case 0xfc3e:
*indexout = index + 2;
return 2;
case 0xfc3f:
*indexout = index + 2;
return 2;
case 0xfc40:
*indexout = index + 2;
return 2;
case 0xfc41:
*indexout = index + 2;
return 2;
case 0xfc42:
*indexout = index + 2;
return 2;
case 0xfc43:
*indexout = index + 2;
return 2;
case 0xfc44:
*indexout = index + 2;
return 2;
case 0xfc45:
*indexout = index + 2;
return 2;
case 0xfc46:
*indexout = index + 2;
return 2;
case 0xfc47:
*indexout = index + 2;
return 2;
case 0xfc48:
*indexout = index + 2;
return 2;
case 0xfc49:
*indexout = index + 2;
return 2;
case 0xfc4a:
*indexout = index + 2;
return 2;
case 0xfc4b:
*indexout = index + 2;
return 2;
case 0xfc4c:
*indexout = index + 2;
return 2;
case 0xfc4d:
*indexout = index + 2;
return 2;
case 0xfc4e:
*indexout = index + 2;
return 2;
case 0xfc4f:
*indexout = index + 2;
return 2;
case 0xfc50:
*indexout = index + 2;
return 2;
case 0xfc51:
*indexout = index + 2;
return 2;
case 0xfc52:
*indexout = index + 2;
return 2;
case 0xfc53:
*indexout = index + 2;
return 2;
case 0xfc54:
*indexout = index + 2;
return 2;
case 0xfc55:
*indexout = index + 2;
return 2;
case 0xfc56:
*indexout = index + 2;
return 2;
case 0xfc57:
*indexout = index + 2;
return 2;
case 0xfc58:
*indexout = index + 2;
return 2;
case 0xfc59:
*indexout = index + 2;
return 2;
case 0xfc5a:
*indexout = index + 2;
return 2;
case 0xfc5b:
*indexout = index + 2;
return 2;
case 0xfc5c:
*indexout = index + 2;
return 2;
case 0xfc5d:
*indexout = index + 2;
return 2;
case 0xfc5e:
*indexout = index + 3;
return 3;
case 0xfc5f:
*indexout = index + 3;
return 3;
case 0xfc60:
*indexout = index + 3;
return 3;
case 0xfc61:
*indexout = index + 3;
return 3;
case 0xfc62:
*indexout = index + 3;
return 3;
case 0xfc63:
*indexout = index + 3;
return 3;
case 0xfc64:
*indexout = index + 2;
return 2;
case 0xfc65:
*indexout = index + 2;
return 2;
case 0xfc66:
*indexout = index + 2;
return 2;
case 0xfc67:
*indexout = index + 2;
return 2;
case 0xfc68:
*indexout = index + 2;
return 2;
case 0xfc69:
*indexout = index + 2;
return 2;
case 0xfc6a:
*indexout = index + 2;
return 2;
case 0xfc6b:
*indexout = index + 2;
return 2;
case 0xfc6c:
*indexout = index + 2;
return 2;
case 0xfc6d:
*indexout = index + 2;
return 2;
case 0xfc6e:
*indexout = index + 2;
return 2;
case 0xfc6f:
*indexout = index + 2;
return 2;
case 0xfc70:
*indexout = index + 2;
return 2;
case 0xfc71:
*indexout = index + 2;
return 2;
case 0xfc72:
*indexout = index + 2;
return 2;
case 0xfc73:
*indexout = index + 2;
return 2;
case 0xfc74:
*indexout = index + 2;
return 2;
case 0xfc75:
*indexout = index + 2;
return 2;
case 0xfc76:
*indexout = index + 2;
return 2;
case 0xfc77:
*indexout = index + 2;
return 2;
case 0xfc78:
*indexout = index + 2;
return 2;
case 0xfc79:
*indexout = index + 2;
return 2;
case 0xfc7a:
*indexout = index + 2;
return 2;
case 0xfc7b:
*indexout = index + 2;
return 2;
case 0xfc7c:
*indexout = index + 2;
return 2;
case 0xfc7d:
*indexout = index + 2;
return 2;
case 0xfc7e:
*indexout = index + 2;
return 2;
case 0xfc7f:
*indexout = index + 2;
return 2;
case 0xfc80:
*indexout = index + 2;
return 2;
case 0xfc81:
*indexout = index + 2;
return 2;
case 0xfc82:
*indexout = index + 2;
return 2;
case 0xfc83:
*indexout = index + 2;
return 2;
case 0xfc84:
*indexout = index + 2;
return 2;
case 0xfc85:
*indexout = index + 2;
return 2;
case 0xfc86:
*indexout = index + 2;
return 2;
case 0xfc87:
*indexout = index + 2;
return 2;
case 0xfc88:
*indexout = index + 2;
return 2;
case 0xfc89:
*indexout = index + 2;
return 2;
case 0xfc8a:
*indexout = index + 2;
return 2;
case 0xfc8b:
*indexout = index + 2;
return 2;
case 0xfc8c:
*indexout = index + 2;
return 2;
case 0xfc8d:
*indexout = index + 2;
return 2;
case 0xfc8e:
*indexout = index + 2;
return 2;
case 0xfc8f:
*indexout = index + 2;
return 2;
case 0xfc90:
*indexout = index + 2;
return 2;
case 0xfc91:
*indexout = index + 2;
return 2;
case 0xfc92:
*indexout = index + 2;
return 2;
case 0xfc93:
*indexout = index + 2;
return 2;
case 0xfc94:
*indexout = index + 2;
return 2;
case 0xfc95:
*indexout = index + 2;
return 2;
case 0xfc96:
*indexout = index + 2;
return 2;
case 0xfc97:
*indexout = index + 2;
return 2;
case 0xfc98:
*indexout = index + 2;
return 2;
case 0xfc99:
*indexout = index + 2;
return 2;
case 0xfc9a:
*indexout = index + 2;
return 2;
case 0xfc9b:
*indexout = index + 2;
return 2;
case 0xfc9c:
*indexout = index + 2;
return 2;
case 0xfc9d:
*indexout = index + 2;
return 2;
case 0xfc9e:
*indexout = index + 2;
return 2;
case 0xfc9f:
*indexout = index + 2;
return 2;
case 0xfca0:
*indexout = index + 2;
return 2;
case 0xfca1:
*indexout = index + 2;
return 2;
case 0xfca2:
*indexout = index + 2;
return 2;
case 0xfca3:
*indexout = index + 2;
return 2;
case 0xfca4:
*indexout = index + 2;
return 2;
case 0xfca5:
*indexout = index + 2;
return 2;
case 0xfca6:
*indexout = index + 2;
return 2;
case 0xfca7:
*indexout = index + 2;
return 2;
case 0xfca8:
*indexout = index + 2;
return 2;
case 0xfca9:
*indexout = index + 2;
return 2;
case 0xfcaa:
*indexout = index + 2;
return 2;
case 0xfcab:
*indexout = index + 2;
return 2;
case 0xfcac:
*indexout = index + 2;
return 2;
case 0xfcad:
*indexout = index + 2;
return 2;
case 0xfcae:
*indexout = index + 2;
return 2;
case 0xfcaf:
*indexout = index + 2;
return 2;
case 0xfcb0:
*indexout = index + 2;
return 2;
case 0xfcb1:
*indexout = index + 2;
return 2;
case 0xfcb2:
*indexout = index + 2;
return 2;
case 0xfcb3:
*indexout = index + 2;
return 2;
case 0xfcb4:
*indexout = index + 2;
return 2;
case 0xfcb5:
*indexout = index + 2;
return 2;
case 0xfcb6:
*indexout = index + 2;
return 2;
case 0xfcb7:
*indexout = index + 2;
return 2;
case 0xfcb8:
*indexout = index + 2;
return 2;
case 0xfcb9:
*indexout = index + 2;
return 2;
case 0xfcba:
*indexout = index + 2;
return 2;
case 0xfcbb:
*indexout = index + 2;
return 2;
case 0xfcbc:
*indexout = index + 2;
return 2;
case 0xfcbd:
*indexout = index + 2;
return 2;
case 0xfcbe:
*indexout = index + 2;
return 2;
case 0xfcbf:
*indexout = index + 2;
return 2;
case 0xfcc0:
*indexout = index + 2;
return 2;
case 0xfcc1:
*indexout = index + 2;
return 2;
case 0xfcc2:
*indexout = index + 2;
return 2;
case 0xfcc3:
*indexout = index + 2;
return 2;
case 0xfcc4:
*indexout = index + 2;
return 2;
case 0xfcc5:
*indexout = index + 2;
return 2;
case 0xfcc6:
*indexout = index + 2;
return 2;
case 0xfcc7:
*indexout = index + 2;
return 2;
case 0xfcc8:
*indexout = index + 2;
return 2;
case 0xfcc9:
*indexout = index + 2;
return 2;
case 0xfcca:
*indexout = index + 2;
return 2;
case 0xfccb:
*indexout = index + 2;
return 2;
case 0xfccc:
*indexout = index + 2;
return 2;
case 0xfccd:
*indexout = index + 2;
return 2;
case 0xfcce:
*indexout = index + 2;
return 2;
case 0xfccf:
*indexout = index + 2;
return 2;
case 0xfcd0:
*indexout = index + 2;
return 2;
case 0xfcd1:
*indexout = index + 2;
return 2;
case 0xfcd2:
*indexout = index + 2;
return 2;
case 0xfcd3:
*indexout = index + 2;
return 2;
case 0xfcd4:
*indexout = index + 2;
return 2;
case 0xfcd5:
*indexout = index + 2;
return 2;
case 0xfcd6:
*indexout = index + 2;
return 2;
case 0xfcd7:
*indexout = index + 2;
return 2;
case 0xfcd8:
*indexout = index + 2;
return 2;
case 0xfcd9:
*indexout = index + 2;
return 2;
case 0xfcda:
*indexout = index + 2;
return 2;
case 0xfcdb:
*indexout = index + 2;
return 2;
case 0xfcdc:
*indexout = index + 2;
return 2;
case 0xfcdd:
*indexout = index + 2;
return 2;
case 0xfcde:
*indexout = index + 2;
return 2;
case 0xfcdf:
*indexout = index + 2;
return 2;
case 0xfce0:
*indexout = index + 2;
return 2;
case 0xfce1:
*indexout = index + 2;
return 2;
case 0xfce2:
*indexout = index + 2;
return 2;
case 0xfce3:
*indexout = index + 2;
return 2;
case 0xfce4:
*indexout = index + 2;
return 2;
case 0xfce5:
*indexout = index + 2;
return 2;
case 0xfce6:
*indexout = index + 2;
return 2;
case 0xfce7:
*indexout = index + 2;
return 2;
case 0xfce8:
*indexout = index + 2;
return 2;
case 0xfce9:
*indexout = index + 2;
return 2;
case 0xfcea:
*indexout = index + 2;
return 2;
case 0xfceb:
*indexout = index + 2;
return 2;
case 0xfcec:
*indexout = index + 2;
return 2;
case 0xfced:
*indexout = index + 2;
return 2;
case 0xfcee:
*indexout = index + 2;
return 2;
case 0xfcef:
*indexout = index + 2;
return 2;
case 0xfcf0:
*indexout = index + 2;
return 2;
case 0xfcf1:
*indexout = index + 2;
return 2;
case 0xfcf2:
*indexout = index + 3;
return 3;
case 0xfcf3:
*indexout = index + 3;
return 3;
case 0xfcf4:
*indexout = index + 3;
return 3;
case 0xfcf5:
*indexout = index + 2;
return 2;
case 0xfcf6:
*indexout = index + 2;
return 2;
case 0xfcf7:
*indexout = index + 2;
return 2;
case 0xfcf8:
*indexout = index + 2;
return 2;
case 0xfcf9:
*indexout = index + 2;
return 2;
case 0xfcfa:
*indexout = index + 2;
return 2;
case 0xfcfb:
*indexout = index + 2;
return 2;
case 0xfcfc:
*indexout = index + 2;
return 2;
case 0xfcfd:
*indexout = index + 2;
return 2;
case 0xfcfe:
*indexout = index + 2;
return 2;
case 0xfcff:
*indexout = index + 2;
return 2;
case 0xfd00:
*indexout = index + 2;
return 2;
case 0xfd01:
*indexout = index + 2;
return 2;
case 0xfd02:
*indexout = index + 2;
return 2;
case 0xfd03:
*indexout = index + 2;
return 2;
case 0xfd04:
*indexout = index + 2;
return 2;
case 0xfd05:
*indexout = index + 2;
return 2;
case 0xfd06:
*indexout = index + 2;
return 2;
case 0xfd07:
*indexout = index + 2;
return 2;
case 0xfd08:
*indexout = index + 2;
return 2;
case 0xfd09:
*indexout = index + 2;
return 2;
case 0xfd0a:
*indexout = index + 2;
return 2;
case 0xfd0b:
*indexout = index + 2;
return 2;
case 0xfd0c:
*indexout = index + 2;
return 2;
case 0xfd0d:
*indexout = index + 2;
return 2;
case 0xfd0e:
*indexout = index + 2;
return 2;
case 0xfd0f:
*indexout = index + 2;
return 2;
case 0xfd10:
*indexout = index + 2;
return 2;
case 0xfd11:
*indexout = index + 2;
return 2;
case 0xfd12:
*indexout = index + 2;
return 2;
case 0xfd13:
*indexout = index + 2;
return 2;
case 0xfd14:
*indexout = index + 2;
return 2;
case 0xfd15:
*indexout = index + 2;
return 2;
case 0xfd16:
*indexout = index + 2;
return 2;
case 0xfd17:
*indexout = index + 2;
return 2;
case 0xfd18:
*indexout = index + 2;
return 2;
case 0xfd19:
*indexout = index + 2;
return 2;
case 0xfd1a:
*indexout = index + 2;
return 2;
case 0xfd1b:
*indexout = index + 2;
return 2;
case 0xfd1c:
*indexout = index + 2;
return 2;
case 0xfd1d:
*indexout = index + 2;
return 2;
case 0xfd1e:
*indexout = index + 2;
return 2;
case 0xfd1f:
*indexout = index + 2;
return 2;
case 0xfd20:
*indexout = index + 2;
return 2;
case 0xfd21:
*indexout = index + 2;
return 2;
case 0xfd22:
*indexout = index + 2;
return 2;
case 0xfd23:
*indexout = index + 2;
return 2;
case 0xfd24:
*indexout = index + 2;
return 2;
case 0xfd25:
*indexout = index + 2;
return 2;
case 0xfd26:
*indexout = index + 2;
return 2;
case 0xfd27:
*indexout = index + 2;
return 2;
case 0xfd28:
*indexout = index + 2;
return 2;
case 0xfd29:
*indexout = index + 2;
return 2;
case 0xfd2a:
*indexout = index + 2;
return 2;
case 0xfd2b:
*indexout = index + 2;
return 2;
case 0xfd2c:
*indexout = index + 2;
return 2;
case 0xfd2d:
*indexout = index + 2;
return 2;
case 0xfd2e:
*indexout = index + 2;
return 2;
case 0xfd2f:
*indexout = index + 2;
return 2;
case 0xfd30:
*indexout = index + 2;
return 2;
case 0xfd31:
*indexout = index + 2;
return 2;
case 0xfd32:
*indexout = index + 2;
return 2;
case 0xfd33:
*indexout = index + 2;
return 2;
case 0xfd34:
*indexout = index + 2;
return 2;
case 0xfd35:
*indexout = index + 2;
return 2;
case 0xfd36:
*indexout = index + 2;
return 2;
case 0xfd37:
*indexout = index + 2;
return 2;
case 0xfd38:
*indexout = index + 2;
return 2;
case 0xfd39:
*indexout = index + 2;
return 2;
case 0xfd3a:
*indexout = index + 2;
return 2;
case 0xfd3b:
*indexout = index + 2;
return 2;
case 0xfd3c:
*indexout = index + 2;
return 2;
case 0xfd3d:
*indexout = index + 2;
return 2;
case 0xfd50:
*indexout = index + 3;
return 3;
case 0xfd51:
*indexout = index + 3;
return 3;
case 0xfd52:
*indexout = index + 3;
return 3;
case 0xfd53:
*indexout = index + 3;
return 3;
case 0xfd54:
*indexout = index + 3;
return 3;
case 0xfd55:
*indexout = index + 3;
return 3;
case 0xfd56:
*indexout = index + 3;
return 3;
case 0xfd57:
*indexout = index + 3;
return 3;
case 0xfd58:
*indexout = index + 3;
return 3;
case 0xfd59:
*indexout = index + 3;
return 3;
case 0xfd5a:
*indexout = index + 3;
return 3;
case 0xfd5b:
*indexout = index + 3;
return 3;
case 0xfd5c:
*indexout = index + 3;
return 3;
case 0xfd5d:
*indexout = index + 3;
return 3;
case 0xfd5e:
*indexout = index + 3;
return 3;
case 0xfd5f:
*indexout = index + 3;
return 3;
case 0xfd60:
*indexout = index + 3;
return 3;
case 0xfd61:
*indexout = index + 3;
return 3;
case 0xfd62:
*indexout = index + 3;
return 3;
case 0xfd63:
*indexout = index + 3;
return 3;
case 0xfd64:
*indexout = index + 3;
return 3;
case 0xfd65:
*indexout = index + 3;
return 3;
case 0xfd66:
*indexout = index + 3;
return 3;
case 0xfd67:
*indexout = index + 3;
return 3;
case 0xfd68:
*indexout = index + 3;
return 3;
case 0xfd69:
*indexout = index + 3;
return 3;
case 0xfd6a:
*indexout = index + 3;
return 3;
case 0xfd6b:
*indexout = index + 3;
return 3;
case 0xfd6c:
*indexout = index + 3;
return 3;
case 0xfd6d:
*indexout = index + 3;
return 3;
case 0xfd6e:
*indexout = index + 3;
return 3;
case 0xfd6f:
*indexout = index + 3;
return 3;
case 0xfd70:
*indexout = index + 3;
return 3;
case 0xfd71:
*indexout = index + 3;
return 3;
case 0xfd72:
*indexout = index + 3;
return 3;
case 0xfd73:
*indexout = index + 3;
return 3;
case 0xfd74:
*indexout = index + 3;
return 3;
case 0xfd75:
*indexout = index + 3;
return 3;
case 0xfd76:
*indexout = index + 3;
return 3;
case 0xfd77:
*indexout = index + 3;
return 3;
case 0xfd78:
*indexout = index + 3;
return 3;
case 0xfd79:
*indexout = index + 3;
return 3;
case 0xfd7a:
*indexout = index + 3;
return 3;
case 0xfd7b:
*indexout = index + 3;
return 3;
case 0xfd7c:
*indexout = index + 3;
return 3;
case 0xfd7d:
*indexout = index + 3;
return 3;
case 0xfd7e:
*indexout = index + 3;
return 3;
case 0xfd7f:
*indexout = index + 3;
return 3;
case 0xfd80:
*indexout = index + 3;
return 3;
case 0xfd81:
*indexout = index + 3;
return 3;
case 0xfd82:
*indexout = index + 3;
return 3;
case 0xfd83:
*indexout = index + 3;
return 3;
case 0xfd84:
*indexout = index + 3;
return 3;
case 0xfd85:
*indexout = index + 3;
return 3;
case 0xfd86:
*indexout = index + 3;
return 3;
case 0xfd87:
*indexout = index + 3;
return 3;
case 0xfd88:
*indexout = index + 3;
return 3;
case 0xfd89:
*indexout = index + 3;
return 3;
case 0xfd8a:
*indexout = index + 3;
return 3;
case 0xfd8b:
*indexout = index + 3;
return 3;
case 0xfd8c:
*indexout = index + 3;
return 3;
case 0xfd8d:
*indexout = index + 3;
return 3;
case 0xfd8e:
*indexout = index + 3;
return 3;
case 0xfd8f:
*indexout = index + 3;
return 3;
case 0xfd92:
*indexout = index + 3;
return 3;
case 0xfd93:
*indexout = index + 3;
return 3;
case 0xfd94:
*indexout = index + 3;
return 3;
case 0xfd95:
*indexout = index + 3;
return 3;
case 0xfd96:
*indexout = index + 3;
return 3;
case 0xfd97:
*indexout = index + 3;
return 3;
case 0xfd98:
*indexout = index + 3;
return 3;
case 0xfd99:
*indexout = index + 3;
return 3;
case 0xfd9a:
*indexout = index + 3;
return 3;
case 0xfd9b:
*indexout = index + 3;
return 3;
case 0xfd9c:
*indexout = index + 3;
return 3;
case 0xfd9d:
*indexout = index + 3;
return 3;
case 0xfd9e:
*indexout = index + 3;
return 3;
case 0xfd9f:
*indexout = index + 3;
return 3;
case 0xfda0:
*indexout = index + 3;
return 3;
case 0xfda1:
*indexout = index + 3;
return 3;
case 0xfda2:
*indexout = index + 3;
return 3;
case 0xfda3:
*indexout = index + 3;
return 3;
case 0xfda4:
*indexout = index + 3;
return 3;
case 0xfda5:
*indexout = index + 3;
return 3;
case 0xfda6:
*indexout = index + 3;
return 3;
case 0xfda7:
*indexout = index + 3;
return 3;
case 0xfda8:
*indexout = index + 3;
return 3;
case 0xfda9:
*indexout = index + 3;
return 3;
case 0xfdaa:
*indexout = index + 3;
return 3;
case 0xfdab:
*indexout = index + 3;
return 3;
case 0xfdac:
*indexout = index + 3;
return 3;
case 0xfdad:
*indexout = index + 3;
return 3;
case 0xfdae:
*indexout = index + 3;
return 3;
case 0xfdaf:
*indexout = index + 3;
return 3;
case 0xfdb0:
*indexout = index + 3;
return 3;
case 0xfdb1:
*indexout = index + 3;
return 3;
case 0xfdb2:
*indexout = index + 3;
return 3;
case 0xfdb3:
*indexout = index + 3;
return 3;
case 0xfdb4:
*indexout = index + 3;
return 3;
case 0xfdb5:
*indexout = index + 3;
return 3;
case 0xfdb6:
*indexout = index + 3;
return 3;
case 0xfdb7:
*indexout = index + 3;
return 3;
case 0xfdb8:
*indexout = index + 3;
return 3;
case 0xfdb9:
*indexout = index + 3;
return 3;
case 0xfdba:
*indexout = index + 3;
return 3;
case 0xfdbb:
*indexout = index + 3;
return 3;
case 0xfdbc:
*indexout = index + 3;
return 3;
case 0xfdbd:
*indexout = index + 3;
return 3;
case 0xfdbe:
*indexout = index + 3;
return 3;
case 0xfdbf:
*indexout = index + 3;
return 3;
case 0xfdc0:
*indexout = index + 3;
return 3;
case 0xfdc1:
*indexout = index + 3;
return 3;
case 0xfdc2:
*indexout = index + 3;
return 3;
case 0xfdc3:
*indexout = index + 3;
return 3;
case 0xfdc4:
*indexout = index + 3;
return 3;
case 0xfdc5:
*indexout = index + 3;
return 3;
case 0xfdc6:
*indexout = index + 3;
return 3;
case 0xfdc7:
*indexout = index + 3;
return 3;
case 0xfdf0:
*indexout = index + 3;
return 3;
case 0xfdf1:
*indexout = index + 3;
return 3;
case 0xfdf2:
*indexout = index + 4;
return 4;
case 0xfdf3:
*indexout = index + 4;
return 4;
case 0xfdf4:
*indexout = index + 4;
return 4;
case 0xfdf5:
*indexout = index + 4;
return 4;
case 0xfdf6:
*indexout = index + 4;
return 4;
case 0xfdf7:
*indexout = index + 4;
return 4;
case 0xfdf8:
*indexout = index + 4;
return 4;
case 0xfdf9:
*indexout = index + 3;
return 3;
case 0xfdfa:
*indexout = index + 18;
return 18;
case 0xfdfb:
*indexout = index + 8;
return 8;
case 0xfdfc:
*indexout = index + 4;
return 4;
case 0xfe10:
*indexout = index + 1;
return 1;
case 0xfe11:
*indexout = index + 1;
return 1;
case 0xfe12:
*indexout = index + 1;
return 1;
case 0xfe13:
*indexout = index + 1;
return 1;
case 0xfe14:
*indexout = index + 1;
return 1;
case 0xfe15:
*indexout = index + 1;
return 1;
case 0xfe16:
*indexout = index + 1;
return 1;
case 0xfe17:
*indexout = index + 1;
return 1;
case 0xfe18:
*indexout = index + 1;
return 1;
case 0xfe19:
*indexout = index + 3;
return 3;
case 0xfe30:
*indexout = index + 2;
return 2;
case 0xfe31:
*indexout = index + 1;
return 1;
case 0xfe32:
*indexout = index + 1;
return 1;
case 0xfe33:
*indexout = index + 1;
return 1;
case 0xfe34:
*indexout = index + 1;
return 1;
case 0xfe35:
*indexout = index + 1;
return 1;
case 0xfe36:
*indexout = index + 1;
return 1;
case 0xfe37:
*indexout = index + 1;
return 1;
case 0xfe38:
*indexout = index + 1;
return 1;
case 0xfe39:
*indexout = index + 1;
return 1;
case 0xfe3a:
*indexout = index + 1;
return 1;
case 0xfe3b:
*indexout = index + 1;
return 1;
case 0xfe3c:
*indexout = index + 1;
return 1;
case 0xfe3d:
*indexout = index + 1;
return 1;
case 0xfe3e:
*indexout = index + 1;
return 1;
case 0xfe3f:
*indexout = index + 1;
return 1;
case 0xfe40:
*indexout = index + 1;
return 1;
case 0xfe41:
*indexout = index + 1;
return 1;
case 0xfe42:
*indexout = index + 1;
return 1;
case 0xfe43:
*indexout = index + 1;
return 1;
case 0xfe44:
*indexout = index + 1;
return 1;
case 0xfe47:
*indexout = index + 1;
return 1;
case 0xfe48:
*indexout = index + 1;
return 1;
case 0xfe49:
*indexout = index + 2;
return 2;
case 0xfe4a:
*indexout = index + 2;
return 2;
case 0xfe4b:
*indexout = index + 2;
return 2;
case 0xfe4c:
*indexout = index + 2;
return 2;
case 0xfe4d:
*indexout = index + 1;
return 1;
case 0xfe4e:
*indexout = index + 1;
return 1;
case 0xfe4f:
*indexout = index + 1;
return 1;
case 0xfe50:
*indexout = index + 1;
return 1;
case 0xfe51:
*indexout = index + 1;
return 1;
case 0xfe52:
*indexout = index + 1;
return 1;
case 0xfe54:
*indexout = index + 1;
return 1;
case 0xfe55:
*indexout = index + 1;
return 1;
case 0xfe56:
*indexout = index + 1;
return 1;
case 0xfe57:
*indexout = index + 1;
return 1;
case 0xfe58:
*indexout = index + 1;
return 1;
case 0xfe59:
*indexout = index + 1;
return 1;
case 0xfe5a:
*indexout = index + 1;
return 1;
case 0xfe5b:
*indexout = index + 1;
return 1;
case 0xfe5c:
*indexout = index + 1;
return 1;
case 0xfe5d:
*indexout = index + 1;
return 1;
case 0xfe5e:
*indexout = index + 1;
return 1;
case 0xfe5f:
*indexout = index + 1;
return 1;
case 0xfe60:
*indexout = index + 1;
return 1;
case 0xfe61:
*indexout = index + 1;
return 1;
case 0xfe62:
*indexout = index + 1;
return 1;
case 0xfe63:
*indexout = index + 1;
return 1;
case 0xfe64:
*indexout = index + 1;
return 1;
case 0xfe65:
*indexout = index + 1;
return 1;
case 0xfe66:
*indexout = index + 1;
return 1;
case 0xfe68:
*indexout = index + 1;
return 1;
case 0xfe69:
*indexout = index + 1;
return 1;
case 0xfe6a:
*indexout = index + 1;
return 1;
case 0xfe6b:
*indexout = index + 1;
return 1;
case 0xfe70:
*indexout = index + 2;
return 2;
case 0xfe71:
*indexout = index + 2;
return 2;
case 0xfe72:
*indexout = index + 2;
return 2;
case 0xfe74:
*indexout = index + 2;
return 2;
case 0xfe76:
*indexout = index + 2;
return 2;
case 0xfe77:
*indexout = index + 2;
return 2;
case 0xfe78:
*indexout = index + 2;
return 2;
case 0xfe79:
*indexout = index + 2;
return 2;
case 0xfe7a:
*indexout = index + 2;
return 2;
case 0xfe7b:
*indexout = index + 2;
return 2;
case 0xfe7c:
*indexout = index + 2;
return 2;
case 0xfe7d:
*indexout = index + 2;
return 2;
case 0xfe7e:
*indexout = index + 2;
return 2;
case 0xfe7f:
*indexout = index + 2;
return 2;
case 0xfe80:
*indexout = index + 1;
return 1;
case 0xfe81:
*indexout = index + 1;
return 1;
case 0xfe82:
*indexout = index + 1;
return 1;
case 0xfe83:
*indexout = index + 1;
return 1;
case 0xfe84:
*indexout = index + 1;
return 1;
case 0xfe85:
*indexout = index + 1;
return 1;
case 0xfe86:
*indexout = index + 1;
return 1;
case 0xfe87:
*indexout = index + 1;
return 1;
case 0xfe88:
*indexout = index + 1;
return 1;
case 0xfe89:
*indexout = index + 1;
return 1;
case 0xfe8a:
*indexout = index + 1;
return 1;
case 0xfe8b:
*indexout = index + 1;
return 1;
case 0xfe8c:
*indexout = index + 1;
return 1;
case 0xfe8d:
*indexout = index + 1;
return 1;
case 0xfe8e:
*indexout = index + 1;
return 1;
case 0xfe8f:
*indexout = index + 1;
return 1;
case 0xfe90:
*indexout = index + 1;
return 1;
case 0xfe91:
*indexout = index + 1;
return 1;
case 0xfe92:
*indexout = index + 1;
return 1;
case 0xfe93:
*indexout = index + 1;
return 1;
case 0xfe94:
*indexout = index + 1;
return 1;
case 0xfe95:
*indexout = index + 1;
return 1;
case 0xfe96:
*indexout = index + 1;
return 1;
case 0xfe97:
*indexout = index + 1;
return 1;
case 0xfe98:
*indexout = index + 1;
return 1;
case 0xfe99:
*indexout = index + 1;
return 1;
case 0xfe9a:
*indexout = index + 1;
return 1;
case 0xfe9b:
*indexout = index + 1;
return 1;
case 0xfe9c:
*indexout = index + 1;
return 1;
case 0xfe9d:
*indexout = index + 1;
return 1;
case 0xfe9e:
*indexout = index + 1;
return 1;
case 0xfe9f:
*indexout = index + 1;
return 1;
case 0xfea0:
*indexout = index + 1;
return 1;
case 0xfea1:
*indexout = index + 1;
return 1;
case 0xfea2:
*indexout = index + 1;
return 1;
case 0xfea3:
*indexout = index + 1;
return 1;
case 0xfea4:
*indexout = index + 1;
return 1;
case 0xfea5:
*indexout = index + 1;
return 1;
case 0xfea6:
*indexout = index + 1;
return 1;
case 0xfea7:
*indexout = index + 1;
return 1;
case 0xfea8:
*indexout = index + 1;
return 1;
case 0xfea9:
*indexout = index + 1;
return 1;
case 0xfeaa:
*indexout = index + 1;
return 1;
case 0xfeab:
*indexout = index + 1;
return 1;
case 0xfeac:
*indexout = index + 1;
return 1;
case 0xfead:
*indexout = index + 1;
return 1;
case 0xfeae:
*indexout = index + 1;
return 1;
case 0xfeaf:
*indexout = index + 1;
return 1;
case 0xfeb0:
*indexout = index + 1;
return 1;
case 0xfeb1:
*indexout = index + 1;
return 1;
case 0xfeb2:
*indexout = index + 1;
return 1;
case 0xfeb3:
*indexout = index + 1;
return 1;
case 0xfeb4:
*indexout = index + 1;
return 1;
case 0xfeb5:
*indexout = index + 1;
return 1;
case 0xfeb6:
*indexout = index + 1;
return 1;
case 0xfeb7:
*indexout = index + 1;
return 1;
case 0xfeb8:
*indexout = index + 1;
return 1;
case 0xfeb9:
*indexout = index + 1;
return 1;
case 0xfeba:
*indexout = index + 1;
return 1;
case 0xfebb:
*indexout = index + 1;
return 1;
case 0xfebc:
*indexout = index + 1;
return 1;
case 0xfebd:
*indexout = index + 1;
return 1;
case 0xfebe:
*indexout = index + 1;
return 1;
case 0xfebf:
*indexout = index + 1;
return 1;
case 0xfec0:
*indexout = index + 1;
return 1;
case 0xfec1:
*indexout = index + 1;
return 1;
case 0xfec2:
*indexout = index + 1;
return 1;
case 0xfec3:
*indexout = index + 1;
return 1;
case 0xfec4:
*indexout = index + 1;
return 1;
case 0xfec5:
*indexout = index + 1;
return 1;
case 0xfec6:
*indexout = index + 1;
return 1;
case 0xfec7:
*indexout = index + 1;
return 1;
case 0xfec8:
*indexout = index + 1;
return 1;
case 0xfec9:
*indexout = index + 1;
return 1;
case 0xfeca:
*indexout = index + 1;
return 1;
case 0xfecb:
*indexout = index + 1;
return 1;
case 0xfecc:
*indexout = index + 1;
return 1;
case 0xfecd:
*indexout = index + 1;
return 1;
case 0xfece:
*indexout = index + 1;
return 1;
case 0xfecf:
*indexout = index + 1;
return 1;
case 0xfed0:
*indexout = index + 1;
return 1;
case 0xfed1:
*indexout = index + 1;
return 1;
case 0xfed2:
*indexout = index + 1;
return 1;
case 0xfed3:
*indexout = index + 1;
return 1;
case 0xfed4:
*indexout = index + 1;
return 1;
case 0xfed5:
*indexout = index + 1;
return 1;
case 0xfed6:
*indexout = index + 1;
return 1;
case 0xfed7:
*indexout = index + 1;
return 1;
case 0xfed8:
*indexout = index + 1;
return 1;
case 0xfed9:
*indexout = index + 1;
return 1;
case 0xfeda:
*indexout = index + 1;
return 1;
case 0xfedb:
*indexout = index + 1;
return 1;
case 0xfedc:
*indexout = index + 1;
return 1;
case 0xfedd:
*indexout = index + 1;
return 1;
case 0xfede:
*indexout = index + 1;
return 1;
case 0xfedf:
*indexout = index + 1;
return 1;
case 0xfee0:
*indexout = index + 1;
return 1;
case 0xfee1:
*indexout = index + 1;
return 1;
case 0xfee2:
*indexout = index + 1;
return 1;
case 0xfee3:
*indexout = index + 1;
return 1;
case 0xfee4:
*indexout = index + 1;
return 1;
case 0xfee5:
*indexout = index + 1;
return 1;
case 0xfee6:
*indexout = index + 1;
return 1;
case 0xfee7:
*indexout = index + 1;
return 1;
case 0xfee8:
*indexout = index + 1;
return 1;
case 0xfee9:
*indexout = index + 1;
return 1;
case 0xfeea:
*indexout = index + 1;
return 1;
case 0xfeeb:
*indexout = index + 1;
return 1;
case 0xfeec:
*indexout = index + 1;
return 1;
case 0xfeed:
*indexout = index + 1;
return 1;
case 0xfeee:
*indexout = index + 1;
return 1;
case 0xfeef:
*indexout = index + 1;
return 1;
case 0xfef0:
*indexout = index + 1;
return 1;
case 0xfef1:
*indexout = index + 1;
return 1;
case 0xfef2:
*indexout = index + 1;
return 1;
case 0xfef3:
*indexout = index + 1;
return 1;
case 0xfef4:
*indexout = index + 1;
return 1;
case 0xfef5:
*indexout = index + 2;
return 2;
case 0xfef6:
*indexout = index + 2;
return 2;
case 0xfef7:
*indexout = index + 2;
return 2;
case 0xfef8:
*indexout = index + 2;
return 2;
case 0xfef9:
*indexout = index + 2;
return 2;
case 0xfefa:
*indexout = index + 2;
return 2;
case 0xfefb:
*indexout = index + 2;
return 2;
case 0xfefc:
*indexout = index + 2;
return 2;
case 0xff01:
*indexout = index + 1;
return 1;
case 0xff02:
*indexout = index + 1;
return 1;
case 0xff03:
*indexout = index + 1;
return 1;
case 0xff04:
*indexout = index + 1;
return 1;
case 0xff05:
*indexout = index + 1;
return 1;
case 0xff06:
*indexout = index + 1;
return 1;
case 0xff07:
*indexout = index + 1;
return 1;
case 0xff08:
*indexout = index + 1;
return 1;
case 0xff09:
*indexout = index + 1;
return 1;
case 0xff0a:
*indexout = index + 1;
return 1;
case 0xff0b:
*indexout = index + 1;
return 1;
case 0xff0c:
*indexout = index + 1;
return 1;
case 0xff0d:
*indexout = index + 1;
return 1;
case 0xff0e:
*indexout = index + 1;
return 1;
case 0xff0f:
*indexout = index + 1;
return 1;
case 0xff10:
*indexout = index + 1;
return 1;
case 0xff11:
*indexout = index + 1;
return 1;
case 0xff12:
*indexout = index + 1;
return 1;
case 0xff13:
*indexout = index + 1;
return 1;
case 0xff14:
*indexout = index + 1;
return 1;
case 0xff15:
*indexout = index + 1;
return 1;
case 0xff16:
*indexout = index + 1;
return 1;
case 0xff17:
*indexout = index + 1;
return 1;
case 0xff18:
*indexout = index + 1;
return 1;
case 0xff19:
*indexout = index + 1;
return 1;
case 0xff1a:
*indexout = index + 1;
return 1;
case 0xff1b:
*indexout = index + 1;
return 1;
case 0xff1c:
*indexout = index + 1;
return 1;
case 0xff1d:
*indexout = index + 1;
return 1;
case 0xff1e:
*indexout = index + 1;
return 1;
case 0xff1f:
*indexout = index + 1;
return 1;
case 0xff20:
*indexout = index + 1;
return 1;
case 0xff21:
*indexout = index + 1;
return 1;
case 0xff22:
*indexout = index + 1;
return 1;
case 0xff23:
*indexout = index + 1;
return 1;
case 0xff24:
*indexout = index + 1;
return 1;
case 0xff25:
*indexout = index + 1;
return 1;
case 0xff26:
*indexout = index + 1;
return 1;
case 0xff27:
*indexout = index + 1;
return 1;
case 0xff28:
*indexout = index + 1;
return 1;
case 0xff29:
*indexout = index + 1;
return 1;
case 0xff2a:
*indexout = index + 1;
return 1;
case 0xff2b:
*indexout = index + 1;
return 1;
case 0xff2c:
*indexout = index + 1;
return 1;
case 0xff2d:
*indexout = index + 1;
return 1;
case 0xff2e:
*indexout = index + 1;
return 1;
case 0xff2f:
*indexout = index + 1;
return 1;
case 0xff30:
*indexout = index + 1;
return 1;
case 0xff31:
*indexout = index + 1;
return 1;
case 0xff32:
*indexout = index + 1;
return 1;
case 0xff33:
*indexout = index + 1;
return 1;
case 0xff34:
*indexout = index + 1;
return 1;
case 0xff35:
*indexout = index + 1;
return 1;
case 0xff36:
*indexout = index + 1;
return 1;
case 0xff37:
*indexout = index + 1;
return 1;
case 0xff38:
*indexout = index + 1;
return 1;
case 0xff39:
*indexout = index + 1;
return 1;
case 0xff3a:
*indexout = index + 1;
return 1;
case 0xff3b:
*indexout = index + 1;
return 1;
case 0xff3c:
*indexout = index + 1;
return 1;
case 0xff3d:
*indexout = index + 1;
return 1;
case 0xff3e:
*indexout = index + 1;
return 1;
case 0xff3f:
*indexout = index + 1;
return 1;
case 0xff40:
*indexout = index + 1;
return 1;
case 0xff41:
*indexout = index + 1;
return 1;
case 0xff42:
*indexout = index + 1;
return 1;
case 0xff43:
*indexout = index + 1;
return 1;
case 0xff44:
*indexout = index + 1;
return 1;
case 0xff45:
*indexout = index + 1;
return 1;
case 0xff46:
*indexout = index + 1;
return 1;
case 0xff47:
*indexout = index + 1;
return 1;
case 0xff48:
*indexout = index + 1;
return 1;
case 0xff49:
*indexout = index + 1;
return 1;
case 0xff4a:
*indexout = index + 1;
return 1;
case 0xff4b:
*indexout = index + 1;
return 1;
case 0xff4c:
*indexout = index + 1;
return 1;
case 0xff4d:
*indexout = index + 1;
return 1;
case 0xff4e:
*indexout = index + 1;
return 1;
case 0xff4f:
*indexout = index + 1;
return 1;
case 0xff50:
*indexout = index + 1;
return 1;
case 0xff51:
*indexout = index + 1;
return 1;
case 0xff52:
*indexout = index + 1;
return 1;
case 0xff53:
*indexout = index + 1;
return 1;
case 0xff54:
*indexout = index + 1;
return 1;
case 0xff55:
*indexout = index + 1;
return 1;
case 0xff56:
*indexout = index + 1;
return 1;
case 0xff57:
*indexout = index + 1;
return 1;
case 0xff58:
*indexout = index + 1;
return 1;
case 0xff59:
*indexout = index + 1;
return 1;
case 0xff5a:
*indexout = index + 1;
return 1;
case 0xff5b:
*indexout = index + 1;
return 1;
case 0xff5c:
*indexout = index + 1;
return 1;
case 0xff5d:
*indexout = index + 1;
return 1;
case 0xff5e:
*indexout = index + 1;
return 1;
case 0xff5f:
*indexout = index + 1;
return 1;
case 0xff60:
*indexout = index + 1;
return 1;
case 0xff61:
*indexout = index + 1;
return 1;
case 0xff62:
*indexout = index + 1;
return 1;
case 0xff63:
*indexout = index + 1;
return 1;
case 0xff64:
*indexout = index + 1;
return 1;
case 0xff65:
*indexout = index + 1;
return 1;
case 0xff66:
*indexout = index + 1;
return 1;
case 0xff67:
*indexout = index + 1;
return 1;
case 0xff68:
*indexout = index + 1;
return 1;
case 0xff69:
*indexout = index + 1;
return 1;
case 0xff6a:
*indexout = index + 1;
return 1;
case 0xff6b:
*indexout = index + 1;
return 1;
case 0xff6c:
*indexout = index + 1;
return 1;
case 0xff6d:
*indexout = index + 1;
return 1;
case 0xff6e:
*indexout = index + 1;
return 1;
case 0xff6f:
*indexout = index + 1;
return 1;
case 0xff70:
*indexout = index + 1;
return 1;
case 0xff71:
*indexout = index + 1;
return 1;
case 0xff72:
*indexout = index + 1;
return 1;
case 0xff73:
*indexout = index + 1;
return 1;
case 0xff74:
*indexout = index + 1;
return 1;
case 0xff75:
*indexout = index + 1;
return 1;
case 0xff76:
*indexout = index + 1;
return 1;
case 0xff77:
*indexout = index + 1;
return 1;
case 0xff78:
*indexout = index + 1;
return 1;
case 0xff79:
*indexout = index + 1;
return 1;
case 0xff7a:
*indexout = index + 1;
return 1;
case 0xff7b:
*indexout = index + 1;
return 1;
case 0xff7c:
*indexout = index + 1;
return 1;
case 0xff7d:
*indexout = index + 1;
return 1;
case 0xff7e:
*indexout = index + 1;
return 1;
case 0xff7f:
*indexout = index + 1;
return 1;
case 0xff80:
*indexout = index + 1;
return 1;
case 0xff81:
*indexout = index + 1;
return 1;
case 0xff82:
*indexout = index + 1;
return 1;
case 0xff83:
*indexout = index + 1;
return 1;
case 0xff84:
*indexout = index + 1;
return 1;
case 0xff85:
*indexout = index + 1;
return 1;
case 0xff86:
*indexout = index + 1;
return 1;
case 0xff87:
*indexout = index + 1;
return 1;
case 0xff88:
*indexout = index + 1;
return 1;
case 0xff89:
*indexout = index + 1;
return 1;
case 0xff8a:
*indexout = index + 1;
return 1;
case 0xff8b:
*indexout = index + 1;
return 1;
case 0xff8c:
*indexout = index + 1;
return 1;
case 0xff8d:
*indexout = index + 1;
return 1;
case 0xff8e:
*indexout = index + 1;
return 1;
case 0xff8f:
*indexout = index + 1;
return 1;
case 0xff90:
*indexout = index + 1;
return 1;
case 0xff91:
*indexout = index + 1;
return 1;
case 0xff92:
*indexout = index + 1;
return 1;
case 0xff93:
*indexout = index + 1;
return 1;
case 0xff94:
*indexout = index + 1;
return 1;
case 0xff95:
*indexout = index + 1;
return 1;
case 0xff96:
*indexout = index + 1;
return 1;
case 0xff97:
*indexout = index + 1;
return 1;
case 0xff98:
*indexout = index + 1;
return 1;
case 0xff99:
*indexout = index + 1;
return 1;
case 0xff9a:
*indexout = index + 1;
return 1;
case 0xff9b:
*indexout = index + 1;
return 1;
case 0xff9c:
*indexout = index + 1;
return 1;
case 0xff9d:
*indexout = index + 1;
return 1;
case 0xff9e:
*indexout = index + 1;
return 1;
case 0xff9f:
*indexout = index + 1;
return 1;
case 0xffa0:
*indexout = index + 1;
return 1;
case 0xffa1:
*indexout = index + 1;
return 1;
case 0xffa2:
*indexout = index + 1;
return 1;
case 0xffa3:
*indexout = index + 1;
return 1;
case 0xffa4:
*indexout = index + 1;
return 1;
case 0xffa5:
*indexout = index + 1;
return 1;
case 0xffa6:
*indexout = index + 1;
return 1;
case 0xffa7:
*indexout = index + 1;
return 1;
case 0xffa8:
*indexout = index + 1;
return 1;
case 0xffa9:
*indexout = index + 1;
return 1;
case 0xffaa:
*indexout = index + 1;
return 1;
case 0xffab:
*indexout = index + 1;
return 1;
case 0xffac:
*indexout = index + 1;
return 1;
case 0xffad:
*indexout = index + 1;
return 1;
case 0xffae:
*indexout = index + 1;
return 1;
case 0xffaf:
*indexout = index + 1;
return 1;
case 0xffb0:
*indexout = index + 1;
return 1;
case 0xffb1:
*indexout = index + 1;
return 1;
case 0xffb2:
*indexout = index + 1;
return 1;
case 0xffb3:
*indexout = index + 1;
return 1;
case 0xffb4:
*indexout = index + 1;
return 1;
case 0xffb5:
*indexout = index + 1;
return 1;
case 0xffb6:
*indexout = index + 1;
return 1;
case 0xffb7:
*indexout = index + 1;
return 1;
case 0xffb8:
*indexout = index + 1;
return 1;
case 0xffb9:
*indexout = index + 1;
return 1;
case 0xffba:
*indexout = index + 1;
return 1;
case 0xffbb:
*indexout = index + 1;
return 1;
case 0xffbc:
*indexout = index + 1;
return 1;
case 0xffbd:
*indexout = index + 1;
return 1;
case 0xffbe:
*indexout = index + 1;
return 1;
case 0xffc2:
*indexout = index + 1;
return 1;
case 0xffc3:
*indexout = index + 1;
return 1;
case 0xffc4:
*indexout = index + 1;
return 1;
case 0xffc5:
*indexout = index + 1;
return 1;
case 0xffc6:
*indexout = index + 1;
return 1;
case 0xffc7:
*indexout = index + 1;
return 1;
case 0xffca:
*indexout = index + 1;
return 1;
case 0xffcb:
*indexout = index + 1;
return 1;
case 0xffcc:
*indexout = index + 1;
return 1;
case 0xffcd:
*indexout = index + 1;
return 1;
case 0xffce:
*indexout = index + 1;
return 1;
case 0xffcf:
*indexout = index + 1;
return 1;
case 0xffd2:
*indexout = index + 1;
return 1;
case 0xffd3:
*indexout = index + 1;
return 1;
case 0xffd4:
*indexout = index + 1;
return 1;
case 0xffd5:
*indexout = index + 1;
return 1;
case 0xffd6:
*indexout = index + 1;
return 1;
case 0xffd7:
*indexout = index + 1;
return 1;
case 0xffda:
*indexout = index + 1;
return 1;
case 0xffdb:
*indexout = index + 1;
return 1;
case 0xffdc:
*indexout = index + 1;
return 1;
case 0xffe0:
*indexout = index + 1;
return 1;
case 0xffe1:
*indexout = index + 1;
return 1;
case 0xffe2:
*indexout = index + 1;
return 1;
case 0xffe3:
*indexout = index + 2;
return 2;
case 0xffe4:
*indexout = index + 1;
return 1;
case 0xffe5:
*indexout = index + 1;
return 1;
case 0xffe6:
*indexout = index + 1;
return 1;
case 0xffe8:
*indexout = index + 1;
return 1;
case 0xffe9:
*indexout = index + 1;
return 1;
case 0xffea:
*indexout = index + 1;
return 1;
case 0xffeb:
*indexout = index + 1;
return 1;
case 0xffec:
*indexout = index + 1;
return 1;
case 0xffed:
*indexout = index + 1;
return 1;
case 0xffee:
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
case 0x1d15e:
*indexout = index + 2;
return 2;
case 0x1d15f:
*indexout = index + 2;
return 2;
case 0x1d160:
*indexout = index + 3;
return 3;
case 0x1d161:
*indexout = index + 3;
return 3;
case 0x1d162:
*indexout = index + 3;
return 3;
case 0x1d163:
*indexout = index + 3;
return 3;
case 0x1d164:
*indexout = index + 3;
return 3;
case 0x1d1bb:
*indexout = index + 2;
return 2;
case 0x1d1bc:
*indexout = index + 2;
return 2;
case 0x1d1bd:
*indexout = index + 3;
return 3;
case 0x1d1be:
*indexout = index + 3;
return 3;
case 0x1d1bf:
*indexout = index + 3;
return 3;
case 0x1d1c0:
*indexout = index + 3;
return 3;
case 0x1d400:
*indexout = index + 1;
return 1;
case 0x1d401:
*indexout = index + 1;
return 1;
case 0x1d402:
*indexout = index + 1;
return 1;
case 0x1d403:
*indexout = index + 1;
return 1;
case 0x1d404:
*indexout = index + 1;
return 1;
case 0x1d405:
*indexout = index + 1;
return 1;
case 0x1d406:
*indexout = index + 1;
return 1;
case 0x1d407:
*indexout = index + 1;
return 1;
case 0x1d408:
*indexout = index + 1;
return 1;
case 0x1d409:
*indexout = index + 1;
return 1;
case 0x1d40a:
*indexout = index + 1;
return 1;
case 0x1d40b:
*indexout = index + 1;
return 1;
case 0x1d40c:
*indexout = index + 1;
return 1;
case 0x1d40d:
*indexout = index + 1;
return 1;
case 0x1d40e:
*indexout = index + 1;
return 1;
case 0x1d40f:
*indexout = index + 1;
return 1;
case 0x1d410:
*indexout = index + 1;
return 1;
case 0x1d411:
*indexout = index + 1;
return 1;
case 0x1d412:
*indexout = index + 1;
return 1;
case 0x1d413:
*indexout = index + 1;
return 1;
case 0x1d414:
*indexout = index + 1;
return 1;
case 0x1d415:
*indexout = index + 1;
return 1;
case 0x1d416:
*indexout = index + 1;
return 1;
case 0x1d417:
*indexout = index + 1;
return 1;
case 0x1d418:
*indexout = index + 1;
return 1;
case 0x1d419:
*indexout = index + 1;
return 1;
case 0x1d41a:
*indexout = index + 1;
return 1;
case 0x1d41b:
*indexout = index + 1;
return 1;
case 0x1d41c:
*indexout = index + 1;
return 1;
case 0x1d41d:
*indexout = index + 1;
return 1;
case 0x1d41e:
*indexout = index + 1;
return 1;
case 0x1d41f:
*indexout = index + 1;
return 1;
case 0x1d420:
*indexout = index + 1;
return 1;
case 0x1d421:
*indexout = index + 1;
return 1;
case 0x1d422:
*indexout = index + 1;
return 1;
case 0x1d423:
*indexout = index + 1;
return 1;
case 0x1d424:
*indexout = index + 1;
return 1;
case 0x1d425:
*indexout = index + 1;
return 1;
case 0x1d426:
*indexout = index + 1;
return 1;
case 0x1d427:
*indexout = index + 1;
return 1;
case 0x1d428:
*indexout = index + 1;
return 1;
case 0x1d429:
*indexout = index + 1;
return 1;
case 0x1d42a:
*indexout = index + 1;
return 1;
case 0x1d42b:
*indexout = index + 1;
return 1;
case 0x1d42c:
*indexout = index + 1;
return 1;
case 0x1d42d:
*indexout = index + 1;
return 1;
case 0x1d42e:
*indexout = index + 1;
return 1;
case 0x1d42f:
*indexout = index + 1;
return 1;
case 0x1d430:
*indexout = index + 1;
return 1;
case 0x1d431:
*indexout = index + 1;
return 1;
case 0x1d432:
*indexout = index + 1;
return 1;
case 0x1d433:
*indexout = index + 1;
return 1;
case 0x1d434:
*indexout = index + 1;
return 1;
case 0x1d435:
*indexout = index + 1;
return 1;
case 0x1d436:
*indexout = index + 1;
return 1;
case 0x1d437:
*indexout = index + 1;
return 1;
case 0x1d438:
*indexout = index + 1;
return 1;
case 0x1d439:
*indexout = index + 1;
return 1;
case 0x1d43a:
*indexout = index + 1;
return 1;
case 0x1d43b:
*indexout = index + 1;
return 1;
case 0x1d43c:
*indexout = index + 1;
return 1;
case 0x1d43d:
*indexout = index + 1;
return 1;
case 0x1d43e:
*indexout = index + 1;
return 1;
case 0x1d43f:
*indexout = index + 1;
return 1;
case 0x1d440:
*indexout = index + 1;
return 1;
case 0x1d441:
*indexout = index + 1;
return 1;
case 0x1d442:
*indexout = index + 1;
return 1;
case 0x1d443:
*indexout = index + 1;
return 1;
case 0x1d444:
*indexout = index + 1;
return 1;
case 0x1d445:
*indexout = index + 1;
return 1;
case 0x1d446:
*indexout = index + 1;
return 1;
case 0x1d447:
*indexout = index + 1;
return 1;
case 0x1d448:
*indexout = index + 1;
return 1;
case 0x1d449:
*indexout = index + 1;
return 1;
case 0x1d44a:
*indexout = index + 1;
return 1;
case 0x1d44b:
*indexout = index + 1;
return 1;
case 0x1d44c:
*indexout = index + 1;
return 1;
case 0x1d44d:
*indexout = index + 1;
return 1;
case 0x1d44e:
*indexout = index + 1;
return 1;
case 0x1d44f:
*indexout = index + 1;
return 1;
case 0x1d450:
*indexout = index + 1;
return 1;
case 0x1d451:
*indexout = index + 1;
return 1;
case 0x1d452:
*indexout = index + 1;
return 1;
case 0x1d453:
*indexout = index + 1;
return 1;
case 0x1d454:
*indexout = index + 1;
return 1;
case 0x1d456:
*indexout = index + 1;
return 1;
case 0x1d457:
*indexout = index + 1;
return 1;
case 0x1d458:
*indexout = index + 1;
return 1;
case 0x1d459:
*indexout = index + 1;
return 1;
case 0x1d45a:
*indexout = index + 1;
return 1;
case 0x1d45b:
*indexout = index + 1;
return 1;
case 0x1d45c:
*indexout = index + 1;
return 1;
case 0x1d45d:
*indexout = index + 1;
return 1;
case 0x1d45e:
*indexout = index + 1;
return 1;
case 0x1d45f:
*indexout = index + 1;
return 1;
case 0x1d460:
*indexout = index + 1;
return 1;
case 0x1d461:
*indexout = index + 1;
return 1;
case 0x1d462:
*indexout = index + 1;
return 1;
case 0x1d463:
*indexout = index + 1;
return 1;
case 0x1d464:
*indexout = index + 1;
return 1;
case 0x1d465:
*indexout = index + 1;
return 1;
case 0x1d466:
*indexout = index + 1;
return 1;
case 0x1d467:
*indexout = index + 1;
return 1;
case 0x1d468:
*indexout = index + 1;
return 1;
case 0x1d469:
*indexout = index + 1;
return 1;
case 0x1d46a:
*indexout = index + 1;
return 1;
case 0x1d46b:
*indexout = index + 1;
return 1;
case 0x1d46c:
*indexout = index + 1;
return 1;
case 0x1d46d:
*indexout = index + 1;
return 1;
case 0x1d46e:
*indexout = index + 1;
return 1;
case 0x1d46f:
*indexout = index + 1;
return 1;
case 0x1d470:
*indexout = index + 1;
return 1;
case 0x1d471:
*indexout = index + 1;
return 1;
case 0x1d472:
*indexout = index + 1;
return 1;
case 0x1d473:
*indexout = index + 1;
return 1;
case 0x1d474:
*indexout = index + 1;
return 1;
case 0x1d475:
*indexout = index + 1;
return 1;
case 0x1d476:
*indexout = index + 1;
return 1;
case 0x1d477:
*indexout = index + 1;
return 1;
case 0x1d478:
*indexout = index + 1;
return 1;
case 0x1d479:
*indexout = index + 1;
return 1;
case 0x1d47a:
*indexout = index + 1;
return 1;
case 0x1d47b:
*indexout = index + 1;
return 1;
case 0x1d47c:
*indexout = index + 1;
return 1;
case 0x1d47d:
*indexout = index + 1;
return 1;
case 0x1d47e:
*indexout = index + 1;
return 1;
case 0x1d47f:
*indexout = index + 1;
return 1;
case 0x1d480:
*indexout = index + 1;
return 1;
case 0x1d481:
*indexout = index + 1;
return 1;
case 0x1d482:
*indexout = index + 1;
return 1;
case 0x1d483:
*indexout = index + 1;
return 1;
case 0x1d484:
*indexout = index + 1;
return 1;
case 0x1d485:
*indexout = index + 1;
return 1;
case 0x1d486:
*indexout = index + 1;
return 1;
case 0x1d487:
*indexout = index + 1;
return 1;
case 0x1d488:
*indexout = index + 1;
return 1;
case 0x1d489:
*indexout = index + 1;
return 1;
case 0x1d48a:
*indexout = index + 1;
return 1;
case 0x1d48b:
*indexout = index + 1;
return 1;
case 0x1d48c:
*indexout = index + 1;
return 1;
case 0x1d48d:
*indexout = index + 1;
return 1;
case 0x1d48e:
*indexout = index + 1;
return 1;
case 0x1d48f:
*indexout = index + 1;
return 1;
case 0x1d490:
*indexout = index + 1;
return 1;
case 0x1d491:
*indexout = index + 1;
return 1;
case 0x1d492:
*indexout = index + 1;
return 1;
case 0x1d493:
*indexout = index + 1;
return 1;
case 0x1d494:
*indexout = index + 1;
return 1;
case 0x1d495:
*indexout = index + 1;
return 1;
case 0x1d496:
*indexout = index + 1;
return 1;
case 0x1d497:
*indexout = index + 1;
return 1;
case 0x1d498:
*indexout = index + 1;
return 1;
case 0x1d499:
*indexout = index + 1;
return 1;
case 0x1d49a:
*indexout = index + 1;
return 1;
case 0x1d49b:
*indexout = index + 1;
return 1;
case 0x1d49c:
*indexout = index + 1;
return 1;
case 0x1d49e:
*indexout = index + 1;
return 1;
case 0x1d49f:
*indexout = index + 1;
return 1;
case 0x1d4a2:
*indexout = index + 1;
return 1;
case 0x1d4a5:
*indexout = index + 1;
return 1;
case 0x1d4a6:
*indexout = index + 1;
return 1;
case 0x1d4a9:
*indexout = index + 1;
return 1;
case 0x1d4aa:
*indexout = index + 1;
return 1;
case 0x1d4ab:
*indexout = index + 1;
return 1;
case 0x1d4ac:
*indexout = index + 1;
return 1;
case 0x1d4ae:
*indexout = index + 1;
return 1;
case 0x1d4af:
*indexout = index + 1;
return 1;
case 0x1d4b0:
*indexout = index + 1;
return 1;
case 0x1d4b1:
*indexout = index + 1;
return 1;
case 0x1d4b2:
*indexout = index + 1;
return 1;
case 0x1d4b3:
*indexout = index + 1;
return 1;
case 0x1d4b4:
*indexout = index + 1;
return 1;
case 0x1d4b5:
*indexout = index + 1;
return 1;
case 0x1d4b6:
*indexout = index + 1;
return 1;
case 0x1d4b7:
*indexout = index + 1;
return 1;
case 0x1d4b8:
*indexout = index + 1;
return 1;
case 0x1d4b9:
*indexout = index + 1;
return 1;
case 0x1d4bb:
*indexout = index + 1;
return 1;
case 0x1d4bd:
*indexout = index + 1;
return 1;
case 0x1d4be:
*indexout = index + 1;
return 1;
case 0x1d4bf:
*indexout = index + 1;
return 1;
case 0x1d4c0:
*indexout = index + 1;
return 1;
case 0x1d4c1:
*indexout = index + 1;
return 1;
case 0x1d4c2:
*indexout = index + 1;
return 1;
case 0x1d4c3:
*indexout = index + 1;
return 1;
case 0x1d4c5:
*indexout = index + 1;
return 1;
case 0x1d4c6:
*indexout = index + 1;
return 1;
case 0x1d4c7:
*indexout = index + 1;
return 1;
case 0x1d4c8:
*indexout = index + 1;
return 1;
case 0x1d4c9:
*indexout = index + 1;
return 1;
case 0x1d4ca:
*indexout = index + 1;
return 1;
case 0x1d4cb:
*indexout = index + 1;
return 1;
case 0x1d4cc:
*indexout = index + 1;
return 1;
case 0x1d4cd:
*indexout = index + 1;
return 1;
case 0x1d4ce:
*indexout = index + 1;
return 1;
case 0x1d4cf:
*indexout = index + 1;
return 1;
case 0x1d4d0:
*indexout = index + 1;
return 1;
case 0x1d4d1:
*indexout = index + 1;
return 1;
case 0x1d4d2:
*indexout = index + 1;
return 1;
case 0x1d4d3:
*indexout = index + 1;
return 1;
case 0x1d4d4:
*indexout = index + 1;
return 1;
case 0x1d4d5:
*indexout = index + 1;
return 1;
case 0x1d4d6:
*indexout = index + 1;
return 1;
case 0x1d4d7:
*indexout = index + 1;
return 1;
case 0x1d4d8:
*indexout = index + 1;
return 1;
case 0x1d4d9:
*indexout = index + 1;
return 1;
case 0x1d4da:
*indexout = index + 1;
return 1;
case 0x1d4db:
*indexout = index + 1;
return 1;
case 0x1d4dc:
*indexout = index + 1;
return 1;
case 0x1d4dd:
*indexout = index + 1;
return 1;
case 0x1d4de:
*indexout = index + 1;
return 1;
case 0x1d4df:
*indexout = index + 1;
return 1;
case 0x1d4e0:
*indexout = index + 1;
return 1;
case 0x1d4e1:
*indexout = index + 1;
return 1;
case 0x1d4e2:
*indexout = index + 1;
return 1;
case 0x1d4e3:
*indexout = index + 1;
return 1;
case 0x1d4e4:
*indexout = index + 1;
return 1;
case 0x1d4e5:
*indexout = index + 1;
return 1;
case 0x1d4e6:
*indexout = index + 1;
return 1;
case 0x1d4e7:
*indexout = index + 1;
return 1;
case 0x1d4e8:
*indexout = index + 1;
return 1;
case 0x1d4e9:
*indexout = index + 1;
return 1;
case 0x1d4ea:
*indexout = index + 1;
return 1;
case 0x1d4eb:
*indexout = index + 1;
return 1;
case 0x1d4ec:
*indexout = index + 1;
return 1;
case 0x1d4ed:
*indexout = index + 1;
return 1;
case 0x1d4ee:
*indexout = index + 1;
return 1;
case 0x1d4ef:
*indexout = index + 1;
return 1;
case 0x1d4f0:
*indexout = index + 1;
return 1;
case 0x1d4f1:
*indexout = index + 1;
return 1;
case 0x1d4f2:
*indexout = index + 1;
return 1;
case 0x1d4f3:
*indexout = index + 1;
return 1;
case 0x1d4f4:
*indexout = index + 1;
return 1;
case 0x1d4f5:
*indexout = index + 1;
return 1;
case 0x1d4f6:
*indexout = index + 1;
return 1;
case 0x1d4f7:
*indexout = index + 1;
return 1;
case 0x1d4f8:
*indexout = index + 1;
return 1;
case 0x1d4f9:
*indexout = index + 1;
return 1;
case 0x1d4fa:
*indexout = index + 1;
return 1;
case 0x1d4fb:
*indexout = index + 1;
return 1;
case 0x1d4fc:
*indexout = index + 1;
return 1;
case 0x1d4fd:
*indexout = index + 1;
return 1;
case 0x1d4fe:
*indexout = index + 1;
return 1;
case 0x1d4ff:
*indexout = index + 1;
return 1;
case 0x1d500:
*indexout = index + 1;
return 1;
case 0x1d501:
*indexout = index + 1;
return 1;
case 0x1d502:
*indexout = index + 1;
return 1;
case 0x1d503:
*indexout = index + 1;
return 1;
case 0x1d504:
*indexout = index + 1;
return 1;
case 0x1d505:
*indexout = index + 1;
return 1;
case 0x1d507:
*indexout = index + 1;
return 1;
case 0x1d508:
*indexout = index + 1;
return 1;
case 0x1d509:
*indexout = index + 1;
return 1;
case 0x1d50a:
*indexout = index + 1;
return 1;
case 0x1d50d:
*indexout = index + 1;
return 1;
case 0x1d50e:
*indexout = index + 1;
return 1;
case 0x1d50f:
*indexout = index + 1;
return 1;
case 0x1d510:
*indexout = index + 1;
return 1;
case 0x1d511:
*indexout = index + 1;
return 1;
case 0x1d512:
*indexout = index + 1;
return 1;
case 0x1d513:
*indexout = index + 1;
return 1;
case 0x1d514:
*indexout = index + 1;
return 1;
case 0x1d516:
*indexout = index + 1;
return 1;
case 0x1d517:
*indexout = index + 1;
return 1;
case 0x1d518:
*indexout = index + 1;
return 1;
case 0x1d519:
*indexout = index + 1;
return 1;
case 0x1d51a:
*indexout = index + 1;
return 1;
case 0x1d51b:
*indexout = index + 1;
return 1;
case 0x1d51c:
*indexout = index + 1;
return 1;
case 0x1d51e:
*indexout = index + 1;
return 1;
case 0x1d51f:
*indexout = index + 1;
return 1;
case 0x1d520:
*indexout = index + 1;
return 1;
case 0x1d521:
*indexout = index + 1;
return 1;
case 0x1d522:
*indexout = index + 1;
return 1;
case 0x1d523:
*indexout = index + 1;
return 1;
case 0x1d524:
*indexout = index + 1;
return 1;
case 0x1d525:
*indexout = index + 1;
return 1;
case 0x1d526:
*indexout = index + 1;
return 1;
case 0x1d527:
*indexout = index + 1;
return 1;
case 0x1d528:
*indexout = index + 1;
return 1;
case 0x1d529:
*indexout = index + 1;
return 1;
case 0x1d52a:
*indexout = index + 1;
return 1;
case 0x1d52b:
*indexout = index + 1;
return 1;
case 0x1d52c:
*indexout = index + 1;
return 1;
case 0x1d52d:
*indexout = index + 1;
return 1;
case 0x1d52e:
*indexout = index + 1;
return 1;
case 0x1d52f:
*indexout = index + 1;
return 1;
case 0x1d530:
*indexout = index + 1;
return 1;
case 0x1d531:
*indexout = index + 1;
return 1;
case 0x1d532:
*indexout = index + 1;
return 1;
case 0x1d533:
*indexout = index + 1;
return 1;
case 0x1d534:
*indexout = index + 1;
return 1;
case 0x1d535:
*indexout = index + 1;
return 1;
case 0x1d536:
*indexout = index + 1;
return 1;
case 0x1d537:
*indexout = index + 1;
return 1;
case 0x1d538:
*indexout = index + 1;
return 1;
case 0x1d539:
*indexout = index + 1;
return 1;
case 0x1d53b:
*indexout = index + 1;
return 1;
case 0x1d53c:
*indexout = index + 1;
return 1;
case 0x1d53d:
*indexout = index + 1;
return 1;
case 0x1d53e:
*indexout = index + 1;
return 1;
case 0x1d540:
*indexout = index + 1;
return 1;
case 0x1d541:
*indexout = index + 1;
return 1;
case 0x1d542:
*indexout = index + 1;
return 1;
case 0x1d543:
*indexout = index + 1;
return 1;
case 0x1d544:
*indexout = index + 1;
return 1;
case 0x1d546:
*indexout = index + 1;
return 1;
case 0x1d54a:
*indexout = index + 1;
return 1;
case 0x1d54b:
*indexout = index + 1;
return 1;
case 0x1d54c:
*indexout = index + 1;
return 1;
case 0x1d54d:
*indexout = index + 1;
return 1;
case 0x1d54e:
*indexout = index + 1;
return 1;
case 0x1d54f:
*indexout = index + 1;
return 1;
case 0x1d550:
*indexout = index + 1;
return 1;
case 0x1d552:
*indexout = index + 1;
return 1;
case 0x1d553:
*indexout = index + 1;
return 1;
case 0x1d554:
*indexout = index + 1;
return 1;
case 0x1d555:
*indexout = index + 1;
return 1;
case 0x1d556:
*indexout = index + 1;
return 1;
case 0x1d557:
*indexout = index + 1;
return 1;
case 0x1d558:
*indexout = index + 1;
return 1;
case 0x1d559:
*indexout = index + 1;
return 1;
case 0x1d55a:
*indexout = index + 1;
return 1;
case 0x1d55b:
*indexout = index + 1;
return 1;
case 0x1d55c:
*indexout = index + 1;
return 1;
case 0x1d55d:
*indexout = index + 1;
return 1;
case 0x1d55e:
*indexout = index + 1;
return 1;
case 0x1d55f:
*indexout = index + 1;
return 1;
case 0x1d560:
*indexout = index + 1;
return 1;
case 0x1d561:
*indexout = index + 1;
return 1;
case 0x1d562:
*indexout = index + 1;
return 1;
case 0x1d563:
*indexout = index + 1;
return 1;
case 0x1d564:
*indexout = index + 1;
return 1;
case 0x1d565:
*indexout = index + 1;
return 1;
case 0x1d566:
*indexout = index + 1;
return 1;
case 0x1d567:
*indexout = index + 1;
return 1;
case 0x1d568:
*indexout = index + 1;
return 1;
case 0x1d569:
*indexout = index + 1;
return 1;
case 0x1d56a:
*indexout = index + 1;
return 1;
case 0x1d56b:
*indexout = index + 1;
return 1;
case 0x1d56c:
*indexout = index + 1;
return 1;
case 0x1d56d:
*indexout = index + 1;
return 1;
case 0x1d56e:
*indexout = index + 1;
return 1;
case 0x1d56f:
*indexout = index + 1;
return 1;
case 0x1d570:
*indexout = index + 1;
return 1;
case 0x1d571:
*indexout = index + 1;
return 1;
case 0x1d572:
*indexout = index + 1;
return 1;
case 0x1d573:
*indexout = index + 1;
return 1;
case 0x1d574:
*indexout = index + 1;
return 1;
case 0x1d575:
*indexout = index + 1;
return 1;
case 0x1d576:
*indexout = index + 1;
return 1;
case 0x1d577:
*indexout = index + 1;
return 1;
case 0x1d578:
*indexout = index + 1;
return 1;
case 0x1d579:
*indexout = index + 1;
return 1;
case 0x1d57a:
*indexout = index + 1;
return 1;
case 0x1d57b:
*indexout = index + 1;
return 1;
case 0x1d57c:
*indexout = index + 1;
return 1;
case 0x1d57d:
*indexout = index + 1;
return 1;
case 0x1d57e:
*indexout = index + 1;
return 1;
case 0x1d57f:
*indexout = index + 1;
return 1;
case 0x1d580:
*indexout = index + 1;
return 1;
case 0x1d581:
*indexout = index + 1;
return 1;
case 0x1d582:
*indexout = index + 1;
return 1;
case 0x1d583:
*indexout = index + 1;
return 1;
case 0x1d584:
*indexout = index + 1;
return 1;
case 0x1d585:
*indexout = index + 1;
return 1;
case 0x1d586:
*indexout = index + 1;
return 1;
case 0x1d587:
*indexout = index + 1;
return 1;
case 0x1d588:
*indexout = index + 1;
return 1;
case 0x1d589:
*indexout = index + 1;
return 1;
case 0x1d58a:
*indexout = index + 1;
return 1;
case 0x1d58b:
*indexout = index + 1;
return 1;
case 0x1d58c:
*indexout = index + 1;
return 1;
case 0x1d58d:
*indexout = index + 1;
return 1;
case 0x1d58e:
*indexout = index + 1;
return 1;
case 0x1d58f:
*indexout = index + 1;
return 1;
case 0x1d590:
*indexout = index + 1;
return 1;
case 0x1d591:
*indexout = index + 1;
return 1;
case 0x1d592:
*indexout = index + 1;
return 1;
case 0x1d593:
*indexout = index + 1;
return 1;
case 0x1d594:
*indexout = index + 1;
return 1;
case 0x1d595:
*indexout = index + 1;
return 1;
case 0x1d596:
*indexout = index + 1;
return 1;
case 0x1d597:
*indexout = index + 1;
return 1;
case 0x1d598:
*indexout = index + 1;
return 1;
case 0x1d599:
*indexout = index + 1;
return 1;
case 0x1d59a:
*indexout = index + 1;
return 1;
case 0x1d59b:
*indexout = index + 1;
return 1;
case 0x1d59c:
*indexout = index + 1;
return 1;
case 0x1d59d:
*indexout = index + 1;
return 1;
case 0x1d59e:
*indexout = index + 1;
return 1;
case 0x1d59f:
*indexout = index + 1;
return 1;
case 0x1d5a0:
*indexout = index + 1;
return 1;
case 0x1d5a1:
*indexout = index + 1;
return 1;
case 0x1d5a2:
*indexout = index + 1;
return 1;
case 0x1d5a3:
*indexout = index + 1;
return 1;
case 0x1d5a4:
*indexout = index + 1;
return 1;
case 0x1d5a5:
*indexout = index + 1;
return 1;
case 0x1d5a6:
*indexout = index + 1;
return 1;
case 0x1d5a7:
*indexout = index + 1;
return 1;
case 0x1d5a8:
*indexout = index + 1;
return 1;
case 0x1d5a9:
*indexout = index + 1;
return 1;
case 0x1d5aa:
*indexout = index + 1;
return 1;
case 0x1d5ab:
*indexout = index + 1;
return 1;
case 0x1d5ac:
*indexout = index + 1;
return 1;
case 0x1d5ad:
*indexout = index + 1;
return 1;
case 0x1d5ae:
*indexout = index + 1;
return 1;
case 0x1d5af:
*indexout = index + 1;
return 1;
case 0x1d5b0:
*indexout = index + 1;
return 1;
case 0x1d5b1:
*indexout = index + 1;
return 1;
case 0x1d5b2:
*indexout = index + 1;
return 1;
case 0x1d5b3:
*indexout = index + 1;
return 1;
case 0x1d5b4:
*indexout = index + 1;
return 1;
case 0x1d5b5:
*indexout = index + 1;
return 1;
case 0x1d5b6:
*indexout = index + 1;
return 1;
case 0x1d5b7:
*indexout = index + 1;
return 1;
case 0x1d5b8:
*indexout = index + 1;
return 1;
case 0x1d5b9:
*indexout = index + 1;
return 1;
case 0x1d5ba:
*indexout = index + 1;
return 1;
case 0x1d5bb:
*indexout = index + 1;
return 1;
case 0x1d5bc:
*indexout = index + 1;
return 1;
case 0x1d5bd:
*indexout = index + 1;
return 1;
case 0x1d5be:
*indexout = index + 1;
return 1;
case 0x1d5bf:
*indexout = index + 1;
return 1;
case 0x1d5c0:
*indexout = index + 1;
return 1;
case 0x1d5c1:
*indexout = index + 1;
return 1;
case 0x1d5c2:
*indexout = index + 1;
return 1;
case 0x1d5c3:
*indexout = index + 1;
return 1;
case 0x1d5c4:
*indexout = index + 1;
return 1;
case 0x1d5c5:
*indexout = index + 1;
return 1;
case 0x1d5c6:
*indexout = index + 1;
return 1;
case 0x1d5c7:
*indexout = index + 1;
return 1;
case 0x1d5c8:
*indexout = index + 1;
return 1;
case 0x1d5c9:
*indexout = index + 1;
return 1;
case 0x1d5ca:
*indexout = index + 1;
return 1;
case 0x1d5cb:
*indexout = index + 1;
return 1;
case 0x1d5cc:
*indexout = index + 1;
return 1;
case 0x1d5cd:
*indexout = index + 1;
return 1;
case 0x1d5ce:
*indexout = index + 1;
return 1;
case 0x1d5cf:
*indexout = index + 1;
return 1;
case 0x1d5d0:
*indexout = index + 1;
return 1;
case 0x1d5d1:
*indexout = index + 1;
return 1;
case 0x1d5d2:
*indexout = index + 1;
return 1;
case 0x1d5d3:
*indexout = index + 1;
return 1;
case 0x1d5d4:
*indexout = index + 1;
return 1;
case 0x1d5d5:
*indexout = index + 1;
return 1;
case 0x1d5d6:
*indexout = index + 1;
return 1;
case 0x1d5d7:
*indexout = index + 1;
return 1;
case 0x1d5d8:
*indexout = index + 1;
return 1;
case 0x1d5d9:
*indexout = index + 1;
return 1;
case 0x1d5da:
*indexout = index + 1;
return 1;
case 0x1d5db:
*indexout = index + 1;
return 1;
case 0x1d5dc:
*indexout = index + 1;
return 1;
case 0x1d5dd:
*indexout = index + 1;
return 1;
case 0x1d5de:
*indexout = index + 1;
return 1;
case 0x1d5df:
*indexout = index + 1;
return 1;
case 0x1d5e0:
*indexout = index + 1;
return 1;
case 0x1d5e1:
*indexout = index + 1;
return 1;
case 0x1d5e2:
*indexout = index + 1;
return 1;
case 0x1d5e3:
*indexout = index + 1;
return 1;
case 0x1d5e4:
*indexout = index + 1;
return 1;
case 0x1d5e5:
*indexout = index + 1;
return 1;
case 0x1d5e6:
*indexout = index + 1;
return 1;
case 0x1d5e7:
*indexout = index + 1;
return 1;
case 0x1d5e8:
*indexout = index + 1;
return 1;
case 0x1d5e9:
*indexout = index + 1;
return 1;
case 0x1d5ea:
*indexout = index + 1;
return 1;
case 0x1d5eb:
*indexout = index + 1;
return 1;
case 0x1d5ec:
*indexout = index + 1;
return 1;
case 0x1d5ed:
*indexout = index + 1;
return 1;
case 0x1d5ee:
*indexout = index + 1;
return 1;
case 0x1d5ef:
*indexout = index + 1;
return 1;
case 0x1d5f0:
*indexout = index + 1;
return 1;
case 0x1d5f1:
*indexout = index + 1;
return 1;
case 0x1d5f2:
*indexout = index + 1;
return 1;
case 0x1d5f3:
*indexout = index + 1;
return 1;
case 0x1d5f4:
*indexout = index + 1;
return 1;
case 0x1d5f5:
*indexout = index + 1;
return 1;
case 0x1d5f6:
*indexout = index + 1;
return 1;
case 0x1d5f7:
*indexout = index + 1;
return 1;
case 0x1d5f8:
*indexout = index + 1;
return 1;
case 0x1d5f9:
*indexout = index + 1;
return 1;
case 0x1d5fa:
*indexout = index + 1;
return 1;
case 0x1d5fb:
*indexout = index + 1;
return 1;
case 0x1d5fc:
*indexout = index + 1;
return 1;
case 0x1d5fd:
*indexout = index + 1;
return 1;
case 0x1d5fe:
*indexout = index + 1;
return 1;
case 0x1d5ff:
*indexout = index + 1;
return 1;
case 0x1d600:
*indexout = index + 1;
return 1;
case 0x1d601:
*indexout = index + 1;
return 1;
case 0x1d602:
*indexout = index + 1;
return 1;
case 0x1d603:
*indexout = index + 1;
return 1;
case 0x1d604:
*indexout = index + 1;
return 1;
case 0x1d605:
*indexout = index + 1;
return 1;
case 0x1d606:
*indexout = index + 1;
return 1;
case 0x1d607:
*indexout = index + 1;
return 1;
case 0x1d608:
*indexout = index + 1;
return 1;
case 0x1d609:
*indexout = index + 1;
return 1;
case 0x1d60a:
*indexout = index + 1;
return 1;
case 0x1d60b:
*indexout = index + 1;
return 1;
case 0x1d60c:
*indexout = index + 1;
return 1;
case 0x1d60d:
*indexout = index + 1;
return 1;
case 0x1d60e:
*indexout = index + 1;
return 1;
case 0x1d60f:
*indexout = index + 1;
return 1;
case 0x1d610:
*indexout = index + 1;
return 1;
case 0x1d611:
*indexout = index + 1;
return 1;
case 0x1d612:
*indexout = index + 1;
return 1;
case 0x1d613:
*indexout = index + 1;
return 1;
case 0x1d614:
*indexout = index + 1;
return 1;
case 0x1d615:
*indexout = index + 1;
return 1;
case 0x1d616:
*indexout = index + 1;
return 1;
case 0x1d617:
*indexout = index + 1;
return 1;
case 0x1d618:
*indexout = index + 1;
return 1;
case 0x1d619:
*indexout = index + 1;
return 1;
case 0x1d61a:
*indexout = index + 1;
return 1;
case 0x1d61b:
*indexout = index + 1;
return 1;
case 0x1d61c:
*indexout = index + 1;
return 1;
case 0x1d61d:
*indexout = index + 1;
return 1;
case 0x1d61e:
*indexout = index + 1;
return 1;
case 0x1d61f:
*indexout = index + 1;
return 1;
case 0x1d620:
*indexout = index + 1;
return 1;
case 0x1d621:
*indexout = index + 1;
return 1;
case 0x1d622:
*indexout = index + 1;
return 1;
case 0x1d623:
*indexout = index + 1;
return 1;
case 0x1d624:
*indexout = index + 1;
return 1;
case 0x1d625:
*indexout = index + 1;
return 1;
case 0x1d626:
*indexout = index + 1;
return 1;
case 0x1d627:
*indexout = index + 1;
return 1;
case 0x1d628:
*indexout = index + 1;
return 1;
case 0x1d629:
*indexout = index + 1;
return 1;
case 0x1d62a:
*indexout = index + 1;
return 1;
case 0x1d62b:
*indexout = index + 1;
return 1;
case 0x1d62c:
*indexout = index + 1;
return 1;
case 0x1d62d:
*indexout = index + 1;
return 1;
case 0x1d62e:
*indexout = index + 1;
return 1;
case 0x1d62f:
*indexout = index + 1;
return 1;
case 0x1d630:
*indexout = index + 1;
return 1;
case 0x1d631:
*indexout = index + 1;
return 1;
case 0x1d632:
*indexout = index + 1;
return 1;
case 0x1d633:
*indexout = index + 1;
return 1;
case 0x1d634:
*indexout = index + 1;
return 1;
case 0x1d635:
*indexout = index + 1;
return 1;
case 0x1d636:
*indexout = index + 1;
return 1;
case 0x1d637:
*indexout = index + 1;
return 1;
case 0x1d638:
*indexout = index + 1;
return 1;
case 0x1d639:
*indexout = index + 1;
return 1;
case 0x1d63a:
*indexout = index + 1;
return 1;
case 0x1d63b:
*indexout = index + 1;
return 1;
case 0x1d63c:
*indexout = index + 1;
return 1;
case 0x1d63d:
*indexout = index + 1;
return 1;
case 0x1d63e:
*indexout = index + 1;
return 1;
case 0x1d63f:
*indexout = index + 1;
return 1;
case 0x1d640:
*indexout = index + 1;
return 1;
case 0x1d641:
*indexout = index + 1;
return 1;
case 0x1d642:
*indexout = index + 1;
return 1;
case 0x1d643:
*indexout = index + 1;
return 1;
case 0x1d644:
*indexout = index + 1;
return 1;
case 0x1d645:
*indexout = index + 1;
return 1;
case 0x1d646:
*indexout = index + 1;
return 1;
case 0x1d647:
*indexout = index + 1;
return 1;
case 0x1d648:
*indexout = index + 1;
return 1;
case 0x1d649:
*indexout = index + 1;
return 1;
case 0x1d64a:
*indexout = index + 1;
return 1;
case 0x1d64b:
*indexout = index + 1;
return 1;
case 0x1d64c:
*indexout = index + 1;
return 1;
case 0x1d64d:
*indexout = index + 1;
return 1;
case 0x1d64e:
*indexout = index + 1;
return 1;
case 0x1d64f:
*indexout = index + 1;
return 1;
case 0x1d650:
*indexout = index + 1;
return 1;
case 0x1d651:
*indexout = index + 1;
return 1;
case 0x1d652:
*indexout = index + 1;
return 1;
case 0x1d653:
*indexout = index + 1;
return 1;
case 0x1d654:
*indexout = index + 1;
return 1;
case 0x1d655:
*indexout = index + 1;
return 1;
case 0x1d656:
*indexout = index + 1;
return 1;
case 0x1d657:
*indexout = index + 1;
return 1;
case 0x1d658:
*indexout = index + 1;
return 1;
case 0x1d659:
*indexout = index + 1;
return 1;
case 0x1d65a:
*indexout = index + 1;
return 1;
case 0x1d65b:
*indexout = index + 1;
return 1;
case 0x1d65c:
*indexout = index + 1;
return 1;
case 0x1d65d:
*indexout = index + 1;
return 1;
case 0x1d65e:
*indexout = index + 1;
return 1;
case 0x1d65f:
*indexout = index + 1;
return 1;
case 0x1d660:
*indexout = index + 1;
return 1;
case 0x1d661:
*indexout = index + 1;
return 1;
case 0x1d662:
*indexout = index + 1;
return 1;
case 0x1d663:
*indexout = index + 1;
return 1;
case 0x1d664:
*indexout = index + 1;
return 1;
case 0x1d665:
*indexout = index + 1;
return 1;
case 0x1d666:
*indexout = index + 1;
return 1;
case 0x1d667:
*indexout = index + 1;
return 1;
case 0x1d668:
*indexout = index + 1;
return 1;
case 0x1d669:
*indexout = index + 1;
return 1;
case 0x1d66a:
*indexout = index + 1;
return 1;
case 0x1d66b:
*indexout = index + 1;
return 1;
case 0x1d66c:
*indexout = index + 1;
return 1;
case 0x1d66d:
*indexout = index + 1;
return 1;
case 0x1d66e:
*indexout = index + 1;
return 1;
case 0x1d66f:
*indexout = index + 1;
return 1;
case 0x1d670:
*indexout = index + 1;
return 1;
case 0x1d671:
*indexout = index + 1;
return 1;
case 0x1d672:
*indexout = index + 1;
return 1;
case 0x1d673:
*indexout = index + 1;
return 1;
case 0x1d674:
*indexout = index + 1;
return 1;
case 0x1d675:
*indexout = index + 1;
return 1;
case 0x1d676:
*indexout = index + 1;
return 1;
case 0x1d677:
*indexout = index + 1;
return 1;
case 0x1d678:
*indexout = index + 1;
return 1;
case 0x1d679:
*indexout = index + 1;
return 1;
case 0x1d67a:
*indexout = index + 1;
return 1;
case 0x1d67b:
*indexout = index + 1;
return 1;
case 0x1d67c:
*indexout = index + 1;
return 1;
case 0x1d67d:
*indexout = index + 1;
return 1;
case 0x1d67e:
*indexout = index + 1;
return 1;
case 0x1d67f:
*indexout = index + 1;
return 1;
case 0x1d680:
*indexout = index + 1;
return 1;
case 0x1d681:
*indexout = index + 1;
return 1;
case 0x1d682:
*indexout = index + 1;
return 1;
case 0x1d683:
*indexout = index + 1;
return 1;
case 0x1d684:
*indexout = index + 1;
return 1;
case 0x1d685:
*indexout = index + 1;
return 1;
case 0x1d686:
*indexout = index + 1;
return 1;
case 0x1d687:
*indexout = index + 1;
return 1;
case 0x1d688:
*indexout = index + 1;
return 1;
case 0x1d689:
*indexout = index + 1;
return 1;
case 0x1d68a:
*indexout = index + 1;
return 1;
case 0x1d68b:
*indexout = index + 1;
return 1;
case 0x1d68c:
*indexout = index + 1;
return 1;
case 0x1d68d:
*indexout = index + 1;
return 1;
case 0x1d68e:
*indexout = index + 1;
return 1;
case 0x1d68f:
*indexout = index + 1;
return 1;
case 0x1d690:
*indexout = index + 1;
return 1;
case 0x1d691:
*indexout = index + 1;
return 1;
case 0x1d692:
*indexout = index + 1;
return 1;
case 0x1d693:
*indexout = index + 1;
return 1;
case 0x1d694:
*indexout = index + 1;
return 1;
case 0x1d695:
*indexout = index + 1;
return 1;
case 0x1d696:
*indexout = index + 1;
return 1;
case 0x1d697:
*indexout = index + 1;
return 1;
case 0x1d698:
*indexout = index + 1;
return 1;
case 0x1d699:
*indexout = index + 1;
return 1;
case 0x1d69a:
*indexout = index + 1;
return 1;
case 0x1d69b:
*indexout = index + 1;
return 1;
case 0x1d69c:
*indexout = index + 1;
return 1;
case 0x1d69d:
*indexout = index + 1;
return 1;
case 0x1d69e:
*indexout = index + 1;
return 1;
case 0x1d69f:
*indexout = index + 1;
return 1;
case 0x1d6a0:
*indexout = index + 1;
return 1;
case 0x1d6a1:
*indexout = index + 1;
return 1;
case 0x1d6a2:
*indexout = index + 1;
return 1;
case 0x1d6a3:
*indexout = index + 1;
return 1;
case 0x1d6a4:
*indexout = index + 1;
return 1;
case 0x1d6a5:
*indexout = index + 1;
return 1;
case 0x1d6a8:
*indexout = index + 1;
return 1;
case 0x1d6a9:
*indexout = index + 1;
return 1;
case 0x1d6aa:
*indexout = index + 1;
return 1;
case 0x1d6ab:
*indexout = index + 1;
return 1;
case 0x1d6ac:
*indexout = index + 1;
return 1;
case 0x1d6ad:
*indexout = index + 1;
return 1;
case 0x1d6ae:
*indexout = index + 1;
return 1;
case 0x1d6af:
*indexout = index + 1;
return 1;
case 0x1d6b0:
*indexout = index + 1;
return 1;
case 0x1d6b1:
*indexout = index + 1;
return 1;
case 0x1d6b2:
*indexout = index + 1;
return 1;
case 0x1d6b3:
*indexout = index + 1;
return 1;
case 0x1d6b4:
*indexout = index + 1;
return 1;
case 0x1d6b5:
*indexout = index + 1;
return 1;
case 0x1d6b6:
*indexout = index + 1;
return 1;
case 0x1d6b7:
*indexout = index + 1;
return 1;
case 0x1d6b8:
*indexout = index + 1;
return 1;
case 0x1d6b9:
*indexout = index + 1;
return 1;
case 0x1d6ba:
*indexout = index + 1;
return 1;
case 0x1d6bb:
*indexout = index + 1;
return 1;
case 0x1d6bc:
*indexout = index + 1;
return 1;
case 0x1d6bd:
*indexout = index + 1;
return 1;
case 0x1d6be:
*indexout = index + 1;
return 1;
case 0x1d6bf:
*indexout = index + 1;
return 1;
case 0x1d6c0:
*indexout = index + 1;
return 1;
case 0x1d6c1:
*indexout = index + 1;
return 1;
case 0x1d6c2:
*indexout = index + 1;
return 1;
case 0x1d6c3:
*indexout = index + 1;
return 1;
case 0x1d6c4:
*indexout = index + 1;
return 1;
case 0x1d6c5:
*indexout = index + 1;
return 1;
case 0x1d6c6:
*indexout = index + 1;
return 1;
case 0x1d6c7:
*indexout = index + 1;
return 1;
case 0x1d6c8:
*indexout = index + 1;
return 1;
case 0x1d6c9:
*indexout = index + 1;
return 1;
case 0x1d6ca:
*indexout = index + 1;
return 1;
case 0x1d6cb:
*indexout = index + 1;
return 1;
case 0x1d6cc:
*indexout = index + 1;
return 1;
case 0x1d6cd:
*indexout = index + 1;
return 1;
case 0x1d6ce:
*indexout = index + 1;
return 1;
case 0x1d6cf:
*indexout = index + 1;
return 1;
case 0x1d6d0:
*indexout = index + 1;
return 1;
case 0x1d6d1:
*indexout = index + 1;
return 1;
case 0x1d6d2:
*indexout = index + 1;
return 1;
case 0x1d6d3:
*indexout = index + 1;
return 1;
case 0x1d6d4:
*indexout = index + 1;
return 1;
case 0x1d6d5:
*indexout = index + 1;
return 1;
case 0x1d6d6:
*indexout = index + 1;
return 1;
case 0x1d6d7:
*indexout = index + 1;
return 1;
case 0x1d6d8:
*indexout = index + 1;
return 1;
case 0x1d6d9:
*indexout = index + 1;
return 1;
case 0x1d6da:
*indexout = index + 1;
return 1;
case 0x1d6db:
*indexout = index + 1;
return 1;
case 0x1d6dc:
*indexout = index + 1;
return 1;
case 0x1d6dd:
*indexout = index + 1;
return 1;
case 0x1d6de:
*indexout = index + 1;
return 1;
case 0x1d6df:
*indexout = index + 1;
return 1;
case 0x1d6e0:
*indexout = index + 1;
return 1;
case 0x1d6e1:
*indexout = index + 1;
return 1;
case 0x1d6e2:
*indexout = index + 1;
return 1;
case 0x1d6e3:
*indexout = index + 1;
return 1;
case 0x1d6e4:
*indexout = index + 1;
return 1;
case 0x1d6e5:
*indexout = index + 1;
return 1;
case 0x1d6e6:
*indexout = index + 1;
return 1;
case 0x1d6e7:
*indexout = index + 1;
return 1;
case 0x1d6e8:
*indexout = index + 1;
return 1;
case 0x1d6e9:
*indexout = index + 1;
return 1;
case 0x1d6ea:
*indexout = index + 1;
return 1;
case 0x1d6eb:
*indexout = index + 1;
return 1;
case 0x1d6ec:
*indexout = index + 1;
return 1;
case 0x1d6ed:
*indexout = index + 1;
return 1;
case 0x1d6ee:
*indexout = index + 1;
return 1;
case 0x1d6ef:
*indexout = index + 1;
return 1;
case 0x1d6f0:
*indexout = index + 1;
return 1;
case 0x1d6f1:
*indexout = index + 1;
return 1;
case 0x1d6f2:
*indexout = index + 1;
return 1;
case 0x1d6f3:
*indexout = index + 1;
return 1;
case 0x1d6f4:
*indexout = index + 1;
return 1;
case 0x1d6f5:
*indexout = index + 1;
return 1;
case 0x1d6f6:
*indexout = index + 1;
return 1;
case 0x1d6f7:
*indexout = index + 1;
return 1;
case 0x1d6f8:
*indexout = index + 1;
return 1;
case 0x1d6f9:
*indexout = index + 1;
return 1;
case 0x1d6fa:
*indexout = index + 1;
return 1;
case 0x1d6fb:
*indexout = index + 1;
return 1;
case 0x1d6fc:
*indexout = index + 1;
return 1;
case 0x1d6fd:
*indexout = index + 1;
return 1;
case 0x1d6fe:
*indexout = index + 1;
return 1;
case 0x1d6ff:
*indexout = index + 1;
return 1;
case 0x1d700:
*indexout = index + 1;
return 1;
case 0x1d701:
*indexout = index + 1;
return 1;
case 0x1d702:
*indexout = index + 1;
return 1;
case 0x1d703:
*indexout = index + 1;
return 1;
case 0x1d704:
*indexout = index + 1;
return 1;
case 0x1d705:
*indexout = index + 1;
return 1;
case 0x1d706:
*indexout = index + 1;
return 1;
case 0x1d707:
*indexout = index + 1;
return 1;
case 0x1d708:
*indexout = index + 1;
return 1;
case 0x1d709:
*indexout = index + 1;
return 1;
case 0x1d70a:
*indexout = index + 1;
return 1;
case 0x1d70b:
*indexout = index + 1;
return 1;
case 0x1d70c:
*indexout = index + 1;
return 1;
case 0x1d70d:
*indexout = index + 1;
return 1;
case 0x1d70e:
*indexout = index + 1;
return 1;
case 0x1d70f:
*indexout = index + 1;
return 1;
case 0x1d710:
*indexout = index + 1;
return 1;
case 0x1d711:
*indexout = index + 1;
return 1;
case 0x1d712:
*indexout = index + 1;
return 1;
case 0x1d713:
*indexout = index + 1;
return 1;
case 0x1d714:
*indexout = index + 1;
return 1;
case 0x1d715:
*indexout = index + 1;
return 1;
case 0x1d716:
*indexout = index + 1;
return 1;
case 0x1d717:
*indexout = index + 1;
return 1;
case 0x1d718:
*indexout = index + 1;
return 1;
case 0x1d719:
*indexout = index + 1;
return 1;
case 0x1d71a:
*indexout = index + 1;
return 1;
case 0x1d71b:
*indexout = index + 1;
return 1;
case 0x1d71c:
*indexout = index + 1;
return 1;
case 0x1d71d:
*indexout = index + 1;
return 1;
case 0x1d71e:
*indexout = index + 1;
return 1;
case 0x1d71f:
*indexout = index + 1;
return 1;
case 0x1d720:
*indexout = index + 1;
return 1;
case 0x1d721:
*indexout = index + 1;
return 1;
case 0x1d722:
*indexout = index + 1;
return 1;
case 0x1d723:
*indexout = index + 1;
return 1;
case 0x1d724:
*indexout = index + 1;
return 1;
case 0x1d725:
*indexout = index + 1;
return 1;
case 0x1d726:
*indexout = index + 1;
return 1;
case 0x1d727:
*indexout = index + 1;
return 1;
case 0x1d728:
*indexout = index + 1;
return 1;
case 0x1d729:
*indexout = index + 1;
return 1;
case 0x1d72a:
*indexout = index + 1;
return 1;
case 0x1d72b:
*indexout = index + 1;
return 1;
case 0x1d72c:
*indexout = index + 1;
return 1;
case 0x1d72d:
*indexout = index + 1;
return 1;
case 0x1d72e:
*indexout = index + 1;
return 1;
case 0x1d72f:
*indexout = index + 1;
return 1;
case 0x1d730:
*indexout = index + 1;
return 1;
case 0x1d731:
*indexout = index + 1;
return 1;
case 0x1d732:
*indexout = index + 1;
return 1;
case 0x1d733:
*indexout = index + 1;
return 1;
case 0x1d734:
*indexout = index + 1;
return 1;
case 0x1d735:
*indexout = index + 1;
return 1;
case 0x1d736:
*indexout = index + 1;
return 1;
case 0x1d737:
*indexout = index + 1;
return 1;
case 0x1d738:
*indexout = index + 1;
return 1;
case 0x1d739:
*indexout = index + 1;
return 1;
case 0x1d73a:
*indexout = index + 1;
return 1;
case 0x1d73b:
*indexout = index + 1;
return 1;
case 0x1d73c:
*indexout = index + 1;
return 1;
case 0x1d73d:
*indexout = index + 1;
return 1;
case 0x1d73e:
*indexout = index + 1;
return 1;
case 0x1d73f:
*indexout = index + 1;
return 1;
case 0x1d740:
*indexout = index + 1;
return 1;
case 0x1d741:
*indexout = index + 1;
return 1;
case 0x1d742:
*indexout = index + 1;
return 1;
case 0x1d743:
*indexout = index + 1;
return 1;
case 0x1d744:
*indexout = index + 1;
return 1;
case 0x1d745:
*indexout = index + 1;
return 1;
case 0x1d746:
*indexout = index + 1;
return 1;
case 0x1d747:
*indexout = index + 1;
return 1;
case 0x1d748:
*indexout = index + 1;
return 1;
case 0x1d749:
*indexout = index + 1;
return 1;
case 0x1d74a:
*indexout = index + 1;
return 1;
case 0x1d74b:
*indexout = index + 1;
return 1;
case 0x1d74c:
*indexout = index + 1;
return 1;
case 0x1d74d:
*indexout = index + 1;
return 1;
case 0x1d74e:
*indexout = index + 1;
return 1;
case 0x1d74f:
*indexout = index + 1;
return 1;
case 0x1d750:
*indexout = index + 1;
return 1;
case 0x1d751:
*indexout = index + 1;
return 1;
case 0x1d752:
*indexout = index + 1;
return 1;
case 0x1d753:
*indexout = index + 1;
return 1;
case 0x1d754:
*indexout = index + 1;
return 1;
case 0x1d755:
*indexout = index + 1;
return 1;
case 0x1d756:
*indexout = index + 1;
return 1;
case 0x1d757:
*indexout = index + 1;
return 1;
case 0x1d758:
*indexout = index + 1;
return 1;
case 0x1d759:
*indexout = index + 1;
return 1;
case 0x1d75a:
*indexout = index + 1;
return 1;
case 0x1d75b:
*indexout = index + 1;
return 1;
case 0x1d75c:
*indexout = index + 1;
return 1;
case 0x1d75d:
*indexout = index + 1;
return 1;
case 0x1d75e:
*indexout = index + 1;
return 1;
case 0x1d75f:
*indexout = index + 1;
return 1;
case 0x1d760:
*indexout = index + 1;
return 1;
case 0x1d761:
*indexout = index + 1;
return 1;
case 0x1d762:
*indexout = index + 1;
return 1;
case 0x1d763:
*indexout = index + 1;
return 1;
case 0x1d764:
*indexout = index + 1;
return 1;
case 0x1d765:
*indexout = index + 1;
return 1;
case 0x1d766:
*indexout = index + 1;
return 1;
case 0x1d767:
*indexout = index + 1;
return 1;
case 0x1d768:
*indexout = index + 1;
return 1;
case 0x1d769:
*indexout = index + 1;
return 1;
case 0x1d76a:
*indexout = index + 1;
return 1;
case 0x1d76b:
*indexout = index + 1;
return 1;
case 0x1d76c:
*indexout = index + 1;
return 1;
case 0x1d76d:
*indexout = index + 1;
return 1;
case 0x1d76e:
*indexout = index + 1;
return 1;
case 0x1d76f:
*indexout = index + 1;
return 1;
case 0x1d770:
*indexout = index + 1;
return 1;
case 0x1d771:
*indexout = index + 1;
return 1;
case 0x1d772:
*indexout = index + 1;
return 1;
case 0x1d773:
*indexout = index + 1;
return 1;
case 0x1d774:
*indexout = index + 1;
return 1;
case 0x1d775:
*indexout = index + 1;
return 1;
case 0x1d776:
*indexout = index + 1;
return 1;
case 0x1d777:
*indexout = index + 1;
return 1;
case 0x1d778:
*indexout = index + 1;
return 1;
case 0x1d779:
*indexout = index + 1;
return 1;
case 0x1d77a:
*indexout = index + 1;
return 1;
case 0x1d77b:
*indexout = index + 1;
return 1;
case 0x1d77c:
*indexout = index + 1;
return 1;
case 0x1d77d:
*indexout = index + 1;
return 1;
case 0x1d77e:
*indexout = index + 1;
return 1;
case 0x1d77f:
*indexout = index + 1;
return 1;
case 0x1d780:
*indexout = index + 1;
return 1;
case 0x1d781:
*indexout = index + 1;
return 1;
case 0x1d782:
*indexout = index + 1;
return 1;
case 0x1d783:
*indexout = index + 1;
return 1;
case 0x1d784:
*indexout = index + 1;
return 1;
case 0x1d785:
*indexout = index + 1;
return 1;
case 0x1d786:
*indexout = index + 1;
return 1;
case 0x1d787:
*indexout = index + 1;
return 1;
case 0x1d788:
*indexout = index + 1;
return 1;
case 0x1d789:
*indexout = index + 1;
return 1;
case 0x1d78a:
*indexout = index + 1;
return 1;
case 0x1d78b:
*indexout = index + 1;
return 1;
case 0x1d78c:
*indexout = index + 1;
return 1;
case 0x1d78d:
*indexout = index + 1;
return 1;
case 0x1d78e:
*indexout = index + 1;
return 1;
case 0x1d78f:
*indexout = index + 1;
return 1;
case 0x1d790:
*indexout = index + 1;
return 1;
case 0x1d791:
*indexout = index + 1;
return 1;
case 0x1d792:
*indexout = index + 1;
return 1;
case 0x1d793:
*indexout = index + 1;
return 1;
case 0x1d794:
*indexout = index + 1;
return 1;
case 0x1d795:
*indexout = index + 1;
return 1;
case 0x1d796:
*indexout = index + 1;
return 1;
case 0x1d797:
*indexout = index + 1;
return 1;
case 0x1d798:
*indexout = index + 1;
return 1;
case 0x1d799:
*indexout = index + 1;
return 1;
case 0x1d79a:
*indexout = index + 1;
return 1;
case 0x1d79b:
*indexout = index + 1;
return 1;
case 0x1d79c:
*indexout = index + 1;
return 1;
case 0x1d79d:
*indexout = index + 1;
return 1;
case 0x1d79e:
*indexout = index + 1;
return 1;
case 0x1d79f:
*indexout = index + 1;
return 1;
case 0x1d7a0:
*indexout = index + 1;
return 1;
case 0x1d7a1:
*indexout = index + 1;
return 1;
case 0x1d7a2:
*indexout = index + 1;
return 1;
case 0x1d7a3:
*indexout = index + 1;
return 1;
case 0x1d7a4:
*indexout = index + 1;
return 1;
case 0x1d7a5:
*indexout = index + 1;
return 1;
case 0x1d7a6:
*indexout = index + 1;
return 1;
case 0x1d7a7:
*indexout = index + 1;
return 1;
case 0x1d7a8:
*indexout = index + 1;
return 1;
case 0x1d7a9:
*indexout = index + 1;
return 1;
case 0x1d7aa:
*indexout = index + 1;
return 1;
case 0x1d7ab:
*indexout = index + 1;
return 1;
case 0x1d7ac:
*indexout = index + 1;
return 1;
case 0x1d7ad:
*indexout = index + 1;
return 1;
case 0x1d7ae:
*indexout = index + 1;
return 1;
case 0x1d7af:
*indexout = index + 1;
return 1;
case 0x1d7b0:
*indexout = index + 1;
return 1;
case 0x1d7b1:
*indexout = index + 1;
return 1;
case 0x1d7b2:
*indexout = index + 1;
return 1;
case 0x1d7b3:
*indexout = index + 1;
return 1;
case 0x1d7b4:
*indexout = index + 1;
return 1;
case 0x1d7b5:
*indexout = index + 1;
return 1;
case 0x1d7b6:
*indexout = index + 1;
return 1;
case 0x1d7b7:
*indexout = index + 1;
return 1;
case 0x1d7b8:
*indexout = index + 1;
return 1;
case 0x1d7b9:
*indexout = index + 1;
return 1;
case 0x1d7ba:
*indexout = index + 1;
return 1;
case 0x1d7bb:
*indexout = index + 1;
return 1;
case 0x1d7bc:
*indexout = index + 1;
return 1;
case 0x1d7bd:
*indexout = index + 1;
return 1;
case 0x1d7be:
*indexout = index + 1;
return 1;
case 0x1d7bf:
*indexout = index + 1;
return 1;
case 0x1d7c0:
*indexout = index + 1;
return 1;
case 0x1d7c1:
*indexout = index + 1;
return 1;
case 0x1d7c2:
*indexout = index + 1;
return 1;
case 0x1d7c3:
*indexout = index + 1;
return 1;
case 0x1d7c4:
*indexout = index + 1;
return 1;
case 0x1d7c5:
*indexout = index + 1;
return 1;
case 0x1d7c6:
*indexout = index + 1;
return 1;
case 0x1d7c7:
*indexout = index + 1;
return 1;
case 0x1d7c8:
*indexout = index + 1;
return 1;
case 0x1d7c9:
*indexout = index + 1;
return 1;
case 0x1d7ca:
*indexout = index + 1;
return 1;
case 0x1d7cb:
*indexout = index + 1;
return 1;
case 0x1d7ce:
*indexout = index + 1;
return 1;
case 0x1d7cf:
*indexout = index + 1;
return 1;
case 0x1d7d0:
*indexout = index + 1;
return 1;
case 0x1d7d1:
*indexout = index + 1;
return 1;
case 0x1d7d2:
*indexout = index + 1;
return 1;
case 0x1d7d3:
*indexout = index + 1;
return 1;
case 0x1d7d4:
*indexout = index + 1;
return 1;
case 0x1d7d5:
*indexout = index + 1;
return 1;
case 0x1d7d6:
*indexout = index + 1;
return 1;
case 0x1d7d7:
*indexout = index + 1;
return 1;
case 0x1d7d8:
*indexout = index + 1;
return 1;
case 0x1d7d9:
*indexout = index + 1;
return 1;
case 0x1d7da:
*indexout = index + 1;
return 1;
case 0x1d7db:
*indexout = index + 1;
return 1;
case 0x1d7dc:
*indexout = index + 1;
return 1;
case 0x1d7dd:
*indexout = index + 1;
return 1;
case 0x1d7de:
*indexout = index + 1;
return 1;
case 0x1d7df:
*indexout = index + 1;
return 1;
case 0x1d7e0:
*indexout = index + 1;
return 1;
case 0x1d7e1:
*indexout = index + 1;
return 1;
case 0x1d7e2:
*indexout = index + 1;
return 1;
case 0x1d7e3:
*indexout = index + 1;
return 1;
case 0x1d7e4:
*indexout = index + 1;
return 1;
case 0x1d7e5:
*indexout = index + 1;
return 1;
case 0x1d7e6:
*indexout = index + 1;
return 1;
case 0x1d7e7:
*indexout = index + 1;
return 1;
case 0x1d7e8:
*indexout = index + 1;
return 1;
case 0x1d7e9:
*indexout = index + 1;
return 1;
case 0x1d7ea:
*indexout = index + 1;
return 1;
case 0x1d7eb:
*indexout = index + 1;
return 1;
case 0x1d7ec:
*indexout = index + 1;
return 1;
case 0x1d7ed:
*indexout = index + 1;
return 1;
case 0x1d7ee:
*indexout = index + 1;
return 1;
case 0x1d7ef:
*indexout = index + 1;
return 1;
case 0x1d7f0:
*indexout = index + 1;
return 1;
case 0x1d7f1:
*indexout = index + 1;
return 1;
case 0x1d7f2:
*indexout = index + 1;
return 1;
case 0x1d7f3:
*indexout = index + 1;
return 1;
case 0x1d7f4:
*indexout = index + 1;
return 1;
case 0x1d7f5:
*indexout = index + 1;
return 1;
case 0x1d7f6:
*indexout = index + 1;
return 1;
case 0x1d7f7:
*indexout = index + 1;
return 1;
case 0x1d7f8:
*indexout = index + 1;
return 1;
case 0x1d7f9:
*indexout = index + 1;
return 1;
case 0x1d7fa:
*indexout = index + 1;
return 1;
case 0x1d7fb:
*indexout = index + 1;
return 1;
case 0x1d7fc:
*indexout = index + 1;
return 1;
case 0x1d7fd:
*indexout = index + 1;
return 1;
case 0x1d7fe:
*indexout = index + 1;
return 1;
case 0x1d7ff:
*indexout = index + 1;
return 1;
case 0x1ee00:
*indexout = index + 1;
return 1;
case 0x1ee01:
*indexout = index + 1;
return 1;
case 0x1ee02:
*indexout = index + 1;
return 1;
case 0x1ee03:
*indexout = index + 1;
return 1;
case 0x1ee05:
*indexout = index + 1;
return 1;
case 0x1ee06:
*indexout = index + 1;
return 1;
case 0x1ee07:
*indexout = index + 1;
return 1;
case 0x1ee08:
*indexout = index + 1;
return 1;
case 0x1ee09:
*indexout = index + 1;
return 1;
case 0x1ee0a:
*indexout = index + 1;
return 1;
case 0x1ee0b:
*indexout = index + 1;
return 1;
case 0x1ee0c:
*indexout = index + 1;
return 1;
case 0x1ee0d:
*indexout = index + 1;
return 1;
case 0x1ee0e:
*indexout = index + 1;
return 1;
case 0x1ee0f:
*indexout = index + 1;
return 1;
case 0x1ee10:
*indexout = index + 1;
return 1;
case 0x1ee11:
*indexout = index + 1;
return 1;
case 0x1ee12:
*indexout = index + 1;
return 1;
case 0x1ee13:
*indexout = index + 1;
return 1;
case 0x1ee14:
*indexout = index + 1;
return 1;
case 0x1ee15:
*indexout = index + 1;
return 1;
case 0x1ee16:
*indexout = index + 1;
return 1;
case 0x1ee17:
*indexout = index + 1;
return 1;
case 0x1ee18:
*indexout = index + 1;
return 1;
case 0x1ee19:
*indexout = index + 1;
return 1;
case 0x1ee1a:
*indexout = index + 1;
return 1;
case 0x1ee1b:
*indexout = index + 1;
return 1;
case 0x1ee1c:
*indexout = index + 1;
return 1;
case 0x1ee1d:
*indexout = index + 1;
return 1;
case 0x1ee1e:
*indexout = index + 1;
return 1;
case 0x1ee1f:
*indexout = index + 1;
return 1;
case 0x1ee21:
*indexout = index + 1;
return 1;
case 0x1ee22:
*indexout = index + 1;
return 1;
case 0x1ee24:
*indexout = index + 1;
return 1;
case 0x1ee27:
*indexout = index + 1;
return 1;
case 0x1ee29:
*indexout = index + 1;
return 1;
case 0x1ee2a:
*indexout = index + 1;
return 1;
case 0x1ee2b:
*indexout = index + 1;
return 1;
case 0x1ee2c:
*indexout = index + 1;
return 1;
case 0x1ee2d:
*indexout = index + 1;
return 1;
case 0x1ee2e:
*indexout = index + 1;
return 1;
case 0x1ee2f:
*indexout = index + 1;
return 1;
case 0x1ee30:
*indexout = index + 1;
return 1;
case 0x1ee31:
*indexout = index + 1;
return 1;
case 0x1ee32:
*indexout = index + 1;
return 1;
case 0x1ee34:
*indexout = index + 1;
return 1;
case 0x1ee35:
*indexout = index + 1;
return 1;
case 0x1ee36:
*indexout = index + 1;
return 1;
case 0x1ee37:
*indexout = index + 1;
return 1;
case 0x1ee39:
*indexout = index + 1;
return 1;
case 0x1ee3b:
*indexout = index + 1;
return 1;
case 0x1ee42:
*indexout = index + 1;
return 1;
case 0x1ee47:
*indexout = index + 1;
return 1;
case 0x1ee49:
*indexout = index + 1;
return 1;
case 0x1ee4b:
*indexout = index + 1;
return 1;
case 0x1ee4d:
*indexout = index + 1;
return 1;
case 0x1ee4e:
*indexout = index + 1;
return 1;
case 0x1ee4f:
*indexout = index + 1;
return 1;
case 0x1ee51:
*indexout = index + 1;
return 1;
case 0x1ee52:
*indexout = index + 1;
return 1;
case 0x1ee54:
*indexout = index + 1;
return 1;
case 0x1ee57:
*indexout = index + 1;
return 1;
case 0x1ee59:
*indexout = index + 1;
return 1;
case 0x1ee5b:
*indexout = index + 1;
return 1;
case 0x1ee5d:
*indexout = index + 1;
return 1;
case 0x1ee5f:
*indexout = index + 1;
return 1;
case 0x1ee61:
*indexout = index + 1;
return 1;
case 0x1ee62:
*indexout = index + 1;
return 1;
case 0x1ee64:
*indexout = index + 1;
return 1;
case 0x1ee67:
*indexout = index + 1;
return 1;
case 0x1ee68:
*indexout = index + 1;
return 1;
case 0x1ee69:
*indexout = index + 1;
return 1;
case 0x1ee6a:
*indexout = index + 1;
return 1;
case 0x1ee6c:
*indexout = index + 1;
return 1;
case 0x1ee6d:
*indexout = index + 1;
return 1;
case 0x1ee6e:
*indexout = index + 1;
return 1;
case 0x1ee6f:
*indexout = index + 1;
return 1;
case 0x1ee70:
*indexout = index + 1;
return 1;
case 0x1ee71:
*indexout = index + 1;
return 1;
case 0x1ee72:
*indexout = index + 1;
return 1;
case 0x1ee74:
*indexout = index + 1;
return 1;
case 0x1ee75:
*indexout = index + 1;
return 1;
case 0x1ee76:
*indexout = index + 1;
return 1;
case 0x1ee77:
*indexout = index + 1;
return 1;
case 0x1ee79:
*indexout = index + 1;
return 1;
case 0x1ee7a:
*indexout = index + 1;
return 1;
case 0x1ee7b:
*indexout = index + 1;
return 1;
case 0x1ee7c:
*indexout = index + 1;
return 1;
case 0x1ee7e:
*indexout = index + 1;
return 1;
case 0x1ee80:
*indexout = index + 1;
return 1;
case 0x1ee81:
*indexout = index + 1;
return 1;
case 0x1ee82:
*indexout = index + 1;
return 1;
case 0x1ee83:
*indexout = index + 1;
return 1;
case 0x1ee84:
*indexout = index + 1;
return 1;
case 0x1ee85:
*indexout = index + 1;
return 1;
case 0x1ee86:
*indexout = index + 1;
return 1;
case 0x1ee87:
*indexout = index + 1;
return 1;
case 0x1ee88:
*indexout = index + 1;
return 1;
case 0x1ee89:
*indexout = index + 1;
return 1;
case 0x1ee8b:
*indexout = index + 1;
return 1;
case 0x1ee8c:
*indexout = index + 1;
return 1;
case 0x1ee8d:
*indexout = index + 1;
return 1;
case 0x1ee8e:
*indexout = index + 1;
return 1;
case 0x1ee8f:
*indexout = index + 1;
return 1;
case 0x1ee90:
*indexout = index + 1;
return 1;
case 0x1ee91:
*indexout = index + 1;
return 1;
case 0x1ee92:
*indexout = index + 1;
return 1;
case 0x1ee93:
*indexout = index + 1;
return 1;
case 0x1ee94:
*indexout = index + 1;
return 1;
case 0x1ee95:
*indexout = index + 1;
return 1;
case 0x1ee96:
*indexout = index + 1;
return 1;
case 0x1ee97:
*indexout = index + 1;
return 1;
case 0x1ee98:
*indexout = index + 1;
return 1;
case 0x1ee99:
*indexout = index + 1;
return 1;
case 0x1ee9a:
*indexout = index + 1;
return 1;
case 0x1ee9b:
*indexout = index + 1;
return 1;
case 0x1eea1:
*indexout = index + 1;
return 1;
case 0x1eea2:
*indexout = index + 1;
return 1;
case 0x1eea3:
*indexout = index + 1;
return 1;
case 0x1eea5:
*indexout = index + 1;
return 1;
case 0x1eea6:
*indexout = index + 1;
return 1;
case 0x1eea7:
*indexout = index + 1;
return 1;
case 0x1eea8:
*indexout = index + 1;
return 1;
case 0x1eea9:
*indexout = index + 1;
return 1;
case 0x1eeab:
*indexout = index + 1;
return 1;
case 0x1eeac:
*indexout = index + 1;
return 1;
case 0x1eead:
*indexout = index + 1;
return 1;
case 0x1eeae:
*indexout = index + 1;
return 1;
case 0x1eeaf:
*indexout = index + 1;
return 1;
case 0x1eeb0:
*indexout = index + 1;
return 1;
case 0x1eeb1:
*indexout = index + 1;
return 1;
case 0x1eeb2:
*indexout = index + 1;
return 1;
case 0x1eeb3:
*indexout = index + 1;
return 1;
case 0x1eeb4:
*indexout = index + 1;
return 1;
case 0x1eeb5:
*indexout = index + 1;
return 1;
case 0x1eeb6:
*indexout = index + 1;
return 1;
case 0x1eeb7:
*indexout = index + 1;
return 1;
case 0x1eeb8:
*indexout = index + 1;
return 1;
case 0x1eeb9:
*indexout = index + 1;
return 1;
case 0x1eeba:
*indexout = index + 1;
return 1;
case 0x1eebb:
*indexout = index + 1;
return 1;
case 0x1f100:
*indexout = index + 2;
return 2;
case 0x1f101:
*indexout = index + 2;
return 2;
case 0x1f102:
*indexout = index + 2;
return 2;
case 0x1f103:
*indexout = index + 2;
return 2;
case 0x1f104:
*indexout = index + 2;
return 2;
case 0x1f105:
*indexout = index + 2;
return 2;
case 0x1f106:
*indexout = index + 2;
return 2;
case 0x1f107:
*indexout = index + 2;
return 2;
case 0x1f108:
*indexout = index + 2;
return 2;
case 0x1f109:
*indexout = index + 2;
return 2;
case 0x1f10a:
*indexout = index + 2;
return 2;
case 0x1f110:
*indexout = index + 3;
return 3;
case 0x1f111:
*indexout = index + 3;
return 3;
case 0x1f112:
*indexout = index + 3;
return 3;
case 0x1f113:
*indexout = index + 3;
return 3;
case 0x1f114:
*indexout = index + 3;
return 3;
case 0x1f115:
*indexout = index + 3;
return 3;
case 0x1f116:
*indexout = index + 3;
return 3;
case 0x1f117:
*indexout = index + 3;
return 3;
case 0x1f118:
*indexout = index + 3;
return 3;
case 0x1f119:
*indexout = index + 3;
return 3;
case 0x1f11a:
*indexout = index + 3;
return 3;
case 0x1f11b:
*indexout = index + 3;
return 3;
case 0x1f11c:
*indexout = index + 3;
return 3;
case 0x1f11d:
*indexout = index + 3;
return 3;
case 0x1f11e:
*indexout = index + 3;
return 3;
case 0x1f11f:
*indexout = index + 3;
return 3;
case 0x1f120:
*indexout = index + 3;
return 3;
case 0x1f121:
*indexout = index + 3;
return 3;
case 0x1f122:
*indexout = index + 3;
return 3;
case 0x1f123:
*indexout = index + 3;
return 3;
case 0x1f124:
*indexout = index + 3;
return 3;
case 0x1f125:
*indexout = index + 3;
return 3;
case 0x1f126:
*indexout = index + 3;
return 3;
case 0x1f127:
*indexout = index + 3;
return 3;
case 0x1f128:
*indexout = index + 3;
return 3;
case 0x1f129:
*indexout = index + 3;
return 3;
case 0x1f12a:
*indexout = index + 3;
return 3;
case 0x1f12b:
*indexout = index + 1;
return 1;
case 0x1f12c:
*indexout = index + 1;
return 1;
case 0x1f12d:
*indexout = index + 2;
return 2;
case 0x1f12e:
*indexout = index + 2;
return 2;
case 0x1f130:
*indexout = index + 1;
return 1;
case 0x1f131:
*indexout = index + 1;
return 1;
case 0x1f132:
*indexout = index + 1;
return 1;
case 0x1f133:
*indexout = index + 1;
return 1;
case 0x1f134:
*indexout = index + 1;
return 1;
case 0x1f135:
*indexout = index + 1;
return 1;
case 0x1f136:
*indexout = index + 1;
return 1;
case 0x1f137:
*indexout = index + 1;
return 1;
case 0x1f138:
*indexout = index + 1;
return 1;
case 0x1f139:
*indexout = index + 1;
return 1;
case 0x1f13a:
*indexout = index + 1;
return 1;
case 0x1f13b:
*indexout = index + 1;
return 1;
case 0x1f13c:
*indexout = index + 1;
return 1;
case 0x1f13d:
*indexout = index + 1;
return 1;
case 0x1f13e:
*indexout = index + 1;
return 1;
case 0x1f13f:
*indexout = index + 1;
return 1;
case 0x1f140:
*indexout = index + 1;
return 1;
case 0x1f141:
*indexout = index + 1;
return 1;
case 0x1f142:
*indexout = index + 1;
return 1;
case 0x1f143:
*indexout = index + 1;
return 1;
case 0x1f144:
*indexout = index + 1;
return 1;
case 0x1f145:
*indexout = index + 1;
return 1;
case 0x1f146:
*indexout = index + 1;
return 1;
case 0x1f147:
*indexout = index + 1;
return 1;
case 0x1f148:
*indexout = index + 1;
return 1;
case 0x1f149:
*indexout = index + 1;
return 1;
case 0x1f14a:
*indexout = index + 2;
return 2;
case 0x1f14b:
*indexout = index + 2;
return 2;
case 0x1f14c:
*indexout = index + 2;
return 2;
case 0x1f14d:
*indexout = index + 2;
return 2;
case 0x1f14e:
*indexout = index + 3;
return 3;
case 0x1f14f:
*indexout = index + 2;
return 2;
case 0x1f16a:
*indexout = index + 2;
return 2;
case 0x1f16b:
*indexout = index + 2;
return 2;
case 0x1f190:
*indexout = index + 2;
return 2;
case 0x1f200:
*indexout = index + 2;
return 2;
case 0x1f201:
*indexout = index + 2;
return 2;
case 0x1f202:
*indexout = index + 1;
return 1;
case 0x1f210:
*indexout = index + 1;
return 1;
case 0x1f211:
*indexout = index + 1;
return 1;
case 0x1f212:
*indexout = index + 1;
return 1;
case 0x1f213:
*indexout = index + 1;
return 1;
case 0x1f214:
*indexout = index + 1;
return 1;
case 0x1f215:
*indexout = index + 1;
return 1;
case 0x1f216:
*indexout = index + 1;
return 1;
case 0x1f217:
*indexout = index + 1;
return 1;
case 0x1f218:
*indexout = index + 1;
return 1;
case 0x1f219:
*indexout = index + 1;
return 1;
case 0x1f21a:
*indexout = index + 1;
return 1;
case 0x1f21b:
*indexout = index + 1;
return 1;
case 0x1f21c:
*indexout = index + 1;
return 1;
case 0x1f21d:
*indexout = index + 1;
return 1;
case 0x1f21e:
*indexout = index + 1;
return 1;
case 0x1f21f:
*indexout = index + 1;
return 1;
case 0x1f220:
*indexout = index + 1;
return 1;
case 0x1f221:
*indexout = index + 1;
return 1;
case 0x1f222:
*indexout = index + 1;
return 1;
case 0x1f223:
*indexout = index + 1;
return 1;
case 0x1f224:
*indexout = index + 1;
return 1;
case 0x1f225:
*indexout = index + 1;
return 1;
case 0x1f226:
*indexout = index + 1;
return 1;
case 0x1f227:
*indexout = index + 1;
return 1;
case 0x1f228:
*indexout = index + 1;
return 1;
case 0x1f229:
*indexout = index + 1;
return 1;
case 0x1f22a:
*indexout = index + 1;
return 1;
case 0x1f22b:
*indexout = index + 1;
return 1;
case 0x1f22c:
*indexout = index + 1;
return 1;
case 0x1f22d:
*indexout = index + 1;
return 1;
case 0x1f22e:
*indexout = index + 1;
return 1;
case 0x1f22f:
*indexout = index + 1;
return 1;
case 0x1f230:
*indexout = index + 1;
return 1;
case 0x1f231:
*indexout = index + 1;
return 1;
case 0x1f232:
*indexout = index + 1;
return 1;
case 0x1f233:
*indexout = index + 1;
return 1;
case 0x1f234:
*indexout = index + 1;
return 1;
case 0x1f235:
*indexout = index + 1;
return 1;
case 0x1f236:
*indexout = index + 1;
return 1;
case 0x1f237:
*indexout = index + 1;
return 1;
case 0x1f238:
*indexout = index + 1;
return 1;
case 0x1f239:
*indexout = index + 1;
return 1;
case 0x1f23a:
*indexout = index + 1;
return 1;
case 0x1f23b:
*indexout = index + 1;
return 1;
case 0x1f240:
*indexout = index + 3;
return 3;
case 0x1f241:
*indexout = index + 3;
return 3;
case 0x1f242:
*indexout = index + 3;
return 3;
case 0x1f243:
*indexout = index + 3;
return 3;
case 0x1f244:
*indexout = index + 3;
return 3;
case 0x1f245:
*indexout = index + 3;
return 3;
case 0x1f246:
*indexout = index + 3;
return 3;
case 0x1f247:
*indexout = index + 3;
return 3;
case 0x1f248:
*indexout = index + 3;
return 3;
case 0x1f250:
*indexout = index + 1;
return 1;
case 0x1f251:
*indexout = index + 1;
return 1;
case 0x2f800:
*indexout = index + 1;
return 1;
case 0x2f801:
*indexout = index + 1;
return 1;
case 0x2f802:
*indexout = index + 1;
return 1;
case 0x2f803:
*indexout = index + 1;
return 1;
case 0x2f804:
*indexout = index + 1;
return 1;
case 0x2f805:
*indexout = index + 1;
return 1;
case 0x2f806:
*indexout = index + 1;
return 1;
case 0x2f807:
*indexout = index + 1;
return 1;
case 0x2f808:
*indexout = index + 1;
return 1;
case 0x2f809:
*indexout = index + 1;
return 1;
case 0x2f80a:
*indexout = index + 1;
return 1;
case 0x2f80b:
*indexout = index + 1;
return 1;
case 0x2f80c:
*indexout = index + 1;
return 1;
case 0x2f80d:
*indexout = index + 1;
return 1;
case 0x2f80e:
*indexout = index + 1;
return 1;
case 0x2f80f:
*indexout = index + 1;
return 1;
case 0x2f810:
*indexout = index + 1;
return 1;
case 0x2f811:
*indexout = index + 1;
return 1;
case 0x2f812:
*indexout = index + 1;
return 1;
case 0x2f813:
*indexout = index + 1;
return 1;
case 0x2f814:
*indexout = index + 1;
return 1;
case 0x2f815:
*indexout = index + 1;
return 1;
case 0x2f816:
*indexout = index + 1;
return 1;
case 0x2f817:
*indexout = index + 1;
return 1;
case 0x2f818:
*indexout = index + 1;
return 1;
case 0x2f819:
*indexout = index + 1;
return 1;
case 0x2f81a:
*indexout = index + 1;
return 1;
case 0x2f81b:
*indexout = index + 1;
return 1;
case 0x2f81c:
*indexout = index + 1;
return 1;
case 0x2f81d:
*indexout = index + 1;
return 1;
case 0x2f81e:
*indexout = index + 1;
return 1;
case 0x2f81f:
*indexout = index + 1;
return 1;
case 0x2f820:
*indexout = index + 1;
return 1;
case 0x2f821:
*indexout = index + 1;
return 1;
case 0x2f822:
*indexout = index + 1;
return 1;
case 0x2f823:
*indexout = index + 1;
return 1;
case 0x2f824:
*indexout = index + 1;
return 1;
case 0x2f825:
*indexout = index + 1;
return 1;
case 0x2f826:
*indexout = index + 1;
return 1;
case 0x2f827:
*indexout = index + 1;
return 1;
case 0x2f828:
*indexout = index + 1;
return 1;
case 0x2f829:
*indexout = index + 1;
return 1;
case 0x2f82a:
*indexout = index + 1;
return 1;
case 0x2f82b:
*indexout = index + 1;
return 1;
case 0x2f82c:
*indexout = index + 1;
return 1;
case 0x2f82d:
*indexout = index + 1;
return 1;
case 0x2f82e:
*indexout = index + 1;
return 1;
case 0x2f82f:
*indexout = index + 1;
return 1;
case 0x2f830:
*indexout = index + 1;
return 1;
case 0x2f831:
*indexout = index + 1;
return 1;
case 0x2f832:
*indexout = index + 1;
return 1;
case 0x2f833:
*indexout = index + 1;
return 1;
case 0x2f834:
*indexout = index + 1;
return 1;
case 0x2f835:
*indexout = index + 1;
return 1;
case 0x2f836:
*indexout = index + 1;
return 1;
case 0x2f837:
*indexout = index + 1;
return 1;
case 0x2f838:
*indexout = index + 1;
return 1;
case 0x2f839:
*indexout = index + 1;
return 1;
case 0x2f83a:
*indexout = index + 1;
return 1;
case 0x2f83b:
*indexout = index + 1;
return 1;
case 0x2f83c:
*indexout = index + 1;
return 1;
case 0x2f83d:
*indexout = index + 1;
return 1;
case 0x2f83e:
*indexout = index + 1;
return 1;
case 0x2f83f:
*indexout = index + 1;
return 1;
case 0x2f840:
*indexout = index + 1;
return 1;
case 0x2f841:
*indexout = index + 1;
return 1;
case 0x2f842:
*indexout = index + 1;
return 1;
case 0x2f843:
*indexout = index + 1;
return 1;
case 0x2f844:
*indexout = index + 1;
return 1;
case 0x2f845:
*indexout = index + 1;
return 1;
case 0x2f846:
*indexout = index + 1;
return 1;
case 0x2f847:
*indexout = index + 1;
return 1;
case 0x2f848:
*indexout = index + 1;
return 1;
case 0x2f849:
*indexout = index + 1;
return 1;
case 0x2f84a:
*indexout = index + 1;
return 1;
case 0x2f84b:
*indexout = index + 1;
return 1;
case 0x2f84c:
*indexout = index + 1;
return 1;
case 0x2f84d:
*indexout = index + 1;
return 1;
case 0x2f84e:
*indexout = index + 1;
return 1;
case 0x2f84f:
*indexout = index + 1;
return 1;
case 0x2f850:
*indexout = index + 1;
return 1;
case 0x2f851:
*indexout = index + 1;
return 1;
case 0x2f852:
*indexout = index + 1;
return 1;
case 0x2f853:
*indexout = index + 1;
return 1;
case 0x2f854:
*indexout = index + 1;
return 1;
case 0x2f855:
*indexout = index + 1;
return 1;
case 0x2f856:
*indexout = index + 1;
return 1;
case 0x2f857:
*indexout = index + 1;
return 1;
case 0x2f858:
*indexout = index + 1;
return 1;
case 0x2f859:
*indexout = index + 1;
return 1;
case 0x2f85a:
*indexout = index + 1;
return 1;
case 0x2f85b:
*indexout = index + 1;
return 1;
case 0x2f85c:
*indexout = index + 1;
return 1;
case 0x2f85d:
*indexout = index + 1;
return 1;
case 0x2f85e:
*indexout = index + 1;
return 1;
case 0x2f85f:
*indexout = index + 1;
return 1;
case 0x2f860:
*indexout = index + 1;
return 1;
case 0x2f861:
*indexout = index + 1;
return 1;
case 0x2f862:
*indexout = index + 1;
return 1;
case 0x2f863:
*indexout = index + 1;
return 1;
case 0x2f864:
*indexout = index + 1;
return 1;
case 0x2f865:
*indexout = index + 1;
return 1;
case 0x2f866:
*indexout = index + 1;
return 1;
case 0x2f867:
*indexout = index + 1;
return 1;
case 0x2f868:
*indexout = index + 1;
return 1;
case 0x2f869:
*indexout = index + 1;
return 1;
case 0x2f86a:
*indexout = index + 1;
return 1;
case 0x2f86b:
*indexout = index + 1;
return 1;
case 0x2f86c:
*indexout = index + 1;
return 1;
case 0x2f86d:
*indexout = index + 1;
return 1;
case 0x2f86e:
*indexout = index + 1;
return 1;
case 0x2f86f:
*indexout = index + 1;
return 1;
case 0x2f870:
*indexout = index + 1;
return 1;
case 0x2f871:
*indexout = index + 1;
return 1;
case 0x2f872:
*indexout = index + 1;
return 1;
case 0x2f873:
*indexout = index + 1;
return 1;
case 0x2f874:
*indexout = index + 1;
return 1;
case 0x2f875:
*indexout = index + 1;
return 1;
case 0x2f876:
*indexout = index + 1;
return 1;
case 0x2f877:
*indexout = index + 1;
return 1;
case 0x2f878:
*indexout = index + 1;
return 1;
case 0x2f879:
*indexout = index + 1;
return 1;
case 0x2f87a:
*indexout = index + 1;
return 1;
case 0x2f87b:
*indexout = index + 1;
return 1;
case 0x2f87c:
*indexout = index + 1;
return 1;
case 0x2f87d:
*indexout = index + 1;
return 1;
case 0x2f87e:
*indexout = index + 1;
return 1;
case 0x2f87f:
*indexout = index + 1;
return 1;
case 0x2f880:
*indexout = index + 1;
return 1;
case 0x2f881:
*indexout = index + 1;
return 1;
case 0x2f882:
*indexout = index + 1;
return 1;
case 0x2f883:
*indexout = index + 1;
return 1;
case 0x2f884:
*indexout = index + 1;
return 1;
case 0x2f885:
*indexout = index + 1;
return 1;
case 0x2f886:
*indexout = index + 1;
return 1;
case 0x2f887:
*indexout = index + 1;
return 1;
case 0x2f888:
*indexout = index + 1;
return 1;
case 0x2f889:
*indexout = index + 1;
return 1;
case 0x2f88a:
*indexout = index + 1;
return 1;
case 0x2f88b:
*indexout = index + 1;
return 1;
case 0x2f88c:
*indexout = index + 1;
return 1;
case 0x2f88d:
*indexout = index + 1;
return 1;
case 0x2f88e:
*indexout = index + 1;
return 1;
case 0x2f88f:
*indexout = index + 1;
return 1;
case 0x2f890:
*indexout = index + 1;
return 1;
case 0x2f891:
*indexout = index + 1;
return 1;
case 0x2f892:
*indexout = index + 1;
return 1;
case 0x2f893:
*indexout = index + 1;
return 1;
case 0x2f894:
*indexout = index + 1;
return 1;
case 0x2f895:
*indexout = index + 1;
return 1;
case 0x2f896:
*indexout = index + 1;
return 1;
case 0x2f897:
*indexout = index + 1;
return 1;
case 0x2f898:
*indexout = index + 1;
return 1;
case 0x2f899:
*indexout = index + 1;
return 1;
case 0x2f89a:
*indexout = index + 1;
return 1;
case 0x2f89b:
*indexout = index + 1;
return 1;
case 0x2f89c:
*indexout = index + 1;
return 1;
case 0x2f89d:
*indexout = index + 1;
return 1;
case 0x2f89e:
*indexout = index + 1;
return 1;
case 0x2f89f:
*indexout = index + 1;
return 1;
case 0x2f8a0:
*indexout = index + 1;
return 1;
case 0x2f8a1:
*indexout = index + 1;
return 1;
case 0x2f8a2:
*indexout = index + 1;
return 1;
case 0x2f8a3:
*indexout = index + 1;
return 1;
case 0x2f8a4:
*indexout = index + 1;
return 1;
case 0x2f8a5:
*indexout = index + 1;
return 1;
case 0x2f8a6:
*indexout = index + 1;
return 1;
case 0x2f8a7:
*indexout = index + 1;
return 1;
case 0x2f8a8:
*indexout = index + 1;
return 1;
case 0x2f8a9:
*indexout = index + 1;
return 1;
case 0x2f8aa:
*indexout = index + 1;
return 1;
case 0x2f8ab:
*indexout = index + 1;
return 1;
case 0x2f8ac:
*indexout = index + 1;
return 1;
case 0x2f8ad:
*indexout = index + 1;
return 1;
case 0x2f8ae:
*indexout = index + 1;
return 1;
case 0x2f8af:
*indexout = index + 1;
return 1;
case 0x2f8b0:
*indexout = index + 1;
return 1;
case 0x2f8b1:
*indexout = index + 1;
return 1;
case 0x2f8b2:
*indexout = index + 1;
return 1;
case 0x2f8b3:
*indexout = index + 1;
return 1;
case 0x2f8b4:
*indexout = index + 1;
return 1;
case 0x2f8b5:
*indexout = index + 1;
return 1;
case 0x2f8b6:
*indexout = index + 1;
return 1;
case 0x2f8b7:
*indexout = index + 1;
return 1;
case 0x2f8b8:
*indexout = index + 1;
return 1;
case 0x2f8b9:
*indexout = index + 1;
return 1;
case 0x2f8ba:
*indexout = index + 1;
return 1;
case 0x2f8bb:
*indexout = index + 1;
return 1;
case 0x2f8bc:
*indexout = index + 1;
return 1;
case 0x2f8bd:
*indexout = index + 1;
return 1;
case 0x2f8be:
*indexout = index + 1;
return 1;
case 0x2f8bf:
*indexout = index + 1;
return 1;
case 0x2f8c0:
*indexout = index + 1;
return 1;
case 0x2f8c1:
*indexout = index + 1;
return 1;
case 0x2f8c2:
*indexout = index + 1;
return 1;
case 0x2f8c3:
*indexout = index + 1;
return 1;
case 0x2f8c4:
*indexout = index + 1;
return 1;
case 0x2f8c5:
*indexout = index + 1;
return 1;
case 0x2f8c6:
*indexout = index + 1;
return 1;
case 0x2f8c7:
*indexout = index + 1;
return 1;
case 0x2f8c8:
*indexout = index + 1;
return 1;
case 0x2f8c9:
*indexout = index + 1;
return 1;
case 0x2f8ca:
*indexout = index + 1;
return 1;
case 0x2f8cb:
*indexout = index + 1;
return 1;
case 0x2f8cc:
*indexout = index + 1;
return 1;
case 0x2f8cd:
*indexout = index + 1;
return 1;
case 0x2f8ce:
*indexout = index + 1;
return 1;
case 0x2f8cf:
*indexout = index + 1;
return 1;
case 0x2f8d0:
*indexout = index + 1;
return 1;
case 0x2f8d1:
*indexout = index + 1;
return 1;
case 0x2f8d2:
*indexout = index + 1;
return 1;
case 0x2f8d3:
*indexout = index + 1;
return 1;
case 0x2f8d4:
*indexout = index + 1;
return 1;
case 0x2f8d5:
*indexout = index + 1;
return 1;
case 0x2f8d6:
*indexout = index + 1;
return 1;
case 0x2f8d7:
*indexout = index + 1;
return 1;
case 0x2f8d8:
*indexout = index + 1;
return 1;
case 0x2f8d9:
*indexout = index + 1;
return 1;
case 0x2f8da:
*indexout = index + 1;
return 1;
case 0x2f8db:
*indexout = index + 1;
return 1;
case 0x2f8dc:
*indexout = index + 1;
return 1;
case 0x2f8dd:
*indexout = index + 1;
return 1;
case 0x2f8de:
*indexout = index + 1;
return 1;
case 0x2f8df:
*indexout = index + 1;
return 1;
case 0x2f8e0:
*indexout = index + 1;
return 1;
case 0x2f8e1:
*indexout = index + 1;
return 1;
case 0x2f8e2:
*indexout = index + 1;
return 1;
case 0x2f8e3:
*indexout = index + 1;
return 1;
case 0x2f8e4:
*indexout = index + 1;
return 1;
case 0x2f8e5:
*indexout = index + 1;
return 1;
case 0x2f8e6:
*indexout = index + 1;
return 1;
case 0x2f8e7:
*indexout = index + 1;
return 1;
case 0x2f8e8:
*indexout = index + 1;
return 1;
case 0x2f8e9:
*indexout = index + 1;
return 1;
case 0x2f8ea:
*indexout = index + 1;
return 1;
case 0x2f8eb:
*indexout = index + 1;
return 1;
case 0x2f8ec:
*indexout = index + 1;
return 1;
case 0x2f8ed:
*indexout = index + 1;
return 1;
case 0x2f8ee:
*indexout = index + 1;
return 1;
case 0x2f8ef:
*indexout = index + 1;
return 1;
case 0x2f8f0:
*indexout = index + 1;
return 1;
case 0x2f8f1:
*indexout = index + 1;
return 1;
case 0x2f8f2:
*indexout = index + 1;
return 1;
case 0x2f8f3:
*indexout = index + 1;
return 1;
case 0x2f8f4:
*indexout = index + 1;
return 1;
case 0x2f8f5:
*indexout = index + 1;
return 1;
case 0x2f8f6:
*indexout = index + 1;
return 1;
case 0x2f8f7:
*indexout = index + 1;
return 1;
case 0x2f8f8:
*indexout = index + 1;
return 1;
case 0x2f8f9:
*indexout = index + 1;
return 1;
case 0x2f8fa:
*indexout = index + 1;
return 1;
case 0x2f8fb:
*indexout = index + 1;
return 1;
case 0x2f8fc:
*indexout = index + 1;
return 1;
case 0x2f8fd:
*indexout = index + 1;
return 1;
case 0x2f8fe:
*indexout = index + 1;
return 1;
case 0x2f8ff:
*indexout = index + 1;
return 1;
case 0x2f900:
*indexout = index + 1;
return 1;
case 0x2f901:
*indexout = index + 1;
return 1;
case 0x2f902:
*indexout = index + 1;
return 1;
case 0x2f903:
*indexout = index + 1;
return 1;
case 0x2f904:
*indexout = index + 1;
return 1;
case 0x2f905:
*indexout = index + 1;
return 1;
case 0x2f906:
*indexout = index + 1;
return 1;
case 0x2f907:
*indexout = index + 1;
return 1;
case 0x2f908:
*indexout = index + 1;
return 1;
case 0x2f909:
*indexout = index + 1;
return 1;
case 0x2f90a:
*indexout = index + 1;
return 1;
case 0x2f90b:
*indexout = index + 1;
return 1;
case 0x2f90c:
*indexout = index + 1;
return 1;
case 0x2f90d:
*indexout = index + 1;
return 1;
case 0x2f90e:
*indexout = index + 1;
return 1;
case 0x2f90f:
*indexout = index + 1;
return 1;
case 0x2f910:
*indexout = index + 1;
return 1;
case 0x2f911:
*indexout = index + 1;
return 1;
case 0x2f912:
*indexout = index + 1;
return 1;
case 0x2f913:
*indexout = index + 1;
return 1;
case 0x2f914:
*indexout = index + 1;
return 1;
case 0x2f915:
*indexout = index + 1;
return 1;
case 0x2f916:
*indexout = index + 1;
return 1;
case 0x2f917:
*indexout = index + 1;
return 1;
case 0x2f918:
*indexout = index + 1;
return 1;
case 0x2f919:
*indexout = index + 1;
return 1;
case 0x2f91a:
*indexout = index + 1;
return 1;
case 0x2f91b:
*indexout = index + 1;
return 1;
case 0x2f91c:
*indexout = index + 1;
return 1;
case 0x2f91d:
*indexout = index + 1;
return 1;
case 0x2f91e:
*indexout = index + 1;
return 1;
case 0x2f91f:
*indexout = index + 1;
return 1;
case 0x2f920:
*indexout = index + 1;
return 1;
case 0x2f921:
*indexout = index + 1;
return 1;
case 0x2f922:
*indexout = index + 1;
return 1;
case 0x2f923:
*indexout = index + 1;
return 1;
case 0x2f924:
*indexout = index + 1;
return 1;
case 0x2f925:
*indexout = index + 1;
return 1;
case 0x2f926:
*indexout = index + 1;
return 1;
case 0x2f927:
*indexout = index + 1;
return 1;
case 0x2f928:
*indexout = index + 1;
return 1;
case 0x2f929:
*indexout = index + 1;
return 1;
case 0x2f92a:
*indexout = index + 1;
return 1;
case 0x2f92b:
*indexout = index + 1;
return 1;
case 0x2f92c:
*indexout = index + 1;
return 1;
case 0x2f92d:
*indexout = index + 1;
return 1;
case 0x2f92e:
*indexout = index + 1;
return 1;
case 0x2f92f:
*indexout = index + 1;
return 1;
case 0x2f930:
*indexout = index + 1;
return 1;
case 0x2f931:
*indexout = index + 1;
return 1;
case 0x2f932:
*indexout = index + 1;
return 1;
case 0x2f933:
*indexout = index + 1;
return 1;
case 0x2f934:
*indexout = index + 1;
return 1;
case 0x2f935:
*indexout = index + 1;
return 1;
case 0x2f936:
*indexout = index + 1;
return 1;
case 0x2f937:
*indexout = index + 1;
return 1;
case 0x2f938:
*indexout = index + 1;
return 1;
case 0x2f939:
*indexout = index + 1;
return 1;
case 0x2f93a:
*indexout = index + 1;
return 1;
case 0x2f93b:
*indexout = index + 1;
return 1;
case 0x2f93c:
*indexout = index + 1;
return 1;
case 0x2f93d:
*indexout = index + 1;
return 1;
case 0x2f93e:
*indexout = index + 1;
return 1;
case 0x2f93f:
*indexout = index + 1;
return 1;
case 0x2f940:
*indexout = index + 1;
return 1;
case 0x2f941:
*indexout = index + 1;
return 1;
case 0x2f942:
*indexout = index + 1;
return 1;
case 0x2f943:
*indexout = index + 1;
return 1;
case 0x2f944:
*indexout = index + 1;
return 1;
case 0x2f945:
*indexout = index + 1;
return 1;
case 0x2f946:
*indexout = index + 1;
return 1;
case 0x2f947:
*indexout = index + 1;
return 1;
case 0x2f948:
*indexout = index + 1;
return 1;
case 0x2f949:
*indexout = index + 1;
return 1;
case 0x2f94a:
*indexout = index + 1;
return 1;
case 0x2f94b:
*indexout = index + 1;
return 1;
case 0x2f94c:
*indexout = index + 1;
return 1;
case 0x2f94d:
*indexout = index + 1;
return 1;
case 0x2f94e:
*indexout = index + 1;
return 1;
case 0x2f94f:
*indexout = index + 1;
return 1;
case 0x2f950:
*indexout = index + 1;
return 1;
case 0x2f951:
*indexout = index + 1;
return 1;
case 0x2f952:
*indexout = index + 1;
return 1;
case 0x2f953:
*indexout = index + 1;
return 1;
case 0x2f954:
*indexout = index + 1;
return 1;
case 0x2f955:
*indexout = index + 1;
return 1;
case 0x2f956:
*indexout = index + 1;
return 1;
case 0x2f957:
*indexout = index + 1;
return 1;
case 0x2f958:
*indexout = index + 1;
return 1;
case 0x2f959:
*indexout = index + 1;
return 1;
case 0x2f95a:
*indexout = index + 1;
return 1;
case 0x2f95b:
*indexout = index + 1;
return 1;
case 0x2f95c:
*indexout = index + 1;
return 1;
case 0x2f95d:
*indexout = index + 1;
return 1;
case 0x2f95e:
*indexout = index + 1;
return 1;
case 0x2f95f:
*indexout = index + 1;
return 1;
case 0x2f960:
*indexout = index + 1;
return 1;
case 0x2f961:
*indexout = index + 1;
return 1;
case 0x2f962:
*indexout = index + 1;
return 1;
case 0x2f963:
*indexout = index + 1;
return 1;
case 0x2f964:
*indexout = index + 1;
return 1;
case 0x2f965:
*indexout = index + 1;
return 1;
case 0x2f966:
*indexout = index + 1;
return 1;
case 0x2f967:
*indexout = index + 1;
return 1;
case 0x2f968:
*indexout = index + 1;
return 1;
case 0x2f969:
*indexout = index + 1;
return 1;
case 0x2f96a:
*indexout = index + 1;
return 1;
case 0x2f96b:
*indexout = index + 1;
return 1;
case 0x2f96c:
*indexout = index + 1;
return 1;
case 0x2f96d:
*indexout = index + 1;
return 1;
case 0x2f96e:
*indexout = index + 1;
return 1;
case 0x2f96f:
*indexout = index + 1;
return 1;
case 0x2f970:
*indexout = index + 1;
return 1;
case 0x2f971:
*indexout = index + 1;
return 1;
case 0x2f972:
*indexout = index + 1;
return 1;
case 0x2f973:
*indexout = index + 1;
return 1;
case 0x2f974:
*indexout = index + 1;
return 1;
case 0x2f975:
*indexout = index + 1;
return 1;
case 0x2f976:
*indexout = index + 1;
return 1;
case 0x2f977:
*indexout = index + 1;
return 1;
case 0x2f978:
*indexout = index + 1;
return 1;
case 0x2f979:
*indexout = index + 1;
return 1;
case 0x2f97a:
*indexout = index + 1;
return 1;
case 0x2f97b:
*indexout = index + 1;
return 1;
case 0x2f97c:
*indexout = index + 1;
return 1;
case 0x2f97d:
*indexout = index + 1;
return 1;
case 0x2f97e:
*indexout = index + 1;
return 1;
case 0x2f97f:
*indexout = index + 1;
return 1;
case 0x2f980:
*indexout = index + 1;
return 1;
case 0x2f981:
*indexout = index + 1;
return 1;
case 0x2f982:
*indexout = index + 1;
return 1;
case 0x2f983:
*indexout = index + 1;
return 1;
case 0x2f984:
*indexout = index + 1;
return 1;
case 0x2f985:
*indexout = index + 1;
return 1;
case 0x2f986:
*indexout = index + 1;
return 1;
case 0x2f987:
*indexout = index + 1;
return 1;
case 0x2f988:
*indexout = index + 1;
return 1;
case 0x2f989:
*indexout = index + 1;
return 1;
case 0x2f98a:
*indexout = index + 1;
return 1;
case 0x2f98b:
*indexout = index + 1;
return 1;
case 0x2f98c:
*indexout = index + 1;
return 1;
case 0x2f98d:
*indexout = index + 1;
return 1;
case 0x2f98e:
*indexout = index + 1;
return 1;
case 0x2f98f:
*indexout = index + 1;
return 1;
case 0x2f990:
*indexout = index + 1;
return 1;
case 0x2f991:
*indexout = index + 1;
return 1;
case 0x2f992:
*indexout = index + 1;
return 1;
case 0x2f993:
*indexout = index + 1;
return 1;
case 0x2f994:
*indexout = index + 1;
return 1;
case 0x2f995:
*indexout = index + 1;
return 1;
case 0x2f996:
*indexout = index + 1;
return 1;
case 0x2f997:
*indexout = index + 1;
return 1;
case 0x2f998:
*indexout = index + 1;
return 1;
case 0x2f999:
*indexout = index + 1;
return 1;
case 0x2f99a:
*indexout = index + 1;
return 1;
case 0x2f99b:
*indexout = index + 1;
return 1;
case 0x2f99c:
*indexout = index + 1;
return 1;
case 0x2f99d:
*indexout = index + 1;
return 1;
case 0x2f99e:
*indexout = index + 1;
return 1;
case 0x2f99f:
*indexout = index + 1;
return 1;
case 0x2f9a0:
*indexout = index + 1;
return 1;
case 0x2f9a1:
*indexout = index + 1;
return 1;
case 0x2f9a2:
*indexout = index + 1;
return 1;
case 0x2f9a3:
*indexout = index + 1;
return 1;
case 0x2f9a4:
*indexout = index + 1;
return 1;
case 0x2f9a5:
*indexout = index + 1;
return 1;
case 0x2f9a6:
*indexout = index + 1;
return 1;
case 0x2f9a7:
*indexout = index + 1;
return 1;
case 0x2f9a8:
*indexout = index + 1;
return 1;
case 0x2f9a9:
*indexout = index + 1;
return 1;
case 0x2f9aa:
*indexout = index + 1;
return 1;
case 0x2f9ab:
*indexout = index + 1;
return 1;
case 0x2f9ac:
*indexout = index + 1;
return 1;
case 0x2f9ad:
*indexout = index + 1;
return 1;
case 0x2f9ae:
*indexout = index + 1;
return 1;
case 0x2f9af:
*indexout = index + 1;
return 1;
case 0x2f9b0:
*indexout = index + 1;
return 1;
case 0x2f9b1:
*indexout = index + 1;
return 1;
case 0x2f9b2:
*indexout = index + 1;
return 1;
case 0x2f9b3:
*indexout = index + 1;
return 1;
case 0x2f9b4:
*indexout = index + 1;
return 1;
case 0x2f9b5:
*indexout = index + 1;
return 1;
case 0x2f9b6:
*indexout = index + 1;
return 1;
case 0x2f9b7:
*indexout = index + 1;
return 1;
case 0x2f9b8:
*indexout = index + 1;
return 1;
case 0x2f9b9:
*indexout = index + 1;
return 1;
case 0x2f9ba:
*indexout = index + 1;
return 1;
case 0x2f9bb:
*indexout = index + 1;
return 1;
case 0x2f9bc:
*indexout = index + 1;
return 1;
case 0x2f9bd:
*indexout = index + 1;
return 1;
case 0x2f9be:
*indexout = index + 1;
return 1;
case 0x2f9bf:
*indexout = index + 1;
return 1;
case 0x2f9c0:
*indexout = index + 1;
return 1;
case 0x2f9c1:
*indexout = index + 1;
return 1;
case 0x2f9c2:
*indexout = index + 1;
return 1;
case 0x2f9c3:
*indexout = index + 1;
return 1;
case 0x2f9c4:
*indexout = index + 1;
return 1;
case 0x2f9c5:
*indexout = index + 1;
return 1;
case 0x2f9c6:
*indexout = index + 1;
return 1;
case 0x2f9c7:
*indexout = index + 1;
return 1;
case 0x2f9c8:
*indexout = index + 1;
return 1;
case 0x2f9c9:
*indexout = index + 1;
return 1;
case 0x2f9ca:
*indexout = index + 1;
return 1;
case 0x2f9cb:
*indexout = index + 1;
return 1;
case 0x2f9cc:
*indexout = index + 1;
return 1;
case 0x2f9cd:
*indexout = index + 1;
return 1;
case 0x2f9ce:
*indexout = index + 1;
return 1;
case 0x2f9cf:
*indexout = index + 1;
return 1;
case 0x2f9d0:
*indexout = index + 1;
return 1;
case 0x2f9d1:
*indexout = index + 1;
return 1;
case 0x2f9d2:
*indexout = index + 1;
return 1;
case 0x2f9d3:
*indexout = index + 1;
return 1;
case 0x2f9d4:
*indexout = index + 1;
return 1;
case 0x2f9d5:
*indexout = index + 1;
return 1;
case 0x2f9d6:
*indexout = index + 1;
return 1;
case 0x2f9d7:
*indexout = index + 1;
return 1;
case 0x2f9d8:
*indexout = index + 1;
return 1;
case 0x2f9d9:
*indexout = index + 1;
return 1;
case 0x2f9da:
*indexout = index + 1;
return 1;
case 0x2f9db:
*indexout = index + 1;
return 1;
case 0x2f9dc:
*indexout = index + 1;
return 1;
case 0x2f9dd:
*indexout = index + 1;
return 1;
case 0x2f9de:
*indexout = index + 1;
return 1;
case 0x2f9df:
*indexout = index + 1;
return 1;
case 0x2f9e0:
*indexout = index + 1;
return 1;
case 0x2f9e1:
*indexout = index + 1;
return 1;
case 0x2f9e2:
*indexout = index + 1;
return 1;
case 0x2f9e3:
*indexout = index + 1;
return 1;
case 0x2f9e4:
*indexout = index + 1;
return 1;
case 0x2f9e5:
*indexout = index + 1;
return 1;
case 0x2f9e6:
*indexout = index + 1;
return 1;
case 0x2f9e7:
*indexout = index + 1;
return 1;
case 0x2f9e8:
*indexout = index + 1;
return 1;
case 0x2f9e9:
*indexout = index + 1;
return 1;
case 0x2f9ea:
*indexout = index + 1;
return 1;
case 0x2f9eb:
*indexout = index + 1;
return 1;
case 0x2f9ec:
*indexout = index + 1;
return 1;
case 0x2f9ed:
*indexout = index + 1;
return 1;
case 0x2f9ee:
*indexout = index + 1;
return 1;
case 0x2f9ef:
*indexout = index + 1;
return 1;
case 0x2f9f0:
*indexout = index + 1;
return 1;
case 0x2f9f1:
*indexout = index + 1;
return 1;
case 0x2f9f2:
*indexout = index + 1;
return 1;
case 0x2f9f3:
*indexout = index + 1;
return 1;
case 0x2f9f4:
*indexout = index + 1;
return 1;
case 0x2f9f5:
*indexout = index + 1;
return 1;
case 0x2f9f6:
*indexout = index + 1;
return 1;
case 0x2f9f7:
*indexout = index + 1;
return 1;
case 0x2f9f8:
*indexout = index + 1;
return 1;
case 0x2f9f9:
*indexout = index + 1;
return 1;
case 0x2f9fa:
*indexout = index + 1;
return 1;
case 0x2f9fb:
*indexout = index + 1;
return 1;
case 0x2f9fc:
*indexout = index + 1;
return 1;
case 0x2f9fd:
*indexout = index + 1;
return 1;
case 0x2f9fe:
*indexout = index + 1;
return 1;
case 0x2f9ff:
*indexout = index + 1;
return 1;
case 0x2fa00:
*indexout = index + 1;
return 1;
case 0x2fa01:
*indexout = index + 1;
return 1;
case 0x2fa02:
*indexout = index + 1;
return 1;
case 0x2fa03:
*indexout = index + 1;
return 1;
case 0x2fa04:
*indexout = index + 1;
return 1;
case 0x2fa05:
*indexout = index + 1;
return 1;
case 0x2fa06:
*indexout = index + 1;
return 1;
case 0x2fa07:
*indexout = index + 1;
return 1;
case 0x2fa08:
*indexout = index + 1;
return 1;
case 0x2fa09:
*indexout = index + 1;
return 1;
case 0x2fa0a:
*indexout = index + 1;
return 1;
case 0x2fa0b:
*indexout = index + 1;
return 1;
case 0x2fa0c:
*indexout = index + 1;
return 1;
case 0x2fa0d:
*indexout = index + 1;
return 1;
case 0x2fa0e:
*indexout = index + 1;
return 1;
case 0x2fa0f:
*indexout = index + 1;
return 1;
case 0x2fa10:
*indexout = index + 1;
return 1;
case 0x2fa11:
*indexout = index + 1;
return 1;
case 0x2fa12:
*indexout = index + 1;
return 1;
case 0x2fa13:
*indexout = index + 1;
return 1;
case 0x2fa14:
*indexout = index + 1;
return 1;
case 0x2fa15:
*indexout = index + 1;
return 1;
case 0x2fa16:
*indexout = index + 1;
return 1;
case 0x2fa17:
*indexout = index + 1;
return 1;
case 0x2fa18:
*indexout = index + 1;
return 1;
case 0x2fa19:
*indexout = index + 1;
return 1;
case 0x2fa1a:
*indexout = index + 1;
return 1;
case 0x2fa1b:
*indexout = index + 1;
return 1;
case 0x2fa1c:
*indexout = index + 1;
return 1;
case 0x2fa1d:
*indexout = index + 1;
return 1;
default:
*indexout = index +1;
return 0;
}
}
*indexout = index +1;
return 1;
}
