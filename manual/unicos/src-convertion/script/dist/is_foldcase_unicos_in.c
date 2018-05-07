#include <unico.h>
#include <stddef.h>

int is_foldcase_unicos_in (size_t index, size_t end, unicos *uni, size_t *indexout){
if (3 <= end - index){
switch (get_unicos(0, uni)){
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
case 0x3b1: 
switch (get_unicos(1, uni)){
case 0x342: 
switch (get_unicos(2, uni)){
case 0x3b9:
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
case 0x3b7: 
switch (get_unicos(1, uni)){
case 0x342: 
switch (get_unicos(2, uni)){
case 0x3b9:
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
case 0x3b9: 
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
case 0x3c5: 
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
case 0x3c9: 
switch (get_unicos(1, uni)){
case 0x342: 
switch (get_unicos(2, uni)){
case 0x3b9:
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
case 0x61: 
switch (get_unicos(1, uni)){
case 0x2be:
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
default:
*indexout = index +1;
return 0;
}
case 0x68: 
switch (get_unicos(1, uni)){
case 0x331:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x69: 
switch (get_unicos(1, uni)){
case 0x307:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x6a: 
switch (get_unicos(1, uni)){
case 0x30c:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x73: 
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
case 0x74: 
switch (get_unicos(1, uni)){
case 0x308:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x77: 
switch (get_unicos(1, uni)){
case 0x30a:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x79: 
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
case 0x6e:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3ac: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3ae: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3b1: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3b7: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3b9: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3c1: 
switch (get_unicos(1, uni)){
case 0x313:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3c5: 
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
case 0x3c9: 
switch (get_unicos(1, uni)){
case 0x342:
*indexout = index + 2;
return 1;
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x3ce: 
switch (get_unicos(1, uni)){
case 0x3b9:
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
case 0x1f00: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f01: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f02: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f03: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f04: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f05: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f06: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f07: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f20: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f21: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f22: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f23: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f24: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f25: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f26: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f27: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f60: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f61: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f62: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f63: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f64: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f65: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f66: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f67: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f70: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f74: 
switch (get_unicos(1, uni)){
case 0x3b9:
*indexout = index + 2;
return 1;
default:
*indexout = index +1;
return 0;
}
case 0x1f7c: 
switch (get_unicos(1, uni)){
case 0x3b9:
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
case 0xe6:
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
case 0xf8:
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
case 0xfe:
*indexout = index + 1;
return 1;
case 0xff:
*indexout = index + 1;
return 1;
case 0x101:
*indexout = index + 1;
return 1;
case 0x103:
*indexout = index + 1;
return 1;
case 0x105:
*indexout = index + 1;
return 1;
case 0x107:
*indexout = index + 1;
return 1;
case 0x109:
*indexout = index + 1;
return 1;
case 0x10b:
*indexout = index + 1;
return 1;
case 0x10d:
*indexout = index + 1;
return 1;
case 0x10f:
*indexout = index + 1;
return 1;
case 0x111:
*indexout = index + 1;
return 1;
case 0x113:
*indexout = index + 1;
return 1;
case 0x115:
*indexout = index + 1;
return 1;
case 0x117:
*indexout = index + 1;
return 1;
case 0x119:
*indexout = index + 1;
return 1;
case 0x11b:
*indexout = index + 1;
return 1;
case 0x11d:
*indexout = index + 1;
return 1;
case 0x11f:
*indexout = index + 1;
return 1;
case 0x121:
*indexout = index + 1;
return 1;
case 0x123:
*indexout = index + 1;
return 1;
case 0x125:
*indexout = index + 1;
return 1;
case 0x127:
*indexout = index + 1;
return 1;
case 0x129:
*indexout = index + 1;
return 1;
case 0x12b:
*indexout = index + 1;
return 1;
case 0x12d:
*indexout = index + 1;
return 1;
case 0x12f:
*indexout = index + 1;
return 1;
case 0x131:
*indexout = index + 1;
return 1;
case 0x133:
*indexout = index + 1;
return 1;
case 0x135:
*indexout = index + 1;
return 1;
case 0x137:
*indexout = index + 1;
return 1;
case 0x13a:
*indexout = index + 1;
return 1;
case 0x13c:
*indexout = index + 1;
return 1;
case 0x13e:
*indexout = index + 1;
return 1;
case 0x140:
*indexout = index + 1;
return 1;
case 0x142:
*indexout = index + 1;
return 1;
case 0x144:
*indexout = index + 1;
return 1;
case 0x146:
*indexout = index + 1;
return 1;
case 0x148:
*indexout = index + 1;
return 1;
case 0x14b:
*indexout = index + 1;
return 1;
case 0x14d:
*indexout = index + 1;
return 1;
case 0x14f:
*indexout = index + 1;
return 1;
case 0x151:
*indexout = index + 1;
return 1;
case 0x153:
*indexout = index + 1;
return 1;
case 0x155:
*indexout = index + 1;
return 1;
case 0x157:
*indexout = index + 1;
return 1;
case 0x159:
*indexout = index + 1;
return 1;
case 0x15b:
*indexout = index + 1;
return 1;
case 0x15d:
*indexout = index + 1;
return 1;
case 0x15f:
*indexout = index + 1;
return 1;
case 0x161:
*indexout = index + 1;
return 1;
case 0x163:
*indexout = index + 1;
return 1;
case 0x165:
*indexout = index + 1;
return 1;
case 0x167:
*indexout = index + 1;
return 1;
case 0x169:
*indexout = index + 1;
return 1;
case 0x16b:
*indexout = index + 1;
return 1;
case 0x16d:
*indexout = index + 1;
return 1;
case 0x16f:
*indexout = index + 1;
return 1;
case 0x171:
*indexout = index + 1;
return 1;
case 0x173:
*indexout = index + 1;
return 1;
case 0x175:
*indexout = index + 1;
return 1;
case 0x177:
*indexout = index + 1;
return 1;
case 0x17a:
*indexout = index + 1;
return 1;
case 0x17c:
*indexout = index + 1;
return 1;
case 0x17e:
*indexout = index + 1;
return 1;
case 0x180:
*indexout = index + 1;
return 1;
case 0x183:
*indexout = index + 1;
return 1;
case 0x185:
*indexout = index + 1;
return 1;
case 0x188:
*indexout = index + 1;
return 1;
case 0x18c:
*indexout = index + 1;
return 1;
case 0x192:
*indexout = index + 1;
return 1;
case 0x195:
*indexout = index + 1;
return 1;
case 0x199:
*indexout = index + 1;
return 1;
case 0x19a:
*indexout = index + 1;
return 1;
case 0x19e:
*indexout = index + 1;
return 1;
case 0x1a1:
*indexout = index + 1;
return 1;
case 0x1a3:
*indexout = index + 1;
return 1;
case 0x1a5:
*indexout = index + 1;
return 1;
case 0x1a8:
*indexout = index + 1;
return 1;
case 0x1ad:
*indexout = index + 1;
return 1;
case 0x1b0:
*indexout = index + 1;
return 1;
case 0x1b4:
*indexout = index + 1;
return 1;
case 0x1b6:
*indexout = index + 1;
return 1;
case 0x1b9:
*indexout = index + 1;
return 1;
case 0x1bd:
*indexout = index + 1;
return 1;
case 0x1bf:
*indexout = index + 1;
return 1;
case 0x1c6:
*indexout = index + 1;
return 1;
case 0x1c9:
*indexout = index + 1;
return 1;
case 0x1cc:
*indexout = index + 1;
return 1;
case 0x1ce:
*indexout = index + 1;
return 1;
case 0x1d0:
*indexout = index + 1;
return 1;
case 0x1d2:
*indexout = index + 1;
return 1;
case 0x1d4:
*indexout = index + 1;
return 1;
case 0x1d6:
*indexout = index + 1;
return 1;
case 0x1d8:
*indexout = index + 1;
return 1;
case 0x1da:
*indexout = index + 1;
return 1;
case 0x1dc:
*indexout = index + 1;
return 1;
case 0x1dd:
*indexout = index + 1;
return 1;
case 0x1df:
*indexout = index + 1;
return 1;
case 0x1e1:
*indexout = index + 1;
return 1;
case 0x1e3:
*indexout = index + 1;
return 1;
case 0x1e5:
*indexout = index + 1;
return 1;
case 0x1e7:
*indexout = index + 1;
return 1;
case 0x1e9:
*indexout = index + 1;
return 1;
case 0x1eb:
*indexout = index + 1;
return 1;
case 0x1ed:
*indexout = index + 1;
return 1;
case 0x1ef:
*indexout = index + 1;
return 1;
case 0x1f3:
*indexout = index + 1;
return 1;
case 0x1f5:
*indexout = index + 1;
return 1;
case 0x1f9:
*indexout = index + 1;
return 1;
case 0x1fb:
*indexout = index + 1;
return 1;
case 0x1fd:
*indexout = index + 1;
return 1;
case 0x1ff:
*indexout = index + 1;
return 1;
case 0x201:
*indexout = index + 1;
return 1;
case 0x203:
*indexout = index + 1;
return 1;
case 0x205:
*indexout = index + 1;
return 1;
case 0x207:
*indexout = index + 1;
return 1;
case 0x209:
*indexout = index + 1;
return 1;
case 0x20b:
*indexout = index + 1;
return 1;
case 0x20d:
*indexout = index + 1;
return 1;
case 0x20f:
*indexout = index + 1;
return 1;
case 0x211:
*indexout = index + 1;
return 1;
case 0x213:
*indexout = index + 1;
return 1;
case 0x215:
*indexout = index + 1;
return 1;
case 0x217:
*indexout = index + 1;
return 1;
case 0x219:
*indexout = index + 1;
return 1;
case 0x21b:
*indexout = index + 1;
return 1;
case 0x21d:
*indexout = index + 1;
return 1;
case 0x21f:
*indexout = index + 1;
return 1;
case 0x223:
*indexout = index + 1;
return 1;
case 0x225:
*indexout = index + 1;
return 1;
case 0x227:
*indexout = index + 1;
return 1;
case 0x229:
*indexout = index + 1;
return 1;
case 0x22b:
*indexout = index + 1;
return 1;
case 0x22d:
*indexout = index + 1;
return 1;
case 0x22f:
*indexout = index + 1;
return 1;
case 0x231:
*indexout = index + 1;
return 1;
case 0x233:
*indexout = index + 1;
return 1;
case 0x23c:
*indexout = index + 1;
return 1;
case 0x23f:
*indexout = index + 1;
return 1;
case 0x240:
*indexout = index + 1;
return 1;
case 0x242:
*indexout = index + 1;
return 1;
case 0x247:
*indexout = index + 1;
return 1;
case 0x249:
*indexout = index + 1;
return 1;
case 0x24b:
*indexout = index + 1;
return 1;
case 0x24d:
*indexout = index + 1;
return 1;
case 0x24f:
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
case 0x253:
*indexout = index + 1;
return 1;
case 0x254:
*indexout = index + 1;
return 1;
case 0x256:
*indexout = index + 1;
return 1;
case 0x257:
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
case 0x260:
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
case 0x26c:
*indexout = index + 1;
return 1;
case 0x26f:
*indexout = index + 1;
return 1;
case 0x271:
*indexout = index + 1;
return 1;
case 0x272:
*indexout = index + 1;
return 1;
case 0x275:
*indexout = index + 1;
return 1;
case 0x27d:
*indexout = index + 1;
return 1;
case 0x280:
*indexout = index + 1;
return 1;
case 0x283:
*indexout = index + 1;
return 1;
case 0x287:
*indexout = index + 1;
return 1;
case 0x288:
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
case 0x292:
*indexout = index + 1;
return 1;
case 0x29d:
*indexout = index + 1;
return 1;
case 0x29e:
*indexout = index + 1;
return 1;
case 0x371:
*indexout = index + 1;
return 1;
case 0x373:
*indexout = index + 1;
return 1;
case 0x377:
*indexout = index + 1;
return 1;
case 0x37b:
*indexout = index + 1;
return 1;
case 0x37c:
*indexout = index + 1;
return 1;
case 0x37d:
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
case 0x3d7:
*indexout = index + 1;
return 1;
case 0x3d9:
*indexout = index + 1;
return 1;
case 0x3db:
*indexout = index + 1;
return 1;
case 0x3dd:
*indexout = index + 1;
return 1;
case 0x3df:
*indexout = index + 1;
return 1;
case 0x3e1:
*indexout = index + 1;
return 1;
case 0x3e3:
*indexout = index + 1;
return 1;
case 0x3e5:
*indexout = index + 1;
return 1;
case 0x3e7:
*indexout = index + 1;
return 1;
case 0x3e9:
*indexout = index + 1;
return 1;
case 0x3eb:
*indexout = index + 1;
return 1;
case 0x3ed:
*indexout = index + 1;
return 1;
case 0x3ef:
*indexout = index + 1;
return 1;
case 0x3f2:
*indexout = index + 1;
return 1;
case 0x3f3:
*indexout = index + 1;
return 1;
case 0x3f8:
*indexout = index + 1;
return 1;
case 0x3fb:
*indexout = index + 1;
return 1;
case 0x430:
*indexout = index + 1;
return 1;
case 0x431:
*indexout = index + 1;
return 1;
case 0x432:
*indexout = index + 1;
return 1;
case 0x433:
*indexout = index + 1;
return 1;
case 0x434:
*indexout = index + 1;
return 1;
case 0x435:
*indexout = index + 1;
return 1;
case 0x436:
*indexout = index + 1;
return 1;
case 0x437:
*indexout = index + 1;
return 1;
case 0x438:
*indexout = index + 1;
return 1;
case 0x439:
*indexout = index + 1;
return 1;
case 0x43a:
*indexout = index + 1;
return 1;
case 0x43b:
*indexout = index + 1;
return 1;
case 0x43c:
*indexout = index + 1;
return 1;
case 0x43d:
*indexout = index + 1;
return 1;
case 0x43e:
*indexout = index + 1;
return 1;
case 0x43f:
*indexout = index + 1;
return 1;
case 0x440:
*indexout = index + 1;
return 1;
case 0x441:
*indexout = index + 1;
return 1;
case 0x442:
*indexout = index + 1;
return 1;
case 0x443:
*indexout = index + 1;
return 1;
case 0x444:
*indexout = index + 1;
return 1;
case 0x445:
*indexout = index + 1;
return 1;
case 0x446:
*indexout = index + 1;
return 1;
case 0x447:
*indexout = index + 1;
return 1;
case 0x448:
*indexout = index + 1;
return 1;
case 0x449:
*indexout = index + 1;
return 1;
case 0x44a:
*indexout = index + 1;
return 1;
case 0x44b:
*indexout = index + 1;
return 1;
case 0x44c:
*indexout = index + 1;
return 1;
case 0x44d:
*indexout = index + 1;
return 1;
case 0x44e:
*indexout = index + 1;
return 1;
case 0x44f:
*indexout = index + 1;
return 1;
case 0x450:
*indexout = index + 1;
return 1;
case 0x451:
*indexout = index + 1;
return 1;
case 0x452:
*indexout = index + 1;
return 1;
case 0x453:
*indexout = index + 1;
return 1;
case 0x454:
*indexout = index + 1;
return 1;
case 0x455:
*indexout = index + 1;
return 1;
case 0x456:
*indexout = index + 1;
return 1;
case 0x457:
*indexout = index + 1;
return 1;
case 0x458:
*indexout = index + 1;
return 1;
case 0x459:
*indexout = index + 1;
return 1;
case 0x45a:
*indexout = index + 1;
return 1;
case 0x45b:
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
case 0x45f:
*indexout = index + 1;
return 1;
case 0x461:
*indexout = index + 1;
return 1;
case 0x463:
*indexout = index + 1;
return 1;
case 0x465:
*indexout = index + 1;
return 1;
case 0x467:
*indexout = index + 1;
return 1;
case 0x469:
*indexout = index + 1;
return 1;
case 0x46b:
*indexout = index + 1;
return 1;
case 0x46d:
*indexout = index + 1;
return 1;
case 0x46f:
*indexout = index + 1;
return 1;
case 0x471:
*indexout = index + 1;
return 1;
case 0x473:
*indexout = index + 1;
return 1;
case 0x475:
*indexout = index + 1;
return 1;
case 0x477:
*indexout = index + 1;
return 1;
case 0x479:
*indexout = index + 1;
return 1;
case 0x47b:
*indexout = index + 1;
return 1;
case 0x47d:
*indexout = index + 1;
return 1;
case 0x47f:
*indexout = index + 1;
return 1;
case 0x481:
*indexout = index + 1;
return 1;
case 0x48b:
*indexout = index + 1;
return 1;
case 0x48d:
*indexout = index + 1;
return 1;
case 0x48f:
*indexout = index + 1;
return 1;
case 0x491:
*indexout = index + 1;
return 1;
case 0x493:
*indexout = index + 1;
return 1;
case 0x495:
*indexout = index + 1;
return 1;
case 0x497:
*indexout = index + 1;
return 1;
case 0x499:
*indexout = index + 1;
return 1;
case 0x49b:
*indexout = index + 1;
return 1;
case 0x49d:
*indexout = index + 1;
return 1;
case 0x49f:
*indexout = index + 1;
return 1;
case 0x4a1:
*indexout = index + 1;
return 1;
case 0x4a3:
*indexout = index + 1;
return 1;
case 0x4a5:
*indexout = index + 1;
return 1;
case 0x4a7:
*indexout = index + 1;
return 1;
case 0x4a9:
*indexout = index + 1;
return 1;
case 0x4ab:
*indexout = index + 1;
return 1;
case 0x4ad:
*indexout = index + 1;
return 1;
case 0x4af:
*indexout = index + 1;
return 1;
case 0x4b1:
*indexout = index + 1;
return 1;
case 0x4b3:
*indexout = index + 1;
return 1;
case 0x4b5:
*indexout = index + 1;
return 1;
case 0x4b7:
*indexout = index + 1;
return 1;
case 0x4b9:
*indexout = index + 1;
return 1;
case 0x4bb:
*indexout = index + 1;
return 1;
case 0x4bd:
*indexout = index + 1;
return 1;
case 0x4bf:
*indexout = index + 1;
return 1;
case 0x4c2:
*indexout = index + 1;
return 1;
case 0x4c4:
*indexout = index + 1;
return 1;
case 0x4c6:
*indexout = index + 1;
return 1;
case 0x4c8:
*indexout = index + 1;
return 1;
case 0x4ca:
*indexout = index + 1;
return 1;
case 0x4cc:
*indexout = index + 1;
return 1;
case 0x4ce:
*indexout = index + 1;
return 1;
case 0x4cf:
*indexout = index + 1;
return 1;
case 0x4d1:
*indexout = index + 1;
return 1;
case 0x4d3:
*indexout = index + 1;
return 1;
case 0x4d5:
*indexout = index + 1;
return 1;
case 0x4d7:
*indexout = index + 1;
return 1;
case 0x4d9:
*indexout = index + 1;
return 1;
case 0x4db:
*indexout = index + 1;
return 1;
case 0x4dd:
*indexout = index + 1;
return 1;
case 0x4df:
*indexout = index + 1;
return 1;
case 0x4e1:
*indexout = index + 1;
return 1;
case 0x4e3:
*indexout = index + 1;
return 1;
case 0x4e5:
*indexout = index + 1;
return 1;
case 0x4e7:
*indexout = index + 1;
return 1;
case 0x4e9:
*indexout = index + 1;
return 1;
case 0x4eb:
*indexout = index + 1;
return 1;
case 0x4ed:
*indexout = index + 1;
return 1;
case 0x4ef:
*indexout = index + 1;
return 1;
case 0x4f1:
*indexout = index + 1;
return 1;
case 0x4f3:
*indexout = index + 1;
return 1;
case 0x4f5:
*indexout = index + 1;
return 1;
case 0x4f7:
*indexout = index + 1;
return 1;
case 0x4f9:
*indexout = index + 1;
return 1;
case 0x4fb:
*indexout = index + 1;
return 1;
case 0x4fd:
*indexout = index + 1;
return 1;
case 0x4ff:
*indexout = index + 1;
return 1;
case 0x501:
*indexout = index + 1;
return 1;
case 0x503:
*indexout = index + 1;
return 1;
case 0x505:
*indexout = index + 1;
return 1;
case 0x507:
*indexout = index + 1;
return 1;
case 0x509:
*indexout = index + 1;
return 1;
case 0x50b:
*indexout = index + 1;
return 1;
case 0x50d:
*indexout = index + 1;
return 1;
case 0x50f:
*indexout = index + 1;
return 1;
case 0x511:
*indexout = index + 1;
return 1;
case 0x513:
*indexout = index + 1;
return 1;
case 0x515:
*indexout = index + 1;
return 1;
case 0x517:
*indexout = index + 1;
return 1;
case 0x519:
*indexout = index + 1;
return 1;
case 0x51b:
*indexout = index + 1;
return 1;
case 0x51d:
*indexout = index + 1;
return 1;
case 0x51f:
*indexout = index + 1;
return 1;
case 0x521:
*indexout = index + 1;
return 1;
case 0x523:
*indexout = index + 1;
return 1;
case 0x525:
*indexout = index + 1;
return 1;
case 0x527:
*indexout = index + 1;
return 1;
case 0x529:
*indexout = index + 1;
return 1;
case 0x52b:
*indexout = index + 1;
return 1;
case 0x52d:
*indexout = index + 1;
return 1;
case 0x52f:
*indexout = index + 1;
return 1;
case 0x561:
*indexout = index + 1;
return 1;
case 0x562:
*indexout = index + 1;
return 1;
case 0x563:
*indexout = index + 1;
return 1;
case 0x564:
*indexout = index + 1;
return 1;
case 0x565:
*indexout = index + 1;
return 1;
case 0x566:
*indexout = index + 1;
return 1;
case 0x567:
*indexout = index + 1;
return 1;
case 0x568:
*indexout = index + 1;
return 1;
case 0x569:
*indexout = index + 1;
return 1;
case 0x56a:
*indexout = index + 1;
return 1;
case 0x56b:
*indexout = index + 1;
return 1;
case 0x56c:
*indexout = index + 1;
return 1;
case 0x56d:
*indexout = index + 1;
return 1;
case 0x56e:
*indexout = index + 1;
return 1;
case 0x56f:
*indexout = index + 1;
return 1;
case 0x570:
*indexout = index + 1;
return 1;
case 0x571:
*indexout = index + 1;
return 1;
case 0x572:
*indexout = index + 1;
return 1;
case 0x573:
*indexout = index + 1;
return 1;
case 0x574:
*indexout = index + 1;
return 1;
case 0x575:
*indexout = index + 1;
return 1;
case 0x576:
*indexout = index + 1;
return 1;
case 0x577:
*indexout = index + 1;
return 1;
case 0x578:
*indexout = index + 1;
return 1;
case 0x579:
*indexout = index + 1;
return 1;
case 0x57a:
*indexout = index + 1;
return 1;
case 0x57b:
*indexout = index + 1;
return 1;
case 0x57c:
*indexout = index + 1;
return 1;
case 0x57d:
*indexout = index + 1;
return 1;
case 0x57e:
*indexout = index + 1;
return 1;
case 0x57f:
*indexout = index + 1;
return 1;
case 0x580:
*indexout = index + 1;
return 1;
case 0x581:
*indexout = index + 1;
return 1;
case 0x582:
*indexout = index + 1;
return 1;
case 0x583:
*indexout = index + 1;
return 1;
case 0x584:
*indexout = index + 1;
return 1;
case 0x585:
*indexout = index + 1;
return 1;
case 0x586:
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
case 0x1d79:
*indexout = index + 1;
return 1;
case 0x1d7d:
*indexout = index + 1;
return 1;
case 0x1e01:
*indexout = index + 1;
return 1;
case 0x1e03:
*indexout = index + 1;
return 1;
case 0x1e05:
*indexout = index + 1;
return 1;
case 0x1e07:
*indexout = index + 1;
return 1;
case 0x1e09:
*indexout = index + 1;
return 1;
case 0x1e0b:
*indexout = index + 1;
return 1;
case 0x1e0d:
*indexout = index + 1;
return 1;
case 0x1e0f:
*indexout = index + 1;
return 1;
case 0x1e11:
*indexout = index + 1;
return 1;
case 0x1e13:
*indexout = index + 1;
return 1;
case 0x1e15:
*indexout = index + 1;
return 1;
case 0x1e17:
*indexout = index + 1;
return 1;
case 0x1e19:
*indexout = index + 1;
return 1;
case 0x1e1b:
*indexout = index + 1;
return 1;
case 0x1e1d:
*indexout = index + 1;
return 1;
case 0x1e1f:
*indexout = index + 1;
return 1;
case 0x1e21:
*indexout = index + 1;
return 1;
case 0x1e23:
*indexout = index + 1;
return 1;
case 0x1e25:
*indexout = index + 1;
return 1;
case 0x1e27:
*indexout = index + 1;
return 1;
case 0x1e29:
*indexout = index + 1;
return 1;
case 0x1e2b:
*indexout = index + 1;
return 1;
case 0x1e2d:
*indexout = index + 1;
return 1;
case 0x1e2f:
*indexout = index + 1;
return 1;
case 0x1e31:
*indexout = index + 1;
return 1;
case 0x1e33:
*indexout = index + 1;
return 1;
case 0x1e35:
*indexout = index + 1;
return 1;
case 0x1e37:
*indexout = index + 1;
return 1;
case 0x1e39:
*indexout = index + 1;
return 1;
case 0x1e3b:
*indexout = index + 1;
return 1;
case 0x1e3d:
*indexout = index + 1;
return 1;
case 0x1e3f:
*indexout = index + 1;
return 1;
case 0x1e41:
*indexout = index + 1;
return 1;
case 0x1e43:
*indexout = index + 1;
return 1;
case 0x1e45:
*indexout = index + 1;
return 1;
case 0x1e47:
*indexout = index + 1;
return 1;
case 0x1e49:
*indexout = index + 1;
return 1;
case 0x1e4b:
*indexout = index + 1;
return 1;
case 0x1e4d:
*indexout = index + 1;
return 1;
case 0x1e4f:
*indexout = index + 1;
return 1;
case 0x1e51:
*indexout = index + 1;
return 1;
case 0x1e53:
*indexout = index + 1;
return 1;
case 0x1e55:
*indexout = index + 1;
return 1;
case 0x1e57:
*indexout = index + 1;
return 1;
case 0x1e59:
*indexout = index + 1;
return 1;
case 0x1e5b:
*indexout = index + 1;
return 1;
case 0x1e5d:
*indexout = index + 1;
return 1;
case 0x1e5f:
*indexout = index + 1;
return 1;
case 0x1e61:
*indexout = index + 1;
return 1;
case 0x1e63:
*indexout = index + 1;
return 1;
case 0x1e65:
*indexout = index + 1;
return 1;
case 0x1e67:
*indexout = index + 1;
return 1;
case 0x1e69:
*indexout = index + 1;
return 1;
case 0x1e6b:
*indexout = index + 1;
return 1;
case 0x1e6d:
*indexout = index + 1;
return 1;
case 0x1e6f:
*indexout = index + 1;
return 1;
case 0x1e71:
*indexout = index + 1;
return 1;
case 0x1e73:
*indexout = index + 1;
return 1;
case 0x1e75:
*indexout = index + 1;
return 1;
case 0x1e77:
*indexout = index + 1;
return 1;
case 0x1e79:
*indexout = index + 1;
return 1;
case 0x1e7b:
*indexout = index + 1;
return 1;
case 0x1e7d:
*indexout = index + 1;
return 1;
case 0x1e7f:
*indexout = index + 1;
return 1;
case 0x1e81:
*indexout = index + 1;
return 1;
case 0x1e83:
*indexout = index + 1;
return 1;
case 0x1e85:
*indexout = index + 1;
return 1;
case 0x1e87:
*indexout = index + 1;
return 1;
case 0x1e89:
*indexout = index + 1;
return 1;
case 0x1e8b:
*indexout = index + 1;
return 1;
case 0x1e8d:
*indexout = index + 1;
return 1;
case 0x1e8f:
*indexout = index + 1;
return 1;
case 0x1e91:
*indexout = index + 1;
return 1;
case 0x1e93:
*indexout = index + 1;
return 1;
case 0x1e95:
*indexout = index + 1;
return 1;
case 0x1ea1:
*indexout = index + 1;
return 1;
case 0x1ea3:
*indexout = index + 1;
return 1;
case 0x1ea5:
*indexout = index + 1;
return 1;
case 0x1ea7:
*indexout = index + 1;
return 1;
case 0x1ea9:
*indexout = index + 1;
return 1;
case 0x1eab:
*indexout = index + 1;
return 1;
case 0x1ead:
*indexout = index + 1;
return 1;
case 0x1eaf:
*indexout = index + 1;
return 1;
case 0x1eb1:
*indexout = index + 1;
return 1;
case 0x1eb3:
*indexout = index + 1;
return 1;
case 0x1eb5:
*indexout = index + 1;
return 1;
case 0x1eb7:
*indexout = index + 1;
return 1;
case 0x1eb9:
*indexout = index + 1;
return 1;
case 0x1ebb:
*indexout = index + 1;
return 1;
case 0x1ebd:
*indexout = index + 1;
return 1;
case 0x1ebf:
*indexout = index + 1;
return 1;
case 0x1ec1:
*indexout = index + 1;
return 1;
case 0x1ec3:
*indexout = index + 1;
return 1;
case 0x1ec5:
*indexout = index + 1;
return 1;
case 0x1ec7:
*indexout = index + 1;
return 1;
case 0x1ec9:
*indexout = index + 1;
return 1;
case 0x1ecb:
*indexout = index + 1;
return 1;
case 0x1ecd:
*indexout = index + 1;
return 1;
case 0x1ecf:
*indexout = index + 1;
return 1;
case 0x1ed1:
*indexout = index + 1;
return 1;
case 0x1ed3:
*indexout = index + 1;
return 1;
case 0x1ed5:
*indexout = index + 1;
return 1;
case 0x1ed7:
*indexout = index + 1;
return 1;
case 0x1ed9:
*indexout = index + 1;
return 1;
case 0x1edb:
*indexout = index + 1;
return 1;
case 0x1edd:
*indexout = index + 1;
return 1;
case 0x1edf:
*indexout = index + 1;
return 1;
case 0x1ee1:
*indexout = index + 1;
return 1;
case 0x1ee3:
*indexout = index + 1;
return 1;
case 0x1ee5:
*indexout = index + 1;
return 1;
case 0x1ee7:
*indexout = index + 1;
return 1;
case 0x1ee9:
*indexout = index + 1;
return 1;
case 0x1eeb:
*indexout = index + 1;
return 1;
case 0x1eed:
*indexout = index + 1;
return 1;
case 0x1eef:
*indexout = index + 1;
return 1;
case 0x1ef1:
*indexout = index + 1;
return 1;
case 0x1ef3:
*indexout = index + 1;
return 1;
case 0x1ef5:
*indexout = index + 1;
return 1;
case 0x1ef7:
*indexout = index + 1;
return 1;
case 0x1ef9:
*indexout = index + 1;
return 1;
case 0x1efb:
*indexout = index + 1;
return 1;
case 0x1efd:
*indexout = index + 1;
return 1;
case 0x1eff:
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
case 0x1f51:
*indexout = index + 1;
return 1;
case 0x1f53:
*indexout = index + 1;
return 1;
case 0x1f55:
*indexout = index + 1;
return 1;
case 0x1f57:
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
case 0x1fb0:
*indexout = index + 1;
return 1;
case 0x1fb1:
*indexout = index + 1;
return 1;
case 0x1fd0:
*indexout = index + 1;
return 1;
case 0x1fd1:
*indexout = index + 1;
return 1;
case 0x1fe0:
*indexout = index + 1;
return 1;
case 0x1fe1:
*indexout = index + 1;
return 1;
case 0x1fe5:
*indexout = index + 1;
return 1;
case 0x214e:
*indexout = index + 1;
return 1;
case 0x2170:
*indexout = index + 1;
return 1;
case 0x2171:
*indexout = index + 1;
return 1;
case 0x2172:
*indexout = index + 1;
return 1;
case 0x2173:
*indexout = index + 1;
return 1;
case 0x2174:
*indexout = index + 1;
return 1;
case 0x2175:
*indexout = index + 1;
return 1;
case 0x2176:
*indexout = index + 1;
return 1;
case 0x2177:
*indexout = index + 1;
return 1;
case 0x2178:
*indexout = index + 1;
return 1;
case 0x2179:
*indexout = index + 1;
return 1;
case 0x217a:
*indexout = index + 1;
return 1;
case 0x217b:
*indexout = index + 1;
return 1;
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
case 0x2184:
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
case 0x2c30:
*indexout = index + 1;
return 1;
case 0x2c31:
*indexout = index + 1;
return 1;
case 0x2c32:
*indexout = index + 1;
return 1;
case 0x2c33:
*indexout = index + 1;
return 1;
case 0x2c34:
*indexout = index + 1;
return 1;
case 0x2c35:
*indexout = index + 1;
return 1;
case 0x2c36:
*indexout = index + 1;
return 1;
case 0x2c37:
*indexout = index + 1;
return 1;
case 0x2c38:
*indexout = index + 1;
return 1;
case 0x2c39:
*indexout = index + 1;
return 1;
case 0x2c3a:
*indexout = index + 1;
return 1;
case 0x2c3b:
*indexout = index + 1;
return 1;
case 0x2c3c:
*indexout = index + 1;
return 1;
case 0x2c3d:
*indexout = index + 1;
return 1;
case 0x2c3e:
*indexout = index + 1;
return 1;
case 0x2c3f:
*indexout = index + 1;
return 1;
case 0x2c40:
*indexout = index + 1;
return 1;
case 0x2c41:
*indexout = index + 1;
return 1;
case 0x2c42:
*indexout = index + 1;
return 1;
case 0x2c43:
*indexout = index + 1;
return 1;
case 0x2c44:
*indexout = index + 1;
return 1;
case 0x2c45:
*indexout = index + 1;
return 1;
case 0x2c46:
*indexout = index + 1;
return 1;
case 0x2c47:
*indexout = index + 1;
return 1;
case 0x2c48:
*indexout = index + 1;
return 1;
case 0x2c49:
*indexout = index + 1;
return 1;
case 0x2c4a:
*indexout = index + 1;
return 1;
case 0x2c4b:
*indexout = index + 1;
return 1;
case 0x2c4c:
*indexout = index + 1;
return 1;
case 0x2c4d:
*indexout = index + 1;
return 1;
case 0x2c4e:
*indexout = index + 1;
return 1;
case 0x2c4f:
*indexout = index + 1;
return 1;
case 0x2c50:
*indexout = index + 1;
return 1;
case 0x2c51:
*indexout = index + 1;
return 1;
case 0x2c52:
*indexout = index + 1;
return 1;
case 0x2c53:
*indexout = index + 1;
return 1;
case 0x2c54:
*indexout = index + 1;
return 1;
case 0x2c55:
*indexout = index + 1;
return 1;
case 0x2c56:
*indexout = index + 1;
return 1;
case 0x2c57:
*indexout = index + 1;
return 1;
case 0x2c58:
*indexout = index + 1;
return 1;
case 0x2c59:
*indexout = index + 1;
return 1;
case 0x2c5a:
*indexout = index + 1;
return 1;
case 0x2c5b:
*indexout = index + 1;
return 1;
case 0x2c5c:
*indexout = index + 1;
return 1;
case 0x2c5d:
*indexout = index + 1;
return 1;
case 0x2c5e:
*indexout = index + 1;
return 1;
case 0x2c61:
*indexout = index + 1;
return 1;
case 0x2c65:
*indexout = index + 1;
return 1;
case 0x2c66:
*indexout = index + 1;
return 1;
case 0x2c68:
*indexout = index + 1;
return 1;
case 0x2c6a:
*indexout = index + 1;
return 1;
case 0x2c6c:
*indexout = index + 1;
return 1;
case 0x2c73:
*indexout = index + 1;
return 1;
case 0x2c76:
*indexout = index + 1;
return 1;
case 0x2c81:
*indexout = index + 1;
return 1;
case 0x2c83:
*indexout = index + 1;
return 1;
case 0x2c85:
*indexout = index + 1;
return 1;
case 0x2c87:
*indexout = index + 1;
return 1;
case 0x2c89:
*indexout = index + 1;
return 1;
case 0x2c8b:
*indexout = index + 1;
return 1;
case 0x2c8d:
*indexout = index + 1;
return 1;
case 0x2c8f:
*indexout = index + 1;
return 1;
case 0x2c91:
*indexout = index + 1;
return 1;
case 0x2c93:
*indexout = index + 1;
return 1;
case 0x2c95:
*indexout = index + 1;
return 1;
case 0x2c97:
*indexout = index + 1;
return 1;
case 0x2c99:
*indexout = index + 1;
return 1;
case 0x2c9b:
*indexout = index + 1;
return 1;
case 0x2c9d:
*indexout = index + 1;
return 1;
case 0x2c9f:
*indexout = index + 1;
return 1;
case 0x2ca1:
*indexout = index + 1;
return 1;
case 0x2ca3:
*indexout = index + 1;
return 1;
case 0x2ca5:
*indexout = index + 1;
return 1;
case 0x2ca7:
*indexout = index + 1;
return 1;
case 0x2ca9:
*indexout = index + 1;
return 1;
case 0x2cab:
*indexout = index + 1;
return 1;
case 0x2cad:
*indexout = index + 1;
return 1;
case 0x2caf:
*indexout = index + 1;
return 1;
case 0x2cb1:
*indexout = index + 1;
return 1;
case 0x2cb3:
*indexout = index + 1;
return 1;
case 0x2cb5:
*indexout = index + 1;
return 1;
case 0x2cb7:
*indexout = index + 1;
return 1;
case 0x2cb9:
*indexout = index + 1;
return 1;
case 0x2cbb:
*indexout = index + 1;
return 1;
case 0x2cbd:
*indexout = index + 1;
return 1;
case 0x2cbf:
*indexout = index + 1;
return 1;
case 0x2cc1:
*indexout = index + 1;
return 1;
case 0x2cc3:
*indexout = index + 1;
return 1;
case 0x2cc5:
*indexout = index + 1;
return 1;
case 0x2cc7:
*indexout = index + 1;
return 1;
case 0x2cc9:
*indexout = index + 1;
return 1;
case 0x2ccb:
*indexout = index + 1;
return 1;
case 0x2ccd:
*indexout = index + 1;
return 1;
case 0x2ccf:
*indexout = index + 1;
return 1;
case 0x2cd1:
*indexout = index + 1;
return 1;
case 0x2cd3:
*indexout = index + 1;
return 1;
case 0x2cd5:
*indexout = index + 1;
return 1;
case 0x2cd7:
*indexout = index + 1;
return 1;
case 0x2cd9:
*indexout = index + 1;
return 1;
case 0x2cdb:
*indexout = index + 1;
return 1;
case 0x2cdd:
*indexout = index + 1;
return 1;
case 0x2cdf:
*indexout = index + 1;
return 1;
case 0x2ce1:
*indexout = index + 1;
return 1;
case 0x2ce3:
*indexout = index + 1;
return 1;
case 0x2cec:
*indexout = index + 1;
return 1;
case 0x2cee:
*indexout = index + 1;
return 1;
case 0x2cf3:
*indexout = index + 1;
return 1;
case 0x2d00:
*indexout = index + 1;
return 1;
case 0x2d01:
*indexout = index + 1;
return 1;
case 0x2d02:
*indexout = index + 1;
return 1;
case 0x2d03:
*indexout = index + 1;
return 1;
case 0x2d04:
*indexout = index + 1;
return 1;
case 0x2d05:
*indexout = index + 1;
return 1;
case 0x2d06:
*indexout = index + 1;
return 1;
case 0x2d07:
*indexout = index + 1;
return 1;
case 0x2d08:
*indexout = index + 1;
return 1;
case 0x2d09:
*indexout = index + 1;
return 1;
case 0x2d0a:
*indexout = index + 1;
return 1;
case 0x2d0b:
*indexout = index + 1;
return 1;
case 0x2d0c:
*indexout = index + 1;
return 1;
case 0x2d0d:
*indexout = index + 1;
return 1;
case 0x2d0e:
*indexout = index + 1;
return 1;
case 0x2d0f:
*indexout = index + 1;
return 1;
case 0x2d10:
*indexout = index + 1;
return 1;
case 0x2d11:
*indexout = index + 1;
return 1;
case 0x2d12:
*indexout = index + 1;
return 1;
case 0x2d13:
*indexout = index + 1;
return 1;
case 0x2d14:
*indexout = index + 1;
return 1;
case 0x2d15:
*indexout = index + 1;
return 1;
case 0x2d16:
*indexout = index + 1;
return 1;
case 0x2d17:
*indexout = index + 1;
return 1;
case 0x2d18:
*indexout = index + 1;
return 1;
case 0x2d19:
*indexout = index + 1;
return 1;
case 0x2d1a:
*indexout = index + 1;
return 1;
case 0x2d1b:
*indexout = index + 1;
return 1;
case 0x2d1c:
*indexout = index + 1;
return 1;
case 0x2d1d:
*indexout = index + 1;
return 1;
case 0x2d1e:
*indexout = index + 1;
return 1;
case 0x2d1f:
*indexout = index + 1;
return 1;
case 0x2d20:
*indexout = index + 1;
return 1;
case 0x2d21:
*indexout = index + 1;
return 1;
case 0x2d22:
*indexout = index + 1;
return 1;
case 0x2d23:
*indexout = index + 1;
return 1;
case 0x2d24:
*indexout = index + 1;
return 1;
case 0x2d25:
*indexout = index + 1;
return 1;
case 0x2d27:
*indexout = index + 1;
return 1;
case 0x2d2d:
*indexout = index + 1;
return 1;
case 0xa641:
*indexout = index + 1;
return 1;
case 0xa643:
*indexout = index + 1;
return 1;
case 0xa645:
*indexout = index + 1;
return 1;
case 0xa647:
*indexout = index + 1;
return 1;
case 0xa649:
*indexout = index + 1;
return 1;
case 0xa64b:
*indexout = index + 1;
return 1;
case 0xa64d:
*indexout = index + 1;
return 1;
case 0xa64f:
*indexout = index + 1;
return 1;
case 0xa651:
*indexout = index + 1;
return 1;
case 0xa653:
*indexout = index + 1;
return 1;
case 0xa655:
*indexout = index + 1;
return 1;
case 0xa657:
*indexout = index + 1;
return 1;
case 0xa659:
*indexout = index + 1;
return 1;
case 0xa65b:
*indexout = index + 1;
return 1;
case 0xa65d:
*indexout = index + 1;
return 1;
case 0xa65f:
*indexout = index + 1;
return 1;
case 0xa661:
*indexout = index + 1;
return 1;
case 0xa663:
*indexout = index + 1;
return 1;
case 0xa665:
*indexout = index + 1;
return 1;
case 0xa667:
*indexout = index + 1;
return 1;
case 0xa669:
*indexout = index + 1;
return 1;
case 0xa66b:
*indexout = index + 1;
return 1;
case 0xa66d:
*indexout = index + 1;
return 1;
case 0xa681:
*indexout = index + 1;
return 1;
case 0xa683:
*indexout = index + 1;
return 1;
case 0xa685:
*indexout = index + 1;
return 1;
case 0xa687:
*indexout = index + 1;
return 1;
case 0xa689:
*indexout = index + 1;
return 1;
case 0xa68b:
*indexout = index + 1;
return 1;
case 0xa68d:
*indexout = index + 1;
return 1;
case 0xa68f:
*indexout = index + 1;
return 1;
case 0xa691:
*indexout = index + 1;
return 1;
case 0xa693:
*indexout = index + 1;
return 1;
case 0xa695:
*indexout = index + 1;
return 1;
case 0xa697:
*indexout = index + 1;
return 1;
case 0xa699:
*indexout = index + 1;
return 1;
case 0xa69b:
*indexout = index + 1;
return 1;
case 0xa723:
*indexout = index + 1;
return 1;
case 0xa725:
*indexout = index + 1;
return 1;
case 0xa727:
*indexout = index + 1;
return 1;
case 0xa729:
*indexout = index + 1;
return 1;
case 0xa72b:
*indexout = index + 1;
return 1;
case 0xa72d:
*indexout = index + 1;
return 1;
case 0xa72f:
*indexout = index + 1;
return 1;
case 0xa733:
*indexout = index + 1;
return 1;
case 0xa735:
*indexout = index + 1;
return 1;
case 0xa737:
*indexout = index + 1;
return 1;
case 0xa739:
*indexout = index + 1;
return 1;
case 0xa73b:
*indexout = index + 1;
return 1;
case 0xa73d:
*indexout = index + 1;
return 1;
case 0xa73f:
*indexout = index + 1;
return 1;
case 0xa741:
*indexout = index + 1;
return 1;
case 0xa743:
*indexout = index + 1;
return 1;
case 0xa745:
*indexout = index + 1;
return 1;
case 0xa747:
*indexout = index + 1;
return 1;
case 0xa749:
*indexout = index + 1;
return 1;
case 0xa74b:
*indexout = index + 1;
return 1;
case 0xa74d:
*indexout = index + 1;
return 1;
case 0xa74f:
*indexout = index + 1;
return 1;
case 0xa751:
*indexout = index + 1;
return 1;
case 0xa753:
*indexout = index + 1;
return 1;
case 0xa755:
*indexout = index + 1;
return 1;
case 0xa757:
*indexout = index + 1;
return 1;
case 0xa759:
*indexout = index + 1;
return 1;
case 0xa75b:
*indexout = index + 1;
return 1;
case 0xa75d:
*indexout = index + 1;
return 1;
case 0xa75f:
*indexout = index + 1;
return 1;
case 0xa761:
*indexout = index + 1;
return 1;
case 0xa763:
*indexout = index + 1;
return 1;
case 0xa765:
*indexout = index + 1;
return 1;
case 0xa767:
*indexout = index + 1;
return 1;
case 0xa769:
*indexout = index + 1;
return 1;
case 0xa76b:
*indexout = index + 1;
return 1;
case 0xa76d:
*indexout = index + 1;
return 1;
case 0xa76f:
*indexout = index + 1;
return 1;
case 0xa77a:
*indexout = index + 1;
return 1;
case 0xa77c:
*indexout = index + 1;
return 1;
case 0xa77f:
*indexout = index + 1;
return 1;
case 0xa781:
*indexout = index + 1;
return 1;
case 0xa783:
*indexout = index + 1;
return 1;
case 0xa785:
*indexout = index + 1;
return 1;
case 0xa787:
*indexout = index + 1;
return 1;
case 0xa78c:
*indexout = index + 1;
return 1;
case 0xa791:
*indexout = index + 1;
return 1;
case 0xa793:
*indexout = index + 1;
return 1;
case 0xa797:
*indexout = index + 1;
return 1;
case 0xa799:
*indexout = index + 1;
return 1;
case 0xa79b:
*indexout = index + 1;
return 1;
case 0xa79d:
*indexout = index + 1;
return 1;
case 0xa79f:
*indexout = index + 1;
return 1;
case 0xa7a1:
*indexout = index + 1;
return 1;
case 0xa7a3:
*indexout = index + 1;
return 1;
case 0xa7a5:
*indexout = index + 1;
return 1;
case 0xa7a7:
*indexout = index + 1;
return 1;
case 0xa7a9:
*indexout = index + 1;
return 1;
case 0xa7b5:
*indexout = index + 1;
return 1;
case 0xa7b7:
*indexout = index + 1;
return 1;
case 0xab53:
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
case 0x10428:
*indexout = index + 1;
return 1;
case 0x10429:
*indexout = index + 1;
return 1;
case 0x1042a:
*indexout = index + 1;
return 1;
case 0x1042b:
*indexout = index + 1;
return 1;
case 0x1042c:
*indexout = index + 1;
return 1;
case 0x1042d:
*indexout = index + 1;
return 1;
case 0x1042e:
*indexout = index + 1;
return 1;
case 0x1042f:
*indexout = index + 1;
return 1;
case 0x10430:
*indexout = index + 1;
return 1;
case 0x10431:
*indexout = index + 1;
return 1;
case 0x10432:
*indexout = index + 1;
return 1;
case 0x10433:
*indexout = index + 1;
return 1;
case 0x10434:
*indexout = index + 1;
return 1;
case 0x10435:
*indexout = index + 1;
return 1;
case 0x10436:
*indexout = index + 1;
return 1;
case 0x10437:
*indexout = index + 1;
return 1;
case 0x10438:
*indexout = index + 1;
return 1;
case 0x10439:
*indexout = index + 1;
return 1;
case 0x1043a:
*indexout = index + 1;
return 1;
case 0x1043b:
*indexout = index + 1;
return 1;
case 0x1043c:
*indexout = index + 1;
return 1;
case 0x1043d:
*indexout = index + 1;
return 1;
case 0x1043e:
*indexout = index + 1;
return 1;
case 0x1043f:
*indexout = index + 1;
return 1;
case 0x10440:
*indexout = index + 1;
return 1;
case 0x10441:
*indexout = index + 1;
return 1;
case 0x10442:
*indexout = index + 1;
return 1;
case 0x10443:
*indexout = index + 1;
return 1;
case 0x10444:
*indexout = index + 1;
return 1;
case 0x10445:
*indexout = index + 1;
return 1;
case 0x10446:
*indexout = index + 1;
return 1;
case 0x10447:
*indexout = index + 1;
return 1;
case 0x10448:
*indexout = index + 1;
return 1;
case 0x10449:
*indexout = index + 1;
return 1;
case 0x1044a:
*indexout = index + 1;
return 1;
case 0x1044b:
*indexout = index + 1;
return 1;
case 0x1044c:
*indexout = index + 1;
return 1;
case 0x1044d:
*indexout = index + 1;
return 1;
case 0x1044e:
*indexout = index + 1;
return 1;
case 0x1044f:
*indexout = index + 1;
return 1;
case 0x104d8:
*indexout = index + 1;
return 1;
case 0x104d9:
*indexout = index + 1;
return 1;
case 0x104da:
*indexout = index + 1;
return 1;
case 0x104db:
*indexout = index + 1;
return 1;
case 0x104dc:
*indexout = index + 1;
return 1;
case 0x104dd:
*indexout = index + 1;
return 1;
case 0x104de:
*indexout = index + 1;
return 1;
case 0x104df:
*indexout = index + 1;
return 1;
case 0x104e0:
*indexout = index + 1;
return 1;
case 0x104e1:
*indexout = index + 1;
return 1;
case 0x104e2:
*indexout = index + 1;
return 1;
case 0x104e3:
*indexout = index + 1;
return 1;
case 0x104e4:
*indexout = index + 1;
return 1;
case 0x104e5:
*indexout = index + 1;
return 1;
case 0x104e6:
*indexout = index + 1;
return 1;
case 0x104e7:
*indexout = index + 1;
return 1;
case 0x104e8:
*indexout = index + 1;
return 1;
case 0x104e9:
*indexout = index + 1;
return 1;
case 0x104ea:
*indexout = index + 1;
return 1;
case 0x104eb:
*indexout = index + 1;
return 1;
case 0x104ec:
*indexout = index + 1;
return 1;
case 0x104ed:
*indexout = index + 1;
return 1;
case 0x104ee:
*indexout = index + 1;
return 1;
case 0x104ef:
*indexout = index + 1;
return 1;
case 0x104f0:
*indexout = index + 1;
return 1;
case 0x104f1:
*indexout = index + 1;
return 1;
case 0x104f2:
*indexout = index + 1;
return 1;
case 0x104f3:
*indexout = index + 1;
return 1;
case 0x104f4:
*indexout = index + 1;
return 1;
case 0x104f5:
*indexout = index + 1;
return 1;
case 0x104f6:
*indexout = index + 1;
return 1;
case 0x104f7:
*indexout = index + 1;
return 1;
case 0x104f8:
*indexout = index + 1;
return 1;
case 0x104f9:
*indexout = index + 1;
return 1;
case 0x104fa:
*indexout = index + 1;
return 1;
case 0x104fb:
*indexout = index + 1;
return 1;
case 0x10cc0:
*indexout = index + 1;
return 1;
case 0x10cc1:
*indexout = index + 1;
return 1;
case 0x10cc2:
*indexout = index + 1;
return 1;
case 0x10cc3:
*indexout = index + 1;
return 1;
case 0x10cc4:
*indexout = index + 1;
return 1;
case 0x10cc5:
*indexout = index + 1;
return 1;
case 0x10cc6:
*indexout = index + 1;
return 1;
case 0x10cc7:
*indexout = index + 1;
return 1;
case 0x10cc8:
*indexout = index + 1;
return 1;
case 0x10cc9:
*indexout = index + 1;
return 1;
case 0x10cca:
*indexout = index + 1;
return 1;
case 0x10ccb:
*indexout = index + 1;
return 1;
case 0x10ccc:
*indexout = index + 1;
return 1;
case 0x10ccd:
*indexout = index + 1;
return 1;
case 0x10cce:
*indexout = index + 1;
return 1;
case 0x10ccf:
*indexout = index + 1;
return 1;
case 0x10cd0:
*indexout = index + 1;
return 1;
case 0x10cd1:
*indexout = index + 1;
return 1;
case 0x10cd2:
*indexout = index + 1;
return 1;
case 0x10cd3:
*indexout = index + 1;
return 1;
case 0x10cd4:
*indexout = index + 1;
return 1;
case 0x10cd5:
*indexout = index + 1;
return 1;
case 0x10cd6:
*indexout = index + 1;
return 1;
case 0x10cd7:
*indexout = index + 1;
return 1;
case 0x10cd8:
*indexout = index + 1;
return 1;
case 0x10cd9:
*indexout = index + 1;
return 1;
case 0x10cda:
*indexout = index + 1;
return 1;
case 0x10cdb:
*indexout = index + 1;
return 1;
case 0x10cdc:
*indexout = index + 1;
return 1;
case 0x10cdd:
*indexout = index + 1;
return 1;
case 0x10cde:
*indexout = index + 1;
return 1;
case 0x10cdf:
*indexout = index + 1;
return 1;
case 0x10ce0:
*indexout = index + 1;
return 1;
case 0x10ce1:
*indexout = index + 1;
return 1;
case 0x10ce2:
*indexout = index + 1;
return 1;
case 0x10ce3:
*indexout = index + 1;
return 1;
case 0x10ce4:
*indexout = index + 1;
return 1;
case 0x10ce5:
*indexout = index + 1;
return 1;
case 0x10ce6:
*indexout = index + 1;
return 1;
case 0x10ce7:
*indexout = index + 1;
return 1;
case 0x10ce8:
*indexout = index + 1;
return 1;
case 0x10ce9:
*indexout = index + 1;
return 1;
case 0x10cea:
*indexout = index + 1;
return 1;
case 0x10ceb:
*indexout = index + 1;
return 1;
case 0x10cec:
*indexout = index + 1;
return 1;
case 0x10ced:
*indexout = index + 1;
return 1;
case 0x10cee:
*indexout = index + 1;
return 1;
case 0x10cef:
*indexout = index + 1;
return 1;
case 0x10cf0:
*indexout = index + 1;
return 1;
case 0x10cf1:
*indexout = index + 1;
return 1;
case 0x10cf2:
*indexout = index + 1;
return 1;
case 0x118c0:
*indexout = index + 1;
return 1;
case 0x118c1:
*indexout = index + 1;
return 1;
case 0x118c2:
*indexout = index + 1;
return 1;
case 0x118c3:
*indexout = index + 1;
return 1;
case 0x118c4:
*indexout = index + 1;
return 1;
case 0x118c5:
*indexout = index + 1;
return 1;
case 0x118c6:
*indexout = index + 1;
return 1;
case 0x118c7:
*indexout = index + 1;
return 1;
case 0x118c8:
*indexout = index + 1;
return 1;
case 0x118c9:
*indexout = index + 1;
return 1;
case 0x118ca:
*indexout = index + 1;
return 1;
case 0x118cb:
*indexout = index + 1;
return 1;
case 0x118cc:
*indexout = index + 1;
return 1;
case 0x118cd:
*indexout = index + 1;
return 1;
case 0x118ce:
*indexout = index + 1;
return 1;
case 0x118cf:
*indexout = index + 1;
return 1;
case 0x118d0:
*indexout = index + 1;
return 1;
case 0x118d1:
*indexout = index + 1;
return 1;
case 0x118d2:
*indexout = index + 1;
return 1;
case 0x118d3:
*indexout = index + 1;
return 1;
case 0x118d4:
*indexout = index + 1;
return 1;
case 0x118d5:
*indexout = index + 1;
return 1;
case 0x118d6:
*indexout = index + 1;
return 1;
case 0x118d7:
*indexout = index + 1;
return 1;
case 0x118d8:
*indexout = index + 1;
return 1;
case 0x118d9:
*indexout = index + 1;
return 1;
case 0x118da:
*indexout = index + 1;
return 1;
case 0x118db:
*indexout = index + 1;
return 1;
case 0x118dc:
*indexout = index + 1;
return 1;
case 0x118dd:
*indexout = index + 1;
return 1;
case 0x118de:
*indexout = index + 1;
return 1;
case 0x118df:
*indexout = index + 1;
return 1;
case 0x1e922:
*indexout = index + 1;
return 1;
case 0x1e923:
*indexout = index + 1;
return 1;
case 0x1e924:
*indexout = index + 1;
return 1;
case 0x1e925:
*indexout = index + 1;
return 1;
case 0x1e926:
*indexout = index + 1;
return 1;
case 0x1e927:
*indexout = index + 1;
return 1;
case 0x1e928:
*indexout = index + 1;
return 1;
case 0x1e929:
*indexout = index + 1;
return 1;
case 0x1e92a:
*indexout = index + 1;
return 1;
case 0x1e92b:
*indexout = index + 1;
return 1;
case 0x1e92c:
*indexout = index + 1;
return 1;
case 0x1e92d:
*indexout = index + 1;
return 1;
case 0x1e92e:
*indexout = index + 1;
return 1;
case 0x1e92f:
*indexout = index + 1;
return 1;
case 0x1e930:
*indexout = index + 1;
return 1;
case 0x1e931:
*indexout = index + 1;
return 1;
case 0x1e932:
*indexout = index + 1;
return 1;
case 0x1e933:
*indexout = index + 1;
return 1;
case 0x1e934:
*indexout = index + 1;
return 1;
case 0x1e935:
*indexout = index + 1;
return 1;
case 0x1e936:
*indexout = index + 1;
return 1;
case 0x1e937:
*indexout = index + 1;
return 1;
case 0x1e938:
*indexout = index + 1;
return 1;
case 0x1e939:
*indexout = index + 1;
return 1;
case 0x1e93a:
*indexout = index + 1;
return 1;
case 0x1e93b:
*indexout = index + 1;
return 1;
case 0x1e93c:
*indexout = index + 1;
return 1;
case 0x1e93d:
*indexout = index + 1;
return 1;
case 0x1e93e:
*indexout = index + 1;
return 1;
case 0x1e93f:
*indexout = index + 1;
return 1;
case 0x1e940:
*indexout = index + 1;
return 1;
case 0x1e941:
*indexout = index + 1;
return 1;
case 0x1e942:
*indexout = index + 1;
return 1;
case 0x1e943:
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
