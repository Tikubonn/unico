#include <unico.h>
#include <stddef.h>

int is_title_unicos_in (size_t index, size_t end, unicos *uni, size_t *indexout){
if (3 <= end - index){
switch (get_unicos(0, uni)){
case 0x46: 
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
case 0x391: 
switch (get_unicos(1, uni)){
case 0x342: 
switch (get_unicos(2, uni)){
case 0x345:
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
case 0x397: 
switch (get_unicos(1, uni)){
case 0x342: 
switch (get_unicos(2, uni)){
case 0x345:
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
case 0x399: 
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
default:
*indexout = index +1;
return 0;
}
case 0x3a5: 
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
default:
*indexout = index +1;
return 0;
}
case 0x3a9: 
switch (get_unicos(1, uni)){
case 0x342: 
switch (get_unicos(2, uni)){
case 0x345:
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
case 0x41: 
switch (get_unicos(1, uni)){
case 0x2be:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x46: 
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
default:
*indexout = index +1;
return 0;
}
case 0x48: 
switch (get_unicos(1, uni)){
case 0x331:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x4a: 
switch (get_unicos(1, uni)){
case 0x30c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x53: 
switch (get_unicos(1, uni)){
case 0x73:
*indexout = index + 2;
return 1;
case 0x74:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x54: 
switch (get_unicos(1, uni)){
case 0x308:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x57: 
switch (get_unicos(1, uni)){
case 0x30a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x59: 
switch (get_unicos(1, uni)){
case 0x30a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x2bc: 
switch (get_unicos(1, uni)){
case 0x4e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x386: 
switch (get_unicos(1, uni)){
case 0x345:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x389: 
switch (get_unicos(1, uni)){
case 0x345:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x38f: 
switch (get_unicos(1, uni)){
case 0x345:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x391: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x397: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x399: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3a1: 
switch (get_unicos(1, uni)){
case 0x313:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3a5: 
switch (get_unicos(1, uni)){
case 0x313:
*indexout = index + 2;
return 1;
case 0x342:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3a9: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x535: 
switch (get_unicos(1, uni)){
case 0x582:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x544: 
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
case 0x54e: 
switch (get_unicos(1, uni)){
case 0x576:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1fba: 
switch (get_unicos(1, uni)){
case 0x345:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1fca: 
switch (get_unicos(1, uni)){
case 0x345:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1ffa: 
switch (get_unicos(1, uni)){
case 0x345:
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
case 0xd0:
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
case 0xd8:
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
case 0xde:
*indexout = index + 1;
return 1;
case 0x100:
*indexout = index + 1;
return 1;
case 0x102:
*indexout = index + 1;
return 1;
case 0x104:
*indexout = index + 1;
return 1;
case 0x106:
*indexout = index + 1;
return 1;
case 0x108:
*indexout = index + 1;
return 1;
case 0x10a:
*indexout = index + 1;
return 1;
case 0x10c:
*indexout = index + 1;
return 1;
case 0x10e:
*indexout = index + 1;
return 1;
case 0x110:
*indexout = index + 1;
return 1;
case 0x112:
*indexout = index + 1;
return 1;
case 0x114:
*indexout = index + 1;
return 1;
case 0x116:
*indexout = index + 1;
return 1;
case 0x118:
*indexout = index + 1;
return 1;
case 0x11a:
*indexout = index + 1;
return 1;
case 0x11c:
*indexout = index + 1;
return 1;
case 0x11e:
*indexout = index + 1;
return 1;
case 0x120:
*indexout = index + 1;
return 1;
case 0x122:
*indexout = index + 1;
return 1;
case 0x124:
*indexout = index + 1;
return 1;
case 0x126:
*indexout = index + 1;
return 1;
case 0x128:
*indexout = index + 1;
return 1;
case 0x12a:
*indexout = index + 1;
return 1;
case 0x12c:
*indexout = index + 1;
return 1;
case 0x12e:
*indexout = index + 1;
return 1;
case 0x130:
*indexout = index + 1;
return 1;
case 0x132:
*indexout = index + 1;
return 1;
case 0x134:
*indexout = index + 1;
return 1;
case 0x136:
*indexout = index + 1;
return 1;
case 0x139:
*indexout = index + 1;
return 1;
case 0x13b:
*indexout = index + 1;
return 1;
case 0x13d:
*indexout = index + 1;
return 1;
case 0x13f:
*indexout = index + 1;
return 1;
case 0x141:
*indexout = index + 1;
return 1;
case 0x143:
*indexout = index + 1;
return 1;
case 0x145:
*indexout = index + 1;
return 1;
case 0x147:
*indexout = index + 1;
return 1;
case 0x14a:
*indexout = index + 1;
return 1;
case 0x14c:
*indexout = index + 1;
return 1;
case 0x14e:
*indexout = index + 1;
return 1;
case 0x150:
*indexout = index + 1;
return 1;
case 0x152:
*indexout = index + 1;
return 1;
case 0x154:
*indexout = index + 1;
return 1;
case 0x156:
*indexout = index + 1;
return 1;
case 0x158:
*indexout = index + 1;
return 1;
case 0x15a:
*indexout = index + 1;
return 1;
case 0x15c:
*indexout = index + 1;
return 1;
case 0x15e:
*indexout = index + 1;
return 1;
case 0x160:
*indexout = index + 1;
return 1;
case 0x162:
*indexout = index + 1;
return 1;
case 0x164:
*indexout = index + 1;
return 1;
case 0x166:
*indexout = index + 1;
return 1;
case 0x168:
*indexout = index + 1;
return 1;
case 0x16a:
*indexout = index + 1;
return 1;
case 0x16c:
*indexout = index + 1;
return 1;
case 0x16e:
*indexout = index + 1;
return 1;
case 0x170:
*indexout = index + 1;
return 1;
case 0x172:
*indexout = index + 1;
return 1;
case 0x174:
*indexout = index + 1;
return 1;
case 0x176:
*indexout = index + 1;
return 1;
case 0x178:
*indexout = index + 1;
return 1;
case 0x179:
*indexout = index + 1;
return 1;
case 0x17b:
*indexout = index + 1;
return 1;
case 0x17d:
*indexout = index + 1;
return 1;
case 0x181:
*indexout = index + 1;
return 1;
case 0x182:
*indexout = index + 1;
return 1;
case 0x184:
*indexout = index + 1;
return 1;
case 0x186:
*indexout = index + 1;
return 1;
case 0x187:
*indexout = index + 1;
return 1;
case 0x189:
*indexout = index + 1;
return 1;
case 0x18a:
*indexout = index + 1;
return 1;
case 0x18b:
*indexout = index + 1;
return 1;
case 0x18e:
*indexout = index + 1;
return 1;
case 0x18f:
*indexout = index + 1;
return 1;
case 0x190:
*indexout = index + 1;
return 1;
case 0x191:
*indexout = index + 1;
return 1;
case 0x193:
*indexout = index + 1;
return 1;
case 0x194:
*indexout = index + 1;
return 1;
case 0x196:
*indexout = index + 1;
return 1;
case 0x197:
*indexout = index + 1;
return 1;
case 0x198:
*indexout = index + 1;
return 1;
case 0x19c:
*indexout = index + 1;
return 1;
case 0x19d:
*indexout = index + 1;
return 1;
case 0x19f:
*indexout = index + 1;
return 1;
case 0x1a0:
*indexout = index + 1;
return 1;
case 0x1a2:
*indexout = index + 1;
return 1;
case 0x1a4:
*indexout = index + 1;
return 1;
case 0x1a6:
*indexout = index + 1;
return 1;
case 0x1a7:
*indexout = index + 1;
return 1;
case 0x1a9:
*indexout = index + 1;
return 1;
case 0x1ac:
*indexout = index + 1;
return 1;
case 0x1ae:
*indexout = index + 1;
return 1;
case 0x1af:
*indexout = index + 1;
return 1;
case 0x1b1:
*indexout = index + 1;
return 1;
case 0x1b2:
*indexout = index + 1;
return 1;
case 0x1b3:
*indexout = index + 1;
return 1;
case 0x1b5:
*indexout = index + 1;
return 1;
case 0x1b7:
*indexout = index + 1;
return 1;
case 0x1b8:
*indexout = index + 1;
return 1;
case 0x1bc:
*indexout = index + 1;
return 1;
case 0x1c5:
*indexout = index + 1;
return 1;
case 0x1c8:
*indexout = index + 1;
return 1;
case 0x1cb:
*indexout = index + 1;
return 1;
case 0x1cd:
*indexout = index + 1;
return 1;
case 0x1cf:
*indexout = index + 1;
return 1;
case 0x1d1:
*indexout = index + 1;
return 1;
case 0x1d3:
*indexout = index + 1;
return 1;
case 0x1d5:
*indexout = index + 1;
return 1;
case 0x1d7:
*indexout = index + 1;
return 1;
case 0x1d9:
*indexout = index + 1;
return 1;
case 0x1db:
*indexout = index + 1;
return 1;
case 0x1de:
*indexout = index + 1;
return 1;
case 0x1e0:
*indexout = index + 1;
return 1;
case 0x1e2:
*indexout = index + 1;
return 1;
case 0x1e4:
*indexout = index + 1;
return 1;
case 0x1e6:
*indexout = index + 1;
return 1;
case 0x1e8:
*indexout = index + 1;
return 1;
case 0x1ea:
*indexout = index + 1;
return 1;
case 0x1ec:
*indexout = index + 1;
return 1;
case 0x1ee:
*indexout = index + 1;
return 1;
case 0x1f2:
*indexout = index + 1;
return 1;
case 0x1f4:
*indexout = index + 1;
return 1;
case 0x1f6:
*indexout = index + 1;
return 1;
case 0x1f7:
*indexout = index + 1;
return 1;
case 0x1f8:
*indexout = index + 1;
return 1;
case 0x1fa:
*indexout = index + 1;
return 1;
case 0x1fc:
*indexout = index + 1;
return 1;
case 0x1fe:
*indexout = index + 1;
return 1;
case 0x200:
*indexout = index + 1;
return 1;
case 0x202:
*indexout = index + 1;
return 1;
case 0x204:
*indexout = index + 1;
return 1;
case 0x206:
*indexout = index + 1;
return 1;
case 0x208:
*indexout = index + 1;
return 1;
case 0x20a:
*indexout = index + 1;
return 1;
case 0x20c:
*indexout = index + 1;
return 1;
case 0x20e:
*indexout = index + 1;
return 1;
case 0x210:
*indexout = index + 1;
return 1;
case 0x212:
*indexout = index + 1;
return 1;
case 0x214:
*indexout = index + 1;
return 1;
case 0x216:
*indexout = index + 1;
return 1;
case 0x218:
*indexout = index + 1;
return 1;
case 0x21a:
*indexout = index + 1;
return 1;
case 0x21c:
*indexout = index + 1;
return 1;
case 0x21e:
*indexout = index + 1;
return 1;
case 0x220:
*indexout = index + 1;
return 1;
case 0x222:
*indexout = index + 1;
return 1;
case 0x224:
*indexout = index + 1;
return 1;
case 0x226:
*indexout = index + 1;
return 1;
case 0x228:
*indexout = index + 1;
return 1;
case 0x22a:
*indexout = index + 1;
return 1;
case 0x22c:
*indexout = index + 1;
return 1;
case 0x22e:
*indexout = index + 1;
return 1;
case 0x230:
*indexout = index + 1;
return 1;
case 0x232:
*indexout = index + 1;
return 1;
case 0x23a:
*indexout = index + 1;
return 1;
case 0x23b:
*indexout = index + 1;
return 1;
case 0x23d:
*indexout = index + 1;
return 1;
case 0x23e:
*indexout = index + 1;
return 1;
case 0x241:
*indexout = index + 1;
return 1;
case 0x243:
*indexout = index + 1;
return 1;
case 0x244:
*indexout = index + 1;
return 1;
case 0x245:
*indexout = index + 1;
return 1;
case 0x246:
*indexout = index + 1;
return 1;
case 0x248:
*indexout = index + 1;
return 1;
case 0x24a:
*indexout = index + 1;
return 1;
case 0x24c:
*indexout = index + 1;
return 1;
case 0x24e:
*indexout = index + 1;
return 1;
case 0x370:
*indexout = index + 1;
return 1;
case 0x372:
*indexout = index + 1;
return 1;
case 0x376:
*indexout = index + 1;
return 1;
case 0x37f:
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
case 0x3cf:
*indexout = index + 1;
return 1;
case 0x3d8:
*indexout = index + 1;
return 1;
case 0x3da:
*indexout = index + 1;
return 1;
case 0x3dc:
*indexout = index + 1;
return 1;
case 0x3de:
*indexout = index + 1;
return 1;
case 0x3e0:
*indexout = index + 1;
return 1;
case 0x3e2:
*indexout = index + 1;
return 1;
case 0x3e4:
*indexout = index + 1;
return 1;
case 0x3e6:
*indexout = index + 1;
return 1;
case 0x3e8:
*indexout = index + 1;
return 1;
case 0x3ea:
*indexout = index + 1;
return 1;
case 0x3ec:
*indexout = index + 1;
return 1;
case 0x3ee:
*indexout = index + 1;
return 1;
case 0x3f4:
*indexout = index + 1;
return 1;
case 0x3f7:
*indexout = index + 1;
return 1;
case 0x3f9:
*indexout = index + 1;
return 1;
case 0x3fa:
*indexout = index + 1;
return 1;
case 0x3fd:
*indexout = index + 1;
return 1;
case 0x3fe:
*indexout = index + 1;
return 1;
case 0x3ff:
*indexout = index + 1;
return 1;
case 0x400:
*indexout = index + 1;
return 1;
case 0x401:
*indexout = index + 1;
return 1;
case 0x402:
*indexout = index + 1;
return 1;
case 0x403:
*indexout = index + 1;
return 1;
case 0x404:
*indexout = index + 1;
return 1;
case 0x405:
*indexout = index + 1;
return 1;
case 0x406:
*indexout = index + 1;
return 1;
case 0x407:
*indexout = index + 1;
return 1;
case 0x408:
*indexout = index + 1;
return 1;
case 0x409:
*indexout = index + 1;
return 1;
case 0x40a:
*indexout = index + 1;
return 1;
case 0x40b:
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
case 0x40f:
*indexout = index + 1;
return 1;
case 0x410:
*indexout = index + 1;
return 1;
case 0x411:
*indexout = index + 1;
return 1;
case 0x412:
*indexout = index + 1;
return 1;
case 0x413:
*indexout = index + 1;
return 1;
case 0x414:
*indexout = index + 1;
return 1;
case 0x415:
*indexout = index + 1;
return 1;
case 0x416:
*indexout = index + 1;
return 1;
case 0x417:
*indexout = index + 1;
return 1;
case 0x418:
*indexout = index + 1;
return 1;
case 0x419:
*indexout = index + 1;
return 1;
case 0x41a:
*indexout = index + 1;
return 1;
case 0x41b:
*indexout = index + 1;
return 1;
case 0x41c:
*indexout = index + 1;
return 1;
case 0x41d:
*indexout = index + 1;
return 1;
case 0x41e:
*indexout = index + 1;
return 1;
case 0x41f:
*indexout = index + 1;
return 1;
case 0x420:
*indexout = index + 1;
return 1;
case 0x421:
*indexout = index + 1;
return 1;
case 0x422:
*indexout = index + 1;
return 1;
case 0x423:
*indexout = index + 1;
return 1;
case 0x424:
*indexout = index + 1;
return 1;
case 0x425:
*indexout = index + 1;
return 1;
case 0x426:
*indexout = index + 1;
return 1;
case 0x427:
*indexout = index + 1;
return 1;
case 0x428:
*indexout = index + 1;
return 1;
case 0x429:
*indexout = index + 1;
return 1;
case 0x42a:
*indexout = index + 1;
return 1;
case 0x42b:
*indexout = index + 1;
return 1;
case 0x42c:
*indexout = index + 1;
return 1;
case 0x42d:
*indexout = index + 1;
return 1;
case 0x42e:
*indexout = index + 1;
return 1;
case 0x42f:
*indexout = index + 1;
return 1;
case 0x460:
*indexout = index + 1;
return 1;
case 0x462:
*indexout = index + 1;
return 1;
case 0x464:
*indexout = index + 1;
return 1;
case 0x466:
*indexout = index + 1;
return 1;
case 0x468:
*indexout = index + 1;
return 1;
case 0x46a:
*indexout = index + 1;
return 1;
case 0x46c:
*indexout = index + 1;
return 1;
case 0x46e:
*indexout = index + 1;
return 1;
case 0x470:
*indexout = index + 1;
return 1;
case 0x472:
*indexout = index + 1;
return 1;
case 0x474:
*indexout = index + 1;
return 1;
case 0x476:
*indexout = index + 1;
return 1;
case 0x478:
*indexout = index + 1;
return 1;
case 0x47a:
*indexout = index + 1;
return 1;
case 0x47c:
*indexout = index + 1;
return 1;
case 0x47e:
*indexout = index + 1;
return 1;
case 0x480:
*indexout = index + 1;
return 1;
case 0x48a:
*indexout = index + 1;
return 1;
case 0x48c:
*indexout = index + 1;
return 1;
case 0x48e:
*indexout = index + 1;
return 1;
case 0x490:
*indexout = index + 1;
return 1;
case 0x492:
*indexout = index + 1;
return 1;
case 0x494:
*indexout = index + 1;
return 1;
case 0x496:
*indexout = index + 1;
return 1;
case 0x498:
*indexout = index + 1;
return 1;
case 0x49a:
*indexout = index + 1;
return 1;
case 0x49c:
*indexout = index + 1;
return 1;
case 0x49e:
*indexout = index + 1;
return 1;
case 0x4a0:
*indexout = index + 1;
return 1;
case 0x4a2:
*indexout = index + 1;
return 1;
case 0x4a4:
*indexout = index + 1;
return 1;
case 0x4a6:
*indexout = index + 1;
return 1;
case 0x4a8:
*indexout = index + 1;
return 1;
case 0x4aa:
*indexout = index + 1;
return 1;
case 0x4ac:
*indexout = index + 1;
return 1;
case 0x4ae:
*indexout = index + 1;
return 1;
case 0x4b0:
*indexout = index + 1;
return 1;
case 0x4b2:
*indexout = index + 1;
return 1;
case 0x4b4:
*indexout = index + 1;
return 1;
case 0x4b6:
*indexout = index + 1;
return 1;
case 0x4b8:
*indexout = index + 1;
return 1;
case 0x4ba:
*indexout = index + 1;
return 1;
case 0x4bc:
*indexout = index + 1;
return 1;
case 0x4be:
*indexout = index + 1;
return 1;
case 0x4c0:
*indexout = index + 1;
return 1;
case 0x4c1:
*indexout = index + 1;
return 1;
case 0x4c3:
*indexout = index + 1;
return 1;
case 0x4c5:
*indexout = index + 1;
return 1;
case 0x4c7:
*indexout = index + 1;
return 1;
case 0x4c9:
*indexout = index + 1;
return 1;
case 0x4cb:
*indexout = index + 1;
return 1;
case 0x4cd:
*indexout = index + 1;
return 1;
case 0x4d0:
*indexout = index + 1;
return 1;
case 0x4d2:
*indexout = index + 1;
return 1;
case 0x4d4:
*indexout = index + 1;
return 1;
case 0x4d6:
*indexout = index + 1;
return 1;
case 0x4d8:
*indexout = index + 1;
return 1;
case 0x4da:
*indexout = index + 1;
return 1;
case 0x4dc:
*indexout = index + 1;
return 1;
case 0x4de:
*indexout = index + 1;
return 1;
case 0x4e0:
*indexout = index + 1;
return 1;
case 0x4e2:
*indexout = index + 1;
return 1;
case 0x4e4:
*indexout = index + 1;
return 1;
case 0x4e6:
*indexout = index + 1;
return 1;
case 0x4e8:
*indexout = index + 1;
return 1;
case 0x4ea:
*indexout = index + 1;
return 1;
case 0x4ec:
*indexout = index + 1;
return 1;
case 0x4ee:
*indexout = index + 1;
return 1;
case 0x4f0:
*indexout = index + 1;
return 1;
case 0x4f2:
*indexout = index + 1;
return 1;
case 0x4f4:
*indexout = index + 1;
return 1;
case 0x4f6:
*indexout = index + 1;
return 1;
case 0x4f8:
*indexout = index + 1;
return 1;
case 0x4fa:
*indexout = index + 1;
return 1;
case 0x4fc:
*indexout = index + 1;
return 1;
case 0x4fe:
*indexout = index + 1;
return 1;
case 0x500:
*indexout = index + 1;
return 1;
case 0x502:
*indexout = index + 1;
return 1;
case 0x504:
*indexout = index + 1;
return 1;
case 0x506:
*indexout = index + 1;
return 1;
case 0x508:
*indexout = index + 1;
return 1;
case 0x50a:
*indexout = index + 1;
return 1;
case 0x50c:
*indexout = index + 1;
return 1;
case 0x50e:
*indexout = index + 1;
return 1;
case 0x510:
*indexout = index + 1;
return 1;
case 0x512:
*indexout = index + 1;
return 1;
case 0x514:
*indexout = index + 1;
return 1;
case 0x516:
*indexout = index + 1;
return 1;
case 0x518:
*indexout = index + 1;
return 1;
case 0x51a:
*indexout = index + 1;
return 1;
case 0x51c:
*indexout = index + 1;
return 1;
case 0x51e:
*indexout = index + 1;
return 1;
case 0x520:
*indexout = index + 1;
return 1;
case 0x522:
*indexout = index + 1;
return 1;
case 0x524:
*indexout = index + 1;
return 1;
case 0x526:
*indexout = index + 1;
return 1;
case 0x528:
*indexout = index + 1;
return 1;
case 0x52a:
*indexout = index + 1;
return 1;
case 0x52c:
*indexout = index + 1;
return 1;
case 0x52e:
*indexout = index + 1;
return 1;
case 0x531:
*indexout = index + 1;
return 1;
case 0x532:
*indexout = index + 1;
return 1;
case 0x533:
*indexout = index + 1;
return 1;
case 0x534:
*indexout = index + 1;
return 1;
case 0x535:
*indexout = index + 1;
return 1;
case 0x536:
*indexout = index + 1;
return 1;
case 0x537:
*indexout = index + 1;
return 1;
case 0x538:
*indexout = index + 1;
return 1;
case 0x539:
*indexout = index + 1;
return 1;
case 0x53a:
*indexout = index + 1;
return 1;
case 0x53b:
*indexout = index + 1;
return 1;
case 0x53c:
*indexout = index + 1;
return 1;
case 0x53d:
*indexout = index + 1;
return 1;
case 0x53e:
*indexout = index + 1;
return 1;
case 0x53f:
*indexout = index + 1;
return 1;
case 0x540:
*indexout = index + 1;
return 1;
case 0x541:
*indexout = index + 1;
return 1;
case 0x542:
*indexout = index + 1;
return 1;
case 0x543:
*indexout = index + 1;
return 1;
case 0x544:
*indexout = index + 1;
return 1;
case 0x545:
*indexout = index + 1;
return 1;
case 0x546:
*indexout = index + 1;
return 1;
case 0x547:
*indexout = index + 1;
return 1;
case 0x548:
*indexout = index + 1;
return 1;
case 0x549:
*indexout = index + 1;
return 1;
case 0x54a:
*indexout = index + 1;
return 1;
case 0x54b:
*indexout = index + 1;
return 1;
case 0x54c:
*indexout = index + 1;
return 1;
case 0x54d:
*indexout = index + 1;
return 1;
case 0x54e:
*indexout = index + 1;
return 1;
case 0x54f:
*indexout = index + 1;
return 1;
case 0x550:
*indexout = index + 1;
return 1;
case 0x551:
*indexout = index + 1;
return 1;
case 0x552:
*indexout = index + 1;
return 1;
case 0x553:
*indexout = index + 1;
return 1;
case 0x554:
*indexout = index + 1;
return 1;
case 0x555:
*indexout = index + 1;
return 1;
case 0x556:
*indexout = index + 1;
return 1;
case 0x10a0:
*indexout = index + 1;
return 1;
case 0x10a1:
*indexout = index + 1;
return 1;
case 0x10a2:
*indexout = index + 1;
return 1;
case 0x10a3:
*indexout = index + 1;
return 1;
case 0x10a4:
*indexout = index + 1;
return 1;
case 0x10a5:
*indexout = index + 1;
return 1;
case 0x10a6:
*indexout = index + 1;
return 1;
case 0x10a7:
*indexout = index + 1;
return 1;
case 0x10a8:
*indexout = index + 1;
return 1;
case 0x10a9:
*indexout = index + 1;
return 1;
case 0x10aa:
*indexout = index + 1;
return 1;
case 0x10ab:
*indexout = index + 1;
return 1;
case 0x10ac:
*indexout = index + 1;
return 1;
case 0x10ad:
*indexout = index + 1;
return 1;
case 0x10ae:
*indexout = index + 1;
return 1;
case 0x10af:
*indexout = index + 1;
return 1;
case 0x10b0:
*indexout = index + 1;
return 1;
case 0x10b1:
*indexout = index + 1;
return 1;
case 0x10b2:
*indexout = index + 1;
return 1;
case 0x10b3:
*indexout = index + 1;
return 1;
case 0x10b4:
*indexout = index + 1;
return 1;
case 0x10b5:
*indexout = index + 1;
return 1;
case 0x10b6:
*indexout = index + 1;
return 1;
case 0x10b7:
*indexout = index + 1;
return 1;
case 0x10b8:
*indexout = index + 1;
return 1;
case 0x10b9:
*indexout = index + 1;
return 1;
case 0x10ba:
*indexout = index + 1;
return 1;
case 0x10bb:
*indexout = index + 1;
return 1;
case 0x10bc:
*indexout = index + 1;
return 1;
case 0x10bd:
*indexout = index + 1;
return 1;
case 0x10be:
*indexout = index + 1;
return 1;
case 0x10bf:
*indexout = index + 1;
return 1;
case 0x10c0:
*indexout = index + 1;
return 1;
case 0x10c1:
*indexout = index + 1;
return 1;
case 0x10c2:
*indexout = index + 1;
return 1;
case 0x10c3:
*indexout = index + 1;
return 1;
case 0x10c4:
*indexout = index + 1;
return 1;
case 0x10c5:
*indexout = index + 1;
return 1;
case 0x10c7:
*indexout = index + 1;
return 1;
case 0x10cd:
*indexout = index + 1;
return 1;
case 0x13a0:
*indexout = index + 1;
return 1;
case 0x13a1:
*indexout = index + 1;
return 1;
case 0x13a2:
*indexout = index + 1;
return 1;
case 0x13a3:
*indexout = index + 1;
return 1;
case 0x13a4:
*indexout = index + 1;
return 1;
case 0x13a5:
*indexout = index + 1;
return 1;
case 0x13a6:
*indexout = index + 1;
return 1;
case 0x13a7:
*indexout = index + 1;
return 1;
case 0x13a8:
*indexout = index + 1;
return 1;
case 0x13a9:
*indexout = index + 1;
return 1;
case 0x13aa:
*indexout = index + 1;
return 1;
case 0x13ab:
*indexout = index + 1;
return 1;
case 0x13ac:
*indexout = index + 1;
return 1;
case 0x13ad:
*indexout = index + 1;
return 1;
case 0x13ae:
*indexout = index + 1;
return 1;
case 0x13af:
*indexout = index + 1;
return 1;
case 0x13b0:
*indexout = index + 1;
return 1;
case 0x13b1:
*indexout = index + 1;
return 1;
case 0x13b2:
*indexout = index + 1;
return 1;
case 0x13b3:
*indexout = index + 1;
return 1;
case 0x13b4:
*indexout = index + 1;
return 1;
case 0x13b5:
*indexout = index + 1;
return 1;
case 0x13b6:
*indexout = index + 1;
return 1;
case 0x13b7:
*indexout = index + 1;
return 1;
case 0x13b8:
*indexout = index + 1;
return 1;
case 0x13b9:
*indexout = index + 1;
return 1;
case 0x13ba:
*indexout = index + 1;
return 1;
case 0x13bb:
*indexout = index + 1;
return 1;
case 0x13bc:
*indexout = index + 1;
return 1;
case 0x13bd:
*indexout = index + 1;
return 1;
case 0x13be:
*indexout = index + 1;
return 1;
case 0x13bf:
*indexout = index + 1;
return 1;
case 0x13c0:
*indexout = index + 1;
return 1;
case 0x13c1:
*indexout = index + 1;
return 1;
case 0x13c2:
*indexout = index + 1;
return 1;
case 0x13c3:
*indexout = index + 1;
return 1;
case 0x13c4:
*indexout = index + 1;
return 1;
case 0x13c5:
*indexout = index + 1;
return 1;
case 0x13c6:
*indexout = index + 1;
return 1;
case 0x13c7:
*indexout = index + 1;
return 1;
case 0x13c8:
*indexout = index + 1;
return 1;
case 0x13c9:
*indexout = index + 1;
return 1;
case 0x13ca:
*indexout = index + 1;
return 1;
case 0x13cb:
*indexout = index + 1;
return 1;
case 0x13cc:
*indexout = index + 1;
return 1;
case 0x13cd:
*indexout = index + 1;
return 1;
case 0x13ce:
*indexout = index + 1;
return 1;
case 0x13cf:
*indexout = index + 1;
return 1;
case 0x13d0:
*indexout = index + 1;
return 1;
case 0x13d1:
*indexout = index + 1;
return 1;
case 0x13d2:
*indexout = index + 1;
return 1;
case 0x13d3:
*indexout = index + 1;
return 1;
case 0x13d4:
*indexout = index + 1;
return 1;
case 0x13d5:
*indexout = index + 1;
return 1;
case 0x13d6:
*indexout = index + 1;
return 1;
case 0x13d7:
*indexout = index + 1;
return 1;
case 0x13d8:
*indexout = index + 1;
return 1;
case 0x13d9:
*indexout = index + 1;
return 1;
case 0x13da:
*indexout = index + 1;
return 1;
case 0x13db:
*indexout = index + 1;
return 1;
case 0x13dc:
*indexout = index + 1;
return 1;
case 0x13dd:
*indexout = index + 1;
return 1;
case 0x13de:
*indexout = index + 1;
return 1;
case 0x13df:
*indexout = index + 1;
return 1;
case 0x13e0:
*indexout = index + 1;
return 1;
case 0x13e1:
*indexout = index + 1;
return 1;
case 0x13e2:
*indexout = index + 1;
return 1;
case 0x13e3:
*indexout = index + 1;
return 1;
case 0x13e4:
*indexout = index + 1;
return 1;
case 0x13e5:
*indexout = index + 1;
return 1;
case 0x13e6:
*indexout = index + 1;
return 1;
case 0x13e7:
*indexout = index + 1;
return 1;
case 0x13e8:
*indexout = index + 1;
return 1;
case 0x13e9:
*indexout = index + 1;
return 1;
case 0x13ea:
*indexout = index + 1;
return 1;
case 0x13eb:
*indexout = index + 1;
return 1;
case 0x13ec:
*indexout = index + 1;
return 1;
case 0x13ed:
*indexout = index + 1;
return 1;
case 0x13ee:
*indexout = index + 1;
return 1;
case 0x13ef:
*indexout = index + 1;
return 1;
case 0x13f0:
*indexout = index + 1;
return 1;
case 0x13f1:
*indexout = index + 1;
return 1;
case 0x13f2:
*indexout = index + 1;
return 1;
case 0x13f3:
*indexout = index + 1;
return 1;
case 0x13f4:
*indexout = index + 1;
return 1;
case 0x13f5:
*indexout = index + 1;
return 1;
case 0x1e00:
*indexout = index + 1;
return 1;
case 0x1e02:
*indexout = index + 1;
return 1;
case 0x1e04:
*indexout = index + 1;
return 1;
case 0x1e06:
*indexout = index + 1;
return 1;
case 0x1e08:
*indexout = index + 1;
return 1;
case 0x1e0a:
*indexout = index + 1;
return 1;
case 0x1e0c:
*indexout = index + 1;
return 1;
case 0x1e0e:
*indexout = index + 1;
return 1;
case 0x1e10:
*indexout = index + 1;
return 1;
case 0x1e12:
*indexout = index + 1;
return 1;
case 0x1e14:
*indexout = index + 1;
return 1;
case 0x1e16:
*indexout = index + 1;
return 1;
case 0x1e18:
*indexout = index + 1;
return 1;
case 0x1e1a:
*indexout = index + 1;
return 1;
case 0x1e1c:
*indexout = index + 1;
return 1;
case 0x1e1e:
*indexout = index + 1;
return 1;
case 0x1e20:
*indexout = index + 1;
return 1;
case 0x1e22:
*indexout = index + 1;
return 1;
case 0x1e24:
*indexout = index + 1;
return 1;
case 0x1e26:
*indexout = index + 1;
return 1;
case 0x1e28:
*indexout = index + 1;
return 1;
case 0x1e2a:
*indexout = index + 1;
return 1;
case 0x1e2c:
*indexout = index + 1;
return 1;
case 0x1e2e:
*indexout = index + 1;
return 1;
case 0x1e30:
*indexout = index + 1;
return 1;
case 0x1e32:
*indexout = index + 1;
return 1;
case 0x1e34:
*indexout = index + 1;
return 1;
case 0x1e36:
*indexout = index + 1;
return 1;
case 0x1e38:
*indexout = index + 1;
return 1;
case 0x1e3a:
*indexout = index + 1;
return 1;
case 0x1e3c:
*indexout = index + 1;
return 1;
case 0x1e3e:
*indexout = index + 1;
return 1;
case 0x1e40:
*indexout = index + 1;
return 1;
case 0x1e42:
*indexout = index + 1;
return 1;
case 0x1e44:
*indexout = index + 1;
return 1;
case 0x1e46:
*indexout = index + 1;
return 1;
case 0x1e48:
*indexout = index + 1;
return 1;
case 0x1e4a:
*indexout = index + 1;
return 1;
case 0x1e4c:
*indexout = index + 1;
return 1;
case 0x1e4e:
*indexout = index + 1;
return 1;
case 0x1e50:
*indexout = index + 1;
return 1;
case 0x1e52:
*indexout = index + 1;
return 1;
case 0x1e54:
*indexout = index + 1;
return 1;
case 0x1e56:
*indexout = index + 1;
return 1;
case 0x1e58:
*indexout = index + 1;
return 1;
case 0x1e5a:
*indexout = index + 1;
return 1;
case 0x1e5c:
*indexout = index + 1;
return 1;
case 0x1e5e:
*indexout = index + 1;
return 1;
case 0x1e60:
*indexout = index + 1;
return 1;
case 0x1e62:
*indexout = index + 1;
return 1;
case 0x1e64:
*indexout = index + 1;
return 1;
case 0x1e66:
*indexout = index + 1;
return 1;
case 0x1e68:
*indexout = index + 1;
return 1;
case 0x1e6a:
*indexout = index + 1;
return 1;
case 0x1e6c:
*indexout = index + 1;
return 1;
case 0x1e6e:
*indexout = index + 1;
return 1;
case 0x1e70:
*indexout = index + 1;
return 1;
case 0x1e72:
*indexout = index + 1;
return 1;
case 0x1e74:
*indexout = index + 1;
return 1;
case 0x1e76:
*indexout = index + 1;
return 1;
case 0x1e78:
*indexout = index + 1;
return 1;
case 0x1e7a:
*indexout = index + 1;
return 1;
case 0x1e7c:
*indexout = index + 1;
return 1;
case 0x1e7e:
*indexout = index + 1;
return 1;
case 0x1e80:
*indexout = index + 1;
return 1;
case 0x1e82:
*indexout = index + 1;
return 1;
case 0x1e84:
*indexout = index + 1;
return 1;
case 0x1e86:
*indexout = index + 1;
return 1;
case 0x1e88:
*indexout = index + 1;
return 1;
case 0x1e8a:
*indexout = index + 1;
return 1;
case 0x1e8c:
*indexout = index + 1;
return 1;
case 0x1e8e:
*indexout = index + 1;
return 1;
case 0x1e90:
*indexout = index + 1;
return 1;
case 0x1e92:
*indexout = index + 1;
return 1;
case 0x1e94:
*indexout = index + 1;
return 1;
case 0x1e9e:
*indexout = index + 1;
return 1;
case 0x1ea0:
*indexout = index + 1;
return 1;
case 0x1ea2:
*indexout = index + 1;
return 1;
case 0x1ea4:
*indexout = index + 1;
return 1;
case 0x1ea6:
*indexout = index + 1;
return 1;
case 0x1ea8:
*indexout = index + 1;
return 1;
case 0x1eaa:
*indexout = index + 1;
return 1;
case 0x1eac:
*indexout = index + 1;
return 1;
case 0x1eae:
*indexout = index + 1;
return 1;
case 0x1eb0:
*indexout = index + 1;
return 1;
case 0x1eb2:
*indexout = index + 1;
return 1;
case 0x1eb4:
*indexout = index + 1;
return 1;
case 0x1eb6:
*indexout = index + 1;
return 1;
case 0x1eb8:
*indexout = index + 1;
return 1;
case 0x1eba:
*indexout = index + 1;
return 1;
case 0x1ebc:
*indexout = index + 1;
return 1;
case 0x1ebe:
*indexout = index + 1;
return 1;
case 0x1ec0:
*indexout = index + 1;
return 1;
case 0x1ec2:
*indexout = index + 1;
return 1;
case 0x1ec4:
*indexout = index + 1;
return 1;
case 0x1ec6:
*indexout = index + 1;
return 1;
case 0x1ec8:
*indexout = index + 1;
return 1;
case 0x1eca:
*indexout = index + 1;
return 1;
case 0x1ecc:
*indexout = index + 1;
return 1;
case 0x1ece:
*indexout = index + 1;
return 1;
case 0x1ed0:
*indexout = index + 1;
return 1;
case 0x1ed2:
*indexout = index + 1;
return 1;
case 0x1ed4:
*indexout = index + 1;
return 1;
case 0x1ed6:
*indexout = index + 1;
return 1;
case 0x1ed8:
*indexout = index + 1;
return 1;
case 0x1eda:
*indexout = index + 1;
return 1;
case 0x1edc:
*indexout = index + 1;
return 1;
case 0x1ede:
*indexout = index + 1;
return 1;
case 0x1ee0:
*indexout = index + 1;
return 1;
case 0x1ee2:
*indexout = index + 1;
return 1;
case 0x1ee4:
*indexout = index + 1;
return 1;
case 0x1ee6:
*indexout = index + 1;
return 1;
case 0x1ee8:
*indexout = index + 1;
return 1;
case 0x1eea:
*indexout = index + 1;
return 1;
case 0x1eec:
*indexout = index + 1;
return 1;
case 0x1eee:
*indexout = index + 1;
return 1;
case 0x1ef0:
*indexout = index + 1;
return 1;
case 0x1ef2:
*indexout = index + 1;
return 1;
case 0x1ef4:
*indexout = index + 1;
return 1;
case 0x1ef6:
*indexout = index + 1;
return 1;
case 0x1ef8:
*indexout = index + 1;
return 1;
case 0x1efa:
*indexout = index + 1;
return 1;
case 0x1efc:
*indexout = index + 1;
return 1;
case 0x1efe:
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
case 0x2126:
*indexout = index + 1;
return 1;
case 0x212a:
*indexout = index + 1;
return 1;
case 0x212b:
*indexout = index + 1;
return 1;
case 0x2132:
*indexout = index + 1;
return 1;
case 0x2160:
*indexout = index + 1;
return 1;
case 0x2161:
*indexout = index + 1;
return 1;
case 0x2162:
*indexout = index + 1;
return 1;
case 0x2163:
*indexout = index + 1;
return 1;
case 0x2164:
*indexout = index + 1;
return 1;
case 0x2165:
*indexout = index + 1;
return 1;
case 0x2166:
*indexout = index + 1;
return 1;
case 0x2167:
*indexout = index + 1;
return 1;
case 0x2168:
*indexout = index + 1;
return 1;
case 0x2169:
*indexout = index + 1;
return 1;
case 0x216a:
*indexout = index + 1;
return 1;
case 0x216b:
*indexout = index + 1;
return 1;
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
case 0x2183:
*indexout = index + 1;
return 1;
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
case 0x2c00:
*indexout = index + 1;
return 1;
case 0x2c01:
*indexout = index + 1;
return 1;
case 0x2c02:
*indexout = index + 1;
return 1;
case 0x2c03:
*indexout = index + 1;
return 1;
case 0x2c04:
*indexout = index + 1;
return 1;
case 0x2c05:
*indexout = index + 1;
return 1;
case 0x2c06:
*indexout = index + 1;
return 1;
case 0x2c07:
*indexout = index + 1;
return 1;
case 0x2c08:
*indexout = index + 1;
return 1;
case 0x2c09:
*indexout = index + 1;
return 1;
case 0x2c0a:
*indexout = index + 1;
return 1;
case 0x2c0b:
*indexout = index + 1;
return 1;
case 0x2c0c:
*indexout = index + 1;
return 1;
case 0x2c0d:
*indexout = index + 1;
return 1;
case 0x2c0e:
*indexout = index + 1;
return 1;
case 0x2c0f:
*indexout = index + 1;
return 1;
case 0x2c10:
*indexout = index + 1;
return 1;
case 0x2c11:
*indexout = index + 1;
return 1;
case 0x2c12:
*indexout = index + 1;
return 1;
case 0x2c13:
*indexout = index + 1;
return 1;
case 0x2c14:
*indexout = index + 1;
return 1;
case 0x2c15:
*indexout = index + 1;
return 1;
case 0x2c16:
*indexout = index + 1;
return 1;
case 0x2c17:
*indexout = index + 1;
return 1;
case 0x2c18:
*indexout = index + 1;
return 1;
case 0x2c19:
*indexout = index + 1;
return 1;
case 0x2c1a:
*indexout = index + 1;
return 1;
case 0x2c1b:
*indexout = index + 1;
return 1;
case 0x2c1c:
*indexout = index + 1;
return 1;
case 0x2c1d:
*indexout = index + 1;
return 1;
case 0x2c1e:
*indexout = index + 1;
return 1;
case 0x2c1f:
*indexout = index + 1;
return 1;
case 0x2c20:
*indexout = index + 1;
return 1;
case 0x2c21:
*indexout = index + 1;
return 1;
case 0x2c22:
*indexout = index + 1;
return 1;
case 0x2c23:
*indexout = index + 1;
return 1;
case 0x2c24:
*indexout = index + 1;
return 1;
case 0x2c25:
*indexout = index + 1;
return 1;
case 0x2c26:
*indexout = index + 1;
return 1;
case 0x2c27:
*indexout = index + 1;
return 1;
case 0x2c28:
*indexout = index + 1;
return 1;
case 0x2c29:
*indexout = index + 1;
return 1;
case 0x2c2a:
*indexout = index + 1;
return 1;
case 0x2c2b:
*indexout = index + 1;
return 1;
case 0x2c2c:
*indexout = index + 1;
return 1;
case 0x2c2d:
*indexout = index + 1;
return 1;
case 0x2c2e:
*indexout = index + 1;
return 1;
case 0x2c60:
*indexout = index + 1;
return 1;
case 0x2c62:
*indexout = index + 1;
return 1;
case 0x2c63:
*indexout = index + 1;
return 1;
case 0x2c64:
*indexout = index + 1;
return 1;
case 0x2c67:
*indexout = index + 1;
return 1;
case 0x2c69:
*indexout = index + 1;
return 1;
case 0x2c6b:
*indexout = index + 1;
return 1;
case 0x2c6d:
*indexout = index + 1;
return 1;
case 0x2c6e:
*indexout = index + 1;
return 1;
case 0x2c6f:
*indexout = index + 1;
return 1;
case 0x2c70:
*indexout = index + 1;
return 1;
case 0x2c72:
*indexout = index + 1;
return 1;
case 0x2c75:
*indexout = index + 1;
return 1;
case 0x2c7e:
*indexout = index + 1;
return 1;
case 0x2c7f:
*indexout = index + 1;
return 1;
case 0x2c80:
*indexout = index + 1;
return 1;
case 0x2c82:
*indexout = index + 1;
return 1;
case 0x2c84:
*indexout = index + 1;
return 1;
case 0x2c86:
*indexout = index + 1;
return 1;
case 0x2c88:
*indexout = index + 1;
return 1;
case 0x2c8a:
*indexout = index + 1;
return 1;
case 0x2c8c:
*indexout = index + 1;
return 1;
case 0x2c8e:
*indexout = index + 1;
return 1;
case 0x2c90:
*indexout = index + 1;
return 1;
case 0x2c92:
*indexout = index + 1;
return 1;
case 0x2c94:
*indexout = index + 1;
return 1;
case 0x2c96:
*indexout = index + 1;
return 1;
case 0x2c98:
*indexout = index + 1;
return 1;
case 0x2c9a:
*indexout = index + 1;
return 1;
case 0x2c9c:
*indexout = index + 1;
return 1;
case 0x2c9e:
*indexout = index + 1;
return 1;
case 0x2ca0:
*indexout = index + 1;
return 1;
case 0x2ca2:
*indexout = index + 1;
return 1;
case 0x2ca4:
*indexout = index + 1;
return 1;
case 0x2ca6:
*indexout = index + 1;
return 1;
case 0x2ca8:
*indexout = index + 1;
return 1;
case 0x2caa:
*indexout = index + 1;
return 1;
case 0x2cac:
*indexout = index + 1;
return 1;
case 0x2cae:
*indexout = index + 1;
return 1;
case 0x2cb0:
*indexout = index + 1;
return 1;
case 0x2cb2:
*indexout = index + 1;
return 1;
case 0x2cb4:
*indexout = index + 1;
return 1;
case 0x2cb6:
*indexout = index + 1;
return 1;
case 0x2cb8:
*indexout = index + 1;
return 1;
case 0x2cba:
*indexout = index + 1;
return 1;
case 0x2cbc:
*indexout = index + 1;
return 1;
case 0x2cbe:
*indexout = index + 1;
return 1;
case 0x2cc0:
*indexout = index + 1;
return 1;
case 0x2cc2:
*indexout = index + 1;
return 1;
case 0x2cc4:
*indexout = index + 1;
return 1;
case 0x2cc6:
*indexout = index + 1;
return 1;
case 0x2cc8:
*indexout = index + 1;
return 1;
case 0x2cca:
*indexout = index + 1;
return 1;
case 0x2ccc:
*indexout = index + 1;
return 1;
case 0x2cce:
*indexout = index + 1;
return 1;
case 0x2cd0:
*indexout = index + 1;
return 1;
case 0x2cd2:
*indexout = index + 1;
return 1;
case 0x2cd4:
*indexout = index + 1;
return 1;
case 0x2cd6:
*indexout = index + 1;
return 1;
case 0x2cd8:
*indexout = index + 1;
return 1;
case 0x2cda:
*indexout = index + 1;
return 1;
case 0x2cdc:
*indexout = index + 1;
return 1;
case 0x2cde:
*indexout = index + 1;
return 1;
case 0x2ce0:
*indexout = index + 1;
return 1;
case 0x2ce2:
*indexout = index + 1;
return 1;
case 0x2ceb:
*indexout = index + 1;
return 1;
case 0x2ced:
*indexout = index + 1;
return 1;
case 0x2cf2:
*indexout = index + 1;
return 1;
case 0xa640:
*indexout = index + 1;
return 1;
case 0xa642:
*indexout = index + 1;
return 1;
case 0xa644:
*indexout = index + 1;
return 1;
case 0xa646:
*indexout = index + 1;
return 1;
case 0xa648:
*indexout = index + 1;
return 1;
case 0xa64a:
*indexout = index + 1;
return 1;
case 0xa64c:
*indexout = index + 1;
return 1;
case 0xa64e:
*indexout = index + 1;
return 1;
case 0xa650:
*indexout = index + 1;
return 1;
case 0xa652:
*indexout = index + 1;
return 1;
case 0xa654:
*indexout = index + 1;
return 1;
case 0xa656:
*indexout = index + 1;
return 1;
case 0xa658:
*indexout = index + 1;
return 1;
case 0xa65a:
*indexout = index + 1;
return 1;
case 0xa65c:
*indexout = index + 1;
return 1;
case 0xa65e:
*indexout = index + 1;
return 1;
case 0xa660:
*indexout = index + 1;
return 1;
case 0xa662:
*indexout = index + 1;
return 1;
case 0xa664:
*indexout = index + 1;
return 1;
case 0xa666:
*indexout = index + 1;
return 1;
case 0xa668:
*indexout = index + 1;
return 1;
case 0xa66a:
*indexout = index + 1;
return 1;
case 0xa66c:
*indexout = index + 1;
return 1;
case 0xa680:
*indexout = index + 1;
return 1;
case 0xa682:
*indexout = index + 1;
return 1;
case 0xa684:
*indexout = index + 1;
return 1;
case 0xa686:
*indexout = index + 1;
return 1;
case 0xa688:
*indexout = index + 1;
return 1;
case 0xa68a:
*indexout = index + 1;
return 1;
case 0xa68c:
*indexout = index + 1;
return 1;
case 0xa68e:
*indexout = index + 1;
return 1;
case 0xa690:
*indexout = index + 1;
return 1;
case 0xa692:
*indexout = index + 1;
return 1;
case 0xa694:
*indexout = index + 1;
return 1;
case 0xa696:
*indexout = index + 1;
return 1;
case 0xa698:
*indexout = index + 1;
return 1;
case 0xa69a:
*indexout = index + 1;
return 1;
case 0xa722:
*indexout = index + 1;
return 1;
case 0xa724:
*indexout = index + 1;
return 1;
case 0xa726:
*indexout = index + 1;
return 1;
case 0xa728:
*indexout = index + 1;
return 1;
case 0xa72a:
*indexout = index + 1;
return 1;
case 0xa72c:
*indexout = index + 1;
return 1;
case 0xa72e:
*indexout = index + 1;
return 1;
case 0xa732:
*indexout = index + 1;
return 1;
case 0xa734:
*indexout = index + 1;
return 1;
case 0xa736:
*indexout = index + 1;
return 1;
case 0xa738:
*indexout = index + 1;
return 1;
case 0xa73a:
*indexout = index + 1;
return 1;
case 0xa73c:
*indexout = index + 1;
return 1;
case 0xa73e:
*indexout = index + 1;
return 1;
case 0xa740:
*indexout = index + 1;
return 1;
case 0xa742:
*indexout = index + 1;
return 1;
case 0xa744:
*indexout = index + 1;
return 1;
case 0xa746:
*indexout = index + 1;
return 1;
case 0xa748:
*indexout = index + 1;
return 1;
case 0xa74a:
*indexout = index + 1;
return 1;
case 0xa74c:
*indexout = index + 1;
return 1;
case 0xa74e:
*indexout = index + 1;
return 1;
case 0xa750:
*indexout = index + 1;
return 1;
case 0xa752:
*indexout = index + 1;
return 1;
case 0xa754:
*indexout = index + 1;
return 1;
case 0xa756:
*indexout = index + 1;
return 1;
case 0xa758:
*indexout = index + 1;
return 1;
case 0xa75a:
*indexout = index + 1;
return 1;
case 0xa75c:
*indexout = index + 1;
return 1;
case 0xa75e:
*indexout = index + 1;
return 1;
case 0xa760:
*indexout = index + 1;
return 1;
case 0xa762:
*indexout = index + 1;
return 1;
case 0xa764:
*indexout = index + 1;
return 1;
case 0xa766:
*indexout = index + 1;
return 1;
case 0xa768:
*indexout = index + 1;
return 1;
case 0xa76a:
*indexout = index + 1;
return 1;
case 0xa76c:
*indexout = index + 1;
return 1;
case 0xa76e:
*indexout = index + 1;
return 1;
case 0xa779:
*indexout = index + 1;
return 1;
case 0xa77b:
*indexout = index + 1;
return 1;
case 0xa77d:
*indexout = index + 1;
return 1;
case 0xa77e:
*indexout = index + 1;
return 1;
case 0xa780:
*indexout = index + 1;
return 1;
case 0xa782:
*indexout = index + 1;
return 1;
case 0xa784:
*indexout = index + 1;
return 1;
case 0xa786:
*indexout = index + 1;
return 1;
case 0xa78b:
*indexout = index + 1;
return 1;
case 0xa78d:
*indexout = index + 1;
return 1;
case 0xa790:
*indexout = index + 1;
return 1;
case 0xa792:
*indexout = index + 1;
return 1;
case 0xa796:
*indexout = index + 1;
return 1;
case 0xa798:
*indexout = index + 1;
return 1;
case 0xa79a:
*indexout = index + 1;
return 1;
case 0xa79c:
*indexout = index + 1;
return 1;
case 0xa79e:
*indexout = index + 1;
return 1;
case 0xa7a0:
*indexout = index + 1;
return 1;
case 0xa7a2:
*indexout = index + 1;
return 1;
case 0xa7a4:
*indexout = index + 1;
return 1;
case 0xa7a6:
*indexout = index + 1;
return 1;
case 0xa7a8:
*indexout = index + 1;
return 1;
case 0xa7aa:
*indexout = index + 1;
return 1;
case 0xa7ab:
*indexout = index + 1;
return 1;
case 0xa7ac:
*indexout = index + 1;
return 1;
case 0xa7ad:
*indexout = index + 1;
return 1;
case 0xa7ae:
*indexout = index + 1;
return 1;
case 0xa7b0:
*indexout = index + 1;
return 1;
case 0xa7b1:
*indexout = index + 1;
return 1;
case 0xa7b2:
*indexout = index + 1;
return 1;
case 0xa7b3:
*indexout = index + 1;
return 1;
case 0xa7b4:
*indexout = index + 1;
return 1;
case 0xa7b6:
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
case 0x10400:
*indexout = index + 1;
return 1;
case 0x10401:
*indexout = index + 1;
return 1;
case 0x10402:
*indexout = index + 1;
return 1;
case 0x10403:
*indexout = index + 1;
return 1;
case 0x10404:
*indexout = index + 1;
return 1;
case 0x10405:
*indexout = index + 1;
return 1;
case 0x10406:
*indexout = index + 1;
return 1;
case 0x10407:
*indexout = index + 1;
return 1;
case 0x10408:
*indexout = index + 1;
return 1;
case 0x10409:
*indexout = index + 1;
return 1;
case 0x1040a:
*indexout = index + 1;
return 1;
case 0x1040b:
*indexout = index + 1;
return 1;
case 0x1040c:
*indexout = index + 1;
return 1;
case 0x1040d:
*indexout = index + 1;
return 1;
case 0x1040e:
*indexout = index + 1;
return 1;
case 0x1040f:
*indexout = index + 1;
return 1;
case 0x10410:
*indexout = index + 1;
return 1;
case 0x10411:
*indexout = index + 1;
return 1;
case 0x10412:
*indexout = index + 1;
return 1;
case 0x10413:
*indexout = index + 1;
return 1;
case 0x10414:
*indexout = index + 1;
return 1;
case 0x10415:
*indexout = index + 1;
return 1;
case 0x10416:
*indexout = index + 1;
return 1;
case 0x10417:
*indexout = index + 1;
return 1;
case 0x10418:
*indexout = index + 1;
return 1;
case 0x10419:
*indexout = index + 1;
return 1;
case 0x1041a:
*indexout = index + 1;
return 1;
case 0x1041b:
*indexout = index + 1;
return 1;
case 0x1041c:
*indexout = index + 1;
return 1;
case 0x1041d:
*indexout = index + 1;
return 1;
case 0x1041e:
*indexout = index + 1;
return 1;
case 0x1041f:
*indexout = index + 1;
return 1;
case 0x10420:
*indexout = index + 1;
return 1;
case 0x10421:
*indexout = index + 1;
return 1;
case 0x10422:
*indexout = index + 1;
return 1;
case 0x10423:
*indexout = index + 1;
return 1;
case 0x10424:
*indexout = index + 1;
return 1;
case 0x10425:
*indexout = index + 1;
return 1;
case 0x10426:
*indexout = index + 1;
return 1;
case 0x10427:
*indexout = index + 1;
return 1;
case 0x104b0:
*indexout = index + 1;
return 1;
case 0x104b1:
*indexout = index + 1;
return 1;
case 0x104b2:
*indexout = index + 1;
return 1;
case 0x104b3:
*indexout = index + 1;
return 1;
case 0x104b4:
*indexout = index + 1;
return 1;
case 0x104b5:
*indexout = index + 1;
return 1;
case 0x104b6:
*indexout = index + 1;
return 1;
case 0x104b7:
*indexout = index + 1;
return 1;
case 0x104b8:
*indexout = index + 1;
return 1;
case 0x104b9:
*indexout = index + 1;
return 1;
case 0x104ba:
*indexout = index + 1;
return 1;
case 0x104bb:
*indexout = index + 1;
return 1;
case 0x104bc:
*indexout = index + 1;
return 1;
case 0x104bd:
*indexout = index + 1;
return 1;
case 0x104be:
*indexout = index + 1;
return 1;
case 0x104bf:
*indexout = index + 1;
return 1;
case 0x104c0:
*indexout = index + 1;
return 1;
case 0x104c1:
*indexout = index + 1;
return 1;
case 0x104c2:
*indexout = index + 1;
return 1;
case 0x104c3:
*indexout = index + 1;
return 1;
case 0x104c4:
*indexout = index + 1;
return 1;
case 0x104c5:
*indexout = index + 1;
return 1;
case 0x104c6:
*indexout = index + 1;
return 1;
case 0x104c7:
*indexout = index + 1;
return 1;
case 0x104c8:
*indexout = index + 1;
return 1;
case 0x104c9:
*indexout = index + 1;
return 1;
case 0x104ca:
*indexout = index + 1;
return 1;
case 0x104cb:
*indexout = index + 1;
return 1;
case 0x104cc:
*indexout = index + 1;
return 1;
case 0x104cd:
*indexout = index + 1;
return 1;
case 0x104ce:
*indexout = index + 1;
return 1;
case 0x104cf:
*indexout = index + 1;
return 1;
case 0x104d0:
*indexout = index + 1;
return 1;
case 0x104d1:
*indexout = index + 1;
return 1;
case 0x104d2:
*indexout = index + 1;
return 1;
case 0x104d3:
*indexout = index + 1;
return 1;
case 0x10c80:
*indexout = index + 1;
return 1;
case 0x10c81:
*indexout = index + 1;
return 1;
case 0x10c82:
*indexout = index + 1;
return 1;
case 0x10c83:
*indexout = index + 1;
return 1;
case 0x10c84:
*indexout = index + 1;
return 1;
case 0x10c85:
*indexout = index + 1;
return 1;
case 0x10c86:
*indexout = index + 1;
return 1;
case 0x10c87:
*indexout = index + 1;
return 1;
case 0x10c88:
*indexout = index + 1;
return 1;
case 0x10c89:
*indexout = index + 1;
return 1;
case 0x10c8a:
*indexout = index + 1;
return 1;
case 0x10c8b:
*indexout = index + 1;
return 1;
case 0x10c8c:
*indexout = index + 1;
return 1;
case 0x10c8d:
*indexout = index + 1;
return 1;
case 0x10c8e:
*indexout = index + 1;
return 1;
case 0x10c8f:
*indexout = index + 1;
return 1;
case 0x10c90:
*indexout = index + 1;
return 1;
case 0x10c91:
*indexout = index + 1;
return 1;
case 0x10c92:
*indexout = index + 1;
return 1;
case 0x10c93:
*indexout = index + 1;
return 1;
case 0x10c94:
*indexout = index + 1;
return 1;
case 0x10c95:
*indexout = index + 1;
return 1;
case 0x10c96:
*indexout = index + 1;
return 1;
case 0x10c97:
*indexout = index + 1;
return 1;
case 0x10c98:
*indexout = index + 1;
return 1;
case 0x10c99:
*indexout = index + 1;
return 1;
case 0x10c9a:
*indexout = index + 1;
return 1;
case 0x10c9b:
*indexout = index + 1;
return 1;
case 0x10c9c:
*indexout = index + 1;
return 1;
case 0x10c9d:
*indexout = index + 1;
return 1;
case 0x10c9e:
*indexout = index + 1;
return 1;
case 0x10c9f:
*indexout = index + 1;
return 1;
case 0x10ca0:
*indexout = index + 1;
return 1;
case 0x10ca1:
*indexout = index + 1;
return 1;
case 0x10ca2:
*indexout = index + 1;
return 1;
case 0x10ca3:
*indexout = index + 1;
return 1;
case 0x10ca4:
*indexout = index + 1;
return 1;
case 0x10ca5:
*indexout = index + 1;
return 1;
case 0x10ca6:
*indexout = index + 1;
return 1;
case 0x10ca7:
*indexout = index + 1;
return 1;
case 0x10ca8:
*indexout = index + 1;
return 1;
case 0x10ca9:
*indexout = index + 1;
return 1;
case 0x10caa:
*indexout = index + 1;
return 1;
case 0x10cab:
*indexout = index + 1;
return 1;
case 0x10cac:
*indexout = index + 1;
return 1;
case 0x10cad:
*indexout = index + 1;
return 1;
case 0x10cae:
*indexout = index + 1;
return 1;
case 0x10caf:
*indexout = index + 1;
return 1;
case 0x10cb0:
*indexout = index + 1;
return 1;
case 0x10cb1:
*indexout = index + 1;
return 1;
case 0x10cb2:
*indexout = index + 1;
return 1;
case 0x118a0:
*indexout = index + 1;
return 1;
case 0x118a1:
*indexout = index + 1;
return 1;
case 0x118a2:
*indexout = index + 1;
return 1;
case 0x118a3:
*indexout = index + 1;
return 1;
case 0x118a4:
*indexout = index + 1;
return 1;
case 0x118a5:
*indexout = index + 1;
return 1;
case 0x118a6:
*indexout = index + 1;
return 1;
case 0x118a7:
*indexout = index + 1;
return 1;
case 0x118a8:
*indexout = index + 1;
return 1;
case 0x118a9:
*indexout = index + 1;
return 1;
case 0x118aa:
*indexout = index + 1;
return 1;
case 0x118ab:
*indexout = index + 1;
return 1;
case 0x118ac:
*indexout = index + 1;
return 1;
case 0x118ad:
*indexout = index + 1;
return 1;
case 0x118ae:
*indexout = index + 1;
return 1;
case 0x118af:
*indexout = index + 1;
return 1;
case 0x118b0:
*indexout = index + 1;
return 1;
case 0x118b1:
*indexout = index + 1;
return 1;
case 0x118b2:
*indexout = index + 1;
return 1;
case 0x118b3:
*indexout = index + 1;
return 1;
case 0x118b4:
*indexout = index + 1;
return 1;
case 0x118b5:
*indexout = index + 1;
return 1;
case 0x118b6:
*indexout = index + 1;
return 1;
case 0x118b7:
*indexout = index + 1;
return 1;
case 0x118b8:
*indexout = index + 1;
return 1;
case 0x118b9:
*indexout = index + 1;
return 1;
case 0x118ba:
*indexout = index + 1;
return 1;
case 0x118bb:
*indexout = index + 1;
return 1;
case 0x118bc:
*indexout = index + 1;
return 1;
case 0x118bd:
*indexout = index + 1;
return 1;
case 0x118be:
*indexout = index + 1;
return 1;
case 0x118bf:
*indexout = index + 1;
return 1;
case 0x1e900:
*indexout = index + 1;
return 1;
case 0x1e901:
*indexout = index + 1;
return 1;
case 0x1e902:
*indexout = index + 1;
return 1;
case 0x1e903:
*indexout = index + 1;
return 1;
case 0x1e904:
*indexout = index + 1;
return 1;
case 0x1e905:
*indexout = index + 1;
return 1;
case 0x1e906:
*indexout = index + 1;
return 1;
case 0x1e907:
*indexout = index + 1;
return 1;
case 0x1e908:
*indexout = index + 1;
return 1;
case 0x1e909:
*indexout = index + 1;
return 1;
case 0x1e90a:
*indexout = index + 1;
return 1;
case 0x1e90b:
*indexout = index + 1;
return 1;
case 0x1e90c:
*indexout = index + 1;
return 1;
case 0x1e90d:
*indexout = index + 1;
return 1;
case 0x1e90e:
*indexout = index + 1;
return 1;
case 0x1e90f:
*indexout = index + 1;
return 1;
case 0x1e910:
*indexout = index + 1;
return 1;
case 0x1e911:
*indexout = index + 1;
return 1;
case 0x1e912:
*indexout = index + 1;
return 1;
case 0x1e913:
*indexout = index + 1;
return 1;
case 0x1e914:
*indexout = index + 1;
return 1;
case 0x1e915:
*indexout = index + 1;
return 1;
case 0x1e916:
*indexout = index + 1;
return 1;
case 0x1e917:
*indexout = index + 1;
return 1;
case 0x1e918:
*indexout = index + 1;
return 1;
case 0x1e919:
*indexout = index + 1;
return 1;
case 0x1e91a:
*indexout = index + 1;
return 1;
case 0x1e91b:
*indexout = index + 1;
return 1;
case 0x1e91c:
*indexout = index + 1;
return 1;
case 0x1e91d:
*indexout = index + 1;
return 1;
case 0x1e91e:
*indexout = index + 1;
return 1;
case 0x1e91f:
*indexout = index + 1;
return 1;
case 0x1e920:
*indexout = index + 1;
return 1;
case 0x1e921:
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
