#include <unico.h>
#include <stddef.h>
int equal_unicos_as_tertiary (unicos *unia, size_t indexa, size_t enda, unicos *unib, size_t indexb, size_t endb){
if (1 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0x61:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x41:
return 1;
case 0xaa:
return 1;
case 0xc0:
return 1;
case 0xc1:
return 1;
case 0xc2:
return 1;
case 0xc3:
return 1;
case 0xc4:
return 1;
case 0xc5:
return 1;
case 0x100:
return 1;
case 0x102:
return 1;
case 0x104:
return 1;
case 0x1cd:
return 1;
case 0x1de:
return 1;
case 0x1e0:
return 1;
case 0x1fa:
return 1;
case 0x200:
return 1;
case 0x202:
return 1;
case 0x226:
return 1;
case 0x363:
return 1;
case 0x1d2c:
return 1;
case 0x1df2:
return 1;
case 0x1e00:
return 1;
case 0x1ea0:
return 1;
case 0x1ea2:
return 1;
case 0x1ea4:
return 1;
case 0x1ea6:
return 1;
case 0x1ea8:
return 1;
case 0x1eaa:
return 1;
case 0x1eac:
return 1;
case 0x1eae:
return 1;
case 0x1eb0:
return 1;
case 0x1eb2:
return 1;
case 0x1eb4:
return 1;
case 0x1eb6:
return 1;
case 0x2090:
return 1;
case 0x24b6:
return 1;
case 0x24d0:
return 1;
case 0xa79a:
return 1;
case 0xff21:
return 1;
case 0xff41:
return 1;
case 0x1d400:
return 1;
case 0x1d41a:
return 1;
}
}
return 0;
case 0x62:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42:
return 1;
case 0x1d2e:
return 1;
case 0x1d47:
return 1;
case 0x1de8:
return 1;
case 0x1e02:
return 1;
case 0x1e04:
return 1;
case 0x1e06:
return 1;
case 0x212c:
return 1;
case 0x24b7:
return 1;
case 0x24d1:
return 1;
case 0xff22:
return 1;
case 0xff42:
return 1;
case 0x1d41b:
return 1;
}
}
return 0;
case 0x63:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x43:
return 1;
case 0xc7:
return 1;
case 0x106:
return 1;
case 0x108:
return 1;
case 0x10a:
return 1;
case 0x10c:
return 1;
case 0x368:
return 1;
case 0x1d9c:
return 1;
case 0x1dd7:
return 1;
case 0x1e08:
return 1;
case 0x2102:
return 1;
case 0x216d:
return 1;
case 0x24b8:
return 1;
case 0x24d2:
return 1;
case 0xff23:
return 1;
case 0xff43:
return 1;
case 0x1d41c:
return 1;
case 0x1f132:
return 1;
}
}
return 0;
case 0x64:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x44:
return 1;
case 0xd0:
return 1;
case 0x10e:
return 1;
case 0x110:
return 1;
case 0x369:
return 1;
case 0x1d30:
return 1;
case 0x1d48:
return 1;
case 0x1d9e:
return 1;
case 0x1e0a:
return 1;
case 0x1e0c:
return 1;
case 0x1e0e:
return 1;
case 0x1e10:
return 1;
case 0x1e12:
return 1;
case 0x2145:
return 1;
case 0x2146:
return 1;
case 0x216e:
return 1;
case 0x24b9:
return 1;
case 0x24d3:
return 1;
case 0xa779:
return 1;
case 0xff24:
return 1;
case 0xff44:
return 1;
case 0x1f1a5:
return 1;
}
}
return 0;
case 0x65:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x45:
return 1;
case 0xc8:
return 1;
case 0xc9:
return 1;
case 0xca:
return 1;
case 0xcb:
return 1;
case 0x112:
return 1;
case 0x114:
return 1;
case 0x116:
return 1;
case 0x118:
return 1;
case 0x11a:
return 1;
case 0x204:
return 1;
case 0x206:
return 1;
case 0x228:
return 1;
case 0x364:
return 1;
case 0x1d31:
return 1;
case 0x1d49:
return 1;
case 0x1e14:
return 1;
case 0x1e16:
return 1;
case 0x1e18:
return 1;
case 0x1e1a:
return 1;
case 0x1e1c:
return 1;
case 0x1eb8:
return 1;
case 0x1eba:
return 1;
case 0x1ebc:
return 1;
case 0x1ebe:
return 1;
case 0x1ec0:
return 1;
case 0x1ec2:
return 1;
case 0x1ec4:
return 1;
case 0x1ec6:
return 1;
case 0x2091:
return 1;
case 0x212f:
return 1;
case 0x2130:
return 1;
case 0x24ba:
return 1;
case 0x24d4:
return 1;
case 0xff25:
return 1;
case 0xff45:
return 1;
}
}
return 0;
case 0x66:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x46:
return 1;
case 0x1da0:
return 1;
case 0x1deb:
return 1;
case 0x1e1e:
return 1;
case 0x2131:
return 1;
case 0x24bb:
return 1;
case 0x24d5:
return 1;
case 0xa77b:
return 1;
case 0xff26:
return 1;
case 0xff46:
return 1;
case 0x1d41f:
return 1;
case 0x1f135:
return 1;
}
}
return 0;
case 0x67:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x47:
return 1;
case 0x11c:
return 1;
case 0x11e:
return 1;
case 0x120:
return 1;
case 0x122:
return 1;
case 0x1e6:
return 1;
case 0x1f4:
return 1;
case 0x1d33:
return 1;
case 0x1d4d:
return 1;
case 0x1dda:
return 1;
case 0x1e20:
return 1;
case 0x210a:
return 1;
case 0x24bc:
return 1;
case 0x24d6:
return 1;
case 0xa77d:
return 1;
case 0xa7a0:
return 1;
case 0xff27:
return 1;
case 0xff47:
return 1;
case 0x1d406:
return 1;
}
}
return 0;
case 0x68:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x48:
return 1;
case 0x124:
return 1;
case 0x126:
return 1;
case 0x21e:
return 1;
case 0x2b0:
return 1;
case 0x36a:
return 1;
case 0x1d34:
return 1;
case 0x1e22:
return 1;
case 0x1e24:
return 1;
case 0x1e26:
return 1;
case 0x1e28:
return 1;
case 0x1e2a:
return 1;
case 0x2095:
return 1;
case 0x210b:
return 1;
case 0x210e:
return 1;
case 0x24bd:
return 1;
case 0x24d7:
return 1;
case 0xa7f8:
return 1;
case 0xff28:
return 1;
case 0xff48:
return 1;
}
}
return 0;
case 0x69:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x49:
return 1;
case 0xcc:
return 1;
case 0xcd:
return 1;
case 0xce:
return 1;
case 0xcf:
return 1;
case 0x128:
return 1;
case 0x12a:
return 1;
case 0x12c:
return 1;
case 0x12e:
return 1;
case 0x1cf:
return 1;
case 0x208:
return 1;
case 0x20a:
return 1;
case 0x365:
return 1;
case 0x1d35:
return 1;
case 0x1d62:
return 1;
case 0x1e2c:
return 1;
case 0x1e2e:
return 1;
case 0x1ec8:
return 1;
case 0x1eca:
return 1;
case 0x2071:
return 1;
case 0x2110:
return 1;
case 0x2139:
return 1;
case 0x2160:
return 1;
case 0x24be:
return 1;
case 0x24d8:
return 1;
case 0xff29:
return 1;
case 0xff49:
return 1;
}
}
return 0;
case 0x6a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4a:
return 1;
case 0x134:
return 1;
case 0x2b2:
return 1;
case 0x1d36:
return 1;
case 0x2149:
return 1;
case 0x24bf:
return 1;
case 0x24d9:
return 1;
case 0x2c7c:
return 1;
case 0xff2a:
return 1;
case 0xff4a:
return 1;
case 0x1d409:
return 1;
}
}
return 0;
case 0x6b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4b:
return 1;
case 0x136:
return 1;
case 0x1e8:
return 1;
case 0x1d37:
return 1;
case 0x1d4f:
return 1;
case 0x1ddc:
return 1;
case 0x1e30:
return 1;
case 0x1e32:
return 1;
case 0x1e34:
return 1;
case 0x2096:
return 1;
case 0x24c0:
return 1;
case 0x24da:
return 1;
case 0xa7a2:
return 1;
case 0xff2b:
return 1;
case 0xff4b:
return 1;
case 0x1d40a:
return 1;
case 0x1d424:
return 1;
}
}
return 0;
case 0x6c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
return 1;
case 0x139:
return 1;
case 0x13b:
return 1;
case 0x13d:
return 1;
case 0x141:
return 1;
case 0x2e1:
return 1;
case 0x1d38:
return 1;
case 0x1ddd:
return 1;
case 0x1e36:
return 1;
case 0x1e38:
return 1;
case 0x1e3a:
return 1;
case 0x1e3c:
return 1;
case 0x2097:
return 1;
case 0x2112:
return 1;
case 0x2113:
return 1;
case 0x216c:
return 1;
case 0x24c1:
return 1;
case 0x24db:
return 1;
case 0xff2c:
return 1;
case 0xff4c:
return 1;
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0xb7:
return 1;
default: return 0;
}
}
}
return 0;
case 0x6d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4d:
return 1;
case 0x36b:
return 1;
case 0x1d39:
return 1;
case 0x1d50:
return 1;
case 0x1e3e:
return 1;
case 0x1e40:
return 1;
case 0x1e42:
return 1;
case 0x2098:
return 1;
case 0x2133:
return 1;
case 0x216f:
return 1;
case 0x24c2:
return 1;
case 0x24dc:
return 1;
case 0xff2d:
return 1;
case 0xff4d:
return 1;
case 0x1d426:
return 1;
}
}
return 0;
case 0x6e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4e:
return 1;
case 0xd1:
return 1;
case 0x143:
return 1;
case 0x145:
return 1;
case 0x147:
return 1;
case 0x1f8:
return 1;
case 0x1d3a:
return 1;
case 0x1de0:
return 1;
case 0x1e44:
return 1;
case 0x1e46:
return 1;
case 0x1e48:
return 1;
case 0x1e4a:
return 1;
case 0x207f:
return 1;
case 0x2099:
return 1;
case 0x2115:
return 1;
case 0x24c3:
return 1;
case 0x24dd:
return 1;
case 0xa7a4:
return 1;
case 0xff2e:
return 1;
case 0xff4e:
return 1;
case 0x1d427:
return 1;
}
}
return 0;
case 0x6f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4f:
return 1;
case 0xba:
return 1;
case 0xd2:
return 1;
case 0xd3:
return 1;
case 0xd4:
return 1;
case 0xd5:
return 1;
case 0xd6:
return 1;
case 0xd8:
return 1;
case 0x14c:
return 1;
case 0x14e:
return 1;
case 0x150:
return 1;
case 0x1a0:
return 1;
case 0x1d1:
return 1;
case 0x1ea:
return 1;
case 0x1ec:
return 1;
case 0x1fe:
return 1;
case 0x20c:
return 1;
case 0x20e:
return 1;
case 0x22a:
return 1;
case 0x22c:
return 1;
case 0x22e:
return 1;
case 0x230:
return 1;
case 0x366:
return 1;
case 0x1d3c:
return 1;
case 0x1df3:
return 1;
case 0x1e4c:
return 1;
case 0x1e4e:
return 1;
case 0x1e50:
return 1;
case 0x1e52:
return 1;
case 0x1ecc:
return 1;
case 0x1ece:
return 1;
case 0x1ed0:
return 1;
case 0x1ed2:
return 1;
case 0x1ed4:
return 1;
case 0x1ed6:
return 1;
case 0x1ed8:
return 1;
case 0x1eda:
return 1;
case 0x1edc:
return 1;
case 0x1ede:
return 1;
case 0x1ee0:
return 1;
case 0x1ee2:
return 1;
case 0x2092:
return 1;
case 0x2134:
return 1;
case 0x24c4:
return 1;
case 0x24de:
return 1;
case 0xa79c:
return 1;
case 0xff2f:
return 1;
case 0xff4f:
return 1;
case 0x1d40e:
return 1;
}
}
return 0;
case 0x70:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x50:
return 1;
case 0x1d3e:
return 1;
case 0x1d56:
return 1;
case 0x1dee:
return 1;
case 0x1e54:
return 1;
case 0x1e56:
return 1;
case 0x209a:
return 1;
case 0x2119:
return 1;
case 0x24c5:
return 1;
case 0x24df:
return 1;
case 0xff30:
return 1;
case 0xff50:
return 1;
case 0x1d429:
return 1;
}
}
return 0;
case 0x71:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x51:
return 1;
case 0x211a:
return 1;
case 0x24c6:
return 1;
case 0x24e0:
return 1;
case 0xff31:
return 1;
case 0xff51:
return 1;
case 0x1d42a:
return 1;
case 0x1f140:
return 1;
}
}
return 0;
case 0x72:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x52:
return 1;
case 0x154:
return 1;
case 0x156:
return 1;
case 0x158:
return 1;
case 0x210:
return 1;
case 0x212:
return 1;
case 0x2b3:
return 1;
case 0x36c:
return 1;
case 0x1d3f:
return 1;
case 0x1d63:
return 1;
case 0x1e58:
return 1;
case 0x1e5a:
return 1;
case 0x1e5c:
return 1;
case 0x1e5e:
return 1;
case 0x211b:
return 1;
case 0x24c7:
return 1;
case 0x24e1:
return 1;
case 0xa782:
return 1;
case 0xa7a6:
return 1;
case 0xff32:
return 1;
case 0xff52:
return 1;
case 0x1d42b:
return 1;
}
}
return 0;
case 0x73:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53:
return 1;
case 0x15a:
return 1;
case 0x15c:
return 1;
case 0x15e:
return 1;
case 0x160:
return 1;
case 0x218:
return 1;
case 0x2e2:
return 1;
case 0x1de4:
return 1;
case 0x1e60:
return 1;
case 0x1e62:
return 1;
case 0x1e64:
return 1;
case 0x1e66:
return 1;
case 0x1e68:
return 1;
case 0x209b:
return 1;
case 0x24c8:
return 1;
case 0x24e2:
return 1;
case 0xa784:
return 1;
case 0xa7a8:
return 1;
case 0xff33:
return 1;
case 0xff53:
return 1;
case 0x1d412:
return 1;
case 0x1d42c:
return 1;
case 0x1f142:
return 1;
}
}
return 0;
case 0x74:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54:
return 1;
case 0x162:
return 1;
case 0x164:
return 1;
case 0x21a:
return 1;
case 0x36d:
return 1;
case 0x1d40:
return 1;
case 0x1d57:
return 1;
case 0x1e6a:
return 1;
case 0x1e6c:
return 1;
case 0x1e6e:
return 1;
case 0x1e70:
return 1;
case 0x209c:
return 1;
case 0x24c9:
return 1;
case 0x24e3:
return 1;
case 0xa786:
return 1;
case 0xff34:
return 1;
case 0xff54:
return 1;
case 0x1d413:
return 1;
case 0x1d42d:
return 1;
}
}
return 0;
case 0x75:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x55:
return 1;
case 0xd9:
return 1;
case 0xda:
return 1;
case 0xdb:
return 1;
case 0xdc:
return 1;
case 0x168:
return 1;
case 0x16a:
return 1;
case 0x16c:
return 1;
case 0x16e:
return 1;
case 0x170:
return 1;
case 0x172:
return 1;
case 0x1af:
return 1;
case 0x1d3:
return 1;
case 0x1d5:
return 1;
case 0x1d7:
return 1;
case 0x1d9:
return 1;
case 0x1db:
return 1;
case 0x214:
return 1;
case 0x216:
return 1;
case 0x367:
return 1;
case 0x1d41:
return 1;
case 0x1d58:
return 1;
case 0x1d64:
return 1;
case 0x1df4:
return 1;
case 0x1e72:
return 1;
case 0x1e74:
return 1;
case 0x1e76:
return 1;
case 0x1e78:
return 1;
case 0x1e7a:
return 1;
case 0x1ee4:
return 1;
case 0x1ee6:
return 1;
case 0x1ee8:
return 1;
case 0x1eea:
return 1;
case 0x1eec:
return 1;
case 0x1eee:
return 1;
case 0x1ef0:
return 1;
case 0x24ca:
return 1;
case 0x24e4:
return 1;
case 0xa79e:
return 1;
case 0xff35:
return 1;
case 0xff55:
return 1;
case 0x1d414:
return 1;
case 0x1d42e:
return 1;
}
}
return 0;
case 0x76:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x56:
return 1;
case 0x36e:
return 1;
case 0x1d5b:
return 1;
case 0x1d65:
return 1;
case 0x1e7c:
return 1;
case 0x1e7e:
return 1;
case 0x2164:
return 1;
case 0x24cb:
return 1;
case 0x24e5:
return 1;
case 0x2c7d:
return 1;
case 0xff36:
return 1;
case 0xff56:
return 1;
case 0x1d415:
return 1;
case 0x1d42f:
return 1;
}
}
return 0;
case 0x77:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x57:
return 1;
case 0x174:
return 1;
case 0x2b7:
return 1;
case 0x1d42:
return 1;
case 0x1df1:
return 1;
case 0x1e80:
return 1;
case 0x1e82:
return 1;
case 0x1e84:
return 1;
case 0x1e86:
return 1;
case 0x1e88:
return 1;
case 0x24cc:
return 1;
case 0x24e6:
return 1;
case 0xff37:
return 1;
case 0xff57:
return 1;
case 0x1d416:
return 1;
case 0x1d430:
return 1;
}
}
return 0;
case 0x78:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x58:
return 1;
case 0x2e3:
return 1;
case 0x36f:
return 1;
case 0x1e8a:
return 1;
case 0x1e8c:
return 1;
case 0x2093:
return 1;
case 0x2169:
return 1;
case 0x24cd:
return 1;
case 0x24e7:
return 1;
case 0xff38:
return 1;
case 0xff58:
return 1;
case 0x1d417:
return 1;
case 0x1d431:
return 1;
case 0x1f147:
return 1;
}
}
return 0;
case 0x79:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x59:
return 1;
case 0xdd:
return 1;
case 0x176:
return 1;
case 0x178:
return 1;
case 0x232:
return 1;
case 0x2b8:
return 1;
case 0x1e8e:
return 1;
case 0x1ef2:
return 1;
case 0x1ef4:
return 1;
case 0x1ef6:
return 1;
case 0x1ef8:
return 1;
case 0x24ce:
return 1;
case 0x24e8:
return 1;
case 0xff39:
return 1;
case 0xff59:
return 1;
case 0x1d418:
return 1;
case 0x1d432:
return 1;
case 0x1f148:
return 1;
}
}
return 0;
case 0x7a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x5a:
return 1;
case 0x179:
return 1;
case 0x17b:
return 1;
case 0x17d:
return 1;
case 0x1dbb:
return 1;
case 0x1de6:
return 1;
case 0x1e90:
return 1;
case 0x1e92:
return 1;
case 0x1e94:
return 1;
case 0x2124:
return 1;
case 0x24cf:
return 1;
case 0x24e9:
return 1;
case 0xff3a:
return 1;
case 0xff5a:
return 1;
case 0x1d433:
return 1;
case 0x1f149:
return 1;
}
}
return 0;
case 0xfe:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xde:
return 1;
}
}
return 0;
case 0x131:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d6a4:
return 1;
}
}
return 0;
case 0x138:
return 0;
case 0x14b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x14a:
return 1;
case 0x1d51:
return 1;
}
}
return 0;
case 0x167:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x166:
return 1;
}
}
return 0;
case 0x180:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x243:
return 1;
}
}
return 0;
case 0x183:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x182:
return 1;
}
}
return 0;
case 0x185:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x184:
return 1;
}
}
return 0;
case 0x188:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x187:
return 1;
}
}
return 0;
case 0x18c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x18b:
return 1;
}
}
return 0;
case 0x192:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x191:
return 1;
}
}
return 0;
case 0x195:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1f6:
return 1;
}
}
return 0;
case 0x199:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x198:
return 1;
}
}
return 0;
case 0x19a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x23d:
return 1;
}
}
return 0;
case 0x19b:
return 0;
case 0x19e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x220:
return 1;
}
}
return 0;
case 0x1a3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a2:
return 1;
}
}
return 0;
case 0x1a5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a4:
return 1;
}
}
return 0;
case 0x1a8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a7:
return 1;
}
}
return 0;
case 0x1aa:
return 0;
case 0x1ab:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1db5:
return 1;
}
}
return 0;
case 0x1ad:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ac:
return 1;
}
}
return 0;
case 0x1b4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1b3:
return 1;
}
}
return 0;
case 0x1b6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1b5:
return 1;
}
}
return 0;
case 0x1b9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1b8:
return 1;
}
}
return 0;
case 0x1ba:
return 0;
case 0x1bb:
return 0;
case 0x1bd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bc:
return 1;
}
}
return 0;
case 0x1bf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1f7:
return 1;
}
}
return 0;
case 0x1c0:
return 0;
case 0x1c1:
return 0;
case 0x1c2:
return 0;
case 0x1c3:
return 0;
case 0x1dd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x18e:
return 1;
case 0x1d32:
return 1;
}
}
return 0;
case 0x1e5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e4:
return 1;
}
}
return 0;
case 0x21d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x21c:
return 1;
}
}
return 0;
case 0x221:
return 0;
case 0x223:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x222:
return 1;
case 0x1d3d:
return 1;
}
}
return 0;
case 0x225:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x224:
return 1;
}
}
return 0;
case 0x234:
return 0;
case 0x235:
return 0;
case 0x236:
return 0;
case 0x237:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d6a5:
return 1;
}
}
return 0;
case 0x23c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x23b:
return 1;
}
}
return 0;
case 0x23f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c7e:
return 1;
}
}
return 0;
case 0x240:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c7f:
return 1;
}
}
return 0;
case 0x242:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x241:
return 1;
}
}
return 0;
case 0x247:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x246:
return 1;
}
}
return 0;
case 0x249:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x248:
return 1;
}
}
return 0;
case 0x24b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x24a:
return 1;
}
}
return 0;
case 0x24d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x24c:
return 1;
}
}
return 0;
case 0x24f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x24e:
return 1;
}
}
return 0;
case 0x250:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d44:
return 1;
case 0x2c6f:
return 1;
}
}
return 0;
case 0x251:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d45:
return 1;
case 0x1de7:
return 1;
case 0x2c6d:
return 1;
}
}
return 0;
case 0x252:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d9b:
return 1;
case 0x2c70:
return 1;
}
}
return 0;
case 0x253:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x181:
return 1;
}
}
return 0;
case 0x254:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x186:
return 1;
case 0x1d53:
return 1;
}
}
return 0;
case 0x255:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d9d:
return 1;
}
}
return 0;
case 0x256:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x189:
return 1;
}
}
return 0;
case 0x257:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x18a:
return 1;
}
}
return 0;
case 0x258:
return 0;
case 0x259:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x18f:
return 1;
case 0x1d4a:
return 1;
case 0x1dea:
return 1;
case 0x2094:
return 1;
}
}
return 0;
case 0x25a:
return 0;
case 0x25b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x190:
return 1;
case 0x1d4b:
return 1;
case 0x2107:
return 1;
}
}
return 0;
case 0x25c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d9f:
return 1;
case 0xa7ab:
return 1;
}
}
return 0;
case 0x25d:
return 0;
case 0x25e:
return 0;
case 0x25f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da1:
return 1;
}
}
return 0;
case 0x260:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x193:
return 1;
}
}
return 0;
case 0x261:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da2:
return 1;
case 0xa7ac:
return 1;
}
}
return 0;
case 0x262:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ddb:
return 1;
}
}
return 0;
case 0x263:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x194:
return 1;
case 0x2e0:
return 1;
}
}
return 0;
case 0x264:
return 0;
case 0x265:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da3:
return 1;
case 0xa78d:
return 1;
}
}
return 0;
case 0x266:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2b1:
return 1;
case 0xa7aa:
return 1;
}
}
return 0;
case 0x267:
return 0;
case 0x268:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x197:
return 1;
case 0x1da4:
return 1;
}
}
return 0;
case 0x269:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x196:
return 1;
case 0x1da5:
return 1;
}
}
return 0;
case 0x26a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da6:
return 1;
case 0xa7ae:
return 1;
}
}
return 0;
case 0x26b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c62:
return 1;
case 0xab5e:
return 1;
}
}
return 0;
case 0x26c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa7ad:
return 1;
}
}
return 0;
case 0x26d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da9:
return 1;
}
}
return 0;
case 0x26e:
return 0;
case 0x26f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x19c:
return 1;
case 0x1d5a:
return 1;
}
}
return 0;
case 0x270:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dad:
return 1;
}
}
return 0;
case 0x271:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dac:
return 1;
case 0x2c6e:
return 1;
}
}
return 0;
case 0x272:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x19d:
return 1;
case 0x1dae:
return 1;
}
}
return 0;
case 0x273:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1daf:
return 1;
}
}
return 0;
case 0x274:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1db0:
return 1;
case 0x1de1:
return 1;
}
}
return 0;
case 0x275:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x19f:
return 1;
case 0x1db1:
return 1;
}
}
return 0;
case 0x276:
return 0;
case 0x277:
return 0;
case 0x278:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1db2:
return 1;
}
}
return 0;
case 0x279:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2b4:
return 1;
}
}
return 0;
case 0x27a:
return 0;
case 0x27b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2b5:
return 1;
}
}
return 0;
case 0x27c:
return 0;
case 0x27d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c64:
return 1;
}
}
return 0;
case 0x27e:
return 0;
case 0x27f:
return 0;
case 0x280:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a6:
return 1;
case 0x1de2:
return 1;
}
}
return 0;
case 0x281:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2b6:
return 1;
}
}
return 0;
case 0x282:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1db3:
return 1;
}
}
return 0;
case 0x283:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a9:
return 1;
case 0x1db4:
return 1;
case 0x1def:
return 1;
}
}
return 0;
case 0x284:
return 0;
case 0x285:
return 0;
case 0x286:
return 0;
case 0x287:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa7b1:
return 1;
}
}
return 0;
case 0x288:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ae:
return 1;
}
}
return 0;
case 0x289:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x244:
return 1;
case 0x1db6:
return 1;
}
}
return 0;
case 0x28a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1b1:
return 1;
case 0x1db7:
return 1;
}
}
return 0;
case 0x28b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1b2:
return 1;
case 0x1db9:
return 1;
}
}
return 0;
case 0x28c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x245:
return 1;
case 0x1dba:
return 1;
}
}
return 0;
case 0x28d:
return 0;
case 0x28e:
return 0;
case 0x28f:
return 0;
case 0x290:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dbc:
return 1;
}
}
return 0;
case 0x291:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dbd:
return 1;
}
}
return 0;
case 0x292:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1b7:
return 1;
case 0x1ee:
return 1;
case 0x1dbe:
return 1;
}
}
return 0;
case 0x293:
return 0;
case 0x294:
return 0;
case 0x295:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2e4:
return 1;
}
}
return 0;
case 0x296:
return 0;
case 0x297:
return 0;
case 0x298:
return 0;
case 0x299:
return 0;
case 0x29a:
return 0;
case 0x29b:
return 0;
case 0x29c:
return 0;
case 0x29d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da8:
return 1;
case 0xa7b2:
return 1;
}
}
return 0;
case 0x29e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa7b0:
return 1;
}
}
return 0;
case 0x29f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dab:
return 1;
case 0x1dde:
return 1;
}
}
return 0;
case 0x2a0:
return 0;
case 0x2a1:
return 0;
case 0x2a2:
return 0;
case 0x2ac:
return 0;
case 0x2ad:
return 0;
case 0x2ae:
return 0;
case 0x2af:
return 0;
case 0x2bb:
return 0;
case 0x2bc:
return 0;
case 0x2bd:
return 0;
case 0x2be:
return 0;
case 0x2bf:
return 0;
case 0x2c0:
return 0;
case 0x2c1:
return 0;
case 0x2ee:
return 0;
case 0x371:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x370:
return 1;
}
}
return 0;
case 0x373:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x372:
return 1;
}
}
return 0;
case 0x377:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x376:
return 1;
}
}
return 0;
case 0x37b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3fd:
return 1;
}
}
return 0;
case 0x37c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3fe:
return 1;
}
}
return 0;
case 0x37d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3ff:
return 1;
}
}
return 0;
case 0x3b1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x386:
return 1;
case 0x391:
return 1;
case 0x1f08:
return 1;
case 0x1f09:
return 1;
case 0x1f0a:
return 1;
case 0x1f0b:
return 1;
case 0x1f0c:
return 1;
case 0x1f0d:
return 1;
case 0x1f0e:
return 1;
case 0x1f0f:
return 1;
case 0x1f88:
return 1;
case 0x1f89:
return 1;
case 0x1f8a:
return 1;
case 0x1f8b:
return 1;
case 0x1f8c:
return 1;
case 0x1f8d:
return 1;
case 0x1f8e:
return 1;
case 0x1f8f:
return 1;
case 0x1fb8:
return 1;
case 0x1fb9:
return 1;
case 0x1fba:
return 1;
case 0x1fbc:
return 1;
case 0x1d6a8:
return 1;
case 0x1d6c2:
return 1;
}
}
return 0;
case 0x3b2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x392:
return 1;
case 0x3d0:
return 1;
case 0x1d5d:
return 1;
case 0x1d66:
return 1;
case 0x1d6a9:
return 1;
case 0x1d6c3:
return 1;
}
}
return 0;
case 0x3b3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x393:
return 1;
case 0x1d5e:
return 1;
case 0x1d67:
return 1;
case 0x213d:
return 1;
case 0x213e:
return 1;
}
}
return 0;
case 0x3b4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x394:
return 1;
case 0x1d5f:
return 1;
case 0x1d6ab:
return 1;
case 0x1d6c5:
return 1;
}
}
return 0;
case 0x3b5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x388:
return 1;
case 0x395:
return 1;
case 0x3f5:
return 1;
case 0x1f18:
return 1;
case 0x1f19:
return 1;
case 0x1f1a:
return 1;
case 0x1f1b:
return 1;
case 0x1f1c:
return 1;
case 0x1f1d:
return 1;
case 0x1fc8:
return 1;
case 0x1d6ac:
return 1;
case 0x1d6c6:
return 1;
}
}
return 0;
case 0x3b6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x396:
return 1;
case 0x1d6ad:
return 1;
case 0x1d6c7:
return 1;
}
}
return 0;
case 0x3b7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x389:
return 1;
case 0x397:
return 1;
case 0x1f28:
return 1;
case 0x1f29:
return 1;
case 0x1f2a:
return 1;
case 0x1f2b:
return 1;
case 0x1f2c:
return 1;
case 0x1f2d:
return 1;
case 0x1f2e:
return 1;
case 0x1f2f:
return 1;
case 0x1f98:
return 1;
case 0x1f99:
return 1;
case 0x1f9a:
return 1;
case 0x1f9b:
return 1;
case 0x1f9c:
return 1;
case 0x1f9d:
return 1;
case 0x1f9e:
return 1;
case 0x1f9f:
return 1;
case 0x1fca:
return 1;
case 0x1fcc:
return 1;
case 0x1d6ae:
return 1;
case 0x1d6c8:
return 1;
}
}
return 0;
case 0x3b8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x398:
return 1;
case 0x3d1:
return 1;
case 0x3f4:
return 1;
case 0x1dbf:
return 1;
case 0x1d6af:
return 1;
case 0x1d6c9:
return 1;
}
}
return 0;
case 0x3b9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x37a:
return 1;
case 0x38a:
return 1;
case 0x399:
return 1;
case 0x3aa:
return 1;
case 0x1f38:
return 1;
case 0x1f39:
return 1;
case 0x1f3a:
return 1;
case 0x1f3b:
return 1;
case 0x1f3c:
return 1;
case 0x1f3d:
return 1;
case 0x1f3e:
return 1;
case 0x1f3f:
return 1;
case 0x1fd8:
return 1;
case 0x1fd9:
return 1;
case 0x1fda:
return 1;
case 0x1d6b0:
return 1;
case 0x1d6ca:
return 1;
}
}
return 0;
case 0x3ba:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x39a:
return 1;
case 0x3f0:
return 1;
case 0x1d6b1:
return 1;
case 0x1d6cb:
return 1;
}
}
return 0;
case 0x3bb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x39b:
return 1;
case 0x1d6b2:
return 1;
case 0x1d6cc:
return 1;
}
}
return 0;
case 0x3bc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xb5:
return 1;
case 0x39c:
return 1;
case 0x1d6b3:
return 1;
case 0x1d6cd:
return 1;
}
}
return 0;
case 0x3bd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x39d:
return 1;
case 0x1d6b4:
return 1;
case 0x1d6ce:
return 1;
}
}
return 0;
case 0x3be:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x39e:
return 1;
case 0x1d6b5:
return 1;
case 0x1d6cf:
return 1;
}
}
return 0;
case 0x3bf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x38c:
return 1;
case 0x39f:
return 1;
case 0x1f48:
return 1;
case 0x1f49:
return 1;
case 0x1f4a:
return 1;
case 0x1f4b:
return 1;
case 0x1f4c:
return 1;
case 0x1f4d:
return 1;
case 0x1ff8:
return 1;
case 0x1d6b6:
return 1;
case 0x1d6d0:
return 1;
}
}
return 0;
case 0x3c0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a0:
return 1;
case 0x3d6:
return 1;
case 0x213c:
return 1;
case 0x213f:
return 1;
}
}
return 0;
case 0x3c1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a1:
return 1;
case 0x3f1:
return 1;
case 0x1d68:
return 1;
case 0x1fec:
return 1;
case 0x1d6b8:
return 1;
case 0x1d6d2:
return 1;
}
}
return 0;
case 0x3c3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a3:
return 1;
case 0x3c2:
return 1;
case 0x3f2:
return 1;
case 0x3f9:
return 1;
case 0x1d6ba:
return 1;
case 0x1d6d3:
return 1;
}
}
return 0;
case 0x3c4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a4:
return 1;
case 0x1d6bb:
return 1;
case 0x1d6d5:
return 1;
}
}
return 0;
case 0x3c5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x38e:
return 1;
case 0x3a5:
return 1;
case 0x3ab:
return 1;
case 0x3d2:
return 1;
case 0x3d3:
return 1;
case 0x3d4:
return 1;
case 0x1f59:
return 1;
case 0x1f5b:
return 1;
case 0x1f5d:
return 1;
case 0x1f5f:
return 1;
case 0x1fe8:
return 1;
case 0x1fe9:
return 1;
case 0x1fea:
return 1;
case 0x1d6bc:
return 1;
case 0x1d6d6:
return 1;
}
}
return 0;
case 0x3c6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a6:
return 1;
case 0x3d5:
return 1;
case 0x1d60:
return 1;
case 0x1d69:
return 1;
case 0x1d6bd:
return 1;
case 0x1d6d7:
return 1;
}
}
return 0;
case 0x3c7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a7:
return 1;
case 0x1d61:
return 1;
case 0x1d6a:
return 1;
case 0x1d6be:
return 1;
case 0x1d6d8:
return 1;
}
}
return 0;
case 0x3c8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3a8:
return 1;
case 0x1d6bf:
return 1;
case 0x1d6d9:
return 1;
}
}
return 0;
case 0x3c9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x38f:
return 1;
case 0x3a9:
return 1;
case 0x1f68:
return 1;
case 0x1f69:
return 1;
case 0x1f6a:
return 1;
case 0x1f6b:
return 1;
case 0x1f6c:
return 1;
case 0x1f6d:
return 1;
case 0x1f6e:
return 1;
case 0x1f6f:
return 1;
case 0x1fa8:
return 1;
case 0x1fa9:
return 1;
case 0x1faa:
return 1;
case 0x1fab:
return 1;
case 0x1fac:
return 1;
case 0x1fad:
return 1;
case 0x1fae:
return 1;
case 0x1faf:
return 1;
case 0x1ffa:
return 1;
case 0x1ffc:
return 1;
case 0x1d6c0:
return 1;
case 0x1d6da:
return 1;
}
}
return 0;
case 0x3d9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3d8:
return 1;
}
}
return 0;
case 0x3db:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3da:
return 1;
}
}
return 0;
case 0x3dd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3dc:
return 1;
case 0x1d7ca:
return 1;
case 0x1d7cb:
return 1;
}
}
return 0;
case 0x3df:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3de:
return 1;
}
}
return 0;
case 0x3e1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3e0:
return 1;
}
}
return 0;
case 0x3e3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3e2:
return 1;
}
}
return 0;
case 0x3e5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3e4:
return 1;
}
}
return 0;
case 0x3e7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3e6:
return 1;
}
}
return 0;
case 0x3e9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3e8:
return 1;
}
}
return 0;
case 0x3eb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3ea:
return 1;
}
}
return 0;
case 0x3ed:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3ec:
return 1;
}
}
return 0;
case 0x3ef:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3ee:
return 1;
}
}
return 0;
case 0x3f3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x37f:
return 1;
}
}
return 0;
case 0x3f8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3f7:
return 1;
}
}
return 0;
case 0x3fb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3fa:
return 1;
}
}
return 0;
case 0x3fc:
return 0;
case 0x430:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x410:
return 1;
case 0x4d0:
return 1;
case 0x4d2:
return 1;
case 0x2df6:
return 1;
}
}
return 0;
case 0x431:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x411:
return 1;
case 0x2de0:
return 1;
}
}
return 0;
case 0x432:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x412:
return 1;
case 0x1c80:
return 1;
}
}
return 0;
case 0x433:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x403:
return 1;
case 0x413:
return 1;
case 0x490:
return 1;
case 0x2de2:
return 1;
}
}
return 0;
case 0x434:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x414:
return 1;
case 0x1c81:
return 1;
}
}
return 0;
case 0x435:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x400:
return 1;
case 0x401:
return 1;
case 0x415:
return 1;
case 0x4d6:
return 1;
case 0x2df7:
return 1;
}
}
return 0;
case 0x436:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x416:
return 1;
case 0x4c1:
return 1;
case 0x4dc:
return 1;
case 0x2de4:
return 1;
}
}
return 0;
case 0x437:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x417:
return 1;
case 0x4de:
return 1;
case 0x2de5:
return 1;
}
}
return 0;
case 0x438:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x40d:
return 1;
case 0x418:
return 1;
case 0x4e2:
return 1;
case 0x4e4:
return 1;
case 0xa675:
return 1;
}
}
return 0;
case 0x43a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x40c:
return 1;
case 0x41a:
return 1;
case 0x2de6:
return 1;
}
}
return 0;
case 0x43b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x41b:
return 1;
case 0x2de7:
return 1;
}
}
return 0;
case 0x43c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x41c:
return 1;
case 0x2de8:
return 1;
}
}
return 0;
case 0x43d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x41d:
return 1;
case 0x1d78:
return 1;
case 0x2de9:
return 1;
}
}
return 0;
case 0x43e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x41e:
return 1;
case 0x4e6:
return 1;
case 0x1c82:
return 1;
case 0xa668:
return 1;
}
}
return 0;
case 0x43f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x41f:
return 1;
case 0x2deb:
return 1;
}
}
return 0;
case 0x440:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x420:
return 1;
case 0x2dec:
return 1;
}
}
return 0;
case 0x441:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x421:
return 1;
case 0x1c83:
return 1;
}
}
return 0;
case 0x442:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x422:
return 1;
case 0x1c84:
return 1;
}
}
return 0;
case 0x443:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x40e:
return 1;
case 0x423:
return 1;
case 0x4ee:
return 1;
case 0x4f0:
return 1;
case 0x4f2:
return 1;
case 0xa677:
return 1;
}
}
return 0;
case 0x444:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x424:
return 1;
case 0xa69e:
return 1;
}
}
return 0;
case 0x445:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x425:
return 1;
case 0x2def:
return 1;
}
}
return 0;
case 0x446:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x426:
return 1;
case 0x2df0:
return 1;
}
}
return 0;
case 0x447:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x427:
return 1;
case 0x4f4:
return 1;
case 0x2df1:
return 1;
}
}
return 0;
case 0x448:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x428:
return 1;
case 0x2df2:
return 1;
}
}
return 0;
case 0x449:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x429:
return 1;
case 0x2df3:
return 1;
}
}
return 0;
case 0x44a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42a:
return 1;
case 0x1c86:
return 1;
case 0xa69c:
return 1;
}
}
return 0;
case 0x44b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42b:
return 1;
case 0x4f8:
return 1;
case 0xa679:
return 1;
}
}
return 0;
case 0x44c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42c:
return 1;
case 0xa67a:
return 1;
case 0xa69d:
return 1;
}
}
return 0;
case 0x44d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42d:
return 1;
case 0x4ec:
return 1;
}
}
return 0;
case 0x44e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42e:
return 1;
case 0x2dfb:
return 1;
}
}
return 0;
case 0x44f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x42f:
return 1;
}
}
return 0;
case 0x452:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x402:
return 1;
}
}
return 0;
case 0x454:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x404:
return 1;
case 0xa674:
return 1;
}
}
return 0;
case 0x455:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x405:
return 1;
}
}
return 0;
case 0x456:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x406:
return 1;
case 0x407:
return 1;
case 0xa676:
return 1;
}
}
return 0;
case 0x458:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x408:
return 1;
}
}
return 0;
case 0x459:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x409:
return 1;
}
}
return 0;
case 0x45a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x40a:
return 1;
}
}
return 0;
case 0x45b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x40b:
return 1;
}
}
return 0;
case 0x45f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x40f:
return 1;
}
}
return 0;
case 0x461:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x460:
return 1;
case 0xa67b:
return 1;
}
}
return 0;
case 0x463:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x462:
return 1;
case 0x1c87:
return 1;
}
}
return 0;
case 0x465:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x464:
return 1;
case 0xa69f:
return 1;
}
}
return 0;
case 0x467:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x466:
return 1;
case 0x2dfd:
return 1;
}
}
return 0;
case 0x469:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x468:
return 1;
}
}
return 0;
case 0x46b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x46a:
return 1;
case 0x2dfe:
return 1;
}
}
return 0;
case 0x46d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x46c:
return 1;
case 0x2dff:
return 1;
}
}
return 0;
case 0x46f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x46e:
return 1;
}
}
return 0;
case 0x471:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x470:
return 1;
}
}
return 0;
case 0x473:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x472:
return 1;
case 0x2df4:
return 1;
}
}
return 0;
case 0x475:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x474:
return 1;
case 0x476:
return 1;
}
}
return 0;
case 0x479:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x478:
return 1;
}
}
return 0;
case 0x47b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x47a:
return 1;
}
}
return 0;
case 0x47d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x47c:
return 1;
}
}
return 0;
case 0x47f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x47e:
return 1;
}
}
return 0;
case 0x481:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x480:
return 1;
}
}
return 0;
case 0x48b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x48a:
return 1;
}
}
return 0;
case 0x48d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x48c:
return 1;
}
}
return 0;
case 0x48f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x48e:
return 1;
}
}
return 0;
case 0x493:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x492:
return 1;
}
}
return 0;
case 0x495:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x494:
return 1;
}
}
return 0;
case 0x497:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x496:
return 1;
}
}
return 0;
case 0x499:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x498:
return 1;
}
}
return 0;
case 0x49b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x49a:
return 1;
}
}
return 0;
case 0x49d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x49c:
return 1;
}
}
return 0;
case 0x49f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x49e:
return 1;
}
}
return 0;
case 0x4a1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4a0:
return 1;
}
}
return 0;
case 0x4a3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4a2:
return 1;
}
}
return 0;
case 0x4a5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4a4:
return 1;
}
}
return 0;
case 0x4a7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4a6:
return 1;
}
}
return 0;
case 0x4a9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4a8:
return 1;
}
}
return 0;
case 0x4ab:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4aa:
return 1;
}
}
return 0;
case 0x4ad:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4ac:
return 1;
}
}
return 0;
case 0x4af:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4ae:
return 1;
}
}
return 0;
case 0x4b1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4b0:
return 1;
}
}
return 0;
case 0x4b3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4b2:
return 1;
}
}
return 0;
case 0x4b5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4b4:
return 1;
}
}
return 0;
case 0x4b7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4b6:
return 1;
}
}
return 0;
case 0x4b9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4b8:
return 1;
}
}
return 0;
case 0x4bb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4ba:
return 1;
}
}
return 0;
case 0x4bd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4bc:
return 1;
}
}
return 0;
case 0x4bf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4be:
return 1;
}
}
return 0;
case 0x4c4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c3:
return 1;
}
}
return 0;
case 0x4c6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c5:
return 1;
}
}
return 0;
case 0x4c8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c7:
return 1;
}
}
return 0;
case 0x4ca:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c9:
return 1;
}
}
return 0;
case 0x4cc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4cb:
return 1;
}
}
return 0;
case 0x4ce:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4cd:
return 1;
}
}
return 0;
case 0x4cf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c0:
return 1;
}
}
return 0;
case 0x4d5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4d4:
return 1;
}
}
return 0;
case 0x4d9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4d8:
return 1;
case 0x4da:
return 1;
}
}
return 0;
case 0x4e1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4e0:
return 1;
}
}
return 0;
case 0x4e9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4e8:
return 1;
case 0x4ea:
return 1;
}
}
return 0;
case 0x4f7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4f6:
return 1;
}
}
return 0;
case 0x4fb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4fa:
return 1;
}
}
return 0;
case 0x4fd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4fc:
return 1;
}
}
return 0;
case 0x4ff:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4fe:
return 1;
}
}
return 0;
case 0x501:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x500:
return 1;
}
}
return 0;
case 0x503:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x502:
return 1;
}
}
return 0;
case 0x505:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x504:
return 1;
}
}
return 0;
case 0x507:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x506:
return 1;
}
}
return 0;
case 0x509:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x508:
return 1;
}
}
return 0;
case 0x50b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x50a:
return 1;
}
}
return 0;
case 0x50d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x50c:
return 1;
}
}
return 0;
case 0x50f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x50e:
return 1;
}
}
return 0;
case 0x511:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x510:
return 1;
}
}
return 0;
case 0x513:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x512:
return 1;
}
}
return 0;
case 0x515:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x514:
return 1;
}
}
return 0;
case 0x517:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x516:
return 1;
}
}
return 0;
case 0x519:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x518:
return 1;
}
}
return 0;
case 0x51b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x51a:
return 1;
}
}
return 0;
case 0x51d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x51c:
return 1;
}
}
return 0;
case 0x51f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x51e:
return 1;
}
}
return 0;
case 0x521:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x520:
return 1;
}
}
return 0;
case 0x523:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x522:
return 1;
}
}
return 0;
case 0x525:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x524:
return 1;
}
}
return 0;
case 0x527:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x526:
return 1;
}
}
return 0;
case 0x529:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x528:
return 1;
}
}
return 0;
case 0x52b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x52a:
return 1;
}
}
return 0;
case 0x52d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x52c:
return 1;
}
}
return 0;
case 0x52f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x52e:
return 1;
}
}
return 0;
case 0x559:
return 0;
case 0x561:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x531:
return 1;
}
}
return 0;
case 0x562:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x532:
return 1;
}
}
return 0;
case 0x563:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x533:
return 1;
}
}
return 0;
case 0x564:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x534:
return 1;
}
}
return 0;
case 0x565:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x535:
return 1;
}
}
return 0;
case 0x566:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x536:
return 1;
}
}
return 0;
case 0x567:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x537:
return 1;
}
}
return 0;
case 0x568:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x538:
return 1;
}
}
return 0;
case 0x569:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x539:
return 1;
}
}
return 0;
case 0x56a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53a:
return 1;
}
}
return 0;
case 0x56b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53b:
return 1;
}
}
return 0;
case 0x56c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53c:
return 1;
}
}
return 0;
case 0x56d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53d:
return 1;
}
}
return 0;
case 0x56e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53e:
return 1;
}
}
return 0;
case 0x56f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x53f:
return 1;
}
}
return 0;
case 0x570:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x540:
return 1;
}
}
return 0;
case 0x571:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x541:
return 1;
}
}
return 0;
case 0x572:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x542:
return 1;
}
}
return 0;
case 0x573:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x543:
return 1;
}
}
return 0;
case 0x574:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x544:
return 1;
}
}
return 0;
case 0x575:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x545:
return 1;
}
}
return 0;
case 0x576:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x546:
return 1;
}
}
return 0;
case 0x577:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x547:
return 1;
}
}
return 0;
case 0x578:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x548:
return 1;
}
}
return 0;
case 0x579:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x549:
return 1;
}
}
return 0;
case 0x57a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54a:
return 1;
}
}
return 0;
case 0x57b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54b:
return 1;
}
}
return 0;
case 0x57c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54c:
return 1;
}
}
return 0;
case 0x57d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54d:
return 1;
}
}
return 0;
case 0x57e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54e:
return 1;
}
}
return 0;
case 0x57f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x54f:
return 1;
}
}
return 0;
case 0x580:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x550:
return 1;
}
}
return 0;
case 0x581:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x551:
return 1;
}
}
return 0;
case 0x582:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x552:
return 1;
}
}
return 0;
case 0x583:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x553:
return 1;
}
}
return 0;
case 0x584:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x554:
return 1;
}
}
return 0;
case 0x585:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x555:
return 1;
}
}
return 0;
case 0x586:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x556:
return 1;
}
}
return 0;
case 0x5d0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2135:
return 1;
case 0xfb21:
return 1;
}
}
return 0;
case 0x5d1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2136:
return 1;
}
}
return 0;
case 0x5d2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2137:
return 1;
}
}
return 0;
case 0x5d3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2138:
return 1;
case 0xfb22:
return 1;
}
}
return 0;
case 0x5d4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb23:
return 1;
}
}
return 0;
case 0x5d5:
return 0;
case 0x5d6:
return 0;
case 0x5d7:
return 0;
case 0x5d8:
return 0;
case 0x5d9:
return 0;
case 0x5db:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x5da:
return 1;
case 0xfb24:
return 1;
case 0xfb3a:
return 1;
}
}
return 0;
case 0x5dc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb25:
return 1;
}
}
return 0;
case 0x5de:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x5dd:
return 1;
case 0xfb26:
return 1;
}
}
return 0;
case 0x5e0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x5df:
return 1;
}
}
return 0;
case 0x5e1:
return 0;
case 0x5e2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb20:
return 1;
}
}
return 0;
case 0x5e4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x5e3:
return 1;
case 0xfb43:
return 1;
}
}
return 0;
case 0x5e6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x5e5:
return 1;
}
}
return 0;
case 0x5e7:
return 0;
case 0x5e8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb27:
return 1;
}
}
return 0;
case 0x5e9:
return 0;
case 0x5ea:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb28:
return 1;
}
}
return 0;
case 0x620:
return 0;
case 0x621:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x674:
return 1;
case 0xfe80:
return 1;
}
}
return 0;
case 0x622:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe81:
return 1;
case 0xfe82:
return 1;
}
}
return 0;
case 0x623:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe83:
return 1;
case 0xfe84:
return 1;
}
}
return 0;
case 0x624:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe85:
return 1;
case 0xfe86:
return 1;
}
}
return 0;
case 0x625:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe87:
return 1;
case 0xfe88:
return 1;
}
}
return 0;
case 0x626:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe89:
return 1;
case 0xfe8a:
return 1;
case 0xfe8b:
return 1;
case 0xfe8c:
return 1;
}
}
return 0;
case 0x627:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x8ad:
return 1;
case 0xfd3d:
return 1;
case 0xfe8d:
return 1;
case 0xfe8e:
return 1;
case 0x1ee00:
return 1;
}
}
return 0;
case 0x628:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe8f:
return 1;
case 0xfe90:
return 1;
case 0xfe91:
return 1;
case 0xfe92:
return 1;
case 0x1ee01:
return 1;
}
}
return 0;
case 0x629:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe93:
return 1;
case 0xfe94:
return 1;
}
}
return 0;
case 0x62a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe95:
return 1;
case 0xfe96:
return 1;
case 0xfe97:
return 1;
case 0xfe98:
return 1;
case 0x1ee15:
return 1;
}
}
return 0;
case 0x62b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe99:
return 1;
case 0xfe9a:
return 1;
case 0xfe9b:
return 1;
case 0xfe9c:
return 1;
case 0x1ee16:
return 1;
}
}
return 0;
case 0x62c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfe9d:
return 1;
case 0xfe9e:
return 1;
case 0xfe9f:
return 1;
case 0xfea0:
return 1;
case 0x1ee02:
return 1;
}
}
return 0;
case 0x62d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfea1:
return 1;
case 0xfea2:
return 1;
case 0xfea3:
return 1;
case 0xfea4:
return 1;
case 0x1ee07:
return 1;
}
}
return 0;
case 0x62e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfea5:
return 1;
case 0xfea6:
return 1;
case 0xfea7:
return 1;
case 0xfea8:
return 1;
case 0x1ee17:
return 1;
}
}
return 0;
case 0x62f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfea9:
return 1;
case 0xfeaa:
return 1;
case 0x1ee03:
return 1;
}
}
return 0;
case 0x630:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfeab:
return 1;
case 0xfeac:
return 1;
case 0x1ee18:
return 1;
}
}
return 0;
case 0x631:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfead:
return 1;
case 0xfeae:
return 1;
case 0x1ee13:
return 1;
}
}
return 0;
case 0x632:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfeaf:
return 1;
case 0xfeb0:
return 1;
case 0x1ee06:
return 1;
}
}
return 0;
case 0x633:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfeb1:
return 1;
case 0xfeb2:
return 1;
case 0xfeb3:
return 1;
case 0xfeb4:
return 1;
case 0x1ee0e:
return 1;
}
}
return 0;
case 0x634:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfeb5:
return 1;
case 0xfeb6:
return 1;
case 0xfeb7:
return 1;
case 0xfeb8:
return 1;
case 0x1ee14:
return 1;
}
}
return 0;
case 0x635:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfeb9:
return 1;
case 0xfeba:
return 1;
case 0xfebb:
return 1;
case 0xfebc:
return 1;
case 0x1ee11:
return 1;
}
}
return 0;
case 0x636:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfebd:
return 1;
case 0xfebe:
return 1;
case 0xfebf:
return 1;
case 0xfec0:
return 1;
case 0x1ee19:
return 1;
}
}
return 0;
case 0x637:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfec1:
return 1;
case 0xfec2:
return 1;
case 0xfec3:
return 1;
case 0xfec4:
return 1;
case 0x1ee08:
return 1;
}
}
return 0;
case 0x638:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfec5:
return 1;
case 0xfec6:
return 1;
case 0xfec7:
return 1;
case 0xfec8:
return 1;
case 0x1ee1a:
return 1;
}
}
return 0;
case 0x639:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfec9:
return 1;
case 0xfeca:
return 1;
case 0xfecb:
return 1;
case 0xfecc:
return 1;
case 0x1ee0f:
return 1;
}
}
return 0;
case 0x63a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfecd:
return 1;
case 0xfece:
return 1;
case 0xfecf:
return 1;
case 0xfed0:
return 1;
case 0x1ee1b:
return 1;
}
}
return 0;
case 0x63b:
return 0;
case 0x63c:
return 0;
case 0x63d:
return 0;
case 0x63e:
return 0;
case 0x63f:
return 0;
case 0x641:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfed1:
return 1;
case 0xfed2:
return 1;
case 0xfed3:
return 1;
case 0xfed4:
return 1;
case 0x1ee10:
return 1;
}
}
return 0;
case 0x642:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfed5:
return 1;
case 0xfed6:
return 1;
case 0xfed7:
return 1;
case 0xfed8:
return 1;
case 0x1ee12:
return 1;
}
}
return 0;
case 0x643:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfed9:
return 1;
case 0xfeda:
return 1;
case 0xfedb:
return 1;
case 0xfedc:
return 1;
case 0x1ee0a:
return 1;
}
}
return 0;
case 0x644:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfedd:
return 1;
case 0xfede:
return 1;
case 0xfedf:
return 1;
case 0xfee0:
return 1;
case 0x1ee0b:
return 1;
}
}
return 0;
case 0x645:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfee1:
return 1;
case 0xfee2:
return 1;
case 0xfee3:
return 1;
case 0xfee4:
return 1;
case 0x1ee0c:
return 1;
}
}
return 0;
case 0x646:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfee5:
return 1;
case 0xfee6:
return 1;
case 0xfee7:
return 1;
case 0xfee8:
return 1;
case 0x1ee0d:
return 1;
}
}
return 0;
case 0x647:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfee9:
return 1;
case 0xfeea:
return 1;
case 0xfeeb:
return 1;
case 0xfeec:
return 1;
case 0x1ee24:
return 1;
}
}
return 0;
case 0x648:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x6e5:
return 1;
case 0xfeed:
return 1;
case 0xfeee:
return 1;
case 0x1ee05:
return 1;
}
}
return 0;
case 0x649:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbe8:
return 1;
case 0xfbe9:
return 1;
case 0xfc5d:
return 1;
case 0xfeef:
return 1;
case 0xfef0:
return 1;
}
}
return 0;
case 0x64a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x6e6:
return 1;
case 0xfef1:
return 1;
case 0xfef2:
return 1;
case 0xfef3:
return 1;
case 0xfef4:
return 1;
case 0x1ee09:
return 1;
}
}
return 0;
case 0x66e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ee1c:
return 1;
}
}
return 0;
case 0x66f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ee1f:
return 1;
}
}
return 0;
case 0x671:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb50:
return 1;
case 0xfb51:
return 1;
}
}
return 0;
case 0x672:
return 0;
case 0x673:
return 0;
case 0x679:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb66:
return 1;
case 0xfb67:
return 1;
case 0xfb68:
return 1;
case 0xfb69:
return 1;
}
}
return 0;
case 0x67a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb5e:
return 1;
case 0xfb5f:
return 1;
case 0xfb60:
return 1;
case 0xfb61:
return 1;
}
}
return 0;
case 0x67b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb52:
return 1;
case 0xfb53:
return 1;
case 0xfb54:
return 1;
case 0xfb55:
return 1;
}
}
return 0;
case 0x67c:
return 0;
case 0x67d:
return 0;
case 0x67e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb56:
return 1;
case 0xfb57:
return 1;
case 0xfb58:
return 1;
case 0xfb59:
return 1;
}
}
return 0;
case 0x67f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb62:
return 1;
case 0xfb63:
return 1;
case 0xfb64:
return 1;
case 0xfb65:
return 1;
}
}
return 0;
case 0x680:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb5a:
return 1;
case 0xfb5b:
return 1;
case 0xfb5c:
return 1;
case 0xfb5d:
return 1;
}
}
return 0;
case 0x681:
return 0;
case 0x682:
return 0;
case 0x683:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb76:
return 1;
case 0xfb77:
return 1;
case 0xfb78:
return 1;
case 0xfb79:
return 1;
}
}
return 0;
case 0x684:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb72:
return 1;
case 0xfb73:
return 1;
case 0xfb74:
return 1;
case 0xfb75:
return 1;
}
}
return 0;
case 0x685:
return 0;
case 0x686:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb7a:
return 1;
case 0xfb7b:
return 1;
case 0xfb7c:
return 1;
case 0xfb7d:
return 1;
}
}
return 0;
case 0x687:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb7e:
return 1;
case 0xfb7f:
return 1;
case 0xfb80:
return 1;
case 0xfb81:
return 1;
}
}
return 0;
case 0x688:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb88:
return 1;
case 0xfb89:
return 1;
}
}
return 0;
case 0x689:
return 0;
case 0x68a:
return 0;
case 0x68b:
return 0;
case 0x68c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb84:
return 1;
case 0xfb85:
return 1;
}
}
return 0;
case 0x68d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb82:
return 1;
case 0xfb83:
return 1;
}
}
return 0;
case 0x68e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb86:
return 1;
case 0xfb87:
return 1;
}
}
return 0;
case 0x68f:
return 0;
case 0x690:
return 0;
case 0x691:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb8c:
return 1;
case 0xfb8d:
return 1;
}
}
return 0;
case 0x692:
return 0;
case 0x693:
return 0;
case 0x694:
return 0;
case 0x695:
return 0;
case 0x696:
return 0;
case 0x697:
return 0;
case 0x698:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb8a:
return 1;
case 0xfb8b:
return 1;
}
}
return 0;
case 0x699:
return 0;
case 0x69a:
return 0;
case 0x69b:
return 0;
case 0x69c:
return 0;
case 0x69d:
return 0;
case 0x69e:
return 0;
case 0x69f:
return 0;
case 0x6a0:
return 0;
case 0x6a1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ee1e:
return 1;
}
}
return 0;
case 0x6a2:
return 0;
case 0x6a3:
return 0;
case 0x6a4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb6a:
return 1;
case 0xfb6b:
return 1;
case 0xfb6c:
return 1;
case 0xfb6d:
return 1;
}
}
return 0;
case 0x6a5:
return 0;
case 0x6a6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb6e:
return 1;
case 0xfb6f:
return 1;
case 0xfb70:
return 1;
case 0xfb71:
return 1;
}
}
return 0;
case 0x6a7:
return 0;
case 0x6a8:
return 0;
case 0x6a9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb8e:
return 1;
case 0xfb8f:
return 1;
case 0xfb90:
return 1;
case 0xfb91:
return 1;
}
}
return 0;
case 0x6aa:
return 0;
case 0x6ab:
return 0;
case 0x6ac:
return 0;
case 0x6ad:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbd3:
return 1;
case 0xfbd4:
return 1;
case 0xfbd5:
return 1;
case 0xfbd6:
return 1;
}
}
return 0;
case 0x6ae:
return 0;
case 0x6af:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb92:
return 1;
case 0xfb93:
return 1;
case 0xfb94:
return 1;
case 0xfb95:
return 1;
}
}
return 0;
case 0x6b0:
return 0;
case 0x6b1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb9a:
return 1;
case 0xfb9b:
return 1;
case 0xfb9c:
return 1;
case 0xfb9d:
return 1;
}
}
return 0;
case 0x6b2:
return 0;
case 0x6b3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb96:
return 1;
case 0xfb97:
return 1;
case 0xfb98:
return 1;
case 0xfb99:
return 1;
}
}
return 0;
case 0x6b4:
return 0;
case 0x6b5:
return 0;
case 0x6b6:
return 0;
case 0x6b7:
return 0;
case 0x6b8:
return 0;
case 0x6b9:
return 0;
case 0x6ba:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb9e:
return 1;
case 0xfb9f:
return 1;
case 0x1ee1d:
return 1;
}
}
return 0;
case 0x6bb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfba0:
return 1;
case 0xfba1:
return 1;
case 0xfba2:
return 1;
case 0xfba3:
return 1;
}
}
return 0;
case 0x6bc:
return 0;
case 0x6bd:
return 0;
case 0x6be:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbaa:
return 1;
case 0xfbab:
return 1;
case 0xfbac:
return 1;
case 0xfbad:
return 1;
}
}
return 0;
case 0x6bf:
return 0;
case 0x6c1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfba6:
return 1;
case 0xfba7:
return 1;
case 0xfba8:
return 1;
case 0xfba9:
return 1;
}
}
return 0;
case 0x6c3:
return 0;
case 0x6c4:
return 0;
case 0x6c5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbe0:
return 1;
case 0xfbe1:
return 1;
}
}
return 0;
case 0x6c6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbd9:
return 1;
case 0xfbda:
return 1;
}
}
return 0;
case 0x6c7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbd7:
return 1;
case 0xfbd8:
return 1;
}
}
return 0;
case 0x6c8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbdb:
return 1;
case 0xfbdc:
return 1;
}
}
return 0;
case 0x6c9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbe2:
return 1;
case 0xfbe3:
return 1;
}
}
return 0;
case 0x6ca:
return 0;
case 0x6cb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbde:
return 1;
case 0xfbdf:
return 1;
}
}
return 0;
case 0x6cc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbfc:
return 1;
case 0xfbfd:
return 1;
case 0xfbfe:
return 1;
case 0xfbff:
return 1;
}
}
return 0;
case 0x6cd:
return 0;
case 0x6ce:
return 0;
case 0x6cf:
return 0;
case 0x6d0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbe4:
return 1;
case 0xfbe5:
return 1;
case 0xfbe6:
return 1;
case 0xfbe7:
return 1;
}
}
return 0;
case 0x6d1:
return 0;
case 0x6d2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfbae:
return 1;
case 0xfbaf:
return 1;
case 0xfbb0:
return 1;
case 0xfbb1:
return 1;
}
}
return 0;
case 0x6d5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfba4:
return 1;
case 0xfba5:
return 1;
}
}
return 0;
case 0x6ee:
return 0;
case 0x6ef:
return 0;
case 0x6fa:
return 0;
case 0x6fb:
return 0;
case 0x6fc:
return 0;
case 0x6ff:
return 0;
case 0x710:
return 0;
case 0x712:
return 0;
case 0x713:
return 0;
case 0x715:
return 0;
case 0x716:
return 0;
case 0x717:
return 0;
case 0x718:
return 0;
case 0x719:
return 0;
case 0x71a:
return 0;
case 0x71b:
return 0;
case 0x71d:
return 0;
case 0x71e:
return 0;
case 0x71f:
return 0;
case 0x720:
return 0;
case 0x721:
return 0;
case 0x722:
return 0;
case 0x723:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x724:
return 1;
}
}
return 0;
case 0x725:
return 0;
case 0x726:
return 0;
case 0x728:
return 0;
case 0x729:
return 0;
case 0x72a:
return 0;
case 0x72b:
return 0;
case 0x72c:
return 0;
case 0x74d:
return 0;
case 0x74e:
return 0;
case 0x74f:
return 0;
case 0x750:
return 0;
case 0x751:
return 0;
case 0x752:
return 0;
case 0x753:
return 0;
case 0x754:
return 0;
case 0x755:
return 0;
case 0x756:
return 0;
case 0x757:
return 0;
case 0x758:
return 0;
case 0x759:
return 0;
case 0x75a:
return 0;
case 0x75b:
return 0;
case 0x75c:
return 0;
case 0x75d:
return 0;
case 0x75e:
return 0;
case 0x75f:
return 0;
case 0x760:
return 0;
case 0x761:
return 0;
case 0x762:
return 0;
case 0x763:
return 0;
case 0x764:
return 0;
case 0x765:
return 0;
case 0x766:
return 0;
case 0x767:
return 0;
case 0x768:
return 0;
case 0x769:
return 0;
case 0x76a:
return 0;
case 0x76b:
return 0;
case 0x76c:
return 0;
case 0x76d:
return 0;
case 0x76e:
return 0;
case 0x76f:
return 0;
case 0x770:
return 0;
case 0x771:
return 0;
case 0x772:
return 0;
case 0x773:
return 0;
case 0x774:
return 0;
case 0x775:
return 0;
case 0x776:
return 0;
case 0x777:
return 0;
case 0x778:
return 0;
case 0x779:
return 0;
case 0x77a:
return 0;
case 0x77b:
return 0;
case 0x77c:
return 0;
case 0x77d:
return 0;
case 0x77e:
return 0;
case 0x77f:
return 0;
case 0x780:
return 0;
case 0x781:
return 0;
case 0x782:
return 0;
case 0x783:
return 0;
case 0x784:
return 0;
case 0x785:
return 0;
case 0x786:
return 0;
case 0x787:
return 0;
case 0x788:
return 0;
case 0x789:
return 0;
case 0x78a:
return 0;
case 0x78b:
return 0;
case 0x78c:
return 0;
case 0x78d:
return 0;
case 0x78e:
return 0;
case 0x78f:
return 0;
case 0x790:
return 0;
case 0x791:
return 0;
case 0x792:
return 0;
case 0x793:
return 0;
case 0x794:
return 0;
case 0x795:
return 0;
case 0x796:
return 0;
case 0x797:
return 0;
case 0x798:
return 0;
case 0x799:
return 0;
case 0x79a:
return 0;
case 0x79b:
return 0;
case 0x79c:
return 0;
case 0x79d:
return 0;
case 0x79e:
return 0;
case 0x79f:
return 0;
case 0x7a0:
return 0;
case 0x7a1:
return 0;
case 0x7a2:
return 0;
case 0x7a3:
return 0;
case 0x7a4:
return 0;
case 0x7a5:
return 0;
case 0x7a6:
return 0;
case 0x7a7:
return 0;
case 0x7a8:
return 0;
case 0x7a9:
return 0;
case 0x7aa:
return 0;
case 0x7ab:
return 0;
case 0x7ac:
return 0;
case 0x7ad:
return 0;
case 0x7ae:
return 0;
case 0x7af:
return 0;
case 0x7b0:
return 0;
case 0x7b1:
return 0;
case 0x7ca:
return 0;
case 0x7cb:
return 0;
case 0x7cc:
return 0;
case 0x7cd:
return 0;
case 0x7ce:
return 0;
case 0x7cf:
return 0;
case 0x7d0:
return 0;
case 0x7d1:
return 0;
case 0x7d2:
return 0;
case 0x7d3:
return 0;
case 0x7d4:
return 0;
case 0x7d5:
return 0;
case 0x7d6:
return 0;
case 0x7d7:
return 0;
case 0x7d8:
return 0;
case 0x7d9:
return 0;
case 0x7da:
return 0;
case 0x7db:
return 0;
case 0x7dc:
return 0;
case 0x7dd:
return 0;
case 0x7de:
return 0;
case 0x7df:
return 0;
case 0x7e0:
return 0;
case 0x7e1:
return 0;
case 0x7e2:
return 0;
case 0x7e3:
return 0;
case 0x7e4:
return 0;
case 0x7e5:
return 0;
case 0x7e6:
return 0;
case 0x7e7:
return 0;
case 0x7f4:
return 0;
case 0x7f5:
return 0;
case 0x800:
return 0;
case 0x801:
return 0;
case 0x802:
return 0;
case 0x803:
return 0;
case 0x804:
return 0;
case 0x805:
return 0;
case 0x806:
return 0;
case 0x807:
return 0;
case 0x808:
return 0;
case 0x809:
return 0;
case 0x80a:
return 0;
case 0x80b:
return 0;
case 0x80c:
return 0;
case 0x80d:
return 0;
case 0x80e:
return 0;
case 0x80f:
return 0;
case 0x810:
return 0;
case 0x811:
return 0;
case 0x812:
return 0;
case 0x813:
return 0;
case 0x814:
return 0;
case 0x815:
return 0;
case 0x816:
return 0;
case 0x817:
return 0;
case 0x81a:
return 0;
case 0x81b:
return 0;
case 0x840:
return 0;
case 0x841:
return 0;
case 0x842:
return 0;
case 0x843:
return 0;
case 0x844:
return 0;
case 0x845:
return 0;
case 0x846:
return 0;
case 0x847:
return 0;
case 0x848:
return 0;
case 0x849:
return 0;
case 0x84a:
return 0;
case 0x84b:
return 0;
case 0x84c:
return 0;
case 0x84d:
return 0;
case 0x84e:
return 0;
case 0x84f:
return 0;
case 0x850:
return 0;
case 0x851:
return 0;
case 0x852:
return 0;
case 0x853:
return 0;
case 0x854:
return 0;
case 0x855:
return 0;
case 0x856:
return 0;
case 0x857:
return 0;
case 0x858:
return 0;
case 0x8a0:
return 0;
case 0x8a1:
return 0;
case 0x8a2:
return 0;
case 0x8a3:
return 0;
case 0x8a4:
return 0;
case 0x8a5:
return 0;
case 0x8a6:
return 0;
case 0x8a7:
return 0;
case 0x8a8:
return 0;
case 0x8a9:
return 0;
case 0x8aa:
return 0;
case 0x8ab:
return 0;
case 0x8ac:
return 0;
case 0x8ae:
return 0;
case 0x8af:
return 0;
case 0x8b0:
return 0;
case 0x8b1:
return 0;
case 0x8b2:
return 0;
case 0x8b3:
return 0;
case 0x8b4:
return 0;
case 0x8b6:
return 0;
case 0x8b7:
return 0;
case 0x8b8:
return 0;
case 0x8b9:
return 0;
case 0x8ba:
return 0;
case 0x8bb:
return 0;
case 0x8bc:
return 0;
case 0x8bd:
return 0;
case 0x904:
return 0;
case 0x905:
return 0;
case 0x906:
return 0;
case 0x907:
return 0;
case 0x908:
return 0;
case 0x909:
return 0;
case 0x90a:
return 0;
case 0x90b:
return 0;
case 0x90c:
return 0;
case 0x90d:
return 0;
case 0x90e:
return 0;
case 0x90f:
return 0;
case 0x910:
return 0;
case 0x911:
return 0;
case 0x912:
return 0;
case 0x913:
return 0;
case 0x914:
return 0;
case 0x915:
return 0;
case 0x916:
return 0;
case 0x917:
return 0;
case 0x918:
return 0;
case 0x919:
return 0;
case 0x91a:
return 0;
case 0x91b:
return 0;
case 0x91c:
return 0;
case 0x91d:
return 0;
case 0x91e:
return 0;
case 0x91f:
return 0;
case 0x920:
return 0;
case 0x921:
return 0;
case 0x922:
return 0;
case 0x923:
return 0;
case 0x924:
return 0;
case 0x925:
return 0;
case 0x926:
return 0;
case 0x927:
return 0;
case 0x928:
return 0;
case 0x92a:
return 0;
case 0x92b:
return 0;
case 0x92c:
return 0;
case 0x92d:
return 0;
case 0x92e:
return 0;
case 0x92f:
return 0;
case 0x930:
return 0;
case 0x932:
return 0;
case 0x933:
return 0;
case 0x935:
return 0;
case 0x936:
return 0;
case 0x937:
return 0;
case 0x938:
return 0;
case 0x939:
return 0;
case 0x93a:
return 0;
case 0x93b:
return 0;
case 0x93d:
return 0;
case 0x93e:
return 0;
case 0x93f:
return 0;
case 0x940:
return 0;
case 0x941:
return 0;
case 0x942:
return 0;
case 0x943:
return 0;
case 0x944:
return 0;
case 0x945:
return 0;
case 0x946:
return 0;
case 0x947:
return 0;
case 0x948:
return 0;
case 0x949:
return 0;
case 0x94a:
return 0;
case 0x94b:
return 0;
case 0x94c:
return 0;
case 0x94d:
return 0;
case 0x94e:
return 0;
case 0x94f:
return 0;
case 0x950:
return 0;
case 0x955:
return 0;
case 0x956:
return 0;
case 0x957:
return 0;
case 0x960:
return 0;
case 0x961:
return 0;
case 0x962:
return 0;
case 0x963:
return 0;
case 0x972:
return 0;
case 0x973:
return 0;
case 0x974:
return 0;
case 0x975:
return 0;
case 0x976:
return 0;
case 0x977:
return 0;
case 0x978:
return 0;
case 0x979:
return 0;
case 0x97a:
return 0;
case 0x97b:
return 0;
case 0x97c:
return 0;
case 0x97d:
return 0;
case 0x97e:
return 0;
case 0x97f:
return 0;
case 0x980:
return 0;
case 0x985:
return 0;
case 0x986:
return 0;
case 0x987:
return 0;
case 0x988:
return 0;
case 0x989:
return 0;
case 0x98a:
return 0;
case 0x98b:
return 0;
case 0x98c:
return 0;
case 0x98f:
return 0;
case 0x990:
return 0;
case 0x993:
return 0;
case 0x994:
return 0;
case 0x995:
return 0;
case 0x996:
return 0;
case 0x997:
return 0;
case 0x998:
return 0;
case 0x999:
return 0;
case 0x99a:
return 0;
case 0x99b:
return 0;
case 0x99c:
return 0;
case 0x99d:
return 0;
case 0x99e:
return 0;
case 0x99f:
return 0;
case 0x9a0:
return 0;
case 0x9a1:
return 0;
case 0x9a2:
return 0;
case 0x9a3:
return 0;
case 0x9a4:
return 0;
case 0x9a5:
return 0;
case 0x9a6:
return 0;
case 0x9a7:
return 0;
case 0x9a8:
return 0;
case 0x9aa:
return 0;
case 0x9ab:
return 0;
case 0x9ac:
return 0;
case 0x9ad:
return 0;
case 0x9ae:
return 0;
case 0x9af:
return 0;
case 0x9b0:
return 0;
case 0x9b2:
return 0;
case 0x9b6:
return 0;
case 0x9b7:
return 0;
case 0x9b8:
return 0;
case 0x9b9:
return 0;
case 0x9bd:
return 0;
case 0x9be:
return 0;
case 0x9bf:
return 0;
case 0x9c0:
return 0;
case 0x9c1:
return 0;
case 0x9c2:
return 0;
case 0x9c3:
return 0;
case 0x9c4:
return 0;
case 0x9c7:
return 0;
case 0x9c8:
return 0;
case 0x9cd:
return 0;
case 0x9d7:
return 0;
case 0x9e0:
return 0;
case 0x9e1:
return 0;
case 0x9e2:
return 0;
case 0x9e3:
return 0;
case 0x9f0:
return 0;
case 0x9f1:
return 0;
case 0xa05:
return 0;
case 0xa06:
return 0;
case 0xa07:
return 0;
case 0xa08:
return 0;
case 0xa09:
return 0;
case 0xa0a:
return 0;
case 0xa0f:
return 0;
case 0xa10:
return 0;
case 0xa13:
return 0;
case 0xa14:
return 0;
case 0xa15:
return 0;
case 0xa16:
return 0;
case 0xa17:
return 0;
case 0xa18:
return 0;
case 0xa19:
return 0;
case 0xa1a:
return 0;
case 0xa1b:
return 0;
case 0xa1c:
return 0;
case 0xa1d:
return 0;
case 0xa1e:
return 0;
case 0xa1f:
return 0;
case 0xa20:
return 0;
case 0xa21:
return 0;
case 0xa22:
return 0;
case 0xa23:
return 0;
case 0xa24:
return 0;
case 0xa25:
return 0;
case 0xa26:
return 0;
case 0xa27:
return 0;
case 0xa28:
return 0;
case 0xa2a:
return 0;
case 0xa2b:
return 0;
case 0xa2c:
return 0;
case 0xa2d:
return 0;
case 0xa2e:
return 0;
case 0xa2f:
return 0;
case 0xa30:
return 0;
case 0xa32:
return 0;
case 0xa35:
return 0;
case 0xa38:
return 0;
case 0xa39:
return 0;
case 0xa3e:
return 0;
case 0xa3f:
return 0;
case 0xa40:
return 0;
case 0xa41:
return 0;
case 0xa42:
return 0;
case 0xa47:
return 0;
case 0xa48:
return 0;
case 0xa4b:
return 0;
case 0xa4c:
return 0;
case 0xa4d:
return 0;
case 0xa51:
return 0;
case 0xa5c:
return 0;
case 0xa72:
return 0;
case 0xa73:
return 0;
case 0xa74:
return 0;
case 0xa75:
return 0;
case 0xa85:
return 0;
case 0xa86:
return 0;
case 0xa87:
return 0;
case 0xa88:
return 0;
case 0xa89:
return 0;
case 0xa8a:
return 0;
case 0xa8b:
return 0;
case 0xa8c:
return 0;
case 0xa8d:
return 0;
case 0xa8f:
return 0;
case 0xa90:
return 0;
case 0xa91:
return 0;
case 0xa93:
return 0;
case 0xa94:
return 0;
case 0xa95:
return 0;
case 0xa96:
return 0;
case 0xa97:
return 0;
case 0xa98:
return 0;
case 0xa99:
return 0;
case 0xa9a:
return 0;
case 0xa9b:
return 0;
case 0xa9c:
return 0;
case 0xa9d:
return 0;
case 0xa9e:
return 0;
case 0xa9f:
return 0;
case 0xaa0:
return 0;
case 0xaa1:
return 0;
case 0xaa2:
return 0;
case 0xaa3:
return 0;
case 0xaa4:
return 0;
case 0xaa5:
return 0;
case 0xaa6:
return 0;
case 0xaa7:
return 0;
case 0xaa8:
return 0;
case 0xaaa:
return 0;
case 0xaab:
return 0;
case 0xaac:
return 0;
case 0xaad:
return 0;
case 0xaae:
return 0;
case 0xaaf:
return 0;
case 0xab0:
return 0;
case 0xab2:
return 0;
case 0xab3:
return 0;
case 0xab5:
return 0;
case 0xab6:
return 0;
case 0xab7:
return 0;
case 0xab8:
return 0;
case 0xab9:
return 0;
case 0xabd:
return 0;
case 0xabe:
return 0;
case 0xabf:
return 0;
case 0xac0:
return 0;
case 0xac1:
return 0;
case 0xac2:
return 0;
case 0xac3:
return 0;
case 0xac4:
return 0;
case 0xac5:
return 0;
case 0xac7:
return 0;
case 0xac8:
return 0;
case 0xac9:
return 0;
case 0xacb:
return 0;
case 0xacc:
return 0;
case 0xacd:
return 0;
case 0xad0:
return 0;
case 0xae0:
return 0;
case 0xae1:
return 0;
case 0xae2:
return 0;
case 0xae3:
return 0;
case 0xaf9:
return 0;
case 0xb05:
return 0;
case 0xb06:
return 0;
case 0xb07:
return 0;
case 0xb08:
return 0;
case 0xb09:
return 0;
case 0xb0a:
return 0;
case 0xb0b:
return 0;
case 0xb0c:
return 0;
case 0xb0f:
return 0;
case 0xb10:
return 0;
case 0xb13:
return 0;
case 0xb14:
return 0;
case 0xb15:
return 0;
case 0xb16:
return 0;
case 0xb17:
return 0;
case 0xb18:
return 0;
case 0xb19:
return 0;
case 0xb1a:
return 0;
case 0xb1b:
return 0;
case 0xb1c:
return 0;
case 0xb1d:
return 0;
case 0xb1e:
return 0;
case 0xb1f:
return 0;
case 0xb20:
return 0;
case 0xb21:
return 0;
case 0xb22:
return 0;
case 0xb23:
return 0;
case 0xb24:
return 0;
case 0xb25:
return 0;
case 0xb26:
return 0;
case 0xb27:
return 0;
case 0xb28:
return 0;
case 0xb2a:
return 0;
case 0xb2b:
return 0;
case 0xb2c:
return 0;
case 0xb2d:
return 0;
case 0xb2e:
return 0;
case 0xb2f:
return 0;
case 0xb30:
return 0;
case 0xb32:
return 0;
case 0xb33:
return 0;
case 0xb35:
return 0;
case 0xb36:
return 0;
case 0xb37:
return 0;
case 0xb38:
return 0;
case 0xb39:
return 0;
case 0xb3d:
return 0;
case 0xb3e:
return 0;
case 0xb3f:
return 0;
case 0xb40:
return 0;
case 0xb41:
return 0;
case 0xb42:
return 0;
case 0xb43:
return 0;
case 0xb44:
return 0;
case 0xb47:
return 0;
case 0xb4d:
return 0;
case 0xb56:
return 0;
case 0xb57:
return 0;
case 0xb5f:
return 0;
case 0xb60:
return 0;
case 0xb61:
return 0;
case 0xb62:
return 0;
case 0xb63:
return 0;
case 0xb71:
return 0;
case 0xb83:
return 0;
case 0xb85:
return 0;
case 0xb86:
return 0;
case 0xb87:
return 0;
case 0xb88:
return 0;
case 0xb89:
return 0;
case 0xb8a:
return 0;
case 0xb8e:
return 0;
case 0xb8f:
return 0;
case 0xb90:
return 0;
case 0xb92:
return 0;
case 0xb93:
return 0;
case 0xb95:
return 0;
case 0xb99:
return 0;
case 0xb9a:
return 0;
case 0xb9c:
return 0;
case 0xb9e:
return 0;
case 0xb9f:
return 0;
case 0xba3:
return 0;
case 0xba4:
return 0;
case 0xba8:
return 0;
case 0xba9:
return 0;
case 0xbaa:
return 0;
case 0xbae:
return 0;
case 0xbaf:
return 0;
case 0xbb0:
return 0;
case 0xbb1:
return 0;
case 0xbb2:
return 0;
case 0xbb3:
return 0;
case 0xbb4:
return 0;
case 0xbb5:
return 0;
case 0xbb6:
return 0;
case 0xbb7:
return 0;
case 0xbb8:
return 0;
case 0xbb9:
return 0;
case 0xbbe:
return 0;
case 0xbbf:
return 0;
case 0xbc0:
return 0;
case 0xbc1:
return 0;
case 0xbc2:
return 0;
case 0xbc6:
return 0;
case 0xbc7:
return 0;
case 0xbc8:
return 0;
case 0xbcd:
return 0;
case 0xbd0:
return 0;
case 0xbd7:
return 0;
case 0xc05:
return 0;
case 0xc06:
return 0;
case 0xc07:
return 0;
case 0xc08:
return 0;
case 0xc09:
return 0;
case 0xc0a:
return 0;
case 0xc0b:
return 0;
case 0xc0c:
return 0;
case 0xc0e:
return 0;
case 0xc0f:
return 0;
case 0xc10:
return 0;
case 0xc12:
return 0;
case 0xc13:
return 0;
case 0xc14:
return 0;
case 0xc15:
return 0;
case 0xc16:
return 0;
case 0xc17:
return 0;
case 0xc18:
return 0;
case 0xc19:
return 0;
case 0xc1a:
return 0;
case 0xc1b:
return 0;
case 0xc1c:
return 0;
case 0xc1d:
return 0;
case 0xc1e:
return 0;
case 0xc1f:
return 0;
case 0xc20:
return 0;
case 0xc21:
return 0;
case 0xc22:
return 0;
case 0xc23:
return 0;
case 0xc24:
return 0;
case 0xc25:
return 0;
case 0xc26:
return 0;
case 0xc27:
return 0;
case 0xc28:
return 0;
case 0xc2a:
return 0;
case 0xc2b:
return 0;
case 0xc2c:
return 0;
case 0xc2d:
return 0;
case 0xc2e:
return 0;
case 0xc2f:
return 0;
case 0xc30:
return 0;
case 0xc31:
return 0;
case 0xc32:
return 0;
case 0xc33:
return 0;
case 0xc34:
return 0;
case 0xc35:
return 0;
case 0xc36:
return 0;
case 0xc37:
return 0;
case 0xc38:
return 0;
case 0xc39:
return 0;
case 0xc3d:
return 0;
case 0xc3e:
return 0;
case 0xc3f:
return 0;
case 0xc40:
return 0;
case 0xc41:
return 0;
case 0xc42:
return 0;
case 0xc43:
return 0;
case 0xc44:
return 0;
case 0xc46:
return 0;
case 0xc47:
return 0;
case 0xc4a:
return 0;
case 0xc4b:
return 0;
case 0xc4c:
return 0;
case 0xc4d:
return 0;
case 0xc55:
return 0;
case 0xc56:
return 0;
case 0xc58:
return 0;
case 0xc59:
return 0;
case 0xc5a:
return 0;
case 0xc60:
return 0;
case 0xc61:
return 0;
case 0xc62:
return 0;
case 0xc63:
return 0;
case 0xc80:
return 0;
case 0xc85:
return 0;
case 0xc86:
return 0;
case 0xc87:
return 0;
case 0xc88:
return 0;
case 0xc89:
return 0;
case 0xc8a:
return 0;
case 0xc8b:
return 0;
case 0xc8c:
return 0;
case 0xc8e:
return 0;
case 0xc8f:
return 0;
case 0xc90:
return 0;
case 0xc92:
return 0;
case 0xc93:
return 0;
case 0xc94:
return 0;
case 0xc95:
return 0;
case 0xc96:
return 0;
case 0xc97:
return 0;
case 0xc98:
return 0;
case 0xc99:
return 0;
case 0xc9a:
return 0;
case 0xc9b:
return 0;
case 0xc9c:
return 0;
case 0xc9d:
return 0;
case 0xc9e:
return 0;
case 0xc9f:
return 0;
case 0xca0:
return 0;
case 0xca1:
return 0;
case 0xca2:
return 0;
case 0xca3:
return 0;
case 0xca4:
return 0;
case 0xca5:
return 0;
case 0xca6:
return 0;
case 0xca7:
return 0;
case 0xca8:
return 0;
case 0xcaa:
return 0;
case 0xcab:
return 0;
case 0xcac:
return 0;
case 0xcad:
return 0;
case 0xcae:
return 0;
case 0xcaf:
return 0;
case 0xcb0:
return 0;
case 0xcb1:
return 0;
case 0xcb2:
return 0;
case 0xcb3:
return 0;
case 0xcb5:
return 0;
case 0xcb6:
return 0;
case 0xcb7:
return 0;
case 0xcb8:
return 0;
case 0xcb9:
return 0;
case 0xcbd:
return 0;
case 0xcbe:
return 0;
case 0xcbf:
return 0;
case 0xcc1:
return 0;
case 0xcc2:
return 0;
case 0xcc3:
return 0;
case 0xcc4:
return 0;
case 0xcc6:
return 0;
case 0xccc:
return 0;
case 0xccd:
return 0;
case 0xcd5:
return 0;
case 0xcd6:
return 0;
case 0xcde:
return 0;
case 0xce0:
return 0;
case 0xce1:
return 0;
case 0xce2:
return 0;
case 0xce3:
return 0;
case 0xcf1:
return 0;
case 0xcf2:
return 0;
case 0xd05:
return 0;
case 0xd06:
return 0;
case 0xd07:
return 0;
case 0xd08:
return 0;
case 0xd09:
return 0;
case 0xd0a:
return 0;
case 0xd0b:
return 0;
case 0xd0c:
return 0;
case 0xd0e:
return 0;
case 0xd0f:
return 0;
case 0xd10:
return 0;
case 0xd12:
return 0;
case 0xd13:
return 0;
case 0xd14:
return 0;
case 0xd15:
return 0;
case 0xd16:
return 0;
case 0xd17:
return 0;
case 0xd18:
return 0;
case 0xd19:
return 0;
case 0xd1a:
return 0;
case 0xd1b:
return 0;
case 0xd1c:
return 0;
case 0xd1d:
return 0;
case 0xd1e:
return 0;
case 0xd1f:
return 0;
case 0xd20:
return 0;
case 0xd21:
return 0;
case 0xd22:
return 0;
case 0xd23:
return 0;
case 0xd24:
return 0;
case 0xd25:
return 0;
case 0xd26:
return 0;
case 0xd27:
return 0;
case 0xd28:
return 0;
case 0xd29:
return 0;
case 0xd2a:
return 0;
case 0xd2b:
return 0;
case 0xd2c:
return 0;
case 0xd2d:
return 0;
case 0xd2e:
return 0;
case 0xd2f:
return 0;
case 0xd30:
return 0;
case 0xd31:
return 0;
case 0xd32:
return 0;
case 0xd33:
return 0;
case 0xd34:
return 0;
case 0xd35:
return 0;
case 0xd36:
return 0;
case 0xd37:
return 0;
case 0xd38:
return 0;
case 0xd39:
return 0;
case 0xd3a:
return 0;
case 0xd3d:
return 0;
case 0xd3e:
return 0;
case 0xd3f:
return 0;
case 0xd40:
return 0;
case 0xd41:
return 0;
case 0xd42:
return 0;
case 0xd43:
return 0;
case 0xd44:
return 0;
case 0xd46:
return 0;
case 0xd47:
return 0;
case 0xd48:
return 0;
case 0xd4d:
return 0;
case 0xd57:
return 0;
case 0xd5f:
return 0;
case 0xd60:
return 0;
case 0xd61:
return 0;
case 0xd62:
return 0;
case 0xd63:
return 0;
case 0xd85:
return 0;
case 0xd86:
return 0;
case 0xd87:
return 0;
case 0xd88:
return 0;
case 0xd89:
return 0;
case 0xd8a:
return 0;
case 0xd8b:
return 0;
case 0xd8c:
return 0;
case 0xd8d:
return 0;
case 0xd8e:
return 0;
case 0xd8f:
return 0;
case 0xd90:
return 0;
case 0xd91:
return 0;
case 0xd92:
return 0;
case 0xd93:
return 0;
case 0xd94:
return 0;
case 0xd95:
return 0;
case 0xd96:
return 0;
case 0xd9a:
return 0;
case 0xd9b:
return 0;
case 0xd9c:
return 0;
case 0xd9d:
return 0;
case 0xd9e:
return 0;
case 0xd9f:
return 0;
case 0xda0:
return 0;
case 0xda1:
return 0;
case 0xda2:
return 0;
case 0xda3:
return 0;
case 0xda4:
return 0;
case 0xda5:
return 0;
case 0xda6:
return 0;
case 0xda7:
return 0;
case 0xda8:
return 0;
case 0xda9:
return 0;
case 0xdaa:
return 0;
case 0xdab:
return 0;
case 0xdac:
return 0;
case 0xdad:
return 0;
case 0xdae:
return 0;
case 0xdaf:
return 0;
case 0xdb0:
return 0;
case 0xdb1:
return 0;
case 0xdb3:
return 0;
case 0xdb4:
return 0;
case 0xdb5:
return 0;
case 0xdb6:
return 0;
case 0xdb7:
return 0;
case 0xdb8:
return 0;
case 0xdb9:
return 0;
case 0xdba:
return 0;
case 0xdbb:
return 0;
case 0xdbd:
return 0;
case 0xdc0:
return 0;
case 0xdc1:
return 0;
case 0xdc2:
return 0;
case 0xdc3:
return 0;
case 0xdc4:
return 0;
case 0xdc5:
return 0;
case 0xdc6:
return 0;
case 0xdca:
return 0;
case 0xdcf:
return 0;
case 0xdd0:
return 0;
case 0xdd1:
return 0;
case 0xdd2:
return 0;
case 0xdd3:
return 0;
case 0xdd4:
return 0;
case 0xdd6:
return 0;
case 0xdd8:
return 0;
case 0xdd9:
return 0;
case 0xddb:
return 0;
case 0xddf:
return 0;
case 0xdf2:
return 0;
case 0xdf3:
return 0;
case 0xe81:
return 0;
case 0xe82:
return 0;
case 0xe84:
return 0;
case 0xe87:
return 0;
case 0xe88:
return 0;
case 0xe8a:
return 0;
case 0xe8d:
return 0;
case 0xe94:
return 0;
case 0xe95:
return 0;
case 0xe96:
return 0;
case 0xe97:
return 0;
case 0xe99:
return 0;
case 0xe9a:
return 0;
case 0xe9b:
return 0;
case 0xe9c:
return 0;
case 0xe9d:
return 0;
case 0xe9e:
return 0;
case 0xe9f:
return 0;
case 0xea1:
return 0;
case 0xea2:
return 0;
case 0xea3:
return 0;
case 0xea5:
return 0;
case 0xea7:
return 0;
case 0xeaa:
return 0;
case 0xeab:
return 0;
case 0xead:
return 0;
case 0xeae:
return 0;
case 0xeaf:
return 0;
case 0xeb0:
return 0;
case 0xeb1:
return 0;
case 0xeb2:
return 0;
case 0xeb3:
return 0;
case 0xeb4:
return 0;
case 0xeb5:
return 0;
case 0xeb6:
return 0;
case 0xeb7:
return 0;
case 0xeb8:
return 0;
case 0xeb9:
return 0;
case 0xebb:
return 0;
case 0xebc:
return 0;
case 0xebd:
return 0;
case 0xec0:
return 0;
case 0xec1:
return 0;
case 0xec2:
return 0;
case 0xec3:
return 0;
case 0xec4:
return 0;
case 0xede:
return 0;
case 0xedf:
return 0;
case 0xf40:
return 0;
case 0xf41:
return 0;
case 0xf42:
return 0;
case 0xf44:
return 0;
case 0xf45:
return 0;
case 0xf46:
return 0;
case 0xf47:
return 0;
case 0xf49:
return 0;
case 0xf4a:
return 0;
case 0xf4b:
return 0;
case 0xf4c:
return 0;
case 0xf4e:
return 0;
case 0xf4f:
return 0;
case 0xf50:
return 0;
case 0xf51:
return 0;
case 0xf53:
return 0;
case 0xf54:
return 0;
case 0xf55:
return 0;
case 0xf56:
return 0;
case 0xf58:
return 0;
case 0xf59:
return 0;
case 0xf5a:
return 0;
case 0xf5b:
return 0;
case 0xf5d:
return 0;
case 0xf5e:
return 0;
case 0xf5f:
return 0;
case 0xf60:
return 0;
case 0xf61:
return 0;
case 0xf62:
return 0;
case 0xf63:
return 0;
case 0xf64:
return 0;
case 0xf65:
return 0;
case 0xf66:
return 0;
case 0xf67:
return 0;
case 0xf68:
return 0;
case 0xf6b:
return 0;
case 0xf6c:
return 0;
case 0xf71:
return 0;
case 0xf72:
return 0;
case 0xf74:
return 0;
case 0xf76:
return 0;
case 0xf77:
return 0;
case 0xf78:
return 0;
case 0xf79:
return 0;
case 0xf7a:
return 0;
case 0xf7b:
return 0;
case 0xf7c:
return 0;
case 0xf7d:
return 0;
case 0xf80:
return 0;
case 0xf84:
return 0;
case 0xf88:
return 0;
case 0xf89:
return 0;
case 0xf8a:
return 0;
case 0xf8b:
return 0;
case 0xf8c:
return 0;
case 0xf8d:
return 0;
case 0xf8e:
return 0;
case 0xf8f:
return 0;
case 0xf90:
return 0;
case 0xf91:
return 0;
case 0xf92:
return 0;
case 0xf94:
return 0;
case 0xf95:
return 0;
case 0xf96:
return 0;
case 0xf97:
return 0;
case 0xf99:
return 0;
case 0xf9a:
return 0;
case 0xf9b:
return 0;
case 0xf9c:
return 0;
case 0xf9e:
return 0;
case 0xf9f:
return 0;
case 0xfa0:
return 0;
case 0xfa1:
return 0;
case 0xfa3:
return 0;
case 0xfa4:
return 0;
case 0xfa5:
return 0;
case 0xfa6:
return 0;
case 0xfa8:
return 0;
case 0xfa9:
return 0;
case 0xfaa:
return 0;
case 0xfab:
return 0;
case 0xfad:
return 0;
case 0xfae:
return 0;
case 0xfaf:
return 0;
case 0xfb0:
return 0;
case 0xfb1:
return 0;
case 0xfb2:
return 0;
case 0xfb3:
return 0;
case 0xfb4:
return 0;
case 0xfb5:
return 0;
case 0xfb6:
return 0;
case 0xfb7:
return 0;
case 0xfb8:
return 0;
case 0x1000:
return 0;
case 0x1001:
return 0;
case 0x1002:
return 0;
case 0x1003:
return 0;
case 0x1004:
return 0;
case 0x1005:
return 0;
case 0x1006:
return 0;
case 0x1007:
return 0;
case 0x1008:
return 0;
case 0x1009:
return 0;
case 0x100a:
return 0;
case 0x100b:
return 0;
case 0x100c:
return 0;
case 0x100d:
return 0;
case 0x100e:
return 0;
case 0x100f:
return 0;
case 0x1010:
return 0;
case 0x1011:
return 0;
case 0x1012:
return 0;
case 0x1013:
return 0;
case 0x1014:
return 0;
case 0x1015:
return 0;
case 0x1016:
return 0;
case 0x1017:
return 0;
case 0x1018:
return 0;
case 0x1019:
return 0;
case 0x101a:
return 0;
case 0x101b:
return 0;
case 0x101c:
return 0;
case 0x101d:
return 0;
case 0x101e:
return 0;
case 0x101f:
return 0;
case 0x1020:
return 0;
case 0x1021:
return 0;
case 0x1022:
return 0;
case 0x1023:
return 0;
case 0x1024:
return 0;
case 0x1025:
return 0;
case 0x1027:
return 0;
case 0x1028:
return 0;
case 0x1029:
return 0;
case 0x102a:
return 0;
case 0x102c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x102b:
return 1;
}
}
return 0;
case 0x102d:
return 0;
case 0x102e:
return 0;
case 0x102f:
return 0;
case 0x1030:
return 0;
case 0x1031:
return 0;
case 0x1032:
return 0;
case 0x1033:
return 0;
case 0x1034:
return 0;
case 0x1035:
return 0;
case 0x1039:
return 0;
case 0x103a:
return 0;
case 0x103b:
return 0;
case 0x103c:
return 0;
case 0x103d:
return 0;
case 0x103e:
return 0;
case 0x1050:
return 0;
case 0x1051:
return 0;
case 0x1052:
return 0;
case 0x1053:
return 0;
case 0x1054:
return 0;
case 0x1055:
return 0;
case 0x1056:
return 0;
case 0x1057:
return 0;
case 0x1058:
return 0;
case 0x1059:
return 0;
case 0x105a:
return 0;
case 0x105b:
return 0;
case 0x105c:
return 0;
case 0x105d:
return 0;
case 0x105e:
return 0;
case 0x105f:
return 0;
case 0x1060:
return 0;
case 0x1061:
return 0;
case 0x1062:
return 0;
case 0x1063:
return 0;
case 0x1064:
return 0;
case 0x1065:
return 0;
case 0x1066:
return 0;
case 0x1067:
return 0;
case 0x1068:
return 0;
case 0x1069:
return 0;
case 0x106a:
return 0;
case 0x106b:
return 0;
case 0x106c:
return 0;
case 0x106d:
return 0;
case 0x106e:
return 0;
case 0x106f:
return 0;
case 0x1070:
return 0;
case 0x1071:
return 0;
case 0x1072:
return 0;
case 0x1073:
return 0;
case 0x1074:
return 0;
case 0x1075:
return 0;
case 0x1076:
return 0;
case 0x1077:
return 0;
case 0x1078:
return 0;
case 0x1079:
return 0;
case 0x107a:
return 0;
case 0x107b:
return 0;
case 0x107c:
return 0;
case 0x107d:
return 0;
case 0x107e:
return 0;
case 0x107f:
return 0;
case 0x1080:
return 0;
case 0x1081:
return 0;
case 0x1082:
return 0;
case 0x1083:
return 0;
case 0x1084:
return 0;
case 0x1085:
return 0;
case 0x1086:
return 0;
case 0x1087:
return 0;
case 0x1088:
return 0;
case 0x1089:
return 0;
case 0x108a:
return 0;
case 0x108b:
return 0;
case 0x108c:
return 0;
case 0x108d:
return 0;
case 0x108e:
return 0;
case 0x108f:
return 0;
case 0x109a:
return 0;
case 0x109b:
return 0;
case 0x109c:
return 0;
case 0x109d:
return 0;
case 0x10d0:
return 0;
case 0x10d1:
return 0;
case 0x10d2:
return 0;
case 0x10d3:
return 0;
case 0x10d4:
return 0;
case 0x10d5:
return 0;
case 0x10d6:
return 0;
case 0x10d7:
return 0;
case 0x10d8:
return 0;
case 0x10d9:
return 0;
case 0x10da:
return 0;
case 0x10db:
return 0;
case 0x10dc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10fc:
return 1;
}
}
return 0;
case 0x10dd:
return 0;
case 0x10de:
return 0;
case 0x10df:
return 0;
case 0x10e0:
return 0;
case 0x10e1:
return 0;
case 0x10e2:
return 0;
case 0x10e3:
return 0;
case 0x10e4:
return 0;
case 0x10e5:
return 0;
case 0x10e6:
return 0;
case 0x10e7:
return 0;
case 0x10e8:
return 0;
case 0x10e9:
return 0;
case 0x10ea:
return 0;
case 0x10eb:
return 0;
case 0x10ec:
return 0;
case 0x10ed:
return 0;
case 0x10ee:
return 0;
case 0x10ef:
return 0;
case 0x10f0:
return 0;
case 0x10f1:
return 0;
case 0x10f2:
return 0;
case 0x10f3:
return 0;
case 0x10f4:
return 0;
case 0x10f5:
return 0;
case 0x10f6:
return 0;
case 0x10f7:
return 0;
case 0x10f8:
return 0;
case 0x10f9:
return 0;
case 0x10fa:
return 0;
case 0x10fd:
return 0;
case 0x10fe:
return 0;
case 0x10ff:
return 0;
case 0x1100:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3131:
return 1;
case 0x3260:
return 1;
case 0xffa1:
return 1;
}
}
return 0;
case 0x1101:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3132:
return 1;
case 0xffa2:
return 1;
}
}
return 0;
case 0x1102:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3134:
return 1;
case 0x3261:
return 1;
case 0xffa4:
return 1;
}
}
return 0;
case 0x1103:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3137:
return 1;
case 0x3262:
return 1;
case 0xffa7:
return 1;
}
}
return 0;
case 0x1104:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3138:
return 1;
case 0xffa8:
return 1;
}
}
return 0;
case 0x1105:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3139:
return 1;
case 0x3263:
return 1;
case 0xffa9:
return 1;
}
}
return 0;
case 0x1106:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3141:
return 1;
case 0x3264:
return 1;
case 0xffb1:
return 1;
}
}
return 0;
case 0x1107:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3142:
return 1;
case 0x3265:
return 1;
case 0xffb2:
return 1;
}
}
return 0;
case 0x1108:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3143:
return 1;
case 0xffb3:
return 1;
}
}
return 0;
case 0x1109:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3145:
return 1;
case 0x3266:
return 1;
case 0xffb5:
return 1;
}
}
return 0;
case 0x110a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3146:
return 1;
case 0xffb6:
return 1;
}
}
return 0;
case 0x110b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3147:
return 1;
case 0x3267:
return 1;
case 0xffb7:
return 1;
}
}
return 0;
case 0x110c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3148:
return 1;
case 0x3268:
return 1;
case 0xffb8:
return 1;
}
}
return 0;
case 0x110d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3149:
return 1;
case 0xffb9:
return 1;
}
}
return 0;
case 0x110e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x314a:
return 1;
case 0x3269:
return 1;
case 0xffba:
return 1;
}
}
return 0;
case 0x110f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x314b:
return 1;
case 0x326a:
return 1;
case 0xffbb:
return 1;
}
}
return 0;
case 0x1110:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x314c:
return 1;
case 0x326b:
return 1;
case 0xffbc:
return 1;
}
}
return 0;
case 0x1111:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x314d:
return 1;
case 0x326c:
return 1;
case 0xffbd:
return 1;
}
}
return 0;
case 0x1112:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x314e:
return 1;
case 0x326d:
return 1;
case 0xffbe:
return 1;
}
}
return 0;
case 0x1113:
return 0;
case 0x1114:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3165:
return 1;
}
}
return 0;
case 0x1115:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3166:
return 1;
}
}
return 0;
case 0x1116:
return 0;
case 0x1117:
return 0;
case 0x1118:
return 0;
case 0x1119:
return 0;
case 0x111a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3140:
return 1;
case 0xffb0:
return 1;
}
}
return 0;
case 0x111b:
return 0;
case 0x111c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x316e:
return 1;
}
}
return 0;
case 0x111d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3171:
return 1;
}
}
return 0;
case 0x111e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3172:
return 1;
}
}
return 0;
case 0x111f:
return 0;
case 0x1120:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3173:
return 1;
}
}
return 0;
case 0x1121:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3144:
return 1;
case 0xffb4:
return 1;
}
}
return 0;
case 0x1122:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3174:
return 1;
}
}
return 0;
case 0x1123:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3175:
return 1;
}
}
return 0;
case 0x1124:
return 0;
case 0x1125:
return 0;
case 0x1126:
return 0;
case 0x1127:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3176:
return 1;
}
}
return 0;
case 0x1128:
return 0;
case 0x1129:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3177:
return 1;
}
}
return 0;
case 0x112a:
return 0;
case 0x112b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3178:
return 1;
}
}
return 0;
case 0x112c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3179:
return 1;
}
}
return 0;
case 0x112d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x317a:
return 1;
}
}
return 0;
case 0x112e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x317b:
return 1;
}
}
return 0;
case 0x112f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x317c:
return 1;
}
}
return 0;
case 0x1130:
return 0;
case 0x1131:
return 0;
case 0x1132:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x317d:
return 1;
}
}
return 0;
case 0x1133:
return 0;
case 0x1134:
return 0;
case 0x1135:
return 0;
case 0x1136:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x317e:
return 1;
}
}
return 0;
case 0x1137:
return 0;
case 0x1138:
return 0;
case 0x1139:
return 0;
case 0x113a:
return 0;
case 0x113b:
return 0;
case 0x113c:
return 0;
case 0x113d:
return 0;
case 0x113e:
return 0;
case 0x113f:
return 0;
case 0x1140:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x317f:
return 1;
}
}
return 0;
case 0x1141:
return 0;
case 0x1142:
return 0;
case 0x1143:
return 0;
case 0x1144:
return 0;
case 0x1145:
return 0;
case 0x1146:
return 0;
case 0x1147:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3180:
return 1;
}
}
return 0;
case 0x1148:
return 0;
case 0x1149:
return 0;
case 0x114a:
return 0;
case 0x114b:
return 0;
case 0x114c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3181:
return 1;
}
}
return 0;
case 0x114d:
return 0;
case 0x114e:
return 0;
case 0x114f:
return 0;
case 0x1150:
return 0;
case 0x1151:
return 0;
case 0x1152:
return 0;
case 0x1153:
return 0;
case 0x1154:
return 0;
case 0x1155:
return 0;
case 0x1156:
return 0;
case 0x1157:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3184:
return 1;
}
}
return 0;
case 0x1158:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3185:
return 1;
}
}
return 0;
case 0x1159:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3186:
return 1;
}
}
return 0;
case 0x115a:
return 0;
case 0x115b:
return 0;
case 0x115c:
return 0;
case 0x115d:
return 0;
case 0x115e:
return 0;
case 0x115f:
return 0;
case 0x1160:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3164:
return 1;
case 0xffa0:
return 1;
}
}
return 0;
case 0x1161:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x314f:
return 1;
case 0xffc2:
return 1;
}
}
return 0;
case 0x1162:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3150:
return 1;
case 0xffc3:
return 1;
}
}
return 0;
case 0x1163:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3151:
return 1;
case 0xffc4:
return 1;
}
}
return 0;
case 0x1164:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3152:
return 1;
case 0xffc5:
return 1;
}
}
return 0;
case 0x1165:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3153:
return 1;
case 0xffc6:
return 1;
}
}
return 0;
case 0x1166:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3154:
return 1;
case 0xffc7:
return 1;
}
}
return 0;
case 0x1167:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3155:
return 1;
case 0xffca:
return 1;
}
}
return 0;
case 0x1168:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3156:
return 1;
case 0xffcb:
return 1;
}
}
return 0;
case 0x1169:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3157:
return 1;
case 0xffcc:
return 1;
}
}
return 0;
case 0x116a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3158:
return 1;
case 0xffcd:
return 1;
}
}
return 0;
case 0x116b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3159:
return 1;
case 0xffce:
return 1;
}
}
return 0;
case 0x116c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x315a:
return 1;
case 0xffcf:
return 1;
}
}
return 0;
case 0x116d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x315b:
return 1;
case 0xffd2:
return 1;
}
}
return 0;
case 0x116e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x315c:
return 1;
case 0xffd3:
return 1;
}
}
return 0;
case 0x116f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x315d:
return 1;
case 0xffd4:
return 1;
}
}
return 0;
case 0x1170:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x315e:
return 1;
case 0xffd5:
return 1;
}
}
return 0;
case 0x1171:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x315f:
return 1;
case 0xffd6:
return 1;
}
}
return 0;
case 0x1172:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3160:
return 1;
case 0xffd7:
return 1;
}
}
return 0;
case 0x1173:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3161:
return 1;
case 0xffda:
return 1;
}
}
return 0;
case 0x1174:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3162:
return 1;
case 0xffdb:
return 1;
}
}
return 0;
case 0x1175:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3163:
return 1;
case 0xffdc:
return 1;
}
}
return 0;
case 0x1176:
return 0;
case 0x1177:
return 0;
case 0x1178:
return 0;
case 0x1179:
return 0;
case 0x117a:
return 0;
case 0x117b:
return 0;
case 0x117c:
return 0;
case 0x117d:
return 0;
case 0x117e:
return 0;
case 0x117f:
return 0;
case 0x1180:
return 0;
case 0x1181:
return 0;
case 0x1182:
return 0;
case 0x1183:
return 0;
case 0x1184:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3187:
return 1;
}
}
return 0;
case 0x1185:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3188:
return 1;
}
}
return 0;
case 0x1186:
return 0;
case 0x1187:
return 0;
case 0x1188:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3189:
return 1;
}
}
return 0;
case 0x1189:
return 0;
case 0x118a:
return 0;
case 0x118b:
return 0;
case 0x118c:
return 0;
case 0x118d:
return 0;
case 0x118e:
return 0;
case 0x118f:
return 0;
case 0x1190:
return 0;
case 0x1191:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x318a:
return 1;
}
}
return 0;
case 0x1192:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x318b:
return 1;
}
}
return 0;
case 0x1193:
return 0;
case 0x1194:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x318c:
return 1;
}
}
return 0;
case 0x1195:
return 0;
case 0x1196:
return 0;
case 0x1197:
return 0;
case 0x1198:
return 0;
case 0x1199:
return 0;
case 0x119a:
return 0;
case 0x119b:
return 0;
case 0x119c:
return 0;
case 0x119d:
return 0;
case 0x119e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x318d:
return 1;
}
}
return 0;
case 0x119f:
return 0;
case 0x11a0:
return 0;
case 0x11a1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x318e:
return 1;
}
}
return 0;
case 0x11a2:
return 0;
case 0x11a3:
return 0;
case 0x11a4:
return 0;
case 0x11a5:
return 0;
case 0x11a6:
return 0;
case 0x11a7:
return 0;
case 0x11a8:
return 0;
case 0x11a9:
return 0;
case 0x11aa:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3133:
return 1;
case 0xffa3:
return 1;
}
}
return 0;
case 0x11ab:
return 0;
case 0x11ac:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3135:
return 1;
case 0xffa5:
return 1;
}
}
return 0;
case 0x11ad:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3136:
return 1;
case 0xffa6:
return 1;
}
}
return 0;
case 0x11ae:
return 0;
case 0x11af:
return 0;
case 0x11b0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x313a:
return 1;
case 0xffaa:
return 1;
}
}
return 0;
case 0x11b1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x313b:
return 1;
case 0xffab:
return 1;
}
}
return 0;
case 0x11b2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x313c:
return 1;
case 0xffac:
return 1;
}
}
return 0;
case 0x11b3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x313d:
return 1;
case 0xffad:
return 1;
}
}
return 0;
case 0x11b4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x313e:
return 1;
case 0xffae:
return 1;
}
}
return 0;
case 0x11b5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x313f:
return 1;
case 0xffaf:
return 1;
}
}
return 0;
case 0x11b6:
return 0;
case 0x11b7:
return 0;
case 0x11b8:
return 0;
case 0x11b9:
return 0;
case 0x11ba:
return 0;
case 0x11bb:
return 0;
case 0x11bc:
return 0;
case 0x11bd:
return 0;
case 0x11be:
return 0;
case 0x11bf:
return 0;
case 0x11c0:
return 0;
case 0x11c1:
return 0;
case 0x11c2:
return 0;
case 0x11c3:
return 0;
case 0x11c4:
return 0;
case 0x11c5:
return 0;
case 0x11c6:
return 0;
case 0x11c7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3167:
return 1;
}
}
return 0;
case 0x11c8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3168:
return 1;
}
}
return 0;
case 0x11c9:
return 0;
case 0x11ca:
return 0;
case 0x11cb:
return 0;
case 0x11cc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3169:
return 1;
}
}
return 0;
case 0x11cd:
return 0;
case 0x11ce:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x316a:
return 1;
}
}
return 0;
case 0x11cf:
return 0;
case 0x11d0:
return 0;
case 0x11d1:
return 0;
case 0x11d2:
return 0;
case 0x11d3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x316b:
return 1;
}
}
return 0;
case 0x11d4:
return 0;
case 0x11d5:
return 0;
case 0x11d6:
return 0;
case 0x11d7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x316c:
return 1;
}
}
return 0;
case 0x11d8:
return 0;
case 0x11d9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x316d:
return 1;
}
}
return 0;
case 0x11da:
return 0;
case 0x11db:
return 0;
case 0x11dc:
return 0;
case 0x11dd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x316f:
return 1;
}
}
return 0;
case 0x11de:
return 0;
case 0x11df:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3170:
return 1;
}
}
return 0;
case 0x11e0:
return 0;
case 0x11e1:
return 0;
case 0x11e2:
return 0;
case 0x11e3:
return 0;
case 0x11e4:
return 0;
case 0x11e5:
return 0;
case 0x11e6:
return 0;
case 0x11e7:
return 0;
case 0x11e8:
return 0;
case 0x11e9:
return 0;
case 0x11ea:
return 0;
case 0x11eb:
return 0;
case 0x11ec:
return 0;
case 0x11ed:
return 0;
case 0x11ee:
return 0;
case 0x11ef:
return 0;
case 0x11f0:
return 0;
case 0x11f1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3182:
return 1;
}
}
return 0;
case 0x11f2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3183:
return 1;
}
}
return 0;
case 0x11f3:
return 0;
case 0x11f4:
return 0;
case 0x11f5:
return 0;
case 0x11f6:
return 0;
case 0x11f7:
return 0;
case 0x11f8:
return 0;
case 0x11f9:
return 0;
case 0x11fa:
return 0;
case 0x11fb:
return 0;
case 0x11fc:
return 0;
case 0x11fd:
return 0;
case 0x11fe:
return 0;
case 0x11ff:
return 0;
case 0x1200:
return 0;
case 0x1201:
return 0;
case 0x1202:
return 0;
case 0x1203:
return 0;
case 0x1204:
return 0;
case 0x1205:
return 0;
case 0x1206:
return 0;
case 0x1207:
return 0;
case 0x1208:
return 0;
case 0x1209:
return 0;
case 0x120a:
return 0;
case 0x120b:
return 0;
case 0x120c:
return 0;
case 0x120d:
return 0;
case 0x120e:
return 0;
case 0x120f:
return 0;
case 0x1210:
return 0;
case 0x1211:
return 0;
case 0x1212:
return 0;
case 0x1213:
return 0;
case 0x1214:
return 0;
case 0x1215:
return 0;
case 0x1216:
return 0;
case 0x1217:
return 0;
case 0x1218:
return 0;
case 0x1219:
return 0;
case 0x121a:
return 0;
case 0x121b:
return 0;
case 0x121c:
return 0;
case 0x121d:
return 0;
case 0x121e:
return 0;
case 0x121f:
return 0;
case 0x1220:
return 0;
case 0x1221:
return 0;
case 0x1222:
return 0;
case 0x1223:
return 0;
case 0x1224:
return 0;
case 0x1225:
return 0;
case 0x1226:
return 0;
case 0x1227:
return 0;
case 0x1228:
return 0;
case 0x1229:
return 0;
case 0x122a:
return 0;
case 0x122b:
return 0;
case 0x122c:
return 0;
case 0x122d:
return 0;
case 0x122e:
return 0;
case 0x122f:
return 0;
case 0x1230:
return 0;
case 0x1231:
return 0;
case 0x1232:
return 0;
case 0x1233:
return 0;
case 0x1234:
return 0;
case 0x1235:
return 0;
case 0x1236:
return 0;
case 0x1237:
return 0;
case 0x1238:
return 0;
case 0x1239:
return 0;
case 0x123a:
return 0;
case 0x123b:
return 0;
case 0x123c:
return 0;
case 0x123d:
return 0;
case 0x123e:
return 0;
case 0x123f:
return 0;
case 0x1240:
return 0;
case 0x1241:
return 0;
case 0x1242:
return 0;
case 0x1243:
return 0;
case 0x1244:
return 0;
case 0x1245:
return 0;
case 0x1246:
return 0;
case 0x1247:
return 0;
case 0x1248:
return 0;
case 0x124a:
return 0;
case 0x124b:
return 0;
case 0x124c:
return 0;
case 0x124d:
return 0;
case 0x1250:
return 0;
case 0x1251:
return 0;
case 0x1252:
return 0;
case 0x1253:
return 0;
case 0x1254:
return 0;
case 0x1255:
return 0;
case 0x1256:
return 0;
case 0x1258:
return 0;
case 0x125a:
return 0;
case 0x125b:
return 0;
case 0x125c:
return 0;
case 0x125d:
return 0;
case 0x1260:
return 0;
case 0x1261:
return 0;
case 0x1262:
return 0;
case 0x1263:
return 0;
case 0x1264:
return 0;
case 0x1265:
return 0;
case 0x1266:
return 0;
case 0x1267:
return 0;
case 0x1268:
return 0;
case 0x1269:
return 0;
case 0x126a:
return 0;
case 0x126b:
return 0;
case 0x126c:
return 0;
case 0x126d:
return 0;
case 0x126e:
return 0;
case 0x126f:
return 0;
case 0x1270:
return 0;
case 0x1271:
return 0;
case 0x1272:
return 0;
case 0x1273:
return 0;
case 0x1274:
return 0;
case 0x1275:
return 0;
case 0x1276:
return 0;
case 0x1277:
return 0;
case 0x1278:
return 0;
case 0x1279:
return 0;
case 0x127a:
return 0;
case 0x127b:
return 0;
case 0x127c:
return 0;
case 0x127d:
return 0;
case 0x127e:
return 0;
case 0x127f:
return 0;
case 0x1280:
return 0;
case 0x1281:
return 0;
case 0x1282:
return 0;
case 0x1283:
return 0;
case 0x1284:
return 0;
case 0x1285:
return 0;
case 0x1286:
return 0;
case 0x1287:
return 0;
case 0x1288:
return 0;
case 0x128a:
return 0;
case 0x128b:
return 0;
case 0x128c:
return 0;
case 0x128d:
return 0;
case 0x1290:
return 0;
case 0x1291:
return 0;
case 0x1292:
return 0;
case 0x1293:
return 0;
case 0x1294:
return 0;
case 0x1295:
return 0;
case 0x1296:
return 0;
case 0x1297:
return 0;
case 0x1298:
return 0;
case 0x1299:
return 0;
case 0x129a:
return 0;
case 0x129b:
return 0;
case 0x129c:
return 0;
case 0x129d:
return 0;
case 0x129e:
return 0;
case 0x129f:
return 0;
case 0x12a0:
return 0;
case 0x12a1:
return 0;
case 0x12a2:
return 0;
case 0x12a3:
return 0;
case 0x12a4:
return 0;
case 0x12a5:
return 0;
case 0x12a6:
return 0;
case 0x12a7:
return 0;
case 0x12a8:
return 0;
case 0x12a9:
return 0;
case 0x12aa:
return 0;
case 0x12ab:
return 0;
case 0x12ac:
return 0;
case 0x12ad:
return 0;
case 0x12ae:
return 0;
case 0x12af:
return 0;
case 0x12b0:
return 0;
case 0x12b2:
return 0;
case 0x12b3:
return 0;
case 0x12b4:
return 0;
case 0x12b5:
return 0;
case 0x12b8:
return 0;
case 0x12b9:
return 0;
case 0x12ba:
return 0;
case 0x12bb:
return 0;
case 0x12bc:
return 0;
case 0x12bd:
return 0;
case 0x12be:
return 0;
case 0x12c0:
return 0;
case 0x12c2:
return 0;
case 0x12c3:
return 0;
case 0x12c4:
return 0;
case 0x12c5:
return 0;
case 0x12c8:
return 0;
case 0x12c9:
return 0;
case 0x12ca:
return 0;
case 0x12cb:
return 0;
case 0x12cc:
return 0;
case 0x12cd:
return 0;
case 0x12ce:
return 0;
case 0x12cf:
return 0;
case 0x12d0:
return 0;
case 0x12d1:
return 0;
case 0x12d2:
return 0;
case 0x12d3:
return 0;
case 0x12d4:
return 0;
case 0x12d5:
return 0;
case 0x12d6:
return 0;
case 0x12d8:
return 0;
case 0x12d9:
return 0;
case 0x12da:
return 0;
case 0x12db:
return 0;
case 0x12dc:
return 0;
case 0x12dd:
return 0;
case 0x12de:
return 0;
case 0x12df:
return 0;
case 0x12e0:
return 0;
case 0x12e1:
return 0;
case 0x12e2:
return 0;
case 0x12e3:
return 0;
case 0x12e4:
return 0;
case 0x12e5:
return 0;
case 0x12e6:
return 0;
case 0x12e7:
return 0;
case 0x12e8:
return 0;
case 0x12e9:
return 0;
case 0x12ea:
return 0;
case 0x12eb:
return 0;
case 0x12ec:
return 0;
case 0x12ed:
return 0;
case 0x12ee:
return 0;
case 0x12ef:
return 0;
case 0x12f0:
return 0;
case 0x12f1:
return 0;
case 0x12f2:
return 0;
case 0x12f3:
return 0;
case 0x12f4:
return 0;
case 0x12f5:
return 0;
case 0x12f6:
return 0;
case 0x12f7:
return 0;
case 0x12f8:
return 0;
case 0x12f9:
return 0;
case 0x12fa:
return 0;
case 0x12fb:
return 0;
case 0x12fc:
return 0;
case 0x12fd:
return 0;
case 0x12fe:
return 0;
case 0x12ff:
return 0;
case 0x1300:
return 0;
case 0x1301:
return 0;
case 0x1302:
return 0;
case 0x1303:
return 0;
case 0x1304:
return 0;
case 0x1305:
return 0;
case 0x1306:
return 0;
case 0x1307:
return 0;
case 0x1308:
return 0;
case 0x1309:
return 0;
case 0x130a:
return 0;
case 0x130b:
return 0;
case 0x130c:
return 0;
case 0x130d:
return 0;
case 0x130e:
return 0;
case 0x130f:
return 0;
case 0x1310:
return 0;
case 0x1312:
return 0;
case 0x1313:
return 0;
case 0x1314:
return 0;
case 0x1315:
return 0;
case 0x1318:
return 0;
case 0x1319:
return 0;
case 0x131a:
return 0;
case 0x131b:
return 0;
case 0x131c:
return 0;
case 0x131d:
return 0;
case 0x131e:
return 0;
case 0x131f:
return 0;
case 0x1320:
return 0;
case 0x1321:
return 0;
case 0x1322:
return 0;
case 0x1323:
return 0;
case 0x1324:
return 0;
case 0x1325:
return 0;
case 0x1326:
return 0;
case 0x1327:
return 0;
case 0x1328:
return 0;
case 0x1329:
return 0;
case 0x132a:
return 0;
case 0x132b:
return 0;
case 0x132c:
return 0;
case 0x132d:
return 0;
case 0x132e:
return 0;
case 0x132f:
return 0;
case 0x1330:
return 0;
case 0x1331:
return 0;
case 0x1332:
return 0;
case 0x1333:
return 0;
case 0x1334:
return 0;
case 0x1335:
return 0;
case 0x1336:
return 0;
case 0x1337:
return 0;
case 0x1338:
return 0;
case 0x1339:
return 0;
case 0x133a:
return 0;
case 0x133b:
return 0;
case 0x133c:
return 0;
case 0x133d:
return 0;
case 0x133e:
return 0;
case 0x133f:
return 0;
case 0x1340:
return 0;
case 0x1341:
return 0;
case 0x1342:
return 0;
case 0x1343:
return 0;
case 0x1344:
return 0;
case 0x1345:
return 0;
case 0x1346:
return 0;
case 0x1347:
return 0;
case 0x1348:
return 0;
case 0x1349:
return 0;
case 0x134a:
return 0;
case 0x134b:
return 0;
case 0x134c:
return 0;
case 0x134d:
return 0;
case 0x134e:
return 0;
case 0x134f:
return 0;
case 0x1350:
return 0;
case 0x1351:
return 0;
case 0x1352:
return 0;
case 0x1353:
return 0;
case 0x1354:
return 0;
case 0x1355:
return 0;
case 0x1356:
return 0;
case 0x1357:
return 0;
case 0x1358:
return 0;
case 0x1359:
return 0;
case 0x135a:
return 0;
case 0x1380:
return 0;
case 0x1381:
return 0;
case 0x1382:
return 0;
case 0x1383:
return 0;
case 0x1384:
return 0;
case 0x1385:
return 0;
case 0x1386:
return 0;
case 0x1387:
return 0;
case 0x1388:
return 0;
case 0x1389:
return 0;
case 0x138a:
return 0;
case 0x138b:
return 0;
case 0x138c:
return 0;
case 0x138d:
return 0;
case 0x138e:
return 0;
case 0x138f:
return 0;
case 0x13f8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13f0:
return 1;
}
}
return 0;
case 0x13f9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13f1:
return 1;
}
}
return 0;
case 0x13fa:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13f2:
return 1;
}
}
return 0;
case 0x13fb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13f3:
return 1;
}
}
return 0;
case 0x13fc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13f4:
return 1;
}
}
return 0;
case 0x13fd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13f5:
return 1;
}
}
return 0;
case 0x1401:
return 0;
case 0x1402:
return 0;
case 0x1403:
return 0;
case 0x1404:
return 0;
case 0x1405:
return 0;
case 0x1406:
return 0;
case 0x1407:
return 0;
case 0x1408:
return 0;
case 0x1409:
return 0;
case 0x140a:
return 0;
case 0x140b:
return 0;
case 0x140c:
return 0;
case 0x140d:
return 0;
case 0x140e:
return 0;
case 0x140f:
return 0;
case 0x1410:
return 0;
case 0x1411:
return 0;
case 0x1412:
return 0;
case 0x1413:
return 0;
case 0x1414:
return 0;
case 0x1415:
return 0;
case 0x1416:
return 0;
case 0x1417:
return 0;
case 0x1418:
return 0;
case 0x1419:
return 0;
case 0x141a:
return 0;
case 0x141b:
return 0;
case 0x141c:
return 0;
case 0x141d:
return 0;
case 0x141e:
return 0;
case 0x141f:
return 0;
case 0x1420:
return 0;
case 0x1421:
return 0;
case 0x1422:
return 0;
case 0x1423:
return 0;
case 0x1424:
return 0;
case 0x1425:
return 0;
case 0x1426:
return 0;
case 0x1427:
return 0;
case 0x1428:
return 0;
case 0x1429:
return 0;
case 0x142a:
return 0;
case 0x142b:
return 0;
case 0x142c:
return 0;
case 0x142d:
return 0;
case 0x142e:
return 0;
case 0x142f:
return 0;
case 0x1430:
return 0;
case 0x1431:
return 0;
case 0x1432:
return 0;
case 0x1433:
return 0;
case 0x1434:
return 0;
case 0x1435:
return 0;
case 0x1436:
return 0;
case 0x1437:
return 0;
case 0x1438:
return 0;
case 0x1439:
return 0;
case 0x143a:
return 0;
case 0x143b:
return 0;
case 0x143c:
return 0;
case 0x143d:
return 0;
case 0x143e:
return 0;
case 0x143f:
return 0;
case 0x1440:
return 0;
case 0x1441:
return 0;
case 0x1442:
return 0;
case 0x1443:
return 0;
case 0x1444:
return 0;
case 0x1445:
return 0;
case 0x1446:
return 0;
case 0x1447:
return 0;
case 0x1448:
return 0;
case 0x1449:
return 0;
case 0x144a:
return 0;
case 0x144b:
return 0;
case 0x144c:
return 0;
case 0x144d:
return 0;
case 0x144e:
return 0;
case 0x144f:
return 0;
case 0x1450:
return 0;
case 0x1451:
return 0;
case 0x1452:
return 0;
case 0x1453:
return 0;
case 0x1454:
return 0;
case 0x1455:
return 0;
case 0x1456:
return 0;
case 0x1457:
return 0;
case 0x1458:
return 0;
case 0x1459:
return 0;
case 0x145a:
return 0;
case 0x145b:
return 0;
case 0x145c:
return 0;
case 0x145d:
return 0;
case 0x145e:
return 0;
case 0x145f:
return 0;
case 0x1460:
return 0;
case 0x1461:
return 0;
case 0x1462:
return 0;
case 0x1463:
return 0;
case 0x1464:
return 0;
case 0x1465:
return 0;
case 0x1466:
return 0;
case 0x1467:
return 0;
case 0x1468:
return 0;
case 0x1469:
return 0;
case 0x146a:
return 0;
case 0x146b:
return 0;
case 0x146c:
return 0;
case 0x146d:
return 0;
case 0x146e:
return 0;
case 0x146f:
return 0;
case 0x1470:
return 0;
case 0x1471:
return 0;
case 0x1472:
return 0;
case 0x1473:
return 0;
case 0x1474:
return 0;
case 0x1475:
return 0;
case 0x1476:
return 0;
case 0x1477:
return 0;
case 0x1478:
return 0;
case 0x1479:
return 0;
case 0x147a:
return 0;
case 0x147b:
return 0;
case 0x147c:
return 0;
case 0x147d:
return 0;
case 0x147e:
return 0;
case 0x147f:
return 0;
case 0x1480:
return 0;
case 0x1481:
return 0;
case 0x1482:
return 0;
case 0x1483:
return 0;
case 0x1484:
return 0;
case 0x1485:
return 0;
case 0x1486:
return 0;
case 0x1487:
return 0;
case 0x1488:
return 0;
case 0x1489:
return 0;
case 0x148a:
return 0;
case 0x148b:
return 0;
case 0x148c:
return 0;
case 0x148d:
return 0;
case 0x148e:
return 0;
case 0x148f:
return 0;
case 0x1490:
return 0;
case 0x1491:
return 0;
case 0x1492:
return 0;
case 0x1493:
return 0;
case 0x1494:
return 0;
case 0x1495:
return 0;
case 0x1496:
return 0;
case 0x1497:
return 0;
case 0x1498:
return 0;
case 0x1499:
return 0;
case 0x149a:
return 0;
case 0x149b:
return 0;
case 0x149c:
return 0;
case 0x149d:
return 0;
case 0x149e:
return 0;
case 0x149f:
return 0;
case 0x14a0:
return 0;
case 0x14a1:
return 0;
case 0x14a2:
return 0;
case 0x14a3:
return 0;
case 0x14a4:
return 0;
case 0x14a5:
return 0;
case 0x14a6:
return 0;
case 0x14a7:
return 0;
case 0x14a8:
return 0;
case 0x14a9:
return 0;
case 0x14aa:
return 0;
case 0x14ab:
return 0;
case 0x14ac:
return 0;
case 0x14ad:
return 0;
case 0x14ae:
return 0;
case 0x14af:
return 0;
case 0x14b0:
return 0;
case 0x14b1:
return 0;
case 0x14b2:
return 0;
case 0x14b3:
return 0;
case 0x14b4:
return 0;
case 0x14b5:
return 0;
case 0x14b6:
return 0;
case 0x14b7:
return 0;
case 0x14b8:
return 0;
case 0x14b9:
return 0;
case 0x14ba:
return 0;
case 0x14bb:
return 0;
case 0x14bc:
return 0;
case 0x14bd:
return 0;
case 0x14be:
return 0;
case 0x14bf:
return 0;
case 0x14c0:
return 0;
case 0x14c1:
return 0;
case 0x14c2:
return 0;
case 0x14c3:
return 0;
case 0x14c4:
return 0;
case 0x14c5:
return 0;
case 0x14c6:
return 0;
case 0x14c7:
return 0;
case 0x14c8:
return 0;
case 0x14c9:
return 0;
case 0x14ca:
return 0;
case 0x14cb:
return 0;
case 0x14cc:
return 0;
case 0x14cd:
return 0;
case 0x14ce:
return 0;
case 0x14cf:
return 0;
case 0x14d0:
return 0;
case 0x14d1:
return 0;
case 0x14d2:
return 0;
case 0x14d3:
return 0;
case 0x14d4:
return 0;
case 0x14d5:
return 0;
case 0x14d6:
return 0;
case 0x14d7:
return 0;
case 0x14d8:
return 0;
case 0x14d9:
return 0;
case 0x14da:
return 0;
case 0x14db:
return 0;
case 0x14dc:
return 0;
case 0x14dd:
return 0;
case 0x14de:
return 0;
case 0x14df:
return 0;
case 0x14e0:
return 0;
case 0x14e1:
return 0;
case 0x14e2:
return 0;
case 0x14e3:
return 0;
case 0x14e4:
return 0;
case 0x14e5:
return 0;
case 0x14e6:
return 0;
case 0x14e7:
return 0;
case 0x14e8:
return 0;
case 0x14e9:
return 0;
case 0x14ea:
return 0;
case 0x14eb:
return 0;
case 0x14ec:
return 0;
case 0x14ed:
return 0;
case 0x14ee:
return 0;
case 0x14ef:
return 0;
case 0x14f0:
return 0;
case 0x14f1:
return 0;
case 0x14f2:
return 0;
case 0x14f3:
return 0;
case 0x14f4:
return 0;
case 0x14f5:
return 0;
case 0x14f6:
return 0;
case 0x14f7:
return 0;
case 0x14f8:
return 0;
case 0x14f9:
return 0;
case 0x14fa:
return 0;
case 0x14fb:
return 0;
case 0x14fc:
return 0;
case 0x14fd:
return 0;
case 0x14fe:
return 0;
case 0x14ff:
return 0;
case 0x1500:
return 0;
case 0x1501:
return 0;
case 0x1502:
return 0;
case 0x1503:
return 0;
case 0x1504:
return 0;
case 0x1505:
return 0;
case 0x1506:
return 0;
case 0x1507:
return 0;
case 0x1508:
return 0;
case 0x1509:
return 0;
case 0x150a:
return 0;
case 0x150b:
return 0;
case 0x150c:
return 0;
case 0x150d:
return 0;
case 0x150e:
return 0;
case 0x150f:
return 0;
case 0x1510:
return 0;
case 0x1511:
return 0;
case 0x1512:
return 0;
case 0x1513:
return 0;
case 0x1514:
return 0;
case 0x1515:
return 0;
case 0x1516:
return 0;
case 0x1517:
return 0;
case 0x1518:
return 0;
case 0x1519:
return 0;
case 0x151a:
return 0;
case 0x151b:
return 0;
case 0x151c:
return 0;
case 0x151d:
return 0;
case 0x151e:
return 0;
case 0x151f:
return 0;
case 0x1520:
return 0;
case 0x1521:
return 0;
case 0x1522:
return 0;
case 0x1523:
return 0;
case 0x1524:
return 0;
case 0x1525:
return 0;
case 0x1526:
return 0;
case 0x1527:
return 0;
case 0x1528:
return 0;
case 0x1529:
return 0;
case 0x152a:
return 0;
case 0x152b:
return 0;
case 0x152c:
return 0;
case 0x152d:
return 0;
case 0x152e:
return 0;
case 0x152f:
return 0;
case 0x1530:
return 0;
case 0x1531:
return 0;
case 0x1532:
return 0;
case 0x1533:
return 0;
case 0x1534:
return 0;
case 0x1535:
return 0;
case 0x1536:
return 0;
case 0x1537:
return 0;
case 0x1538:
return 0;
case 0x1539:
return 0;
case 0x153a:
return 0;
case 0x153b:
return 0;
case 0x153c:
return 0;
case 0x153d:
return 0;
case 0x153e:
return 0;
case 0x153f:
return 0;
case 0x1540:
return 0;
case 0x1541:
return 0;
case 0x1542:
return 0;
case 0x1543:
return 0;
case 0x1544:
return 0;
case 0x1545:
return 0;
case 0x1546:
return 0;
case 0x1547:
return 0;
case 0x1548:
return 0;
case 0x1549:
return 0;
case 0x154a:
return 0;
case 0x154b:
return 0;
case 0x154c:
return 0;
case 0x154d:
return 0;
case 0x154e:
return 0;
case 0x154f:
return 0;
case 0x1550:
return 0;
case 0x1551:
return 0;
case 0x1552:
return 0;
case 0x1553:
return 0;
case 0x1554:
return 0;
case 0x1555:
return 0;
case 0x1556:
return 0;
case 0x1557:
return 0;
case 0x1558:
return 0;
case 0x1559:
return 0;
case 0x155a:
return 0;
case 0x155b:
return 0;
case 0x155c:
return 0;
case 0x155d:
return 0;
case 0x155e:
return 0;
case 0x155f:
return 0;
case 0x1560:
return 0;
case 0x1561:
return 0;
case 0x1562:
return 0;
case 0x1563:
return 0;
case 0x1564:
return 0;
case 0x1565:
return 0;
case 0x1566:
return 0;
case 0x1567:
return 0;
case 0x1568:
return 0;
case 0x1569:
return 0;
case 0x156a:
return 0;
case 0x156b:
return 0;
case 0x156c:
return 0;
case 0x156d:
return 0;
case 0x156e:
return 0;
case 0x156f:
return 0;
case 0x1570:
return 0;
case 0x1571:
return 0;
case 0x1572:
return 0;
case 0x1573:
return 0;
case 0x1574:
return 0;
case 0x1575:
return 0;
case 0x1576:
return 0;
case 0x1577:
return 0;
case 0x1578:
return 0;
case 0x1579:
return 0;
case 0x157a:
return 0;
case 0x157b:
return 0;
case 0x157c:
return 0;
case 0x157d:
return 0;
case 0x157e:
return 0;
case 0x157f:
return 0;
case 0x1580:
return 0;
case 0x1581:
return 0;
case 0x1582:
return 0;
case 0x1583:
return 0;
case 0x1584:
return 0;
case 0x1585:
return 0;
case 0x1586:
return 0;
case 0x1587:
return 0;
case 0x1588:
return 0;
case 0x1589:
return 0;
case 0x158a:
return 0;
case 0x158b:
return 0;
case 0x158c:
return 0;
case 0x158d:
return 0;
case 0x158e:
return 0;
case 0x158f:
return 0;
case 0x1590:
return 0;
case 0x1591:
return 0;
case 0x1592:
return 0;
case 0x1593:
return 0;
case 0x1594:
return 0;
case 0x1595:
return 0;
case 0x1596:
return 0;
case 0x1597:
return 0;
case 0x1598:
return 0;
case 0x1599:
return 0;
case 0x159a:
return 0;
case 0x159b:
return 0;
case 0x159c:
return 0;
case 0x159d:
return 0;
case 0x159e:
return 0;
case 0x159f:
return 0;
case 0x15a0:
return 0;
case 0x15a1:
return 0;
case 0x15a2:
return 0;
case 0x15a3:
return 0;
case 0x15a4:
return 0;
case 0x15a5:
return 0;
case 0x15a6:
return 0;
case 0x15a7:
return 0;
case 0x15a8:
return 0;
case 0x15a9:
return 0;
case 0x15aa:
return 0;
case 0x15ab:
return 0;
case 0x15ac:
return 0;
case 0x15ad:
return 0;
case 0x15ae:
return 0;
case 0x15af:
return 0;
case 0x15b0:
return 0;
case 0x15b1:
return 0;
case 0x15b2:
return 0;
case 0x15b3:
return 0;
case 0x15b4:
return 0;
case 0x15b5:
return 0;
case 0x15b6:
return 0;
case 0x15b7:
return 0;
case 0x15b8:
return 0;
case 0x15b9:
return 0;
case 0x15ba:
return 0;
case 0x15bb:
return 0;
case 0x15bc:
return 0;
case 0x15bd:
return 0;
case 0x15be:
return 0;
case 0x15bf:
return 0;
case 0x15c0:
return 0;
case 0x15c1:
return 0;
case 0x15c2:
return 0;
case 0x15c3:
return 0;
case 0x15c4:
return 0;
case 0x15c5:
return 0;
case 0x15c6:
return 0;
case 0x15c7:
return 0;
case 0x15c8:
return 0;
case 0x15c9:
return 0;
case 0x15ca:
return 0;
case 0x15cb:
return 0;
case 0x15cc:
return 0;
case 0x15cd:
return 0;
case 0x15ce:
return 0;
case 0x15cf:
return 0;
case 0x15d0:
return 0;
case 0x15d1:
return 0;
case 0x15d2:
return 0;
case 0x15d3:
return 0;
case 0x15d4:
return 0;
case 0x15d5:
return 0;
case 0x15d6:
return 0;
case 0x15d7:
return 0;
case 0x15d8:
return 0;
case 0x15d9:
return 0;
case 0x15da:
return 0;
case 0x15db:
return 0;
case 0x15dc:
return 0;
case 0x15dd:
return 0;
case 0x15de:
return 0;
case 0x15df:
return 0;
case 0x15e0:
return 0;
case 0x15e1:
return 0;
case 0x15e2:
return 0;
case 0x15e3:
return 0;
case 0x15e4:
return 0;
case 0x15e5:
return 0;
case 0x15e6:
return 0;
case 0x15e7:
return 0;
case 0x15e8:
return 0;
case 0x15e9:
return 0;
case 0x15ea:
return 0;
case 0x15eb:
return 0;
case 0x15ec:
return 0;
case 0x15ed:
return 0;
case 0x15ee:
return 0;
case 0x15ef:
return 0;
case 0x15f0:
return 0;
case 0x15f1:
return 0;
case 0x15f2:
return 0;
case 0x15f3:
return 0;
case 0x15f4:
return 0;
case 0x15f5:
return 0;
case 0x15f6:
return 0;
case 0x15f7:
return 0;
case 0x15f8:
return 0;
case 0x15f9:
return 0;
case 0x15fa:
return 0;
case 0x15fb:
return 0;
case 0x15fc:
return 0;
case 0x15fd:
return 0;
case 0x15fe:
return 0;
case 0x15ff:
return 0;
case 0x1600:
return 0;
case 0x1601:
return 0;
case 0x1602:
return 0;
case 0x1603:
return 0;
case 0x1604:
return 0;
case 0x1605:
return 0;
case 0x1606:
return 0;
case 0x1607:
return 0;
case 0x1608:
return 0;
case 0x1609:
return 0;
case 0x160a:
return 0;
case 0x160b:
return 0;
case 0x160c:
return 0;
case 0x160d:
return 0;
case 0x160e:
return 0;
case 0x160f:
return 0;
case 0x1610:
return 0;
case 0x1611:
return 0;
case 0x1612:
return 0;
case 0x1613:
return 0;
case 0x1614:
return 0;
case 0x1615:
return 0;
case 0x1616:
return 0;
case 0x1617:
return 0;
case 0x1618:
return 0;
case 0x1619:
return 0;
case 0x161a:
return 0;
case 0x161b:
return 0;
case 0x161c:
return 0;
case 0x161d:
return 0;
case 0x161e:
return 0;
case 0x161f:
return 0;
case 0x1620:
return 0;
case 0x1621:
return 0;
case 0x1622:
return 0;
case 0x1623:
return 0;
case 0x1624:
return 0;
case 0x1625:
return 0;
case 0x1626:
return 0;
case 0x1627:
return 0;
case 0x1628:
return 0;
case 0x1629:
return 0;
case 0x162a:
return 0;
case 0x162b:
return 0;
case 0x162c:
return 0;
case 0x162d:
return 0;
case 0x162e:
return 0;
case 0x162f:
return 0;
case 0x1630:
return 0;
case 0x1631:
return 0;
case 0x1632:
return 0;
case 0x1633:
return 0;
case 0x1634:
return 0;
case 0x1635:
return 0;
case 0x1636:
return 0;
case 0x1637:
return 0;
case 0x1638:
return 0;
case 0x1639:
return 0;
case 0x163a:
return 0;
case 0x163b:
return 0;
case 0x163c:
return 0;
case 0x163d:
return 0;
case 0x163e:
return 0;
case 0x163f:
return 0;
case 0x1640:
return 0;
case 0x1641:
return 0;
case 0x1642:
return 0;
case 0x1643:
return 0;
case 0x1644:
return 0;
case 0x1645:
return 0;
case 0x1646:
return 0;
case 0x1647:
return 0;
case 0x1648:
return 0;
case 0x1649:
return 0;
case 0x164a:
return 0;
case 0x164b:
return 0;
case 0x164c:
return 0;
case 0x164d:
return 0;
case 0x164e:
return 0;
case 0x164f:
return 0;
case 0x1650:
return 0;
case 0x1651:
return 0;
case 0x1652:
return 0;
case 0x1653:
return 0;
case 0x1654:
return 0;
case 0x1655:
return 0;
case 0x1656:
return 0;
case 0x1657:
return 0;
case 0x1658:
return 0;
case 0x1659:
return 0;
case 0x165a:
return 0;
case 0x165b:
return 0;
case 0x165c:
return 0;
case 0x165d:
return 0;
case 0x165e:
return 0;
case 0x165f:
return 0;
case 0x1660:
return 0;
case 0x1661:
return 0;
case 0x1662:
return 0;
case 0x1663:
return 0;
case 0x1664:
return 0;
case 0x1665:
return 0;
case 0x1666:
return 0;
case 0x1667:
return 0;
case 0x1668:
return 0;
case 0x1669:
return 0;
case 0x166a:
return 0;
case 0x166b:
return 0;
case 0x166c:
return 0;
case 0x166f:
return 0;
case 0x1670:
return 0;
case 0x1671:
return 0;
case 0x1672:
return 0;
case 0x1673:
return 0;
case 0x1674:
return 0;
case 0x1675:
return 0;
case 0x1676:
return 0;
case 0x1677:
return 0;
case 0x1678:
return 0;
case 0x1679:
return 0;
case 0x167a:
return 0;
case 0x167b:
return 0;
case 0x167c:
return 0;
case 0x167d:
return 0;
case 0x167e:
return 0;
case 0x167f:
return 0;
case 0x1681:
return 0;
case 0x1682:
return 0;
case 0x1683:
return 0;
case 0x1684:
return 0;
case 0x1685:
return 0;
case 0x1686:
return 0;
case 0x1687:
return 0;
case 0x1688:
return 0;
case 0x1689:
return 0;
case 0x168a:
return 0;
case 0x168b:
return 0;
case 0x168c:
return 0;
case 0x168d:
return 0;
case 0x168e:
return 0;
case 0x168f:
return 0;
case 0x1690:
return 0;
case 0x1691:
return 0;
case 0x1692:
return 0;
case 0x1693:
return 0;
case 0x1694:
return 0;
case 0x1695:
return 0;
case 0x1696:
return 0;
case 0x1697:
return 0;
case 0x1698:
return 0;
case 0x1699:
return 0;
case 0x169a:
return 0;
case 0x16a0:
return 0;
case 0x16a2:
return 0;
case 0x16a3:
return 0;
case 0x16a6:
return 0;
case 0x16a8:
return 0;
case 0x16aa:
return 0;
case 0x16ab:
return 0;
case 0x16af:
return 0;
case 0x16b0:
return 0;
case 0x16b1:
return 0;
case 0x16b2:
return 0;
case 0x16b7:
return 0;
case 0x16b8:
return 0;
case 0x16b9:
return 0;
case 0x16ba:
return 0;
case 0x16be:
return 0;
case 0x16c1:
return 0;
case 0x16c3:
return 0;
case 0x16c5:
return 0;
case 0x16c7:
return 0;
case 0x16c8:
return 0;
case 0x16c9:
return 0;
case 0x16ca:
return 0;
case 0x16cf:
return 0;
case 0x16d2:
return 0;
case 0x16d6:
return 0;
case 0x16d7:
return 0;
case 0x16da:
return 0;
case 0x16dc:
return 0;
case 0x16de:
return 0;
case 0x16df:
return 0;
case 0x16e0:
return 0;
case 0x16e1:
return 0;
case 0x16e2:
return 0;
case 0x16e3:
return 0;
case 0x16e4:
return 0;
case 0x16e5:
return 0;
case 0x16e6:
return 0;
case 0x16f1:
return 0;
case 0x16f2:
return 0;
case 0x16f3:
return 0;
case 0x16f4:
return 0;
case 0x16f5:
return 0;
case 0x16f6:
return 0;
case 0x16f7:
return 0;
case 0x16f8:
return 0;
case 0x1700:
return 0;
case 0x1701:
return 0;
case 0x1702:
return 0;
case 0x1703:
return 0;
case 0x1704:
return 0;
case 0x1705:
return 0;
case 0x1706:
return 0;
case 0x1707:
return 0;
case 0x1708:
return 0;
case 0x1709:
return 0;
case 0x170a:
return 0;
case 0x170b:
return 0;
case 0x170c:
return 0;
case 0x170e:
return 0;
case 0x170f:
return 0;
case 0x1710:
return 0;
case 0x1711:
return 0;
case 0x1712:
return 0;
case 0x1713:
return 0;
case 0x1714:
return 0;
case 0x1720:
return 0;
case 0x1721:
return 0;
case 0x1722:
return 0;
case 0x1723:
return 0;
case 0x1724:
return 0;
case 0x1725:
return 0;
case 0x1726:
return 0;
case 0x1727:
return 0;
case 0x1728:
return 0;
case 0x1729:
return 0;
case 0x172a:
return 0;
case 0x172b:
return 0;
case 0x172c:
return 0;
case 0x172d:
return 0;
case 0x172e:
return 0;
case 0x172f:
return 0;
case 0x1730:
return 0;
case 0x1731:
return 0;
case 0x1732:
return 0;
case 0x1733:
return 0;
case 0x1734:
return 0;
case 0x1740:
return 0;
case 0x1741:
return 0;
case 0x1742:
return 0;
case 0x1743:
return 0;
case 0x1744:
return 0;
case 0x1745:
return 0;
case 0x1746:
return 0;
case 0x1747:
return 0;
case 0x1748:
return 0;
case 0x1749:
return 0;
case 0x174a:
return 0;
case 0x174b:
return 0;
case 0x174c:
return 0;
case 0x174d:
return 0;
case 0x174e:
return 0;
case 0x174f:
return 0;
case 0x1750:
return 0;
case 0x1751:
return 0;
case 0x1752:
return 0;
case 0x1753:
return 0;
case 0x1760:
return 0;
case 0x1761:
return 0;
case 0x1762:
return 0;
case 0x1763:
return 0;
case 0x1764:
return 0;
case 0x1765:
return 0;
case 0x1766:
return 0;
case 0x1767:
return 0;
case 0x1768:
return 0;
case 0x1769:
return 0;
case 0x176a:
return 0;
case 0x176b:
return 0;
case 0x176c:
return 0;
case 0x176e:
return 0;
case 0x176f:
return 0;
case 0x1770:
return 0;
case 0x1772:
return 0;
case 0x1773:
return 0;
case 0x1780:
return 0;
case 0x1781:
return 0;
case 0x1782:
return 0;
case 0x1783:
return 0;
case 0x1784:
return 0;
case 0x1785:
return 0;
case 0x1786:
return 0;
case 0x1787:
return 0;
case 0x1788:
return 0;
case 0x1789:
return 0;
case 0x178a:
return 0;
case 0x178b:
return 0;
case 0x178c:
return 0;
case 0x178d:
return 0;
case 0x178e:
return 0;
case 0x178f:
return 0;
case 0x1790:
return 0;
case 0x1791:
return 0;
case 0x1792:
return 0;
case 0x1793:
return 0;
case 0x1794:
return 0;
case 0x1795:
return 0;
case 0x1796:
return 0;
case 0x1797:
return 0;
case 0x1798:
return 0;
case 0x1799:
return 0;
case 0x179a:
return 0;
case 0x179b:
return 0;
case 0x179c:
return 0;
case 0x179d:
return 0;
case 0x179e:
return 0;
case 0x179f:
return 0;
case 0x17a0:
return 0;
case 0x17a1:
return 0;
case 0x17a2:
return 0;
case 0x17a3:
return 0;
case 0x17a4:
return 0;
case 0x17a5:
return 0;
case 0x17a6:
return 0;
case 0x17a7:
return 0;
case 0x17a8:
return 0;
case 0x17a9:
return 0;
case 0x17aa:
return 0;
case 0x17ab:
return 0;
case 0x17ac:
return 0;
case 0x17ad:
return 0;
case 0x17ae:
return 0;
case 0x17af:
return 0;
case 0x17b0:
return 0;
case 0x17b1:
return 0;
case 0x17b2:
return 0;
case 0x17b3:
return 0;
case 0x17b6:
return 0;
case 0x17b7:
return 0;
case 0x17b8:
return 0;
case 0x17b9:
return 0;
case 0x17ba:
return 0;
case 0x17bb:
return 0;
case 0x17bc:
return 0;
case 0x17bd:
return 0;
case 0x17be:
return 0;
case 0x17bf:
return 0;
case 0x17c0:
return 0;
case 0x17c1:
return 0;
case 0x17c2:
return 0;
case 0x17c3:
return 0;
case 0x17c4:
return 0;
case 0x17c5:
return 0;
case 0x17d2:
return 0;
case 0x17dc:
return 0;
case 0x1820:
return 0;
case 0x1821:
return 0;
case 0x1822:
return 0;
case 0x1823:
return 0;
case 0x1824:
return 0;
case 0x1825:
return 0;
case 0x1826:
return 0;
case 0x1827:
return 0;
case 0x1828:
return 0;
case 0x1829:
return 0;
case 0x182a:
return 0;
case 0x182b:
return 0;
case 0x182c:
return 0;
case 0x182d:
return 0;
case 0x182e:
return 0;
case 0x182f:
return 0;
case 0x1830:
return 0;
case 0x1831:
return 0;
case 0x1832:
return 0;
case 0x1833:
return 0;
case 0x1834:
return 0;
case 0x1835:
return 0;
case 0x1836:
return 0;
case 0x1837:
return 0;
case 0x1838:
return 0;
case 0x1839:
return 0;
case 0x183a:
return 0;
case 0x183b:
return 0;
case 0x183c:
return 0;
case 0x183d:
return 0;
case 0x183e:
return 0;
case 0x183f:
return 0;
case 0x1840:
return 0;
case 0x1841:
return 0;
case 0x1842:
return 0;
case 0x1843:
return 0;
case 0x1844:
return 0;
case 0x1845:
return 0;
case 0x1846:
return 0;
case 0x1847:
return 0;
case 0x1848:
return 0;
case 0x1849:
return 0;
case 0x184a:
return 0;
case 0x184b:
return 0;
case 0x184c:
return 0;
case 0x184d:
return 0;
case 0x184e:
return 0;
case 0x184f:
return 0;
case 0x1850:
return 0;
case 0x1851:
return 0;
case 0x1852:
return 0;
case 0x1853:
return 0;
case 0x1854:
return 0;
case 0x1855:
return 0;
case 0x1856:
return 0;
case 0x1857:
return 0;
case 0x1858:
return 0;
case 0x1859:
return 0;
case 0x185a:
return 0;
case 0x185b:
return 0;
case 0x185c:
return 0;
case 0x185d:
return 0;
case 0x185e:
return 0;
case 0x185f:
return 0;
case 0x1860:
return 0;
case 0x1861:
return 0;
case 0x1862:
return 0;
case 0x1863:
return 0;
case 0x1864:
return 0;
case 0x1865:
return 0;
case 0x1866:
return 0;
case 0x1867:
return 0;
case 0x1868:
return 0;
case 0x1869:
return 0;
case 0x186a:
return 0;
case 0x186b:
return 0;
case 0x186c:
return 0;
case 0x186d:
return 0;
case 0x186e:
return 0;
case 0x186f:
return 0;
case 0x1870:
return 0;
case 0x1871:
return 0;
case 0x1872:
return 0;
case 0x1873:
return 0;
case 0x1874:
return 0;
case 0x1875:
return 0;
case 0x1876:
return 0;
case 0x1877:
return 0;
case 0x1880:
return 0;
case 0x1881:
return 0;
case 0x1882:
return 0;
case 0x1883:
return 0;
case 0x1884:
return 0;
case 0x1885:
return 0;
case 0x1886:
return 0;
case 0x1887:
return 0;
case 0x1888:
return 0;
case 0x1889:
return 0;
case 0x188a:
return 0;
case 0x188b:
return 0;
case 0x188c:
return 0;
case 0x188d:
return 0;
case 0x188e:
return 0;
case 0x188f:
return 0;
case 0x1890:
return 0;
case 0x1891:
return 0;
case 0x1892:
return 0;
case 0x1893:
return 0;
case 0x1894:
return 0;
case 0x1895:
return 0;
case 0x1896:
return 0;
case 0x1897:
return 0;
case 0x1898:
return 0;
case 0x1899:
return 0;
case 0x189a:
return 0;
case 0x189b:
return 0;
case 0x189c:
return 0;
case 0x189d:
return 0;
case 0x189e:
return 0;
case 0x189f:
return 0;
case 0x18a0:
return 0;
case 0x18a1:
return 0;
case 0x18a2:
return 0;
case 0x18a3:
return 0;
case 0x18a4:
return 0;
case 0x18a5:
return 0;
case 0x18a6:
return 0;
case 0x18a7:
return 0;
case 0x18a8:
return 0;
case 0x18a9:
return 0;
case 0x18aa:
return 0;
case 0x18b0:
return 0;
case 0x18b1:
return 0;
case 0x18b2:
return 0;
case 0x18b3:
return 0;
case 0x18b4:
return 0;
case 0x18b5:
return 0;
case 0x18b6:
return 0;
case 0x18b7:
return 0;
case 0x18b8:
return 0;
case 0x18b9:
return 0;
case 0x18ba:
return 0;
case 0x18bb:
return 0;
case 0x18bc:
return 0;
case 0x18bd:
return 0;
case 0x18be:
return 0;
case 0x18bf:
return 0;
case 0x18c0:
return 0;
case 0x18c1:
return 0;
case 0x18c2:
return 0;
case 0x18c3:
return 0;
case 0x18c4:
return 0;
case 0x18c5:
return 0;
case 0x18c6:
return 0;
case 0x18c7:
return 0;
case 0x18c8:
return 0;
case 0x18c9:
return 0;
case 0x18ca:
return 0;
case 0x18cb:
return 0;
case 0x18cc:
return 0;
case 0x18cd:
return 0;
case 0x18ce:
return 0;
case 0x18cf:
return 0;
case 0x18d0:
return 0;
case 0x18d1:
return 0;
case 0x18d2:
return 0;
case 0x18d3:
return 0;
case 0x18d4:
return 0;
case 0x18d5:
return 0;
case 0x18d6:
return 0;
case 0x18d7:
return 0;
case 0x18d8:
return 0;
case 0x18d9:
return 0;
case 0x18da:
return 0;
case 0x18db:
return 0;
case 0x18dc:
return 0;
case 0x18dd:
return 0;
case 0x18de:
return 0;
case 0x18df:
return 0;
case 0x18e0:
return 0;
case 0x18e1:
return 0;
case 0x18e2:
return 0;
case 0x18e3:
return 0;
case 0x18e4:
return 0;
case 0x18e5:
return 0;
case 0x18e6:
return 0;
case 0x18e7:
return 0;
case 0x18e8:
return 0;
case 0x18e9:
return 0;
case 0x18ea:
return 0;
case 0x18eb:
return 0;
case 0x18ec:
return 0;
case 0x18ed:
return 0;
case 0x18ee:
return 0;
case 0x18ef:
return 0;
case 0x18f0:
return 0;
case 0x18f1:
return 0;
case 0x18f2:
return 0;
case 0x18f3:
return 0;
case 0x18f4:
return 0;
case 0x18f5:
return 0;
case 0x1900:
return 0;
case 0x1901:
return 0;
case 0x1902:
return 0;
case 0x1903:
return 0;
case 0x1904:
return 0;
case 0x1905:
return 0;
case 0x1906:
return 0;
case 0x1907:
return 0;
case 0x1908:
return 0;
case 0x1909:
return 0;
case 0x190a:
return 0;
case 0x190b:
return 0;
case 0x190c:
return 0;
case 0x190d:
return 0;
case 0x190e:
return 0;
case 0x190f:
return 0;
case 0x1910:
return 0;
case 0x1911:
return 0;
case 0x1912:
return 0;
case 0x1913:
return 0;
case 0x1914:
return 0;
case 0x1915:
return 0;
case 0x1916:
return 0;
case 0x1917:
return 0;
case 0x1918:
return 0;
case 0x1919:
return 0;
case 0x191a:
return 0;
case 0x191b:
return 0;
case 0x191c:
return 0;
case 0x1920:
return 0;
case 0x1921:
return 0;
case 0x1922:
return 0;
case 0x1923:
return 0;
case 0x1924:
return 0;
case 0x1925:
return 0;
case 0x1926:
return 0;
case 0x1927:
return 0;
case 0x1928:
return 0;
case 0x1929:
return 0;
case 0x192a:
return 0;
case 0x192b:
return 0;
case 0x1930:
return 0;
case 0x1931:
return 0;
case 0x1932:
return 0;
case 0x1933:
return 0;
case 0x1934:
return 0;
case 0x1935:
return 0;
case 0x1936:
return 0;
case 0x1937:
return 0;
case 0x1938:
return 0;
case 0x1950:
return 0;
case 0x1951:
return 0;
case 0x1952:
return 0;
case 0x1953:
return 0;
case 0x1954:
return 0;
case 0x1955:
return 0;
case 0x1956:
return 0;
case 0x1957:
return 0;
case 0x1958:
return 0;
case 0x1959:
return 0;
case 0x195a:
return 0;
case 0x195b:
return 0;
case 0x195c:
return 0;
case 0x195d:
return 0;
case 0x195e:
return 0;
case 0x195f:
return 0;
case 0x1960:
return 0;
case 0x1961:
return 0;
case 0x1962:
return 0;
case 0x1963:
return 0;
case 0x1964:
return 0;
case 0x1965:
return 0;
case 0x1966:
return 0;
case 0x1967:
return 0;
case 0x1968:
return 0;
case 0x1969:
return 0;
case 0x196a:
return 0;
case 0x196b:
return 0;
case 0x196c:
return 0;
case 0x196d:
return 0;
case 0x1970:
return 0;
case 0x1971:
return 0;
case 0x1972:
return 0;
case 0x1973:
return 0;
case 0x1974:
return 0;
case 0x1980:
return 0;
case 0x1981:
return 0;
case 0x1982:
return 0;
case 0x1983:
return 0;
case 0x1984:
return 0;
case 0x1985:
return 0;
case 0x1986:
return 0;
case 0x1987:
return 0;
case 0x1988:
return 0;
case 0x1989:
return 0;
case 0x198a:
return 0;
case 0x198b:
return 0;
case 0x198c:
return 0;
case 0x198d:
return 0;
case 0x198e:
return 0;
case 0x198f:
return 0;
case 0x1990:
return 0;
case 0x1991:
return 0;
case 0x1992:
return 0;
case 0x1993:
return 0;
case 0x1994:
return 0;
case 0x1995:
return 0;
case 0x1996:
return 0;
case 0x1997:
return 0;
case 0x1998:
return 0;
case 0x1999:
return 0;
case 0x199a:
return 0;
case 0x199b:
return 0;
case 0x199c:
return 0;
case 0x199d:
return 0;
case 0x199e:
return 0;
case 0x199f:
return 0;
case 0x19a0:
return 0;
case 0x19a1:
return 0;
case 0x19a2:
return 0;
case 0x19a3:
return 0;
case 0x19a4:
return 0;
case 0x19a5:
return 0;
case 0x19a6:
return 0;
case 0x19a7:
return 0;
case 0x19a8:
return 0;
case 0x19a9:
return 0;
case 0x19aa:
return 0;
case 0x19ab:
return 0;
case 0x19b0:
return 0;
case 0x19b1:
return 0;
case 0x19b2:
return 0;
case 0x19b3:
return 0;
case 0x19b4:
return 0;
case 0x19b5:
return 0;
case 0x19b6:
return 0;
case 0x19b7:
return 0;
case 0x19b8:
return 0;
case 0x19b9:
return 0;
case 0x19ba:
return 0;
case 0x19bb:
return 0;
case 0x19bc:
return 0;
case 0x19bd:
return 0;
case 0x19be:
return 0;
case 0x19bf:
return 0;
case 0x19c0:
return 0;
case 0x19c1:
return 0;
case 0x19c2:
return 0;
case 0x19c3:
return 0;
case 0x19c4:
return 0;
case 0x19c5:
return 0;
case 0x19c6:
return 0;
case 0x19c7:
return 0;
case 0x19c8:
return 0;
case 0x19c9:
return 0;
case 0x1a00:
return 0;
case 0x1a01:
return 0;
case 0x1a02:
return 0;
case 0x1a03:
return 0;
case 0x1a04:
return 0;
case 0x1a05:
return 0;
case 0x1a06:
return 0;
case 0x1a07:
return 0;
case 0x1a08:
return 0;
case 0x1a09:
return 0;
case 0x1a0a:
return 0;
case 0x1a0b:
return 0;
case 0x1a0c:
return 0;
case 0x1a0d:
return 0;
case 0x1a0e:
return 0;
case 0x1a0f:
return 0;
case 0x1a10:
return 0;
case 0x1a11:
return 0;
case 0x1a12:
return 0;
case 0x1a13:
return 0;
case 0x1a14:
return 0;
case 0x1a15:
return 0;
case 0x1a16:
return 0;
case 0x1a17:
return 0;
case 0x1a18:
return 0;
case 0x1a19:
return 0;
case 0x1a1a:
return 0;
case 0x1a1b:
return 0;
case 0x1a20:
return 0;
case 0x1a21:
return 0;
case 0x1a22:
return 0;
case 0x1a23:
return 0;
case 0x1a24:
return 0;
case 0x1a25:
return 0;
case 0x1a26:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a58:
return 1;
}
}
return 0;
case 0x1a27:
return 0;
case 0x1a28:
return 0;
case 0x1a29:
return 0;
case 0x1a2a:
return 0;
case 0x1a2b:
return 0;
case 0x1a2c:
return 0;
case 0x1a2d:
return 0;
case 0x1a2e:
return 0;
case 0x1a2f:
return 0;
case 0x1a30:
return 0;
case 0x1a31:
return 0;
case 0x1a32:
return 0;
case 0x1a33:
return 0;
case 0x1a34:
return 0;
case 0x1a35:
return 0;
case 0x1a36:
return 0;
case 0x1a37:
return 0;
case 0x1a38:
return 0;
case 0x1a39:
return 0;
case 0x1a3a:
return 0;
case 0x1a3b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a5a:
return 1;
}
}
return 0;
case 0x1a3c:
return 0;
case 0x1a3d:
return 0;
case 0x1a3e:
return 0;
case 0x1a3f:
return 0;
case 0x1a40:
return 0;
case 0x1a41:
return 0;
case 0x1a42:
return 0;
case 0x1a43:
return 0;
case 0x1a44:
return 0;
case 0x1a45:
return 0;
case 0x1a46:
return 0;
case 0x1a47:
return 0;
case 0x1a48:
return 0;
case 0x1a49:
return 0;
case 0x1a4a:
return 0;
case 0x1a4b:
return 0;
case 0x1a4c:
return 0;
case 0x1a4d:
return 0;
case 0x1a4e:
return 0;
case 0x1a4f:
return 0;
case 0x1a50:
return 0;
case 0x1a51:
return 0;
case 0x1a52:
return 0;
case 0x1a53:
return 0;
case 0x1a55:
return 0;
case 0x1a56:
return 0;
case 0x1a57:
return 0;
case 0x1a5c:
return 0;
case 0x1a5d:
return 0;
case 0x1a5e:
return 0;
case 0x1a60:
return 0;
case 0x1a61:
return 0;
case 0x1a62:
return 0;
case 0x1a63:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1a64:
return 1;
}
}
return 0;
case 0x1a65:
return 0;
case 0x1a66:
return 0;
case 0x1a67:
return 0;
case 0x1a68:
return 0;
case 0x1a69:
return 0;
case 0x1a6a:
return 0;
case 0x1a6b:
return 0;
case 0x1a6c:
return 0;
case 0x1a6d:
return 0;
case 0x1a6e:
return 0;
case 0x1a6f:
return 0;
case 0x1a70:
return 0;
case 0x1a71:
return 0;
case 0x1a72:
return 0;
case 0x1a73:
return 0;
case 0x1b05:
return 0;
case 0x1b07:
return 0;
case 0x1b09:
return 0;
case 0x1b0b:
return 0;
case 0x1b0d:
return 0;
case 0x1b0f:
return 0;
case 0x1b10:
return 0;
case 0x1b11:
return 0;
case 0x1b13:
return 0;
case 0x1b14:
return 0;
case 0x1b15:
return 0;
case 0x1b16:
return 0;
case 0x1b17:
return 0;
case 0x1b18:
return 0;
case 0x1b19:
return 0;
case 0x1b1a:
return 0;
case 0x1b1b:
return 0;
case 0x1b1c:
return 0;
case 0x1b1d:
return 0;
case 0x1b1e:
return 0;
case 0x1b1f:
return 0;
case 0x1b20:
return 0;
case 0x1b21:
return 0;
case 0x1b22:
return 0;
case 0x1b23:
return 0;
case 0x1b24:
return 0;
case 0x1b25:
return 0;
case 0x1b26:
return 0;
case 0x1b27:
return 0;
case 0x1b28:
return 0;
case 0x1b29:
return 0;
case 0x1b2a:
return 0;
case 0x1b2b:
return 0;
case 0x1b2c:
return 0;
case 0x1b2d:
return 0;
case 0x1b2e:
return 0;
case 0x1b2f:
return 0;
case 0x1b30:
return 0;
case 0x1b31:
return 0;
case 0x1b32:
return 0;
case 0x1b33:
return 0;
case 0x1b35:
return 0;
case 0x1b36:
return 0;
case 0x1b37:
return 0;
case 0x1b38:
return 0;
case 0x1b39:
return 0;
case 0x1b3a:
return 0;
case 0x1b3c:
return 0;
case 0x1b3e:
return 0;
case 0x1b3f:
return 0;
case 0x1b42:
return 0;
case 0x1b44:
return 0;
case 0x1b45:
return 0;
case 0x1b46:
return 0;
case 0x1b47:
return 0;
case 0x1b48:
return 0;
case 0x1b49:
return 0;
case 0x1b4a:
return 0;
case 0x1b4b:
return 0;
case 0x1b83:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bba:
return 1;
}
}
return 0;
case 0x1b84:
return 0;
case 0x1b85:
return 0;
case 0x1b86:
return 0;
case 0x1b87:
return 0;
case 0x1b88:
return 0;
case 0x1b89:
return 0;
case 0x1b8a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bbe:
return 1;
}
}
return 0;
case 0x1b8b:
return 0;
case 0x1b8c:
return 0;
case 0x1b8d:
return 0;
case 0x1b8e:
return 0;
case 0x1b8f:
return 0;
case 0x1b90:
return 0;
case 0x1b91:
return 0;
case 0x1b92:
return 0;
case 0x1b93:
return 0;
case 0x1b94:
return 0;
case 0x1b95:
return 0;
case 0x1b96:
return 0;
case 0x1b97:
return 0;
case 0x1b98:
return 0;
case 0x1b99:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bbf:
return 1;
}
}
return 0;
case 0x1b9a:
return 0;
case 0x1b9b:
return 0;
case 0x1b9c:
return 0;
case 0x1b9d:
return 0;
case 0x1b9e:
return 0;
case 0x1b9f:
return 0;
case 0x1ba0:
return 0;
case 0x1ba1:
return 0;
case 0x1ba2:
return 0;
case 0x1ba3:
return 0;
case 0x1ba4:
return 0;
case 0x1ba5:
return 0;
case 0x1ba6:
return 0;
case 0x1ba7:
return 0;
case 0x1ba8:
return 0;
case 0x1ba9:
return 0;
case 0x1baa:
return 0;
case 0x1bab:
return 0;
case 0x1bac:
return 0;
case 0x1bad:
return 0;
case 0x1bae:
return 0;
case 0x1baf:
return 0;
case 0x1bbb:
return 0;
case 0x1bbc:
return 0;
case 0x1bbd:
return 0;
case 0x1bc0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bc1:
return 1;
}
}
return 0;
case 0x1bc2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bc3:
return 1;
}
}
return 0;
case 0x1bc5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bc6:
return 1;
}
}
return 0;
case 0x1bc7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bc8:
return 1;
}
}
return 0;
case 0x1bc9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bca:
return 1;
}
}
return 0;
case 0x1bcb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bcc:
return 1;
}
}
return 0;
case 0x1bce:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bcf:
return 1;
}
}
return 0;
case 0x1bd0:
return 0;
case 0x1bd1:
return 0;
case 0x1bd2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bd3:
return 1;
}
}
return 0;
case 0x1bd4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bd5:
return 1;
}
}
return 0;
case 0x1bd6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bd7:
return 1;
}
}
return 0;
case 0x1bd8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bd9:
return 1;
}
}
return 0;
case 0x1bdb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bdc:
return 1;
}
}
return 0;
case 0x1bdd:
return 0;
case 0x1bde:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bdf:
return 1;
}
}
return 0;
case 0x1be0:
return 0;
case 0x1be1:
return 0;
case 0x1be2:
return 0;
case 0x1be3:
return 0;
case 0x1be4:
return 0;
case 0x1be5:
return 0;
case 0x1be7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1be8:
return 1;
}
}
return 0;
case 0x1be9:
return 0;
case 0x1bea:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1beb:
return 1;
}
}
return 0;
case 0x1bec:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bed:
return 1;
}
}
return 0;
case 0x1bee:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1bef:
return 1;
}
}
return 0;
case 0x1bf0:
return 0;
case 0x1bf1:
return 0;
case 0x1bf2:
return 0;
case 0x1bf3:
return 0;
case 0x1c00:
return 0;
case 0x1c01:
return 0;
case 0x1c02:
return 0;
case 0x1c03:
return 0;
case 0x1c04:
return 0;
case 0x1c05:
return 0;
case 0x1c06:
return 0;
case 0x1c07:
return 0;
case 0x1c08:
return 0;
case 0x1c09:
return 0;
case 0x1c0a:
return 0;
case 0x1c0b:
return 0;
case 0x1c0c:
return 0;
case 0x1c0d:
return 0;
case 0x1c0e:
return 0;
case 0x1c0f:
return 0;
case 0x1c10:
return 0;
case 0x1c11:
return 0;
case 0x1c12:
return 0;
case 0x1c13:
return 0;
case 0x1c14:
return 0;
case 0x1c15:
return 0;
case 0x1c16:
return 0;
case 0x1c17:
return 0;
case 0x1c18:
return 0;
case 0x1c19:
return 0;
case 0x1c1a:
return 0;
case 0x1c1b:
return 0;
case 0x1c1c:
return 0;
case 0x1c1d:
return 0;
case 0x1c1e:
return 0;
case 0x1c1f:
return 0;
case 0x1c20:
return 0;
case 0x1c21:
return 0;
case 0x1c22:
return 0;
case 0x1c23:
return 0;
case 0x1c24:
return 0;
case 0x1c25:
return 0;
case 0x1c26:
return 0;
case 0x1c27:
return 0;
case 0x1c28:
return 0;
case 0x1c29:
return 0;
case 0x1c2a:
return 0;
case 0x1c2b:
return 0;
case 0x1c2c:
return 0;
case 0x1c2d:
return 0;
case 0x1c2e:
return 0;
case 0x1c2f:
return 0;
case 0x1c30:
return 0;
case 0x1c31:
return 0;
case 0x1c32:
return 0;
case 0x1c33:
return 0;
case 0x1c34:
return 0;
case 0x1c35:
return 0;
case 0x1c36:
return 0;
case 0x1c4d:
return 0;
case 0x1c4e:
return 0;
case 0x1c4f:
return 0;
case 0x1c5a:
return 0;
case 0x1c5b:
return 0;
case 0x1c5c:
return 0;
case 0x1c5d:
return 0;
case 0x1c5e:
return 0;
case 0x1c5f:
return 0;
case 0x1c60:
return 0;
case 0x1c61:
return 0;
case 0x1c62:
return 0;
case 0x1c63:
return 0;
case 0x1c64:
return 0;
case 0x1c65:
return 0;
case 0x1c66:
return 0;
case 0x1c67:
return 0;
case 0x1c68:
return 0;
case 0x1c69:
return 0;
case 0x1c6a:
return 0;
case 0x1c6b:
return 0;
case 0x1c6c:
return 0;
case 0x1c6d:
return 0;
case 0x1c6e:
return 0;
case 0x1c6f:
return 0;
case 0x1c70:
return 0;
case 0x1c71:
return 0;
case 0x1c72:
return 0;
case 0x1c73:
return 0;
case 0x1c74:
return 0;
case 0x1c75:
return 0;
case 0x1c76:
return 0;
case 0x1c77:
return 0;
case 0x1c78:
return 0;
case 0x1c79:
return 0;
case 0x1c7a:
return 0;
case 0x1c7b:
return 0;
case 0x1c7c:
return 0;
case 0x1c7d:
return 0;
case 0x1ce9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1cea:
return 1;
}
}
return 0;
case 0x1cf5:
return 0;
case 0x1cf6:
return 0;
case 0x1d00:
return 0;
case 0x1d01:
return 0;
case 0x1d02:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d46:
return 1;
}
}
return 0;
case 0x1d03:
return 0;
case 0x1d04:
return 0;
case 0x1d05:
return 0;
case 0x1d06:
return 0;
case 0x1d07:
return 0;
case 0x1d08:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d4c:
return 1;
}
}
return 0;
case 0x1d09:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d4e:
return 1;
}
}
return 0;
case 0x1d0a:
return 0;
case 0x1d0b:
return 0;
case 0x1d0c:
return 0;
case 0x1d0d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1ddf:
return 1;
}
}
return 0;
case 0x1d0e:
return 0;
case 0x1d0f:
return 0;
case 0x1d10:
return 0;
case 0x1d11:
return 0;
case 0x1d12:
return 0;
case 0x1d13:
return 0;
case 0x1d14:
return 0;
case 0x1d15:
return 0;
case 0x1d16:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d54:
return 1;
}
}
return 0;
case 0x1d17:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d55:
return 1;
}
}
return 0;
case 0x1d18:
return 0;
case 0x1d19:
return 0;
case 0x1d1a:
return 0;
case 0x1d1b:
return 0;
case 0x1d1c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1db8:
return 1;
}
}
return 0;
case 0x1d1d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d59:
return 1;
}
}
return 0;
case 0x1d1e:
return 0;
case 0x1d1f:
return 0;
case 0x1d20:
return 0;
case 0x1d21:
return 0;
case 0x1d22:
return 0;
case 0x1d23:
return 0;
case 0x1d24:
return 0;
case 0x1d25:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1d5c:
return 1;
}
}
return 0;
case 0x1d26:
return 0;
case 0x1d27:
return 0;
case 0x1d28:
return 0;
case 0x1d29:
return 0;
case 0x1d2a:
return 0;
case 0x1d2b:
return 0;
case 0x1d2f:
return 0;
case 0x1d3b:
return 0;
case 0x1d6b:
return 0;
case 0x1d6c:
return 0;
case 0x1d6d:
return 0;
case 0x1d6e:
return 0;
case 0x1d6f:
return 0;
case 0x1d70:
return 0;
case 0x1d71:
return 0;
case 0x1d72:
return 0;
case 0x1d73:
return 0;
case 0x1d74:
return 0;
case 0x1d75:
return 0;
case 0x1d76:
return 0;
case 0x1d77:
return 0;
case 0x1d7b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1da7:
return 1;
}
}
return 0;
case 0x1d7c:
return 0;
case 0x1d7d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c63:
return 1;
}
}
return 0;
case 0x1d7e:
return 0;
case 0x1d7f:
return 0;
case 0x1d80:
return 0;
case 0x1d81:
return 0;
case 0x1d82:
return 0;
case 0x1d83:
return 0;
case 0x1d84:
return 0;
case 0x1d85:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1daa:
return 1;
}
}
return 0;
case 0x1d86:
return 0;
case 0x1d87:
return 0;
case 0x1d88:
return 0;
case 0x1d89:
return 0;
case 0x1d8a:
return 0;
case 0x1d8b:
return 0;
case 0x1d8c:
return 0;
case 0x1d8d:
return 0;
case 0x1d8e:
return 0;
case 0x1d8f:
return 0;
case 0x1d90:
return 0;
case 0x1d91:
return 0;
case 0x1d92:
return 0;
case 0x1d93:
return 0;
case 0x1d94:
return 0;
case 0x1d95:
return 0;
case 0x1d96:
return 0;
case 0x1d97:
return 0;
case 0x1d98:
return 0;
case 0x1d99:
return 0;
case 0x1d9a:
return 0;
case 0x1e9c:
return 0;
case 0x1e9d:
return 0;
case 0x1e9f:
return 0;
case 0x1efd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1efc:
return 1;
}
}
return 0;
case 0x1eff:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1efe:
return 1;
}
}
return 0;
case 0x214e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2132:
return 1;
}
}
return 0;
case 0x2184:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2183:
return 1;
}
}
return 0;
case 0x2c30:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c00:
return 1;
case 0x1e000:
return 1;
}
}
return 0;
case 0x2c31:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c01:
return 1;
case 0x1e001:
return 1;
}
}
return 0;
case 0x2c32:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c02:
return 1;
case 0x1e002:
return 1;
}
}
return 0;
case 0x2c33:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c03:
return 1;
case 0x1e003:
return 1;
}
}
return 0;
case 0x2c34:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c04:
return 1;
case 0x1e004:
return 1;
}
}
return 0;
case 0x2c35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c05:
return 1;
case 0x1e005:
return 1;
}
}
return 0;
case 0x2c36:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c06:
return 1;
case 0x1e006:
return 1;
}
}
return 0;
case 0x2c37:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c07:
return 1;
}
}
return 0;
case 0x2c38:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c08:
return 1;
case 0x1e008:
return 1;
}
}
return 0;
case 0x2c39:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c09:
return 1;
case 0x1e009:
return 1;
}
}
return 0;
case 0x2c3a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c0a:
return 1;
case 0x1e00a:
return 1;
}
}
return 0;
case 0x2c3b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c0b:
return 1;
case 0x1e00b:
return 1;
}
}
return 0;
case 0x2c3c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c0c:
return 1;
case 0x1e00c:
return 1;
}
}
return 0;
case 0x2c3d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c0d:
return 1;
case 0x1e00d:
return 1;
}
}
return 0;
case 0x2c3e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c0e:
return 1;
case 0x1e00e:
return 1;
}
}
return 0;
case 0x2c3f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c0f:
return 1;
case 0x1e00f:
return 1;
}
}
return 0;
case 0x2c40:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c10:
return 1;
case 0x1e010:
return 1;
}
}
return 0;
case 0x2c41:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c11:
return 1;
case 0x1e011:
return 1;
}
}
return 0;
case 0x2c42:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c12:
return 1;
case 0x1e012:
return 1;
}
}
return 0;
case 0x2c43:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c13:
return 1;
case 0x1e013:
return 1;
}
}
return 0;
case 0x2c44:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c14:
return 1;
case 0x1e014:
return 1;
}
}
return 0;
case 0x2c45:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c15:
return 1;
case 0x1e015:
return 1;
}
}
return 0;
case 0x2c46:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c16:
return 1;
case 0x1e016:
return 1;
}
}
return 0;
case 0x2c47:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c17:
return 1;
case 0x1e017:
return 1;
}
}
return 0;
case 0x2c48:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c18:
return 1;
case 0x1e018:
return 1;
}
}
return 0;
case 0x2c49:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c19:
return 1;
}
}
return 0;
case 0x2c4a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c1a:
return 1;
}
}
return 0;
case 0x2c4b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c1b:
return 1;
case 0x1e01b:
return 1;
}
}
return 0;
case 0x2c4c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c1c:
return 1;
case 0x1e01c:
return 1;
}
}
return 0;
case 0x2c4d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c1d:
return 1;
case 0x1e01d:
return 1;
}
}
return 0;
case 0x2c4e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c1e:
return 1;
case 0x1e01e:
return 1;
}
}
return 0;
case 0x2c4f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c1f:
return 1;
case 0x1e01f:
return 1;
}
}
return 0;
case 0x2c50:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c20:
return 1;
case 0x1e020:
return 1;
}
}
return 0;
case 0x2c51:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c21:
return 1;
case 0x1e021:
return 1;
}
}
return 0;
case 0x2c52:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c22:
return 1;
}
}
return 0;
case 0x2c53:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c23:
return 1;
case 0x1e023:
return 1;
}
}
return 0;
case 0x2c54:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c24:
return 1;
case 0x1e024:
return 1;
}
}
return 0;
case 0x2c55:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c25:
return 1;
}
}
return 0;
case 0x2c56:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c26:
return 1;
case 0x1e026:
return 1;
}
}
return 0;
case 0x2c57:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c27:
return 1;
case 0x1e027:
return 1;
}
}
return 0;
case 0x2c58:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c28:
return 1;
case 0x1e028:
return 1;
}
}
return 0;
case 0x2c59:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c29:
return 1;
case 0x1e029:
return 1;
}
}
return 0;
case 0x2c5a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c2a:
return 1;
case 0x1e02a:
return 1;
}
}
return 0;
case 0x2c5b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c2b:
return 1;
}
}
return 0;
case 0x2c5c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c2c:
return 1;
}
}
return 0;
case 0x2c5d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c2d:
return 1;
}
}
return 0;
case 0x2c5e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c2e:
return 1;
}
}
return 0;
case 0x2c61:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c60:
return 1;
}
}
return 0;
case 0x2c65:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x23a:
return 1;
}
}
return 0;
case 0x2c66:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x23e:
return 1;
}
}
return 0;
case 0x2c68:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c67:
return 1;
}
}
return 0;
case 0x2c6a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c69:
return 1;
}
}
return 0;
case 0x2c6c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c6b:
return 1;
}
}
return 0;
case 0x2c71:
return 0;
case 0x2c73:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c72:
return 1;
}
}
return 0;
case 0x2c74:
return 0;
case 0x2c76:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c75:
return 1;
}
}
return 0;
case 0x2c77:
return 0;
case 0x2c78:
return 0;
case 0x2c79:
return 0;
case 0x2c7a:
return 0;
case 0x2c7b:
return 0;
case 0x2c81:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c80:
return 1;
}
}
return 0;
case 0x2c83:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c82:
return 1;
}
}
return 0;
case 0x2c85:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c84:
return 1;
}
}
return 0;
case 0x2c87:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c86:
return 1;
}
}
return 0;
case 0x2c89:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c88:
return 1;
}
}
return 0;
case 0x2c8b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c8a:
return 1;
}
}
return 0;
case 0x2c8d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c8c:
return 1;
}
}
return 0;
case 0x2c8f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c8e:
return 1;
}
}
return 0;
case 0x2c91:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c90:
return 1;
}
}
return 0;
case 0x2c93:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c92:
return 1;
}
}
return 0;
case 0x2c95:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c94:
return 1;
}
}
return 0;
case 0x2c97:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c96:
return 1;
}
}
return 0;
case 0x2c99:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c98:
return 1;
}
}
return 0;
case 0x2c9b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c9a:
return 1;
}
}
return 0;
case 0x2c9d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c9c:
return 1;
}
}
return 0;
case 0x2c9f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2c9e:
return 1;
}
}
return 0;
case 0x2ca1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ca0:
return 1;
}
}
return 0;
case 0x2ca3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ca2:
return 1;
}
}
return 0;
case 0x2ca5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ca4:
return 1;
}
}
return 0;
case 0x2ca7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ca6:
return 1;
}
}
return 0;
case 0x2ca9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ca8:
return 1;
}
}
return 0;
case 0x2cab:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2caa:
return 1;
}
}
return 0;
case 0x2cad:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cac:
return 1;
}
}
return 0;
case 0x2caf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cae:
return 1;
}
}
return 0;
case 0x2cb1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cb0:
return 1;
}
}
return 0;
case 0x2cb3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cb2:
return 1;
}
}
return 0;
case 0x2cb5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cb4:
return 1;
}
}
return 0;
case 0x2cb7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cb6:
return 1;
}
}
return 0;
case 0x2cb9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cb8:
return 1;
}
}
return 0;
case 0x2cbb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cba:
return 1;
}
}
return 0;
case 0x2cbd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cbc:
return 1;
}
}
return 0;
case 0x2cbf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cbe:
return 1;
}
}
return 0;
case 0x2cc1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cc0:
return 1;
}
}
return 0;
case 0x2cc3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cc2:
return 1;
}
}
return 0;
case 0x2cc5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cc4:
return 1;
}
}
return 0;
case 0x2cc7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cc6:
return 1;
}
}
return 0;
case 0x2cc9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cc8:
return 1;
}
}
return 0;
case 0x2ccb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cca:
return 1;
}
}
return 0;
case 0x2ccd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ccc:
return 1;
}
}
return 0;
case 0x2ccf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cce:
return 1;
}
}
return 0;
case 0x2cd1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cd0:
return 1;
}
}
return 0;
case 0x2cd3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cd2:
return 1;
}
}
return 0;
case 0x2cd5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cd4:
return 1;
}
}
return 0;
case 0x2cd7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cd6:
return 1;
}
}
return 0;
case 0x2cd9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cd8:
return 1;
}
}
return 0;
case 0x2cdb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cda:
return 1;
}
}
return 0;
case 0x2cdd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cdc:
return 1;
}
}
return 0;
case 0x2cdf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cde:
return 1;
}
}
return 0;
case 0x2ce1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ce0:
return 1;
}
}
return 0;
case 0x2ce3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ce2:
return 1;
}
}
return 0;
case 0x2cec:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ceb:
return 1;
}
}
return 0;
case 0x2cee:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2ced:
return 1;
}
}
return 0;
case 0x2cf3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2cf2:
return 1;
}
}
return 0;
case 0x2d00:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a0:
return 1;
}
}
return 0;
case 0x2d01:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a1:
return 1;
}
}
return 0;
case 0x2d02:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a2:
return 1;
}
}
return 0;
case 0x2d03:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a3:
return 1;
}
}
return 0;
case 0x2d04:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a4:
return 1;
}
}
return 0;
case 0x2d05:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a5:
return 1;
}
}
return 0;
case 0x2d06:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a6:
return 1;
}
}
return 0;
case 0x2d07:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a7:
return 1;
}
}
return 0;
case 0x2d08:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a8:
return 1;
}
}
return 0;
case 0x2d09:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10a9:
return 1;
}
}
return 0;
case 0x2d0a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10aa:
return 1;
}
}
return 0;
case 0x2d0b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ab:
return 1;
}
}
return 0;
case 0x2d0c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ac:
return 1;
}
}
return 0;
case 0x2d0d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ad:
return 1;
}
}
return 0;
case 0x2d0e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ae:
return 1;
}
}
return 0;
case 0x2d0f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10af:
return 1;
}
}
return 0;
case 0x2d10:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b0:
return 1;
}
}
return 0;
case 0x2d11:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b1:
return 1;
}
}
return 0;
case 0x2d12:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b2:
return 1;
}
}
return 0;
case 0x2d13:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b3:
return 1;
}
}
return 0;
case 0x2d14:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b4:
return 1;
}
}
return 0;
case 0x2d15:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b5:
return 1;
}
}
return 0;
case 0x2d16:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b6:
return 1;
}
}
return 0;
case 0x2d17:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b7:
return 1;
}
}
return 0;
case 0x2d18:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b8:
return 1;
}
}
return 0;
case 0x2d19:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10b9:
return 1;
}
}
return 0;
case 0x2d1a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ba:
return 1;
}
}
return 0;
case 0x2d1b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10bb:
return 1;
}
}
return 0;
case 0x2d1c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10bc:
return 1;
}
}
return 0;
case 0x2d1d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10bd:
return 1;
}
}
return 0;
case 0x2d1e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10be:
return 1;
}
}
return 0;
case 0x2d1f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10bf:
return 1;
}
}
return 0;
case 0x2d20:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c0:
return 1;
}
}
return 0;
case 0x2d21:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c1:
return 1;
}
}
return 0;
case 0x2d22:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c2:
return 1;
}
}
return 0;
case 0x2d23:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c3:
return 1;
}
}
return 0;
case 0x2d24:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c4:
return 1;
}
}
return 0;
case 0x2d25:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c5:
return 1;
}
}
return 0;
case 0x2d27:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c7:
return 1;
}
}
return 0;
case 0x2d2d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10cd:
return 1;
}
}
return 0;
case 0x2d30:
return 0;
case 0x2d31:
return 0;
case 0x2d32:
return 0;
case 0x2d33:
return 0;
case 0x2d34:
return 0;
case 0x2d35:
return 0;
case 0x2d36:
return 0;
case 0x2d37:
return 0;
case 0x2d38:
return 0;
case 0x2d39:
return 0;
case 0x2d3a:
return 0;
case 0x2d3b:
return 0;
case 0x2d3c:
return 0;
case 0x2d3d:
return 0;
case 0x2d3e:
return 0;
case 0x2d3f:
return 0;
case 0x2d40:
return 0;
case 0x2d41:
return 0;
case 0x2d42:
return 0;
case 0x2d43:
return 0;
case 0x2d44:
return 0;
case 0x2d45:
return 0;
case 0x2d46:
return 0;
case 0x2d47:
return 0;
case 0x2d48:
return 0;
case 0x2d49:
return 0;
case 0x2d4a:
return 0;
case 0x2d4b:
return 0;
case 0x2d4c:
return 0;
case 0x2d4d:
return 0;
case 0x2d4e:
return 0;
case 0x2d4f:
return 0;
case 0x2d50:
return 0;
case 0x2d51:
return 0;
case 0x2d52:
return 0;
case 0x2d53:
return 0;
case 0x2d54:
return 0;
case 0x2d55:
return 0;
case 0x2d56:
return 0;
case 0x2d57:
return 0;
case 0x2d58:
return 0;
case 0x2d59:
return 0;
case 0x2d5a:
return 0;
case 0x2d5b:
return 0;
case 0x2d5c:
return 0;
case 0x2d5d:
return 0;
case 0x2d5e:
return 0;
case 0x2d5f:
return 0;
case 0x2d60:
return 0;
case 0x2d61:
return 0;
case 0x2d62:
return 0;
case 0x2d63:
return 0;
case 0x2d64:
return 0;
case 0x2d65:
return 0;
case 0x2d66:
return 0;
case 0x2d67:
return 0;
case 0x2d6f:
return 0;
case 0x2d80:
return 0;
case 0x2d81:
return 0;
case 0x2d82:
return 0;
case 0x2d83:
return 0;
case 0x2d84:
return 0;
case 0x2d85:
return 0;
case 0x2d86:
return 0;
case 0x2d87:
return 0;
case 0x2d88:
return 0;
case 0x2d89:
return 0;
case 0x2d8a:
return 0;
case 0x2d8b:
return 0;
case 0x2d8c:
return 0;
case 0x2d8d:
return 0;
case 0x2d8e:
return 0;
case 0x2d8f:
return 0;
case 0x2d90:
return 0;
case 0x2d91:
return 0;
case 0x2d92:
return 0;
case 0x2d93:
return 0;
case 0x2d94:
return 0;
case 0x2d95:
return 0;
case 0x2d96:
return 0;
case 0x2da0:
return 0;
case 0x2da1:
return 0;
case 0x2da2:
return 0;
case 0x2da3:
return 0;
case 0x2da4:
return 0;
case 0x2da5:
return 0;
case 0x2da6:
return 0;
case 0x2da8:
return 0;
case 0x2da9:
return 0;
case 0x2daa:
return 0;
case 0x2dab:
return 0;
case 0x2dac:
return 0;
case 0x2dad:
return 0;
case 0x2dae:
return 0;
case 0x2db0:
return 0;
case 0x2db1:
return 0;
case 0x2db2:
return 0;
case 0x2db3:
return 0;
case 0x2db4:
return 0;
case 0x2db5:
return 0;
case 0x2db6:
return 0;
case 0x2db8:
return 0;
case 0x2db9:
return 0;
case 0x2dba:
return 0;
case 0x2dbb:
return 0;
case 0x2dbc:
return 0;
case 0x2dbd:
return 0;
case 0x2dbe:
return 0;
case 0x2dc0:
return 0;
case 0x2dc1:
return 0;
case 0x2dc2:
return 0;
case 0x2dc3:
return 0;
case 0x2dc4:
return 0;
case 0x2dc5:
return 0;
case 0x2dc6:
return 0;
case 0x2dc8:
return 0;
case 0x2dc9:
return 0;
case 0x2dca:
return 0;
case 0x2dcb:
return 0;
case 0x2dcc:
return 0;
case 0x2dcd:
return 0;
case 0x2dce:
return 0;
case 0x2dd0:
return 0;
case 0x2dd1:
return 0;
case 0x2dd2:
return 0;
case 0x2dd3:
return 0;
case 0x2dd4:
return 0;
case 0x2dd5:
return 0;
case 0x2dd6:
return 0;
case 0x2dd8:
return 0;
case 0x2dd9:
return 0;
case 0x2dda:
return 0;
case 0x2ddb:
return 0;
case 0x2ddc:
return 0;
case 0x2ddd:
return 0;
case 0x2dde:
return 0;
case 0x2e2f:
return 0;
case 0x3041:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3042:
return 1;
case 0x30a1:
return 1;
case 0x30a2:
return 1;
case 0x32d0:
return 1;
case 0xff67:
return 1;
case 0xff71:
return 1;
}
}
return 0;
case 0x3043:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3044:
return 1;
case 0x30a3:
return 1;
case 0x30a4:
return 1;
case 0x32d1:
return 1;
case 0xff68:
return 1;
case 0xff72:
return 1;
}
}
return 0;
case 0x3045:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3046:
return 1;
case 0x30a5:
return 1;
case 0x30a6:
return 1;
case 0x30f4:
return 1;
case 0x32d2:
return 1;
case 0xff69:
return 1;
case 0xff73:
return 1;
}
}
return 0;
case 0x3047:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3048:
return 1;
case 0x30a7:
return 1;
case 0x30a8:
return 1;
case 0x32d3:
return 1;
case 0xff6a:
return 1;
case 0xff74:
return 1;
}
}
return 0;
case 0x3049:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x304a:
return 1;
case 0x30a9:
return 1;
case 0x30aa:
return 1;
case 0x32d4:
return 1;
case 0xff6b:
return 1;
case 0xff75:
return 1;
}
}
return 0;
case 0x304d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30ad:
return 1;
case 0x30ae:
return 1;
case 0x32d6:
return 1;
case 0xff77:
return 1;
}
}
return 0;
case 0x304f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30af:
return 1;
case 0x30b0:
return 1;
case 0x31f0:
return 1;
case 0x32d7:
return 1;
case 0xff78:
return 1;
}
}
return 0;
case 0x3053:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30b3:
return 1;
case 0x30b4:
return 1;
case 0x32d9:
return 1;
case 0xff7a:
return 1;
}
}
return 0;
case 0x3055:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30b5:
return 1;
case 0x30b6:
return 1;
case 0x32da:
return 1;
case 0xff7b:
return 1;
case 0x1f202:
return 1;
}
}
return 0;
case 0x3057:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30b7:
return 1;
case 0x30b8:
return 1;
case 0x31f1:
return 1;
case 0x32db:
return 1;
case 0xff7c:
return 1;
}
}
return 0;
case 0x3059:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30b9:
return 1;
case 0x30ba:
return 1;
case 0x31f2:
return 1;
case 0x32dc:
return 1;
case 0xff7d:
return 1;
}
}
return 0;
case 0x305b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30bb:
return 1;
case 0x30bc:
return 1;
case 0x32dd:
return 1;
case 0xff7e:
return 1;
}
}
return 0;
case 0x305d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30bd:
return 1;
case 0x30be:
return 1;
case 0x32de:
return 1;
case 0xff7f:
return 1;
}
}
return 0;
case 0x305f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30bf:
return 1;
case 0x30c0:
return 1;
case 0x32df:
return 1;
case 0xff80:
return 1;
}
}
return 0;
case 0x3061:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30c1:
return 1;
case 0x30c2:
return 1;
case 0x32e0:
return 1;
case 0xff81:
return 1;
}
}
return 0;
case 0x3063:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3064:
return 1;
case 0x30c3:
return 1;
case 0x30c4:
return 1;
case 0x30c5:
return 1;
case 0x32e1:
return 1;
case 0xff6f:
return 1;
case 0xff82:
return 1;
}
}
return 0;
case 0x3066:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30c6:
return 1;
case 0x30c7:
return 1;
case 0x32e2:
return 1;
case 0xff83:
return 1;
case 0x1f213:
return 1;
}
}
return 0;
case 0x3068:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30c8:
return 1;
case 0x30c9:
return 1;
case 0x31f3:
return 1;
case 0x32e3:
return 1;
case 0xff84:
return 1;
}
}
return 0;
case 0x306a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30ca:
return 1;
case 0x32e4:
return 1;
case 0xff85:
return 1;
}
}
return 0;
case 0x306b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30cb:
return 1;
case 0x32e5:
return 1;
case 0xff86:
return 1;
}
}
return 0;
case 0x306c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30cc:
return 1;
case 0x31f4:
return 1;
case 0x32e6:
return 1;
case 0xff87:
return 1;
}
}
return 0;
case 0x306d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30cd:
return 1;
case 0x32e7:
return 1;
case 0xff88:
return 1;
}
}
return 0;
case 0x306e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30ce:
return 1;
case 0x32e8:
return 1;
case 0xff89:
return 1;
}
}
return 0;
case 0x306f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30cf:
return 1;
case 0x30d0:
return 1;
case 0x30d1:
return 1;
case 0x31f5:
return 1;
case 0x32e9:
return 1;
case 0xff8a:
return 1;
}
}
return 0;
case 0x3072:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30d2:
return 1;
case 0x30d3:
return 1;
case 0x30d4:
return 1;
case 0x31f6:
return 1;
case 0x32ea:
return 1;
case 0xff8b:
return 1;
}
}
return 0;
case 0x3075:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30d5:
return 1;
case 0x30d6:
return 1;
case 0x30d7:
return 1;
case 0x31f7:
return 1;
case 0x32eb:
return 1;
case 0xff8c:
return 1;
}
}
return 0;
case 0x3078:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30d8:
return 1;
case 0x30d9:
return 1;
case 0x30da:
return 1;
case 0x31f8:
return 1;
case 0x32ec:
return 1;
case 0xff8d:
return 1;
}
}
return 0;
case 0x307b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30db:
return 1;
case 0x30dc:
return 1;
case 0x30dd:
return 1;
case 0x31f9:
return 1;
case 0x32ed:
return 1;
case 0xff8e:
return 1;
}
}
return 0;
case 0x307e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30de:
return 1;
case 0x32ee:
return 1;
case 0xff8f:
return 1;
}
}
return 0;
case 0x307f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30df:
return 1;
case 0x32ef:
return 1;
case 0xff90:
return 1;
}
}
return 0;
case 0x3080:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30e0:
return 1;
case 0x31fa:
return 1;
case 0x32f0:
return 1;
case 0xff91:
return 1;
}
}
return 0;
case 0x3081:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30e1:
return 1;
case 0x32f1:
return 1;
case 0xff92:
return 1;
}
}
return 0;
case 0x3082:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30e2:
return 1;
case 0x32f2:
return 1;
case 0xff93:
return 1;
}
}
return 0;
case 0x3083:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3084:
return 1;
case 0x30e3:
return 1;
case 0x30e4:
return 1;
case 0x32f3:
return 1;
case 0xff6c:
return 1;
case 0xff94:
return 1;
}
}
return 0;
case 0x3085:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3086:
return 1;
case 0x30e5:
return 1;
case 0x30e6:
return 1;
case 0x32f4:
return 1;
case 0xff6d:
return 1;
case 0xff95:
return 1;
}
}
return 0;
case 0x3087:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3088:
return 1;
case 0x30e7:
return 1;
case 0x30e8:
return 1;
case 0x32f5:
return 1;
case 0xff6e:
return 1;
case 0xff96:
return 1;
}
}
return 0;
case 0x3089:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30e9:
return 1;
case 0x31fb:
return 1;
case 0x32f6:
return 1;
case 0xff97:
return 1;
}
}
return 0;
case 0x308a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30ea:
return 1;
case 0x31fc:
return 1;
case 0x32f7:
return 1;
case 0xff98:
return 1;
}
}
return 0;
case 0x308b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30eb:
return 1;
case 0x31fd:
return 1;
case 0x32f8:
return 1;
case 0xff99:
return 1;
}
}
return 0;
case 0x308c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30ec:
return 1;
case 0x31fe:
return 1;
case 0x32f9:
return 1;
case 0xff9a:
return 1;
}
}
return 0;
case 0x308d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30ed:
return 1;
case 0x31ff:
return 1;
case 0x32fa:
return 1;
case 0xff9b:
return 1;
}
}
return 0;
case 0x308e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x308f:
return 1;
case 0x30ee:
return 1;
case 0x30ef:
return 1;
case 0x32fb:
return 1;
case 0xff9c:
return 1;
}
}
return 0;
case 0x3090:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30f0:
return 1;
case 0x32fc:
return 1;
}
}
return 0;
case 0x3091:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30f1:
return 1;
case 0x32fd:
return 1;
}
}
return 0;
case 0x3092:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30f2:
return 1;
case 0x32fe:
return 1;
case 0xff66:
return 1;
}
}
return 0;
case 0x3093:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x30f3:
return 1;
case 0xff9d:
return 1;
}
}
return 0;
case 0x3095:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x304b:
return 1;
case 0x30ab:
return 1;
case 0x30ac:
return 1;
case 0x30f5:
return 1;
case 0x32d5:
return 1;
case 0xff76:
return 1;
}
}
return 0;
case 0x3096:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x3051:
return 1;
case 0x30b1:
return 1;
case 0x30b2:
return 1;
case 0x30f6:
return 1;
case 0x32d8:
return 1;
case 0xff79:
return 1;
}
}
return 0;
case 0x3105:
return 0;
case 0x3106:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x31b4:
return 1;
}
}
return 0;
case 0x3107:
return 0;
case 0x3108:
return 0;
case 0x3109:
return 0;
case 0x310a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x31b5:
return 1;
}
}
return 0;
case 0x310b:
return 0;
case 0x310c:
return 0;
case 0x310d:
return 0;
case 0x310e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x31b6:
return 1;
}
}
return 0;
case 0x310f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x31b7:
return 1;
}
}
return 0;
case 0x3110:
return 0;
case 0x3111:
return 0;
case 0x3112:
return 0;
case 0x3113:
return 0;
case 0x3114:
return 0;
case 0x3115:
return 0;
case 0x3116:
return 0;
case 0x3117:
return 0;
case 0x3118:
return 0;
case 0x3119:
return 0;
case 0x311a:
return 0;
case 0x311b:
return 0;
case 0x311c:
return 0;
case 0x311d:
return 0;
case 0x311e:
return 0;
case 0x311f:
return 0;
case 0x3120:
return 0;
case 0x3121:
return 0;
case 0x3122:
return 0;
case 0x3123:
return 0;
case 0x3124:
return 0;
case 0x3125:
return 0;
case 0x3126:
return 0;
case 0x3127:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x31b3:
return 1;
}
}
return 0;
case 0x3128:
return 0;
case 0x3129:
return 0;
case 0x312a:
return 0;
case 0x312b:
return 0;
case 0x312c:
return 0;
case 0x312d:
return 0;
case 0x31a4:
return 0;
case 0x31a6:
return 0;
case 0x31ac:
return 0;
case 0x31ad:
return 0;
case 0x31b0:
return 0;
case 0x31b1:
return 0;
case 0x31b2:
return 0;
case 0x31b8:
return 0;
case 0x31b9:
return 0;
case 0x31ba:
return 0;
case 0xa000:
return 0;
case 0xa001:
return 0;
case 0xa002:
return 0;
case 0xa003:
return 0;
case 0xa004:
return 0;
case 0xa005:
return 0;
case 0xa006:
return 0;
case 0xa007:
return 0;
case 0xa008:
return 0;
case 0xa009:
return 0;
case 0xa00a:
return 0;
case 0xa00b:
return 0;
case 0xa00c:
return 0;
case 0xa00d:
return 0;
case 0xa00e:
return 0;
case 0xa00f:
return 0;
case 0xa010:
return 0;
case 0xa011:
return 0;
case 0xa012:
return 0;
case 0xa013:
return 0;
case 0xa014:
return 0;
case 0xa015:
return 0;
case 0xa016:
return 0;
case 0xa017:
return 0;
case 0xa018:
return 0;
case 0xa019:
return 0;
case 0xa01a:
return 0;
case 0xa01b:
return 0;
case 0xa01c:
return 0;
case 0xa01d:
return 0;
case 0xa01e:
return 0;
case 0xa01f:
return 0;
case 0xa020:
return 0;
case 0xa021:
return 0;
case 0xa022:
return 0;
case 0xa023:
return 0;
case 0xa024:
return 0;
case 0xa025:
return 0;
case 0xa026:
return 0;
case 0xa027:
return 0;
case 0xa028:
return 0;
case 0xa029:
return 0;
case 0xa02a:
return 0;
case 0xa02b:
return 0;
case 0xa02c:
return 0;
case 0xa02d:
return 0;
case 0xa02e:
return 0;
case 0xa02f:
return 0;
case 0xa030:
return 0;
case 0xa031:
return 0;
case 0xa032:
return 0;
case 0xa033:
return 0;
case 0xa034:
return 0;
case 0xa035:
return 0;
case 0xa036:
return 0;
case 0xa037:
return 0;
case 0xa038:
return 0;
case 0xa039:
return 0;
case 0xa03a:
return 0;
case 0xa03b:
return 0;
case 0xa03c:
return 0;
case 0xa03d:
return 0;
case 0xa03e:
return 0;
case 0xa03f:
return 0;
case 0xa040:
return 0;
case 0xa041:
return 0;
case 0xa042:
return 0;
case 0xa043:
return 0;
case 0xa044:
return 0;
case 0xa045:
return 0;
case 0xa046:
return 0;
case 0xa047:
return 0;
case 0xa048:
return 0;
case 0xa049:
return 0;
case 0xa04a:
return 0;
case 0xa04b:
return 0;
case 0xa04c:
return 0;
case 0xa04d:
return 0;
case 0xa04e:
return 0;
case 0xa04f:
return 0;
case 0xa050:
return 0;
case 0xa051:
return 0;
case 0xa052:
return 0;
case 0xa053:
return 0;
case 0xa054:
return 0;
case 0xa055:
return 0;
case 0xa056:
return 0;
case 0xa057:
return 0;
case 0xa058:
return 0;
case 0xa059:
return 0;
case 0xa05a:
return 0;
case 0xa05b:
return 0;
case 0xa05c:
return 0;
case 0xa05d:
return 0;
case 0xa05e:
return 0;
case 0xa05f:
return 0;
case 0xa060:
return 0;
case 0xa061:
return 0;
case 0xa062:
return 0;
case 0xa063:
return 0;
case 0xa064:
return 0;
case 0xa065:
return 0;
case 0xa066:
return 0;
case 0xa067:
return 0;
case 0xa068:
return 0;
case 0xa069:
return 0;
case 0xa06a:
return 0;
case 0xa06b:
return 0;
case 0xa06c:
return 0;
case 0xa06d:
return 0;
case 0xa06e:
return 0;
case 0xa06f:
return 0;
case 0xa070:
return 0;
case 0xa071:
return 0;
case 0xa072:
return 0;
case 0xa073:
return 0;
case 0xa074:
return 0;
case 0xa075:
return 0;
case 0xa076:
return 0;
case 0xa077:
return 0;
case 0xa078:
return 0;
case 0xa079:
return 0;
case 0xa07a:
return 0;
case 0xa07b:
return 0;
case 0xa07c:
return 0;
case 0xa07d:
return 0;
case 0xa07e:
return 0;
case 0xa07f:
return 0;
case 0xa080:
return 0;
case 0xa081:
return 0;
case 0xa082:
return 0;
case 0xa083:
return 0;
case 0xa084:
return 0;
case 0xa085:
return 0;
case 0xa086:
return 0;
case 0xa087:
return 0;
case 0xa088:
return 0;
case 0xa089:
return 0;
case 0xa08a:
return 0;
case 0xa08b:
return 0;
case 0xa08c:
return 0;
case 0xa08d:
return 0;
case 0xa08e:
return 0;
case 0xa08f:
return 0;
case 0xa090:
return 0;
case 0xa091:
return 0;
case 0xa092:
return 0;
case 0xa093:
return 0;
case 0xa094:
return 0;
case 0xa095:
return 0;
case 0xa096:
return 0;
case 0xa097:
return 0;
case 0xa098:
return 0;
case 0xa099:
return 0;
case 0xa09a:
return 0;
case 0xa09b:
return 0;
case 0xa09c:
return 0;
case 0xa09d:
return 0;
case 0xa09e:
return 0;
case 0xa09f:
return 0;
case 0xa0a0:
return 0;
case 0xa0a1:
return 0;
case 0xa0a2:
return 0;
case 0xa0a3:
return 0;
case 0xa0a4:
return 0;
case 0xa0a5:
return 0;
case 0xa0a6:
return 0;
case 0xa0a7:
return 0;
case 0xa0a8:
return 0;
case 0xa0a9:
return 0;
case 0xa0aa:
return 0;
case 0xa0ab:
return 0;
case 0xa0ac:
return 0;
case 0xa0ad:
return 0;
case 0xa0ae:
return 0;
case 0xa0af:
return 0;
case 0xa0b0:
return 0;
case 0xa0b1:
return 0;
case 0xa0b2:
return 0;
case 0xa0b3:
return 0;
case 0xa0b4:
return 0;
case 0xa0b5:
return 0;
case 0xa0b6:
return 0;
case 0xa0b7:
return 0;
case 0xa0b8:
return 0;
case 0xa0b9:
return 0;
case 0xa0ba:
return 0;
case 0xa0bb:
return 0;
case 0xa0bc:
return 0;
case 0xa0bd:
return 0;
case 0xa0be:
return 0;
case 0xa0bf:
return 0;
case 0xa0c0:
return 0;
case 0xa0c1:
return 0;
case 0xa0c2:
return 0;
case 0xa0c3:
return 0;
case 0xa0c4:
return 0;
case 0xa0c5:
return 0;
case 0xa0c6:
return 0;
case 0xa0c7:
return 0;
case 0xa0c8:
return 0;
case 0xa0c9:
return 0;
case 0xa0ca:
return 0;
case 0xa0cb:
return 0;
case 0xa0cc:
return 0;
case 0xa0cd:
return 0;
case 0xa0ce:
return 0;
case 0xa0cf:
return 0;
case 0xa0d0:
return 0;
case 0xa0d1:
return 0;
case 0xa0d2:
return 0;
case 0xa0d3:
return 0;
case 0xa0d4:
return 0;
case 0xa0d5:
return 0;
case 0xa0d6:
return 0;
case 0xa0d7:
return 0;
case 0xa0d8:
return 0;
case 0xa0d9:
return 0;
case 0xa0da:
return 0;
case 0xa0db:
return 0;
case 0xa0dc:
return 0;
case 0xa0dd:
return 0;
case 0xa0de:
return 0;
case 0xa0df:
return 0;
case 0xa0e0:
return 0;
case 0xa0e1:
return 0;
case 0xa0e2:
return 0;
case 0xa0e3:
return 0;
case 0xa0e4:
return 0;
case 0xa0e5:
return 0;
case 0xa0e6:
return 0;
case 0xa0e7:
return 0;
case 0xa0e8:
return 0;
case 0xa0e9:
return 0;
case 0xa0ea:
return 0;
case 0xa0eb:
return 0;
case 0xa0ec:
return 0;
case 0xa0ed:
return 0;
case 0xa0ee:
return 0;
case 0xa0ef:
return 0;
case 0xa0f0:
return 0;
case 0xa0f1:
return 0;
case 0xa0f2:
return 0;
case 0xa0f3:
return 0;
case 0xa0f4:
return 0;
case 0xa0f5:
return 0;
case 0xa0f6:
return 0;
case 0xa0f7:
return 0;
case 0xa0f8:
return 0;
case 0xa0f9:
return 0;
case 0xa0fa:
return 0;
case 0xa0fb:
return 0;
case 0xa0fc:
return 0;
case 0xa0fd:
return 0;
case 0xa0fe:
return 0;
case 0xa0ff:
return 0;
case 0xa100:
return 0;
case 0xa101:
return 0;
case 0xa102:
return 0;
case 0xa103:
return 0;
case 0xa104:
return 0;
case 0xa105:
return 0;
case 0xa106:
return 0;
case 0xa107:
return 0;
case 0xa108:
return 0;
case 0xa109:
return 0;
case 0xa10a:
return 0;
case 0xa10b:
return 0;
case 0xa10c:
return 0;
case 0xa10d:
return 0;
case 0xa10e:
return 0;
case 0xa10f:
return 0;
case 0xa110:
return 0;
case 0xa111:
return 0;
case 0xa112:
return 0;
case 0xa113:
return 0;
case 0xa114:
return 0;
case 0xa115:
return 0;
case 0xa116:
return 0;
case 0xa117:
return 0;
case 0xa118:
return 0;
case 0xa119:
return 0;
case 0xa11a:
return 0;
case 0xa11b:
return 0;
case 0xa11c:
return 0;
case 0xa11d:
return 0;
case 0xa11e:
return 0;
case 0xa11f:
return 0;
case 0xa120:
return 0;
case 0xa121:
return 0;
case 0xa122:
return 0;
case 0xa123:
return 0;
case 0xa124:
return 0;
case 0xa125:
return 0;
case 0xa126:
return 0;
case 0xa127:
return 0;
case 0xa128:
return 0;
case 0xa129:
return 0;
case 0xa12a:
return 0;
case 0xa12b:
return 0;
case 0xa12c:
return 0;
case 0xa12d:
return 0;
case 0xa12e:
return 0;
case 0xa12f:
return 0;
case 0xa130:
return 0;
case 0xa131:
return 0;
case 0xa132:
return 0;
case 0xa133:
return 0;
case 0xa134:
return 0;
case 0xa135:
return 0;
case 0xa136:
return 0;
case 0xa137:
return 0;
case 0xa138:
return 0;
case 0xa139:
return 0;
case 0xa13a:
return 0;
case 0xa13b:
return 0;
case 0xa13c:
return 0;
case 0xa13d:
return 0;
case 0xa13e:
return 0;
case 0xa13f:
return 0;
case 0xa140:
return 0;
case 0xa141:
return 0;
case 0xa142:
return 0;
case 0xa143:
return 0;
case 0xa144:
return 0;
case 0xa145:
return 0;
case 0xa146:
return 0;
case 0xa147:
return 0;
case 0xa148:
return 0;
case 0xa149:
return 0;
case 0xa14a:
return 0;
case 0xa14b:
return 0;
case 0xa14c:
return 0;
case 0xa14d:
return 0;
case 0xa14e:
return 0;
case 0xa14f:
return 0;
case 0xa150:
return 0;
case 0xa151:
return 0;
case 0xa152:
return 0;
case 0xa153:
return 0;
case 0xa154:
return 0;
case 0xa155:
return 0;
case 0xa156:
return 0;
case 0xa157:
return 0;
case 0xa158:
return 0;
case 0xa159:
return 0;
case 0xa15a:
return 0;
case 0xa15b:
return 0;
case 0xa15c:
return 0;
case 0xa15d:
return 0;
case 0xa15e:
return 0;
case 0xa15f:
return 0;
case 0xa160:
return 0;
case 0xa161:
return 0;
case 0xa162:
return 0;
case 0xa163:
return 0;
case 0xa164:
return 0;
case 0xa165:
return 0;
case 0xa166:
return 0;
case 0xa167:
return 0;
case 0xa168:
return 0;
case 0xa169:
return 0;
case 0xa16a:
return 0;
case 0xa16b:
return 0;
case 0xa16c:
return 0;
case 0xa16d:
return 0;
case 0xa16e:
return 0;
case 0xa16f:
return 0;
case 0xa170:
return 0;
case 0xa171:
return 0;
case 0xa172:
return 0;
case 0xa173:
return 0;
case 0xa174:
return 0;
case 0xa175:
return 0;
case 0xa176:
return 0;
case 0xa177:
return 0;
case 0xa178:
return 0;
case 0xa179:
return 0;
case 0xa17a:
return 0;
case 0xa17b:
return 0;
case 0xa17c:
return 0;
case 0xa17d:
return 0;
case 0xa17e:
return 0;
case 0xa17f:
return 0;
case 0xa180:
return 0;
case 0xa181:
return 0;
case 0xa182:
return 0;
case 0xa183:
return 0;
case 0xa184:
return 0;
case 0xa185:
return 0;
case 0xa186:
return 0;
case 0xa187:
return 0;
case 0xa188:
return 0;
case 0xa189:
return 0;
case 0xa18a:
return 0;
case 0xa18b:
return 0;
case 0xa18c:
return 0;
case 0xa18d:
return 0;
case 0xa18e:
return 0;
case 0xa18f:
return 0;
case 0xa190:
return 0;
case 0xa191:
return 0;
case 0xa192:
return 0;
case 0xa193:
return 0;
case 0xa194:
return 0;
case 0xa195:
return 0;
case 0xa196:
return 0;
case 0xa197:
return 0;
case 0xa198:
return 0;
case 0xa199:
return 0;
case 0xa19a:
return 0;
case 0xa19b:
return 0;
case 0xa19c:
return 0;
case 0xa19d:
return 0;
case 0xa19e:
return 0;
case 0xa19f:
return 0;
case 0xa1a0:
return 0;
case 0xa1a1:
return 0;
case 0xa1a2:
return 0;
case 0xa1a3:
return 0;
case 0xa1a4:
return 0;
case 0xa1a5:
return 0;
case 0xa1a6:
return 0;
case 0xa1a7:
return 0;
case 0xa1a8:
return 0;
case 0xa1a9:
return 0;
case 0xa1aa:
return 0;
case 0xa1ab:
return 0;
case 0xa1ac:
return 0;
case 0xa1ad:
return 0;
case 0xa1ae:
return 0;
case 0xa1af:
return 0;
case 0xa1b0:
return 0;
case 0xa1b1:
return 0;
case 0xa1b2:
return 0;
case 0xa1b3:
return 0;
case 0xa1b4:
return 0;
case 0xa1b5:
return 0;
case 0xa1b6:
return 0;
case 0xa1b7:
return 0;
case 0xa1b8:
return 0;
case 0xa1b9:
return 0;
case 0xa1ba:
return 0;
case 0xa1bb:
return 0;
case 0xa1bc:
return 0;
case 0xa1bd:
return 0;
case 0xa1be:
return 0;
case 0xa1bf:
return 0;
case 0xa1c0:
return 0;
case 0xa1c1:
return 0;
case 0xa1c2:
return 0;
case 0xa1c3:
return 0;
case 0xa1c4:
return 0;
case 0xa1c5:
return 0;
case 0xa1c6:
return 0;
case 0xa1c7:
return 0;
case 0xa1c8:
return 0;
case 0xa1c9:
return 0;
case 0xa1ca:
return 0;
case 0xa1cb:
return 0;
case 0xa1cc:
return 0;
case 0xa1cd:
return 0;
case 0xa1ce:
return 0;
case 0xa1cf:
return 0;
case 0xa1d0:
return 0;
case 0xa1d1:
return 0;
case 0xa1d2:
return 0;
case 0xa1d3:
return 0;
case 0xa1d4:
return 0;
case 0xa1d5:
return 0;
case 0xa1d6:
return 0;
case 0xa1d7:
return 0;
case 0xa1d8:
return 0;
case 0xa1d9:
return 0;
case 0xa1da:
return 0;
case 0xa1db:
return 0;
case 0xa1dc:
return 0;
case 0xa1dd:
return 0;
case 0xa1de:
return 0;
case 0xa1df:
return 0;
case 0xa1e0:
return 0;
case 0xa1e1:
return 0;
case 0xa1e2:
return 0;
case 0xa1e3:
return 0;
case 0xa1e4:
return 0;
case 0xa1e5:
return 0;
case 0xa1e6:
return 0;
case 0xa1e7:
return 0;
case 0xa1e8:
return 0;
case 0xa1e9:
return 0;
case 0xa1ea:
return 0;
case 0xa1eb:
return 0;
case 0xa1ec:
return 0;
case 0xa1ed:
return 0;
case 0xa1ee:
return 0;
case 0xa1ef:
return 0;
case 0xa1f0:
return 0;
case 0xa1f1:
return 0;
case 0xa1f2:
return 0;
case 0xa1f3:
return 0;
case 0xa1f4:
return 0;
case 0xa1f5:
return 0;
case 0xa1f6:
return 0;
case 0xa1f7:
return 0;
case 0xa1f8:
return 0;
case 0xa1f9:
return 0;
case 0xa1fa:
return 0;
case 0xa1fb:
return 0;
case 0xa1fc:
return 0;
case 0xa1fd:
return 0;
case 0xa1fe:
return 0;
case 0xa1ff:
return 0;
case 0xa200:
return 0;
case 0xa201:
return 0;
case 0xa202:
return 0;
case 0xa203:
return 0;
case 0xa204:
return 0;
case 0xa205:
return 0;
case 0xa206:
return 0;
case 0xa207:
return 0;
case 0xa208:
return 0;
case 0xa209:
return 0;
case 0xa20a:
return 0;
case 0xa20b:
return 0;
case 0xa20c:
return 0;
case 0xa20d:
return 0;
case 0xa20e:
return 0;
case 0xa20f:
return 0;
case 0xa210:
return 0;
case 0xa211:
return 0;
case 0xa212:
return 0;
case 0xa213:
return 0;
case 0xa214:
return 0;
case 0xa215:
return 0;
case 0xa216:
return 0;
case 0xa217:
return 0;
case 0xa218:
return 0;
case 0xa219:
return 0;
case 0xa21a:
return 0;
case 0xa21b:
return 0;
case 0xa21c:
return 0;
case 0xa21d:
return 0;
case 0xa21e:
return 0;
case 0xa21f:
return 0;
case 0xa220:
return 0;
case 0xa221:
return 0;
case 0xa222:
return 0;
case 0xa223:
return 0;
case 0xa224:
return 0;
case 0xa225:
return 0;
case 0xa226:
return 0;
case 0xa227:
return 0;
case 0xa228:
return 0;
case 0xa229:
return 0;
case 0xa22a:
return 0;
case 0xa22b:
return 0;
case 0xa22c:
return 0;
case 0xa22d:
return 0;
case 0xa22e:
return 0;
case 0xa22f:
return 0;
case 0xa230:
return 0;
case 0xa231:
return 0;
case 0xa232:
return 0;
case 0xa233:
return 0;
case 0xa234:
return 0;
case 0xa235:
return 0;
case 0xa236:
return 0;
case 0xa237:
return 0;
case 0xa238:
return 0;
case 0xa239:
return 0;
case 0xa23a:
return 0;
case 0xa23b:
return 0;
case 0xa23c:
return 0;
case 0xa23d:
return 0;
case 0xa23e:
return 0;
case 0xa23f:
return 0;
case 0xa240:
return 0;
case 0xa241:
return 0;
case 0xa242:
return 0;
case 0xa243:
return 0;
case 0xa244:
return 0;
case 0xa245:
return 0;
case 0xa246:
return 0;
case 0xa247:
return 0;
case 0xa248:
return 0;
case 0xa249:
return 0;
case 0xa24a:
return 0;
case 0xa24b:
return 0;
case 0xa24c:
return 0;
case 0xa24d:
return 0;
case 0xa24e:
return 0;
case 0xa24f:
return 0;
case 0xa250:
return 0;
case 0xa251:
return 0;
case 0xa252:
return 0;
case 0xa253:
return 0;
case 0xa254:
return 0;
case 0xa255:
return 0;
case 0xa256:
return 0;
case 0xa257:
return 0;
case 0xa258:
return 0;
case 0xa259:
return 0;
case 0xa25a:
return 0;
case 0xa25b:
return 0;
case 0xa25c:
return 0;
case 0xa25d:
return 0;
case 0xa25e:
return 0;
case 0xa25f:
return 0;
case 0xa260:
return 0;
case 0xa261:
return 0;
case 0xa262:
return 0;
case 0xa263:
return 0;
case 0xa264:
return 0;
case 0xa265:
return 0;
case 0xa266:
return 0;
case 0xa267:
return 0;
case 0xa268:
return 0;
case 0xa269:
return 0;
case 0xa26a:
return 0;
case 0xa26b:
return 0;
case 0xa26c:
return 0;
case 0xa26d:
return 0;
case 0xa26e:
return 0;
case 0xa26f:
return 0;
case 0xa270:
return 0;
case 0xa271:
return 0;
case 0xa272:
return 0;
case 0xa273:
return 0;
case 0xa274:
return 0;
case 0xa275:
return 0;
case 0xa276:
return 0;
case 0xa277:
return 0;
case 0xa278:
return 0;
case 0xa279:
return 0;
case 0xa27a:
return 0;
case 0xa27b:
return 0;
case 0xa27c:
return 0;
case 0xa27d:
return 0;
case 0xa27e:
return 0;
case 0xa27f:
return 0;
case 0xa280:
return 0;
case 0xa281:
return 0;
case 0xa282:
return 0;
case 0xa283:
return 0;
case 0xa284:
return 0;
case 0xa285:
return 0;
case 0xa286:
return 0;
case 0xa287:
return 0;
case 0xa288:
return 0;
case 0xa289:
return 0;
case 0xa28a:
return 0;
case 0xa28b:
return 0;
case 0xa28c:
return 0;
case 0xa28d:
return 0;
case 0xa28e:
return 0;
case 0xa28f:
return 0;
case 0xa290:
return 0;
case 0xa291:
return 0;
case 0xa292:
return 0;
case 0xa293:
return 0;
case 0xa294:
return 0;
case 0xa295:
return 0;
case 0xa296:
return 0;
case 0xa297:
return 0;
case 0xa298:
return 0;
case 0xa299:
return 0;
case 0xa29a:
return 0;
case 0xa29b:
return 0;
case 0xa29c:
return 0;
case 0xa29d:
return 0;
case 0xa29e:
return 0;
case 0xa29f:
return 0;
case 0xa2a0:
return 0;
case 0xa2a1:
return 0;
case 0xa2a2:
return 0;
case 0xa2a3:
return 0;
case 0xa2a4:
return 0;
case 0xa2a5:
return 0;
case 0xa2a6:
return 0;
case 0xa2a7:
return 0;
case 0xa2a8:
return 0;
case 0xa2a9:
return 0;
case 0xa2aa:
return 0;
case 0xa2ab:
return 0;
case 0xa2ac:
return 0;
case 0xa2ad:
return 0;
case 0xa2ae:
return 0;
case 0xa2af:
return 0;
case 0xa2b0:
return 0;
case 0xa2b1:
return 0;
case 0xa2b2:
return 0;
case 0xa2b3:
return 0;
case 0xa2b4:
return 0;
case 0xa2b5:
return 0;
case 0xa2b6:
return 0;
case 0xa2b7:
return 0;
case 0xa2b8:
return 0;
case 0xa2b9:
return 0;
case 0xa2ba:
return 0;
case 0xa2bb:
return 0;
case 0xa2bc:
return 0;
case 0xa2bd:
return 0;
case 0xa2be:
return 0;
case 0xa2bf:
return 0;
case 0xa2c0:
return 0;
case 0xa2c1:
return 0;
case 0xa2c2:
return 0;
case 0xa2c3:
return 0;
case 0xa2c4:
return 0;
case 0xa2c5:
return 0;
case 0xa2c6:
return 0;
case 0xa2c7:
return 0;
case 0xa2c8:
return 0;
case 0xa2c9:
return 0;
case 0xa2ca:
return 0;
case 0xa2cb:
return 0;
case 0xa2cc:
return 0;
case 0xa2cd:
return 0;
case 0xa2ce:
return 0;
case 0xa2cf:
return 0;
case 0xa2d0:
return 0;
case 0xa2d1:
return 0;
case 0xa2d2:
return 0;
case 0xa2d3:
return 0;
case 0xa2d4:
return 0;
case 0xa2d5:
return 0;
case 0xa2d6:
return 0;
case 0xa2d7:
return 0;
case 0xa2d8:
return 0;
case 0xa2d9:
return 0;
case 0xa2da:
return 0;
case 0xa2db:
return 0;
case 0xa2dc:
return 0;
case 0xa2dd:
return 0;
case 0xa2de:
return 0;
case 0xa2df:
return 0;
case 0xa2e0:
return 0;
case 0xa2e1:
return 0;
case 0xa2e2:
return 0;
case 0xa2e3:
return 0;
case 0xa2e4:
return 0;
case 0xa2e5:
return 0;
case 0xa2e6:
return 0;
case 0xa2e7:
return 0;
case 0xa2e8:
return 0;
case 0xa2e9:
return 0;
case 0xa2ea:
return 0;
case 0xa2eb:
return 0;
case 0xa2ec:
return 0;
case 0xa2ed:
return 0;
case 0xa2ee:
return 0;
case 0xa2ef:
return 0;
case 0xa2f0:
return 0;
case 0xa2f1:
return 0;
case 0xa2f2:
return 0;
case 0xa2f3:
return 0;
case 0xa2f4:
return 0;
case 0xa2f5:
return 0;
case 0xa2f6:
return 0;
case 0xa2f7:
return 0;
case 0xa2f8:
return 0;
case 0xa2f9:
return 0;
case 0xa2fa:
return 0;
case 0xa2fb:
return 0;
case 0xa2fc:
return 0;
case 0xa2fd:
return 0;
case 0xa2fe:
return 0;
case 0xa2ff:
return 0;
case 0xa300:
return 0;
case 0xa301:
return 0;
case 0xa302:
return 0;
case 0xa303:
return 0;
case 0xa304:
return 0;
case 0xa305:
return 0;
case 0xa306:
return 0;
case 0xa307:
return 0;
case 0xa308:
return 0;
case 0xa309:
return 0;
case 0xa30a:
return 0;
case 0xa30b:
return 0;
case 0xa30c:
return 0;
case 0xa30d:
return 0;
case 0xa30e:
return 0;
case 0xa30f:
return 0;
case 0xa310:
return 0;
case 0xa311:
return 0;
case 0xa312:
return 0;
case 0xa313:
return 0;
case 0xa314:
return 0;
case 0xa315:
return 0;
case 0xa316:
return 0;
case 0xa317:
return 0;
case 0xa318:
return 0;
case 0xa319:
return 0;
case 0xa31a:
return 0;
case 0xa31b:
return 0;
case 0xa31c:
return 0;
case 0xa31d:
return 0;
case 0xa31e:
return 0;
case 0xa31f:
return 0;
case 0xa320:
return 0;
case 0xa321:
return 0;
case 0xa322:
return 0;
case 0xa323:
return 0;
case 0xa324:
return 0;
case 0xa325:
return 0;
case 0xa326:
return 0;
case 0xa327:
return 0;
case 0xa328:
return 0;
case 0xa329:
return 0;
case 0xa32a:
return 0;
case 0xa32b:
return 0;
case 0xa32c:
return 0;
case 0xa32d:
return 0;
case 0xa32e:
return 0;
case 0xa32f:
return 0;
case 0xa330:
return 0;
case 0xa331:
return 0;
case 0xa332:
return 0;
case 0xa333:
return 0;
case 0xa334:
return 0;
case 0xa335:
return 0;
case 0xa336:
return 0;
case 0xa337:
return 0;
case 0xa338:
return 0;
case 0xa339:
return 0;
case 0xa33a:
return 0;
case 0xa33b:
return 0;
case 0xa33c:
return 0;
case 0xa33d:
return 0;
case 0xa33e:
return 0;
case 0xa33f:
return 0;
case 0xa340:
return 0;
case 0xa341:
return 0;
case 0xa342:
return 0;
case 0xa343:
return 0;
case 0xa344:
return 0;
case 0xa345:
return 0;
case 0xa346:
return 0;
case 0xa347:
return 0;
case 0xa348:
return 0;
case 0xa349:
return 0;
case 0xa34a:
return 0;
case 0xa34b:
return 0;
case 0xa34c:
return 0;
case 0xa34d:
return 0;
case 0xa34e:
return 0;
case 0xa34f:
return 0;
case 0xa350:
return 0;
case 0xa351:
return 0;
case 0xa352:
return 0;
case 0xa353:
return 0;
case 0xa354:
return 0;
case 0xa355:
return 0;
case 0xa356:
return 0;
case 0xa357:
return 0;
case 0xa358:
return 0;
case 0xa359:
return 0;
case 0xa35a:
return 0;
case 0xa35b:
return 0;
case 0xa35c:
return 0;
case 0xa35d:
return 0;
case 0xa35e:
return 0;
case 0xa35f:
return 0;
case 0xa360:
return 0;
case 0xa361:
return 0;
case 0xa362:
return 0;
case 0xa363:
return 0;
case 0xa364:
return 0;
case 0xa365:
return 0;
case 0xa366:
return 0;
case 0xa367:
return 0;
case 0xa368:
return 0;
case 0xa369:
return 0;
case 0xa36a:
return 0;
case 0xa36b:
return 0;
case 0xa36c:
return 0;
case 0xa36d:
return 0;
case 0xa36e:
return 0;
case 0xa36f:
return 0;
case 0xa370:
return 0;
case 0xa371:
return 0;
case 0xa372:
return 0;
case 0xa373:
return 0;
case 0xa374:
return 0;
case 0xa375:
return 0;
case 0xa376:
return 0;
case 0xa377:
return 0;
case 0xa378:
return 0;
case 0xa379:
return 0;
case 0xa37a:
return 0;
case 0xa37b:
return 0;
case 0xa37c:
return 0;
case 0xa37d:
return 0;
case 0xa37e:
return 0;
case 0xa37f:
return 0;
case 0xa380:
return 0;
case 0xa381:
return 0;
case 0xa382:
return 0;
case 0xa383:
return 0;
case 0xa384:
return 0;
case 0xa385:
return 0;
case 0xa386:
return 0;
case 0xa387:
return 0;
case 0xa388:
return 0;
case 0xa389:
return 0;
case 0xa38a:
return 0;
case 0xa38b:
return 0;
case 0xa38c:
return 0;
case 0xa38d:
return 0;
case 0xa38e:
return 0;
case 0xa38f:
return 0;
case 0xa390:
return 0;
case 0xa391:
return 0;
case 0xa392:
return 0;
case 0xa393:
return 0;
case 0xa394:
return 0;
case 0xa395:
return 0;
case 0xa396:
return 0;
case 0xa397:
return 0;
case 0xa398:
return 0;
case 0xa399:
return 0;
case 0xa39a:
return 0;
case 0xa39b:
return 0;
case 0xa39c:
return 0;
case 0xa39d:
return 0;
case 0xa39e:
return 0;
case 0xa39f:
return 0;
case 0xa3a0:
return 0;
case 0xa3a1:
return 0;
case 0xa3a2:
return 0;
case 0xa3a3:
return 0;
case 0xa3a4:
return 0;
case 0xa3a5:
return 0;
case 0xa3a6:
return 0;
case 0xa3a7:
return 0;
case 0xa3a8:
return 0;
case 0xa3a9:
return 0;
case 0xa3aa:
return 0;
case 0xa3ab:
return 0;
case 0xa3ac:
return 0;
case 0xa3ad:
return 0;
case 0xa3ae:
return 0;
case 0xa3af:
return 0;
case 0xa3b0:
return 0;
case 0xa3b1:
return 0;
case 0xa3b2:
return 0;
case 0xa3b3:
return 0;
case 0xa3b4:
return 0;
case 0xa3b5:
return 0;
case 0xa3b6:
return 0;
case 0xa3b7:
return 0;
case 0xa3b8:
return 0;
case 0xa3b9:
return 0;
case 0xa3ba:
return 0;
case 0xa3bb:
return 0;
case 0xa3bc:
return 0;
case 0xa3bd:
return 0;
case 0xa3be:
return 0;
case 0xa3bf:
return 0;
case 0xa3c0:
return 0;
case 0xa3c1:
return 0;
case 0xa3c2:
return 0;
case 0xa3c3:
return 0;
case 0xa3c4:
return 0;
case 0xa3c5:
return 0;
case 0xa3c6:
return 0;
case 0xa3c7:
return 0;
case 0xa3c8:
return 0;
case 0xa3c9:
return 0;
case 0xa3ca:
return 0;
case 0xa3cb:
return 0;
case 0xa3cc:
return 0;
case 0xa3cd:
return 0;
case 0xa3ce:
return 0;
case 0xa3cf:
return 0;
case 0xa3d0:
return 0;
case 0xa3d1:
return 0;
case 0xa3d2:
return 0;
case 0xa3d3:
return 0;
case 0xa3d4:
return 0;
case 0xa3d5:
return 0;
case 0xa3d6:
return 0;
case 0xa3d7:
return 0;
case 0xa3d8:
return 0;
case 0xa3d9:
return 0;
case 0xa3da:
return 0;
case 0xa3db:
return 0;
case 0xa3dc:
return 0;
case 0xa3dd:
return 0;
case 0xa3de:
return 0;
case 0xa3df:
return 0;
case 0xa3e0:
return 0;
case 0xa3e1:
return 0;
case 0xa3e2:
return 0;
case 0xa3e3:
return 0;
case 0xa3e4:
return 0;
case 0xa3e5:
return 0;
case 0xa3e6:
return 0;
case 0xa3e7:
return 0;
case 0xa3e8:
return 0;
case 0xa3e9:
return 0;
case 0xa3ea:
return 0;
case 0xa3eb:
return 0;
case 0xa3ec:
return 0;
case 0xa3ed:
return 0;
case 0xa3ee:
return 0;
case 0xa3ef:
return 0;
case 0xa3f0:
return 0;
case 0xa3f1:
return 0;
case 0xa3f2:
return 0;
case 0xa3f3:
return 0;
case 0xa3f4:
return 0;
case 0xa3f5:
return 0;
case 0xa3f6:
return 0;
case 0xa3f7:
return 0;
case 0xa3f8:
return 0;
case 0xa3f9:
return 0;
case 0xa3fa:
return 0;
case 0xa3fb:
return 0;
case 0xa3fc:
return 0;
case 0xa3fd:
return 0;
case 0xa3fe:
return 0;
case 0xa3ff:
return 0;
case 0xa400:
return 0;
case 0xa401:
return 0;
case 0xa402:
return 0;
case 0xa403:
return 0;
case 0xa404:
return 0;
case 0xa405:
return 0;
case 0xa406:
return 0;
case 0xa407:
return 0;
case 0xa408:
return 0;
case 0xa409:
return 0;
case 0xa40a:
return 0;
case 0xa40b:
return 0;
case 0xa40c:
return 0;
case 0xa40d:
return 0;
case 0xa40e:
return 0;
case 0xa40f:
return 0;
case 0xa410:
return 0;
case 0xa411:
return 0;
case 0xa412:
return 0;
case 0xa413:
return 0;
case 0xa414:
return 0;
case 0xa415:
return 0;
case 0xa416:
return 0;
case 0xa417:
return 0;
case 0xa418:
return 0;
case 0xa419:
return 0;
case 0xa41a:
return 0;
case 0xa41b:
return 0;
case 0xa41c:
return 0;
case 0xa41d:
return 0;
case 0xa41e:
return 0;
case 0xa41f:
return 0;
case 0xa420:
return 0;
case 0xa421:
return 0;
case 0xa422:
return 0;
case 0xa423:
return 0;
case 0xa424:
return 0;
case 0xa425:
return 0;
case 0xa426:
return 0;
case 0xa427:
return 0;
case 0xa428:
return 0;
case 0xa429:
return 0;
case 0xa42a:
return 0;
case 0xa42b:
return 0;
case 0xa42c:
return 0;
case 0xa42d:
return 0;
case 0xa42e:
return 0;
case 0xa42f:
return 0;
case 0xa430:
return 0;
case 0xa431:
return 0;
case 0xa432:
return 0;
case 0xa433:
return 0;
case 0xa434:
return 0;
case 0xa435:
return 0;
case 0xa436:
return 0;
case 0xa437:
return 0;
case 0xa438:
return 0;
case 0xa439:
return 0;
case 0xa43a:
return 0;
case 0xa43b:
return 0;
case 0xa43c:
return 0;
case 0xa43d:
return 0;
case 0xa43e:
return 0;
case 0xa43f:
return 0;
case 0xa440:
return 0;
case 0xa441:
return 0;
case 0xa442:
return 0;
case 0xa443:
return 0;
case 0xa444:
return 0;
case 0xa445:
return 0;
case 0xa446:
return 0;
case 0xa447:
return 0;
case 0xa448:
return 0;
case 0xa449:
return 0;
case 0xa44a:
return 0;
case 0xa44b:
return 0;
case 0xa44c:
return 0;
case 0xa44d:
return 0;
case 0xa44e:
return 0;
case 0xa44f:
return 0;
case 0xa450:
return 0;
case 0xa451:
return 0;
case 0xa452:
return 0;
case 0xa453:
return 0;
case 0xa454:
return 0;
case 0xa455:
return 0;
case 0xa456:
return 0;
case 0xa457:
return 0;
case 0xa458:
return 0;
case 0xa459:
return 0;
case 0xa45a:
return 0;
case 0xa45b:
return 0;
case 0xa45c:
return 0;
case 0xa45d:
return 0;
case 0xa45e:
return 0;
case 0xa45f:
return 0;
case 0xa460:
return 0;
case 0xa461:
return 0;
case 0xa462:
return 0;
case 0xa463:
return 0;
case 0xa464:
return 0;
case 0xa465:
return 0;
case 0xa466:
return 0;
case 0xa467:
return 0;
case 0xa468:
return 0;
case 0xa469:
return 0;
case 0xa46a:
return 0;
case 0xa46b:
return 0;
case 0xa46c:
return 0;
case 0xa46d:
return 0;
case 0xa46e:
return 0;
case 0xa46f:
return 0;
case 0xa470:
return 0;
case 0xa471:
return 0;
case 0xa472:
return 0;
case 0xa473:
return 0;
case 0xa474:
return 0;
case 0xa475:
return 0;
case 0xa476:
return 0;
case 0xa477:
return 0;
case 0xa478:
return 0;
case 0xa479:
return 0;
case 0xa47a:
return 0;
case 0xa47b:
return 0;
case 0xa47c:
return 0;
case 0xa47d:
return 0;
case 0xa47e:
return 0;
case 0xa47f:
return 0;
case 0xa480:
return 0;
case 0xa481:
return 0;
case 0xa482:
return 0;
case 0xa483:
return 0;
case 0xa484:
return 0;
case 0xa485:
return 0;
case 0xa486:
return 0;
case 0xa487:
return 0;
case 0xa488:
return 0;
case 0xa489:
return 0;
case 0xa48a:
return 0;
case 0xa48b:
return 0;
case 0xa48c:
return 0;
case 0xa500:
return 0;
case 0xa501:
return 0;
case 0xa502:
return 0;
case 0xa503:
return 0;
case 0xa504:
return 0;
case 0xa505:
return 0;
case 0xa506:
return 0;
case 0xa507:
return 0;
case 0xa508:
return 0;
case 0xa509:
return 0;
case 0xa50a:
return 0;
case 0xa50b:
return 0;
case 0xa50c:
return 0;
case 0xa50d:
return 0;
case 0xa50e:
return 0;
case 0xa50f:
return 0;
case 0xa510:
return 0;
case 0xa511:
return 0;
case 0xa512:
return 0;
case 0xa513:
return 0;
case 0xa514:
return 0;
case 0xa515:
return 0;
case 0xa516:
return 0;
case 0xa517:
return 0;
case 0xa518:
return 0;
case 0xa519:
return 0;
case 0xa51a:
return 0;
case 0xa51b:
return 0;
case 0xa51c:
return 0;
case 0xa51d:
return 0;
case 0xa51e:
return 0;
case 0xa51f:
return 0;
case 0xa520:
return 0;
case 0xa521:
return 0;
case 0xa522:
return 0;
case 0xa523:
return 0;
case 0xa524:
return 0;
case 0xa525:
return 0;
case 0xa526:
return 0;
case 0xa527:
return 0;
case 0xa528:
return 0;
case 0xa529:
return 0;
case 0xa52a:
return 0;
case 0xa52b:
return 0;
case 0xa52c:
return 0;
case 0xa52d:
return 0;
case 0xa52e:
return 0;
case 0xa52f:
return 0;
case 0xa530:
return 0;
case 0xa531:
return 0;
case 0xa532:
return 0;
case 0xa533:
return 0;
case 0xa534:
return 0;
case 0xa535:
return 0;
case 0xa536:
return 0;
case 0xa537:
return 0;
case 0xa538:
return 0;
case 0xa539:
return 0;
case 0xa53a:
return 0;
case 0xa53b:
return 0;
case 0xa53c:
return 0;
case 0xa53d:
return 0;
case 0xa53e:
return 0;
case 0xa53f:
return 0;
case 0xa540:
return 0;
case 0xa541:
return 0;
case 0xa542:
return 0;
case 0xa543:
return 0;
case 0xa544:
return 0;
case 0xa545:
return 0;
case 0xa546:
return 0;
case 0xa547:
return 0;
case 0xa548:
return 0;
case 0xa549:
return 0;
case 0xa54a:
return 0;
case 0xa54b:
return 0;
case 0xa54c:
return 0;
case 0xa54d:
return 0;
case 0xa54e:
return 0;
case 0xa54f:
return 0;
case 0xa550:
return 0;
case 0xa551:
return 0;
case 0xa552:
return 0;
case 0xa553:
return 0;
case 0xa554:
return 0;
case 0xa555:
return 0;
case 0xa556:
return 0;
case 0xa557:
return 0;
case 0xa558:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa610:
return 1;
}
}
return 0;
case 0xa559:
return 0;
case 0xa55a:
return 0;
case 0xa55b:
return 0;
case 0xa55c:
return 0;
case 0xa55d:
return 0;
case 0xa55e:
return 0;
case 0xa55f:
return 0;
case 0xa560:
return 0;
case 0xa561:
return 0;
case 0xa562:
return 0;
case 0xa563:
return 0;
case 0xa564:
return 0;
case 0xa565:
return 0;
case 0xa566:
return 0;
case 0xa567:
return 0;
case 0xa568:
return 0;
case 0xa569:
return 0;
case 0xa56a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa611:
return 1;
}
}
return 0;
case 0xa56b:
return 0;
case 0xa56c:
return 0;
case 0xa56d:
return 0;
case 0xa56e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa62a:
return 1;
}
}
return 0;
case 0xa56f:
return 0;
case 0xa570:
return 0;
case 0xa571:
return 0;
case 0xa572:
return 0;
case 0xa573:
return 0;
case 0xa574:
return 0;
case 0xa575:
return 0;
case 0xa576:
return 0;
case 0xa577:
return 0;
case 0xa578:
return 0;
case 0xa579:
return 0;
case 0xa57a:
return 0;
case 0xa57b:
return 0;
case 0xa57c:
return 0;
case 0xa57d:
return 0;
case 0xa57e:
return 0;
case 0xa57f:
return 0;
case 0xa580:
return 0;
case 0xa581:
return 0;
case 0xa582:
return 0;
case 0xa583:
return 0;
case 0xa584:
return 0;
case 0xa585:
return 0;
case 0xa586:
return 0;
case 0xa587:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa612:
return 1;
}
}
return 0;
case 0xa588:
return 0;
case 0xa589:
return 0;
case 0xa58a:
return 0;
case 0xa58b:
return 0;
case 0xa58c:
return 0;
case 0xa58d:
return 0;
case 0xa58e:
return 0;
case 0xa58f:
return 0;
case 0xa590:
return 0;
case 0xa591:
return 0;
case 0xa592:
return 0;
case 0xa593:
return 0;
case 0xa594:
return 0;
case 0xa595:
return 0;
case 0xa596:
return 0;
case 0xa597:
return 0;
case 0xa598:
return 0;
case 0xa599:
return 0;
case 0xa59a:
return 0;
case 0xa59b:
return 0;
case 0xa59c:
return 0;
case 0xa59d:
return 0;
case 0xa59e:
return 0;
case 0xa59f:
return 0;
case 0xa5a0:
return 0;
case 0xa5a1:
return 0;
case 0xa5a2:
return 0;
case 0xa5a3:
return 0;
case 0xa5a4:
return 0;
case 0xa5a5:
return 0;
case 0xa5a6:
return 0;
case 0xa5a7:
return 0;
case 0xa5a8:
return 0;
case 0xa5a9:
return 0;
case 0xa5aa:
return 0;
case 0xa5ab:
return 0;
case 0xa5ac:
return 0;
case 0xa5ad:
return 0;
case 0xa5ae:
return 0;
case 0xa5af:
return 0;
case 0xa5b0:
return 0;
case 0xa5b1:
return 0;
case 0xa5b2:
return 0;
case 0xa5b3:
return 0;
case 0xa5b4:
return 0;
case 0xa5b5:
return 0;
case 0xa5b6:
return 0;
case 0xa5b7:
return 0;
case 0xa5b8:
return 0;
case 0xa5b9:
return 0;
case 0xa5ba:
return 0;
case 0xa5bb:
return 0;
case 0xa5bc:
return 0;
case 0xa5bd:
return 0;
case 0xa5be:
return 0;
case 0xa5bf:
return 0;
case 0xa5c0:
return 0;
case 0xa5c1:
return 0;
case 0xa5c2:
return 0;
case 0xa5c3:
return 0;
case 0xa5c4:
return 0;
case 0xa5c5:
return 0;
case 0xa5c6:
return 0;
case 0xa5c7:
return 0;
case 0xa5c8:
return 0;
case 0xa5c9:
return 0;
case 0xa5ca:
return 0;
case 0xa5cb:
return 0;
case 0xa5cc:
return 0;
case 0xa5cd:
return 0;
case 0xa5ce:
return 0;
case 0xa5cf:
return 0;
case 0xa5d0:
return 0;
case 0xa5d1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa62b:
return 1;
}
}
return 0;
case 0xa5d2:
return 0;
case 0xa5d3:
return 0;
case 0xa5d4:
return 0;
case 0xa5d5:
return 0;
case 0xa5d6:
return 0;
case 0xa5d7:
return 0;
case 0xa5d8:
return 0;
case 0xa5d9:
return 0;
case 0xa5da:
return 0;
case 0xa5db:
return 0;
case 0xa5dc:
return 0;
case 0xa5dd:
return 0;
case 0xa5de:
return 0;
case 0xa5df:
return 0;
case 0xa5e0:
return 0;
case 0xa5e1:
return 0;
case 0xa5e2:
return 0;
case 0xa5e3:
return 0;
case 0xa5e4:
return 0;
case 0xa5e5:
return 0;
case 0xa5e6:
return 0;
case 0xa5e7:
return 0;
case 0xa5e8:
return 0;
case 0xa5e9:
return 0;
case 0xa5ea:
return 0;
case 0xa5eb:
return 0;
case 0xa5ec:
return 0;
case 0xa5ed:
return 0;
case 0xa5ee:
return 0;
case 0xa5ef:
return 0;
case 0xa5f0:
return 0;
case 0xa5f1:
return 0;
case 0xa5f2:
return 0;
case 0xa5f3:
return 0;
case 0xa5f4:
return 0;
case 0xa5f5:
return 0;
case 0xa5f6:
return 0;
case 0xa5f7:
return 0;
case 0xa5f8:
return 0;
case 0xa5f9:
return 0;
case 0xa5fa:
return 0;
case 0xa5fb:
return 0;
case 0xa5fc:
return 0;
case 0xa5fd:
return 0;
case 0xa5fe:
return 0;
case 0xa5ff:
return 0;
case 0xa600:
return 0;
case 0xa601:
return 0;
case 0xa602:
return 0;
case 0xa603:
return 0;
case 0xa604:
return 0;
case 0xa605:
return 0;
case 0xa606:
return 0;
case 0xa607:
return 0;
case 0xa608:
return 0;
case 0xa609:
return 0;
case 0xa60a:
return 0;
case 0xa60b:
return 0;
case 0xa60c:
return 0;
case 0xa641:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa640:
return 1;
}
}
return 0;
case 0xa643:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa642:
return 1;
}
}
return 0;
case 0xa645:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa644:
return 1;
}
}
return 0;
case 0xa647:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa646:
return 1;
}
}
return 0;
case 0xa649:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2df8:
return 1;
case 0xa648:
return 1;
}
}
return 0;
case 0xa64b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1c88:
return 1;
case 0xa64a:
return 1;
}
}
return 0;
case 0xa64d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa64c:
return 1;
}
}
return 0;
case 0xa64f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa64e:
return 1;
}
}
return 0;
case 0xa651:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa650:
return 1;
}
}
return 0;
case 0xa653:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa652:
return 1;
}
}
return 0;
case 0xa655:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa654:
return 1;
}
}
return 0;
case 0xa657:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x2dfc:
return 1;
case 0xa656:
return 1;
}
}
return 0;
case 0xa659:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa658:
return 1;
}
}
return 0;
case 0xa65b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa65a:
return 1;
}
}
return 0;
case 0xa65d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa65c:
return 1;
}
}
return 0;
case 0xa65f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa65e:
return 1;
}
}
return 0;
case 0xa661:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa660:
return 1;
}
}
return 0;
case 0xa663:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa662:
return 1;
}
}
return 0;
case 0xa665:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa664:
return 1;
}
}
return 0;
case 0xa667:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa666:
return 1;
}
}
return 0;
case 0xa67f:
return 0;
case 0xa681:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa680:
return 1;
}
}
return 0;
case 0xa683:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa682:
return 1;
}
}
return 0;
case 0xa685:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa684:
return 1;
}
}
return 0;
case 0xa687:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa686:
return 1;
}
}
return 0;
case 0xa689:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa688:
return 1;
}
}
return 0;
case 0xa68b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa68a:
return 1;
}
}
return 0;
case 0xa68d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa68c:
return 1;
}
}
return 0;
case 0xa68f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa68e:
return 1;
}
}
return 0;
case 0xa691:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa690:
return 1;
}
}
return 0;
case 0xa693:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa692:
return 1;
}
}
return 0;
case 0xa695:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa694:
return 1;
}
}
return 0;
case 0xa697:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa696:
return 1;
}
}
return 0;
case 0xa6a0:
return 0;
case 0xa6a1:
return 0;
case 0xa6a2:
return 0;
case 0xa6a3:
return 0;
case 0xa6a4:
return 0;
case 0xa6a5:
return 0;
case 0xa6a6:
return 0;
case 0xa6a7:
return 0;
case 0xa6a8:
return 0;
case 0xa6a9:
return 0;
case 0xa6aa:
return 0;
case 0xa6ab:
return 0;
case 0xa6ac:
return 0;
case 0xa6ad:
return 0;
case 0xa6ae:
return 0;
case 0xa6af:
return 0;
case 0xa6b0:
return 0;
case 0xa6b1:
return 0;
case 0xa6b2:
return 0;
case 0xa6b3:
return 0;
case 0xa6b4:
return 0;
case 0xa6b5:
return 0;
case 0xa6b6:
return 0;
case 0xa6b7:
return 0;
case 0xa6b8:
return 0;
case 0xa6b9:
return 0;
case 0xa6ba:
return 0;
case 0xa6bb:
return 0;
case 0xa6bc:
return 0;
case 0xa6bd:
return 0;
case 0xa6be:
return 0;
case 0xa6bf:
return 0;
case 0xa6c0:
return 0;
case 0xa6c1:
return 0;
case 0xa6c2:
return 0;
case 0xa6c3:
return 0;
case 0xa6c4:
return 0;
case 0xa6c5:
return 0;
case 0xa6c6:
return 0;
case 0xa6c7:
return 0;
case 0xa6c8:
return 0;
case 0xa6c9:
return 0;
case 0xa6ca:
return 0;
case 0xa6cb:
return 0;
case 0xa6cc:
return 0;
case 0xa6cd:
return 0;
case 0xa6ce:
return 0;
case 0xa6cf:
return 0;
case 0xa6d0:
return 0;
case 0xa6d1:
return 0;
case 0xa6d2:
return 0;
case 0xa6d3:
return 0;
case 0xa6d4:
return 0;
case 0xa6d5:
return 0;
case 0xa6d6:
return 0;
case 0xa6d7:
return 0;
case 0xa6d8:
return 0;
case 0xa6d9:
return 0;
case 0xa6da:
return 0;
case 0xa6db:
return 0;
case 0xa6dc:
return 0;
case 0xa6dd:
return 0;
case 0xa6de:
return 0;
case 0xa6df:
return 0;
case 0xa6e0:
return 0;
case 0xa6e1:
return 0;
case 0xa6e2:
return 0;
case 0xa6e3:
return 0;
case 0xa6e4:
return 0;
case 0xa6e5:
return 0;
case 0xa6e6:
return 0;
case 0xa6e7:
return 0;
case 0xa6e8:
return 0;
case 0xa6e9:
return 0;
case 0xa6ea:
return 0;
case 0xa6eb:
return 0;
case 0xa6ec:
return 0;
case 0xa6ed:
return 0;
case 0xa6ee:
return 0;
case 0xa6ef:
return 0;
case 0xa723:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa722:
return 1;
}
}
return 0;
case 0xa725:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa724:
return 1;
}
}
return 0;
case 0xa727:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa726:
return 1;
case 0xab5c:
return 1;
}
}
return 0;
case 0xa72b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa72a:
return 1;
}
}
return 0;
case 0xa72d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa72c:
return 1;
}
}
return 0;
case 0xa72f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa72e:
return 1;
}
}
return 0;
case 0xa730:
return 0;
case 0xa731:
return 0;
case 0xa73f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa73e:
return 1;
}
}
return 0;
case 0xa741:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa740:
return 1;
}
}
return 0;
case 0xa743:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa742:
return 1;
}
}
return 0;
case 0xa745:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa744:
return 1;
}
}
return 0;
case 0xa747:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa746:
return 1;
}
}
return 0;
case 0xa749:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa748:
return 1;
}
}
return 0;
case 0xa74b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa74a:
return 1;
}
}
return 0;
case 0xa74d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa74c:
return 1;
}
}
return 0;
case 0xa751:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa750:
return 1;
}
}
return 0;
case 0xa753:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa752:
return 1;
}
}
return 0;
case 0xa755:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa754:
return 1;
}
}
return 0;
case 0xa757:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa756:
return 1;
}
}
return 0;
case 0xa759:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa758:
return 1;
}
}
return 0;
case 0xa75b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1de3:
return 1;
case 0xa75a:
return 1;
}
}
return 0;
case 0xa75d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa75c:
return 1;
}
}
return 0;
case 0xa75f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa75e:
return 1;
}
}
return 0;
case 0xa763:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa762:
return 1;
}
}
return 0;
case 0xa765:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa764:
return 1;
}
}
return 0;
case 0xa767:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa766:
return 1;
}
}
return 0;
case 0xa769:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa768:
return 1;
}
}
return 0;
case 0xa76b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa76a:
return 1;
}
}
return 0;
case 0xa76d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa76c:
return 1;
}
}
return 0;
case 0xa76f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dd2:
return 1;
case 0xa76e:
return 1;
case 0xa770:
return 1;
}
}
return 0;
case 0xa771:
return 0;
case 0xa772:
return 0;
case 0xa773:
return 0;
case 0xa774:
return 0;
case 0xa775:
return 0;
case 0xa776:
return 0;
case 0xa777:
return 0;
case 0xa778:
return 0;
case 0xa77f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa77e:
return 1;
}
}
return 0;
case 0xa781:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa780:
return 1;
}
}
return 0;
case 0xa78c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa78b:
return 1;
}
}
return 0;
case 0xa78e:
return 0;
case 0xa78f:
return 0;
case 0xa791:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa790:
return 1;
}
}
return 0;
case 0xa793:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa792:
return 1;
}
}
return 0;
case 0xa794:
return 0;
case 0xa795:
return 0;
case 0xa797:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa796:
return 1;
}
}
return 0;
case 0xa799:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa798:
return 1;
}
}
return 0;
case 0xa7b5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1de9:
return 1;
case 0xa7b4:
return 1;
}
}
return 0;
case 0xa7b7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa7b6:
return 1;
}
}
return 0;
case 0xa7f7:
return 0;
case 0xa7fa:
return 0;
case 0xa7fb:
return 0;
case 0xa7fc:
return 0;
case 0xa7fd:
return 0;
case 0xa7fe:
return 0;
case 0xa7ff:
return 0;
case 0xa800:
return 0;
case 0xa801:
return 0;
case 0xa802:
return 0;
case 0xa803:
return 0;
case 0xa804:
return 0;
case 0xa805:
return 0;
case 0xa806:
return 0;
case 0xa807:
return 0;
case 0xa808:
return 0;
case 0xa809:
return 0;
case 0xa80a:
return 0;
case 0xa80c:
return 0;
case 0xa80d:
return 0;
case 0xa80e:
return 0;
case 0xa80f:
return 0;
case 0xa810:
return 0;
case 0xa811:
return 0;
case 0xa812:
return 0;
case 0xa813:
return 0;
case 0xa814:
return 0;
case 0xa815:
return 0;
case 0xa816:
return 0;
case 0xa817:
return 0;
case 0xa818:
return 0;
case 0xa819:
return 0;
case 0xa81a:
return 0;
case 0xa81b:
return 0;
case 0xa81c:
return 0;
case 0xa81d:
return 0;
case 0xa81e:
return 0;
case 0xa81f:
return 0;
case 0xa820:
return 0;
case 0xa821:
return 0;
case 0xa822:
return 0;
case 0xa823:
return 0;
case 0xa824:
return 0;
case 0xa825:
return 0;
case 0xa826:
return 0;
case 0xa827:
return 0;
case 0xa840:
return 0;
case 0xa841:
return 0;
case 0xa842:
return 0;
case 0xa843:
return 0;
case 0xa844:
return 0;
case 0xa845:
return 0;
case 0xa846:
return 0;
case 0xa847:
return 0;
case 0xa848:
return 0;
case 0xa849:
return 0;
case 0xa84a:
return 0;
case 0xa84b:
return 0;
case 0xa84c:
return 0;
case 0xa84d:
return 0;
case 0xa84e:
return 0;
case 0xa84f:
return 0;
case 0xa850:
return 0;
case 0xa851:
return 0;
case 0xa852:
return 0;
case 0xa853:
return 0;
case 0xa854:
return 0;
case 0xa855:
return 0;
case 0xa856:
return 0;
case 0xa857:
return 0;
case 0xa858:
return 0;
case 0xa859:
return 0;
case 0xa85a:
return 0;
case 0xa85b:
return 0;
case 0xa85c:
return 0;
case 0xa85d:
return 0;
case 0xa85e:
return 0;
case 0xa85f:
return 0;
case 0xa860:
return 0;
case 0xa861:
return 0;
case 0xa862:
return 0;
case 0xa863:
return 0;
case 0xa864:
return 0;
case 0xa865:
return 0;
case 0xa866:
return 0;
case 0xa867:
return 0;
case 0xa868:
return 0;
case 0xa869:
return 0;
case 0xa86a:
return 0;
case 0xa86b:
return 0;
case 0xa86c:
return 0;
case 0xa86d:
return 0;
case 0xa86e:
return 0;
case 0xa86f:
return 0;
case 0xa870:
return 0;
case 0xa871:
return 0;
case 0xa872:
return 0;
case 0xa873:
return 0;
case 0xa882:
return 0;
case 0xa883:
return 0;
case 0xa884:
return 0;
case 0xa885:
return 0;
case 0xa886:
return 0;
case 0xa887:
return 0;
case 0xa888:
return 0;
case 0xa889:
return 0;
case 0xa88a:
return 0;
case 0xa88b:
return 0;
case 0xa88c:
return 0;
case 0xa88d:
return 0;
case 0xa88e:
return 0;
case 0xa88f:
return 0;
case 0xa890:
return 0;
case 0xa891:
return 0;
case 0xa892:
return 0;
case 0xa893:
return 0;
case 0xa894:
return 0;
case 0xa895:
return 0;
case 0xa896:
return 0;
case 0xa897:
return 0;
case 0xa898:
return 0;
case 0xa899:
return 0;
case 0xa89a:
return 0;
case 0xa89b:
return 0;
case 0xa89c:
return 0;
case 0xa89d:
return 0;
case 0xa89e:
return 0;
case 0xa89f:
return 0;
case 0xa8a0:
return 0;
case 0xa8a1:
return 0;
case 0xa8a2:
return 0;
case 0xa8a3:
return 0;
case 0xa8a4:
return 0;
case 0xa8a5:
return 0;
case 0xa8a6:
return 0;
case 0xa8a7:
return 0;
case 0xa8a8:
return 0;
case 0xa8a9:
return 0;
case 0xa8aa:
return 0;
case 0xa8ab:
return 0;
case 0xa8ac:
return 0;
case 0xa8ad:
return 0;
case 0xa8ae:
return 0;
case 0xa8af:
return 0;
case 0xa8b0:
return 0;
case 0xa8b1:
return 0;
case 0xa8b2:
return 0;
case 0xa8b3:
return 0;
case 0xa8b4:
return 0;
case 0xa8b5:
return 0;
case 0xa8b6:
return 0;
case 0xa8b7:
return 0;
case 0xa8b8:
return 0;
case 0xa8b9:
return 0;
case 0xa8ba:
return 0;
case 0xa8bb:
return 0;
case 0xa8bc:
return 0;
case 0xa8bd:
return 0;
case 0xa8be:
return 0;
case 0xa8bf:
return 0;
case 0xa8c0:
return 0;
case 0xa8c1:
return 0;
case 0xa8c2:
return 0;
case 0xa8c3:
return 0;
case 0xa8c4:
return 0;
case 0xa8f2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa8f3:
return 1;
}
}
return 0;
case 0xa8fb:
return 0;
case 0xa8fd:
return 0;
case 0xa90a:
return 0;
case 0xa90b:
return 0;
case 0xa90c:
return 0;
case 0xa90d:
return 0;
case 0xa90e:
return 0;
case 0xa90f:
return 0;
case 0xa910:
return 0;
case 0xa911:
return 0;
case 0xa912:
return 0;
case 0xa913:
return 0;
case 0xa914:
return 0;
case 0xa915:
return 0;
case 0xa916:
return 0;
case 0xa917:
return 0;
case 0xa918:
return 0;
case 0xa919:
return 0;
case 0xa91a:
return 0;
case 0xa91b:
return 0;
case 0xa91c:
return 0;
case 0xa91d:
return 0;
case 0xa91e:
return 0;
case 0xa91f:
return 0;
case 0xa920:
return 0;
case 0xa921:
return 0;
case 0xa922:
return 0;
case 0xa923:
return 0;
case 0xa924:
return 0;
case 0xa925:
return 0;
case 0xa926:
return 0;
case 0xa927:
return 0;
case 0xa928:
return 0;
case 0xa929:
return 0;
case 0xa92a:
return 0;
case 0xa930:
return 0;
case 0xa931:
return 0;
case 0xa932:
return 0;
case 0xa933:
return 0;
case 0xa934:
return 0;
case 0xa935:
return 0;
case 0xa936:
return 0;
case 0xa937:
return 0;
case 0xa938:
return 0;
case 0xa939:
return 0;
case 0xa93a:
return 0;
case 0xa93b:
return 0;
case 0xa93c:
return 0;
case 0xa93d:
return 0;
case 0xa93e:
return 0;
case 0xa93f:
return 0;
case 0xa940:
return 0;
case 0xa941:
return 0;
case 0xa942:
return 0;
case 0xa943:
return 0;
case 0xa944:
return 0;
case 0xa945:
return 0;
case 0xa946:
return 0;
case 0xa947:
return 0;
case 0xa948:
return 0;
case 0xa949:
return 0;
case 0xa94a:
return 0;
case 0xa94b:
return 0;
case 0xa94c:
return 0;
case 0xa94d:
return 0;
case 0xa94e:
return 0;
case 0xa94f:
return 0;
case 0xa950:
return 0;
case 0xa951:
return 0;
case 0xa952:
return 0;
case 0xa953:
return 0;
case 0xa960:
return 0;
case 0xa961:
return 0;
case 0xa962:
return 0;
case 0xa963:
return 0;
case 0xa964:
return 0;
case 0xa965:
return 0;
case 0xa966:
return 0;
case 0xa967:
return 0;
case 0xa968:
return 0;
case 0xa969:
return 0;
case 0xa96a:
return 0;
case 0xa96b:
return 0;
case 0xa96c:
return 0;
case 0xa96d:
return 0;
case 0xa96e:
return 0;
case 0xa96f:
return 0;
case 0xa970:
return 0;
case 0xa971:
return 0;
case 0xa972:
return 0;
case 0xa973:
return 0;
case 0xa974:
return 0;
case 0xa975:
return 0;
case 0xa976:
return 0;
case 0xa977:
return 0;
case 0xa978:
return 0;
case 0xa979:
return 0;
case 0xa97a:
return 0;
case 0xa97b:
return 0;
case 0xa97c:
return 0;
case 0xa984:
return 0;
case 0xa985:
return 0;
case 0xa986:
return 0;
case 0xa987:
return 0;
case 0xa988:
return 0;
case 0xa989:
return 0;
case 0xa98a:
return 0;
case 0xa98b:
return 0;
case 0xa98c:
return 0;
case 0xa98d:
return 0;
case 0xa98e:
return 0;
case 0xa98f:
return 0;
case 0xa990:
return 0;
case 0xa991:
return 0;
case 0xa992:
return 0;
case 0xa993:
return 0;
case 0xa994:
return 0;
case 0xa995:
return 0;
case 0xa996:
return 0;
case 0xa997:
return 0;
case 0xa998:
return 0;
case 0xa999:
return 0;
case 0xa99a:
return 0;
case 0xa99b:
return 0;
case 0xa99c:
return 0;
case 0xa99d:
return 0;
case 0xa99e:
return 0;
case 0xa99f:
return 0;
case 0xa9a0:
return 0;
case 0xa9a1:
return 0;
case 0xa9a2:
return 0;
case 0xa9a3:
return 0;
case 0xa9a4:
return 0;
case 0xa9a5:
return 0;
case 0xa9a6:
return 0;
case 0xa9a7:
return 0;
case 0xa9a8:
return 0;
case 0xa9a9:
return 0;
case 0xa9aa:
return 0;
case 0xa9ab:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa9ac:
return 1;
}
}
return 0;
case 0xa9ad:
return 0;
case 0xa9ae:
return 0;
case 0xa9af:
return 0;
case 0xa9b0:
return 0;
case 0xa9b1:
return 0;
case 0xa9b2:
return 0;
case 0xa9b4:
return 0;
case 0xa9b5:
return 0;
case 0xa9b6:
return 0;
case 0xa9b7:
return 0;
case 0xa9b8:
return 0;
case 0xa9b9:
return 0;
case 0xa9ba:
return 0;
case 0xa9bb:
return 0;
case 0xa9bc:
return 0;
case 0xa9bd:
return 0;
case 0xa9be:
return 0;
case 0xa9bf:
return 0;
case 0xa9c0:
return 0;
case 0xa9e0:
return 0;
case 0xa9e1:
return 0;
case 0xa9e2:
return 0;
case 0xa9e3:
return 0;
case 0xa9e4:
return 0;
case 0xa9e5:
return 0;
case 0xa9e7:
return 0;
case 0xa9e8:
return 0;
case 0xa9e9:
return 0;
case 0xa9ea:
return 0;
case 0xa9eb:
return 0;
case 0xa9ec:
return 0;
case 0xa9ed:
return 0;
case 0xa9ee:
return 0;
case 0xa9ef:
return 0;
case 0xa9fa:
return 0;
case 0xa9fb:
return 0;
case 0xa9fc:
return 0;
case 0xa9fd:
return 0;
case 0xa9fe:
return 0;
case 0xaa60:
return 0;
case 0xaa61:
return 0;
case 0xaa62:
return 0;
case 0xaa63:
return 0;
case 0xaa64:
return 0;
case 0xaa65:
return 0;
case 0xaa66:
return 0;
case 0xaa67:
return 0;
case 0xaa68:
return 0;
case 0xaa69:
return 0;
case 0xaa6a:
return 0;
case 0xaa6b:
return 0;
case 0xaa6c:
return 0;
case 0xaa6d:
return 0;
case 0xaa6e:
return 0;
case 0xaa6f:
return 0;
case 0xaa71:
return 0;
case 0xaa72:
return 0;
case 0xaa73:
return 0;
case 0xaa74:
return 0;
case 0xaa75:
return 0;
case 0xaa76:
return 0;
case 0xaa7a:
return 0;
case 0xaa7b:
return 0;
case 0xaa7c:
return 0;
case 0xaa7d:
return 0;
case 0xaa7e:
return 0;
case 0xaa7f:
return 0;
case 0xaa80:
return 0;
case 0xaa81:
return 0;
case 0xaa82:
return 0;
case 0xaa83:
return 0;
case 0xaa84:
return 0;
case 0xaa85:
return 0;
case 0xaa86:
return 0;
case 0xaa87:
return 0;
case 0xaa88:
return 0;
case 0xaa89:
return 0;
case 0xaa8a:
return 0;
case 0xaa8b:
return 0;
case 0xaa8c:
return 0;
case 0xaa8d:
return 0;
case 0xaa8e:
return 0;
case 0xaa8f:
return 0;
case 0xaa90:
return 0;
case 0xaa91:
return 0;
case 0xaa92:
return 0;
case 0xaa93:
return 0;
case 0xaa94:
return 0;
case 0xaa95:
return 0;
case 0xaa96:
return 0;
case 0xaa97:
return 0;
case 0xaa98:
return 0;
case 0xaa99:
return 0;
case 0xaa9a:
return 0;
case 0xaa9b:
return 0;
case 0xaa9c:
return 0;
case 0xaa9d:
return 0;
case 0xaa9e:
return 0;
case 0xaa9f:
return 0;
case 0xaaa0:
return 0;
case 0xaaa1:
return 0;
case 0xaaa2:
return 0;
case 0xaaa3:
return 0;
case 0xaaa4:
return 0;
case 0xaaa5:
return 0;
case 0xaaa6:
return 0;
case 0xaaa7:
return 0;
case 0xaaa8:
return 0;
case 0xaaa9:
return 0;
case 0xaaaa:
return 0;
case 0xaaab:
return 0;
case 0xaaac:
return 0;
case 0xaaad:
return 0;
case 0xaaae:
return 0;
case 0xaaaf:
return 0;
case 0xaab0:
return 0;
case 0xaab1:
return 0;
case 0xaab2:
return 0;
case 0xaab3:
return 0;
case 0xaab4:
return 0;
case 0xaab5:
return 0;
case 0xaab6:
return 0;
case 0xaab7:
return 0;
case 0xaab8:
return 0;
case 0xaab9:
return 0;
case 0xaaba:
return 0;
case 0xaabb:
return 0;
case 0xaabc:
return 0;
case 0xaabd:
return 0;
case 0xaabe:
return 0;
case 0xaac0:
return 0;
case 0xaac2:
return 0;
case 0xaadb:
return 0;
case 0xaadc:
return 0;
case 0xaae0:
return 0;
case 0xaae1:
return 0;
case 0xaae2:
return 0;
case 0xaae3:
return 0;
case 0xaae4:
return 0;
case 0xaae5:
return 0;
case 0xaae6:
return 0;
case 0xaae7:
return 0;
case 0xaae8:
return 0;
case 0xaae9:
return 0;
case 0xaaea:
return 0;
case 0xaaeb:
return 0;
case 0xaaec:
return 0;
case 0xaaed:
return 0;
case 0xaaee:
return 0;
case 0xaaef:
return 0;
case 0xaaf2:
return 0;
case 0xaaf5:
return 0;
case 0xaaf6:
return 0;
case 0xab01:
return 0;
case 0xab02:
return 0;
case 0xab03:
return 0;
case 0xab04:
return 0;
case 0xab05:
return 0;
case 0xab06:
return 0;
case 0xab09:
return 0;
case 0xab0a:
return 0;
case 0xab0b:
return 0;
case 0xab0c:
return 0;
case 0xab0d:
return 0;
case 0xab0e:
return 0;
case 0xab11:
return 0;
case 0xab12:
return 0;
case 0xab13:
return 0;
case 0xab14:
return 0;
case 0xab15:
return 0;
case 0xab16:
return 0;
case 0xab20:
return 0;
case 0xab21:
return 0;
case 0xab22:
return 0;
case 0xab23:
return 0;
case 0xab24:
return 0;
case 0xab25:
return 0;
case 0xab26:
return 0;
case 0xab28:
return 0;
case 0xab29:
return 0;
case 0xab2a:
return 0;
case 0xab2b:
return 0;
case 0xab2c:
return 0;
case 0xab2d:
return 0;
case 0xab2e:
return 0;
case 0xab30:
return 0;
case 0xab31:
return 0;
case 0xab32:
return 0;
case 0xab33:
return 0;
case 0xab34:
return 0;
case 0xab35:
return 0;
case 0xab36:
return 0;
case 0xab37:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xab5d:
return 1;
}
}
return 0;
case 0xab38:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1dec:
return 1;
}
}
return 0;
case 0xab39:
return 0;
case 0xab3a:
return 0;
case 0xab3b:
return 0;
case 0xab3c:
return 0;
case 0xab3d:
return 0;
case 0xab3e:
return 0;
case 0xab3f:
return 0;
case 0xab40:
return 0;
case 0xab41:
return 0;
case 0xab42:
return 0;
case 0xab43:
return 0;
case 0xab44:
return 0;
case 0xab45:
return 0;
case 0xab46:
return 0;
case 0xab47:
return 0;
case 0xab48:
return 0;
case 0xab49:
return 0;
case 0xab4a:
return 0;
case 0xab4b:
return 0;
case 0xab4c:
return 0;
case 0xab4d:
return 0;
case 0xab4e:
return 0;
case 0xab4f:
return 0;
case 0xab50:
return 0;
case 0xab51:
return 0;
case 0xab52:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xab5f:
return 1;
}
}
return 0;
case 0xab53:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xa7b3:
return 1;
}
}
return 0;
case 0xab54:
return 0;
case 0xab55:
return 0;
case 0xab56:
return 0;
case 0xab57:
return 0;
case 0xab58:
return 0;
case 0xab59:
return 0;
case 0xab5a:
return 0;
case 0xab60:
return 0;
case 0xab61:
return 0;
case 0xab62:
return 0;
case 0xab63:
return 0;
case 0xab64:
return 0;
case 0xab65:
return 0;
case 0xab70:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a0:
return 1;
}
}
return 0;
case 0xab71:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a1:
return 1;
}
}
return 0;
case 0xab72:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a2:
return 1;
}
}
return 0;
case 0xab73:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a3:
return 1;
}
}
return 0;
case 0xab74:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a4:
return 1;
}
}
return 0;
case 0xab75:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a5:
return 1;
}
}
return 0;
case 0xab76:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a6:
return 1;
}
}
return 0;
case 0xab77:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a7:
return 1;
}
}
return 0;
case 0xab78:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a8:
return 1;
}
}
return 0;
case 0xab79:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13a9:
return 1;
}
}
return 0;
case 0xab7a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13aa:
return 1;
}
}
return 0;
case 0xab7b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ab:
return 1;
}
}
return 0;
case 0xab7c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ac:
return 1;
}
}
return 0;
case 0xab7d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ad:
return 1;
}
}
return 0;
case 0xab7e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ae:
return 1;
}
}
return 0;
case 0xab7f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13af:
return 1;
}
}
return 0;
case 0xab80:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b0:
return 1;
}
}
return 0;
case 0xab81:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b1:
return 1;
}
}
return 0;
case 0xab82:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b2:
return 1;
}
}
return 0;
case 0xab83:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b3:
return 1;
}
}
return 0;
case 0xab84:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b4:
return 1;
}
}
return 0;
case 0xab85:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b5:
return 1;
}
}
return 0;
case 0xab86:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b6:
return 1;
}
}
return 0;
case 0xab87:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b7:
return 1;
}
}
return 0;
case 0xab88:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b8:
return 1;
}
}
return 0;
case 0xab89:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13b9:
return 1;
}
}
return 0;
case 0xab8a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ba:
return 1;
}
}
return 0;
case 0xab8b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13bb:
return 1;
}
}
return 0;
case 0xab8c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13bc:
return 1;
}
}
return 0;
case 0xab8d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13bd:
return 1;
}
}
return 0;
case 0xab8e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13be:
return 1;
}
}
return 0;
case 0xab8f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13bf:
return 1;
}
}
return 0;
case 0xab90:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c0:
return 1;
}
}
return 0;
case 0xab91:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c1:
return 1;
}
}
return 0;
case 0xab92:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c2:
return 1;
}
}
return 0;
case 0xab93:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c3:
return 1;
}
}
return 0;
case 0xab94:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c4:
return 1;
}
}
return 0;
case 0xab95:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c5:
return 1;
}
}
return 0;
case 0xab96:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c6:
return 1;
}
}
return 0;
case 0xab97:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c7:
return 1;
}
}
return 0;
case 0xab98:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c8:
return 1;
}
}
return 0;
case 0xab99:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13c9:
return 1;
}
}
return 0;
case 0xab9a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ca:
return 1;
}
}
return 0;
case 0xab9b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13cb:
return 1;
}
}
return 0;
case 0xab9c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13cc:
return 1;
}
}
return 0;
case 0xab9d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13cd:
return 1;
}
}
return 0;
case 0xab9e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ce:
return 1;
}
}
return 0;
case 0xab9f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13cf:
return 1;
}
}
return 0;
case 0xaba0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d0:
return 1;
}
}
return 0;
case 0xaba1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d1:
return 1;
}
}
return 0;
case 0xaba2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d2:
return 1;
}
}
return 0;
case 0xaba3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d3:
return 1;
}
}
return 0;
case 0xaba4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d4:
return 1;
}
}
return 0;
case 0xaba5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d5:
return 1;
}
}
return 0;
case 0xaba6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d6:
return 1;
}
}
return 0;
case 0xaba7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d7:
return 1;
}
}
return 0;
case 0xaba8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d8:
return 1;
}
}
return 0;
case 0xaba9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13d9:
return 1;
}
}
return 0;
case 0xabaa:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13da:
return 1;
}
}
return 0;
case 0xabab:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13db:
return 1;
}
}
return 0;
case 0xabac:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13dc:
return 1;
}
}
return 0;
case 0xabad:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13dd:
return 1;
}
}
return 0;
case 0xabae:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13de:
return 1;
}
}
return 0;
case 0xabaf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13df:
return 1;
}
}
return 0;
case 0xabb0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e0:
return 1;
}
}
return 0;
case 0xabb1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e1:
return 1;
}
}
return 0;
case 0xabb2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e2:
return 1;
}
}
return 0;
case 0xabb3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e3:
return 1;
}
}
return 0;
case 0xabb4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e4:
return 1;
}
}
return 0;
case 0xabb5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e5:
return 1;
}
}
return 0;
case 0xabb6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e6:
return 1;
}
}
return 0;
case 0xabb7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e7:
return 1;
}
}
return 0;
case 0xabb8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e8:
return 1;
}
}
return 0;
case 0xabb9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13e9:
return 1;
}
}
return 0;
case 0xabba:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ea:
return 1;
}
}
return 0;
case 0xabbb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13eb:
return 1;
}
}
return 0;
case 0xabbc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ec:
return 1;
}
}
return 0;
case 0xabbd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ed:
return 1;
}
}
return 0;
case 0xabbe:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ee:
return 1;
}
}
return 0;
case 0xabbf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x13ef:
return 1;
}
}
return 0;
case 0xabc0:
return 0;
case 0xabc1:
return 0;
case 0xabc2:
return 0;
case 0xabc3:
return 0;
case 0xabc4:
return 0;
case 0xabc5:
return 0;
case 0xabc6:
return 0;
case 0xabc7:
return 0;
case 0xabc8:
return 0;
case 0xabc9:
return 0;
case 0xabca:
return 0;
case 0xabcb:
return 0;
case 0xabcc:
return 0;
case 0xabcd:
return 0;
case 0xabce:
return 0;
case 0xabcf:
return 0;
case 0xabd0:
return 0;
case 0xabd1:
return 0;
case 0xabd2:
return 0;
case 0xabd3:
return 0;
case 0xabd4:
return 0;
case 0xabd5:
return 0;
case 0xabd6:
return 0;
case 0xabd7:
return 0;
case 0xabd8:
return 0;
case 0xabd9:
return 0;
case 0xabda:
return 0;
case 0xabdb:
return 0;
case 0xabdc:
return 0;
case 0xabdd:
return 0;
case 0xabde:
return 0;
case 0xabdf:
return 0;
case 0xabe0:
return 0;
case 0xabe1:
return 0;
case 0xabe2:
return 0;
case 0xabe3:
return 0;
case 0xabe4:
return 0;
case 0xabe5:
return 0;
case 0xabe6:
return 0;
case 0xabe7:
return 0;
case 0xabe8:
return 0;
case 0xabe9:
return 0;
case 0xabea:
return 0;
case 0xabed:
return 0;
case 0xd7b0:
return 0;
case 0xd7b1:
return 0;
case 0xd7b2:
return 0;
case 0xd7b3:
return 0;
case 0xd7b4:
return 0;
case 0xd7b5:
return 0;
case 0xd7b6:
return 0;
case 0xd7b7:
return 0;
case 0xd7b8:
return 0;
case 0xd7b9:
return 0;
case 0xd7ba:
return 0;
case 0xd7bb:
return 0;
case 0xd7bc:
return 0;
case 0xd7bd:
return 0;
case 0xd7be:
return 0;
case 0xd7bf:
return 0;
case 0xd7c0:
return 0;
case 0xd7c1:
return 0;
case 0xd7c2:
return 0;
case 0xd7c3:
return 0;
case 0xd7c4:
return 0;
case 0xd7c5:
return 0;
case 0xd7c6:
return 0;
case 0xd7cb:
return 0;
case 0xd7cc:
return 0;
case 0xd7cd:
return 0;
case 0xd7ce:
return 0;
case 0xd7cf:
return 0;
case 0xd7d0:
return 0;
case 0xd7d1:
return 0;
case 0xd7d2:
return 0;
case 0xd7d3:
return 0;
case 0xd7d4:
return 0;
case 0xd7d5:
return 0;
case 0xd7d6:
return 0;
case 0xd7d7:
return 0;
case 0xd7d8:
return 0;
case 0xd7d9:
return 0;
case 0xd7da:
return 0;
case 0xd7db:
return 0;
case 0xd7dc:
return 0;
case 0xd7dd:
return 0;
case 0xd7de:
return 0;
case 0xd7df:
return 0;
case 0xd7e0:
return 0;
case 0xd7e1:
return 0;
case 0xd7e2:
return 0;
case 0xd7e3:
return 0;
case 0xd7e4:
return 0;
case 0xd7e5:
return 0;
case 0xd7e6:
return 0;
case 0xd7e7:
return 0;
case 0xd7e8:
return 0;
case 0xd7e9:
return 0;
case 0xd7ea:
return 0;
case 0xd7eb:
return 0;
case 0xd7ec:
return 0;
case 0xd7ed:
return 0;
case 0xd7ee:
return 0;
case 0xd7ef:
return 0;
case 0xd7f0:
return 0;
case 0xd7f1:
return 0;
case 0xd7f2:
return 0;
case 0xd7f3:
return 0;
case 0xd7f4:
return 0;
case 0xd7f5:
return 0;
case 0xd7f6:
return 0;
case 0xd7f7:
return 0;
case 0xd7f8:
return 0;
case 0xd7f9:
return 0;
case 0xd7fa:
return 0;
case 0xd7fb:
return 0;
case 0x10000:
return 0;
case 0x10001:
return 0;
case 0x10002:
return 0;
case 0x10003:
return 0;
case 0x10004:
return 0;
case 0x10005:
return 0;
case 0x10006:
return 0;
case 0x10007:
return 0;
case 0x10008:
return 0;
case 0x10009:
return 0;
case 0x1000a:
return 0;
case 0x1000b:
return 0;
case 0x1000d:
return 0;
case 0x1000e:
return 0;
case 0x1000f:
return 0;
case 0x10010:
return 0;
case 0x10011:
return 0;
case 0x10012:
return 0;
case 0x10013:
return 0;
case 0x10014:
return 0;
case 0x10015:
return 0;
case 0x10016:
return 0;
case 0x10017:
return 0;
case 0x10018:
return 0;
case 0x10019:
return 0;
case 0x1001a:
return 0;
case 0x1001b:
return 0;
case 0x1001c:
return 0;
case 0x1001d:
return 0;
case 0x1001e:
return 0;
case 0x1001f:
return 0;
case 0x10020:
return 0;
case 0x10021:
return 0;
case 0x10022:
return 0;
case 0x10023:
return 0;
case 0x10024:
return 0;
case 0x10025:
return 0;
case 0x10026:
return 0;
case 0x10028:
return 0;
case 0x10029:
return 0;
case 0x1002a:
return 0;
case 0x1002b:
return 0;
case 0x1002c:
return 0;
case 0x1002d:
return 0;
case 0x1002e:
return 0;
case 0x1002f:
return 0;
case 0x10030:
return 0;
case 0x10031:
return 0;
case 0x10032:
return 0;
case 0x10033:
return 0;
case 0x10034:
return 0;
case 0x10035:
return 0;
case 0x10036:
return 0;
case 0x10037:
return 0;
case 0x10038:
return 0;
case 0x10039:
return 0;
case 0x1003a:
return 0;
case 0x1003c:
return 0;
case 0x1003d:
return 0;
case 0x1003f:
return 0;
case 0x10040:
return 0;
case 0x10041:
return 0;
case 0x10042:
return 0;
case 0x10043:
return 0;
case 0x10044:
return 0;
case 0x10045:
return 0;
case 0x10046:
return 0;
case 0x10047:
return 0;
case 0x10048:
return 0;
case 0x10049:
return 0;
case 0x1004a:
return 0;
case 0x1004b:
return 0;
case 0x1004c:
return 0;
case 0x1004d:
return 0;
case 0x10050:
return 0;
case 0x10051:
return 0;
case 0x10052:
return 0;
case 0x10053:
return 0;
case 0x10054:
return 0;
case 0x10055:
return 0;
case 0x10056:
return 0;
case 0x10057:
return 0;
case 0x10058:
return 0;
case 0x10059:
return 0;
case 0x1005a:
return 0;
case 0x1005b:
return 0;
case 0x1005c:
return 0;
case 0x1005d:
return 0;
case 0x10080:
return 0;
case 0x10081:
return 0;
case 0x10082:
return 0;
case 0x10083:
return 0;
case 0x10084:
return 0;
case 0x10085:
return 0;
case 0x10086:
return 0;
case 0x10087:
return 0;
case 0x10088:
return 0;
case 0x10089:
return 0;
case 0x1008a:
return 0;
case 0x1008b:
return 0;
case 0x1008c:
return 0;
case 0x1008d:
return 0;
case 0x1008e:
return 0;
case 0x1008f:
return 0;
case 0x10090:
return 0;
case 0x10091:
return 0;
case 0x10092:
return 0;
case 0x10093:
return 0;
case 0x10094:
return 0;
case 0x10095:
return 0;
case 0x10096:
return 0;
case 0x10097:
return 0;
case 0x10098:
return 0;
case 0x10099:
return 0;
case 0x1009a:
return 0;
case 0x1009b:
return 0;
case 0x1009c:
return 0;
case 0x1009d:
return 0;
case 0x1009e:
return 0;
case 0x1009f:
return 0;
case 0x100a0:
return 0;
case 0x100a1:
return 0;
case 0x100a2:
return 0;
case 0x100a3:
return 0;
case 0x100a4:
return 0;
case 0x100a5:
return 0;
case 0x100a6:
return 0;
case 0x100a7:
return 0;
case 0x100a8:
return 0;
case 0x100a9:
return 0;
case 0x100aa:
return 0;
case 0x100ab:
return 0;
case 0x100ac:
return 0;
case 0x100ad:
return 0;
case 0x100ae:
return 0;
case 0x100af:
return 0;
case 0x100b0:
return 0;
case 0x100b1:
return 0;
case 0x100b2:
return 0;
case 0x100b3:
return 0;
case 0x100b4:
return 0;
case 0x100b5:
return 0;
case 0x100b6:
return 0;
case 0x100b7:
return 0;
case 0x100b8:
return 0;
case 0x100b9:
return 0;
case 0x100ba:
return 0;
case 0x100bb:
return 0;
case 0x100bc:
return 0;
case 0x100bd:
return 0;
case 0x100be:
return 0;
case 0x100bf:
return 0;
case 0x100c0:
return 0;
case 0x100c1:
return 0;
case 0x100c2:
return 0;
case 0x100c3:
return 0;
case 0x100c4:
return 0;
case 0x100c5:
return 0;
case 0x100c6:
return 0;
case 0x100c7:
return 0;
case 0x100c8:
return 0;
case 0x100c9:
return 0;
case 0x100ca:
return 0;
case 0x100cb:
return 0;
case 0x100cc:
return 0;
case 0x100cd:
return 0;
case 0x100ce:
return 0;
case 0x100cf:
return 0;
case 0x100d0:
return 0;
case 0x100d1:
return 0;
case 0x100d2:
return 0;
case 0x100d3:
return 0;
case 0x100d4:
return 0;
case 0x100d5:
return 0;
case 0x100d6:
return 0;
case 0x100d7:
return 0;
case 0x100d8:
return 0;
case 0x100d9:
return 0;
case 0x100da:
return 0;
case 0x100db:
return 0;
case 0x100dc:
return 0;
case 0x100dd:
return 0;
case 0x100de:
return 0;
case 0x100df:
return 0;
case 0x100e0:
return 0;
case 0x100e1:
return 0;
case 0x100e2:
return 0;
case 0x100e3:
return 0;
case 0x100e4:
return 0;
case 0x100e5:
return 0;
case 0x100e6:
return 0;
case 0x100e7:
return 0;
case 0x100e8:
return 0;
case 0x100e9:
return 0;
case 0x100ea:
return 0;
case 0x100eb:
return 0;
case 0x100ec:
return 0;
case 0x100ed:
return 0;
case 0x100ee:
return 0;
case 0x100ef:
return 0;
case 0x100f0:
return 0;
case 0x100f1:
return 0;
case 0x100f2:
return 0;
case 0x100f3:
return 0;
case 0x100f4:
return 0;
case 0x100f5:
return 0;
case 0x100f6:
return 0;
case 0x100f7:
return 0;
case 0x100f8:
return 0;
case 0x100f9:
return 0;
case 0x100fa:
return 0;
case 0x10280:
return 0;
case 0x10281:
return 0;
case 0x10282:
return 0;
case 0x10283:
return 0;
case 0x10284:
return 0;
case 0x10285:
return 0;
case 0x10286:
return 0;
case 0x10287:
return 0;
case 0x10288:
return 0;
case 0x10289:
return 0;
case 0x1028a:
return 0;
case 0x1028b:
return 0;
case 0x1028c:
return 0;
case 0x1028d:
return 0;
case 0x1028e:
return 0;
case 0x1028f:
return 0;
case 0x10290:
return 0;
case 0x10291:
return 0;
case 0x10292:
return 0;
case 0x10293:
return 0;
case 0x10294:
return 0;
case 0x10295:
return 0;
case 0x10296:
return 0;
case 0x10297:
return 0;
case 0x10298:
return 0;
case 0x10299:
return 0;
case 0x1029a:
return 0;
case 0x1029b:
return 0;
case 0x1029c:
return 0;
case 0x102a0:
return 0;
case 0x102a1:
return 0;
case 0x102a2:
return 0;
case 0x102a3:
return 0;
case 0x102a4:
return 0;
case 0x102a5:
return 0;
case 0x102a6:
return 0;
case 0x102a7:
return 0;
case 0x102a8:
return 0;
case 0x102a9:
return 0;
case 0x102aa:
return 0;
case 0x102ab:
return 0;
case 0x102ac:
return 0;
case 0x102ad:
return 0;
case 0x102ae:
return 0;
case 0x102af:
return 0;
case 0x102b0:
return 0;
case 0x102b1:
return 0;
case 0x102b2:
return 0;
case 0x102b3:
return 0;
case 0x102b4:
return 0;
case 0x102b5:
return 0;
case 0x102b6:
return 0;
case 0x102b7:
return 0;
case 0x102b8:
return 0;
case 0x102b9:
return 0;
case 0x102ba:
return 0;
case 0x102bb:
return 0;
case 0x102bc:
return 0;
case 0x102bd:
return 0;
case 0x102be:
return 0;
case 0x102bf:
return 0;
case 0x102c0:
return 0;
case 0x102c1:
return 0;
case 0x102c2:
return 0;
case 0x102c3:
return 0;
case 0x102c4:
return 0;
case 0x102c5:
return 0;
case 0x102c6:
return 0;
case 0x102c7:
return 0;
case 0x102c8:
return 0;
case 0x102c9:
return 0;
case 0x102ca:
return 0;
case 0x102cb:
return 0;
case 0x102cc:
return 0;
case 0x102cd:
return 0;
case 0x102ce:
return 0;
case 0x102cf:
return 0;
case 0x102d0:
return 0;
case 0x10300:
return 0;
case 0x10301:
return 0;
case 0x10302:
return 0;
case 0x10303:
return 0;
case 0x10304:
return 0;
case 0x10305:
return 0;
case 0x10306:
return 0;
case 0x10307:
return 0;
case 0x10308:
return 0;
case 0x10309:
return 0;
case 0x1030a:
return 0;
case 0x1030b:
return 0;
case 0x1030c:
return 0;
case 0x1030d:
return 0;
case 0x1030e:
return 0;
case 0x1030f:
return 0;
case 0x10310:
return 0;
case 0x10311:
return 0;
case 0x10312:
return 0;
case 0x10313:
return 0;
case 0x10314:
return 0;
case 0x10315:
return 0;
case 0x10316:
return 0;
case 0x10317:
return 0;
case 0x10318:
return 0;
case 0x10319:
return 0;
case 0x1031a:
return 0;
case 0x1031b:
return 0;
case 0x1031c:
return 0;
case 0x1031d:
return 0;
case 0x1031e:
return 0;
case 0x1031f:
return 0;
case 0x10330:
return 0;
case 0x10331:
return 0;
case 0x10332:
return 0;
case 0x10333:
return 0;
case 0x10334:
return 0;
case 0x10335:
return 0;
case 0x10336:
return 0;
case 0x10337:
return 0;
case 0x10338:
return 0;
case 0x10339:
return 0;
case 0x1033a:
return 0;
case 0x1033b:
return 0;
case 0x1033c:
return 0;
case 0x1033d:
return 0;
case 0x1033e:
return 0;
case 0x1033f:
return 0;
case 0x10340:
return 0;
case 0x10341:
return 0;
case 0x10342:
return 0;
case 0x10343:
return 0;
case 0x10344:
return 0;
case 0x10345:
return 0;
case 0x10346:
return 0;
case 0x10347:
return 0;
case 0x10348:
return 0;
case 0x10349:
return 0;
case 0x1034a:
return 0;
case 0x10350:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10376:
return 1;
}
}
return 0;
case 0x10351:
return 0;
case 0x10352:
return 0;
case 0x10353:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10377:
return 1;
}
}
return 0;
case 0x10354:
return 0;
case 0x10355:
return 0;
case 0x10356:
return 0;
case 0x10357:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10378:
return 1;
}
}
return 0;
case 0x10358:
return 0;
case 0x10359:
return 0;
case 0x1035a:
return 0;
case 0x1035b:
return 0;
case 0x1035c:
return 0;
case 0x1035d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10379:
return 1;
}
}
return 0;
case 0x1035e:
return 0;
case 0x1035f:
return 0;
case 0x10360:
return 0;
case 0x10361:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1037a:
return 1;
}
}
return 0;
case 0x10362:
return 0;
case 0x10363:
return 0;
case 0x10364:
return 0;
case 0x10365:
return 0;
case 0x10366:
return 0;
case 0x10367:
return 0;
case 0x10368:
return 0;
case 0x10369:
return 0;
case 0x1036a:
return 0;
case 0x1036b:
return 0;
case 0x1036c:
return 0;
case 0x1036d:
return 0;
case 0x1036e:
return 0;
case 0x1036f:
return 0;
case 0x10370:
return 0;
case 0x10371:
return 0;
case 0x10372:
return 0;
case 0x10373:
return 0;
case 0x10374:
return 0;
case 0x10375:
return 0;
case 0x10380:
return 0;
case 0x10381:
return 0;
case 0x10382:
return 0;
case 0x10383:
return 0;
case 0x10384:
return 0;
case 0x10385:
return 0;
case 0x10386:
return 0;
case 0x10387:
return 0;
case 0x10388:
return 0;
case 0x10389:
return 0;
case 0x1038a:
return 0;
case 0x1038b:
return 0;
case 0x1038c:
return 0;
case 0x1038d:
return 0;
case 0x1038e:
return 0;
case 0x1038f:
return 0;
case 0x10390:
return 0;
case 0x10391:
return 0;
case 0x10392:
return 0;
case 0x10393:
return 0;
case 0x10394:
return 0;
case 0x10395:
return 0;
case 0x10396:
return 0;
case 0x10397:
return 0;
case 0x10398:
return 0;
case 0x10399:
return 0;
case 0x1039a:
return 0;
case 0x1039b:
return 0;
case 0x1039c:
return 0;
case 0x1039d:
return 0;
case 0x103a0:
return 0;
case 0x103a1:
return 0;
case 0x103a2:
return 0;
case 0x103a3:
return 0;
case 0x103a4:
return 0;
case 0x103a5:
return 0;
case 0x103a6:
return 0;
case 0x103a7:
return 0;
case 0x103a8:
return 0;
case 0x103a9:
return 0;
case 0x103aa:
return 0;
case 0x103ab:
return 0;
case 0x103ac:
return 0;
case 0x103ad:
return 0;
case 0x103ae:
return 0;
case 0x103af:
return 0;
case 0x103b0:
return 0;
case 0x103b1:
return 0;
case 0x103b2:
return 0;
case 0x103b3:
return 0;
case 0x103b4:
return 0;
case 0x103b5:
return 0;
case 0x103b6:
return 0;
case 0x103b7:
return 0;
case 0x103b8:
return 0;
case 0x103b9:
return 0;
case 0x103ba:
return 0;
case 0x103bb:
return 0;
case 0x103bc:
return 0;
case 0x103bd:
return 0;
case 0x103be:
return 0;
case 0x103bf:
return 0;
case 0x103c0:
return 0;
case 0x103c1:
return 0;
case 0x103c2:
return 0;
case 0x103c3:
return 0;
case 0x103c8:
return 0;
case 0x103c9:
return 0;
case 0x103ca:
return 0;
case 0x103cb:
return 0;
case 0x103cc:
return 0;
case 0x103cd:
return 0;
case 0x103ce:
return 0;
case 0x103cf:
return 0;
case 0x10428:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10400:
return 1;
}
}
return 0;
case 0x10429:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10401:
return 1;
}
}
return 0;
case 0x1042a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10402:
return 1;
}
}
return 0;
case 0x1042b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10403:
return 1;
}
}
return 0;
case 0x1042c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10404:
return 1;
}
}
return 0;
case 0x1042d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10405:
return 1;
}
}
return 0;
case 0x1042e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10406:
return 1;
}
}
return 0;
case 0x1042f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10407:
return 1;
}
}
return 0;
case 0x10430:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10408:
return 1;
}
}
return 0;
case 0x10431:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10409:
return 1;
}
}
return 0;
case 0x10432:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1040a:
return 1;
}
}
return 0;
case 0x10433:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1040b:
return 1;
}
}
return 0;
case 0x10434:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1040c:
return 1;
}
}
return 0;
case 0x10435:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1040d:
return 1;
}
}
return 0;
case 0x10436:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1040e:
return 1;
}
}
return 0;
case 0x10437:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1040f:
return 1;
}
}
return 0;
case 0x10438:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10410:
return 1;
}
}
return 0;
case 0x10439:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10411:
return 1;
}
}
return 0;
case 0x1043a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10412:
return 1;
}
}
return 0;
case 0x1043b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10413:
return 1;
}
}
return 0;
case 0x1043c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10414:
return 1;
}
}
return 0;
case 0x1043d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10415:
return 1;
}
}
return 0;
case 0x1043e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10416:
return 1;
}
}
return 0;
case 0x1043f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10417:
return 1;
}
}
return 0;
case 0x10440:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10418:
return 1;
}
}
return 0;
case 0x10441:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10419:
return 1;
}
}
return 0;
case 0x10442:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1041a:
return 1;
}
}
return 0;
case 0x10443:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1041b:
return 1;
}
}
return 0;
case 0x10444:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1041c:
return 1;
}
}
return 0;
case 0x10445:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1041d:
return 1;
}
}
return 0;
case 0x10446:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1041e:
return 1;
}
}
return 0;
case 0x10447:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1041f:
return 1;
}
}
return 0;
case 0x10448:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10420:
return 1;
}
}
return 0;
case 0x10449:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10421:
return 1;
}
}
return 0;
case 0x1044a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10422:
return 1;
}
}
return 0;
case 0x1044b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10423:
return 1;
}
}
return 0;
case 0x1044c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10424:
return 1;
}
}
return 0;
case 0x1044d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10425:
return 1;
}
}
return 0;
case 0x1044e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10426:
return 1;
}
}
return 0;
case 0x1044f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10427:
return 1;
}
}
return 0;
case 0x10450:
return 0;
case 0x10451:
return 0;
case 0x10452:
return 0;
case 0x10453:
return 0;
case 0x10454:
return 0;
case 0x10455:
return 0;
case 0x10456:
return 0;
case 0x10457:
return 0;
case 0x10458:
return 0;
case 0x10459:
return 0;
case 0x1045a:
return 0;
case 0x1045b:
return 0;
case 0x1045c:
return 0;
case 0x1045d:
return 0;
case 0x1045e:
return 0;
case 0x1045f:
return 0;
case 0x10460:
return 0;
case 0x10461:
return 0;
case 0x10462:
return 0;
case 0x10463:
return 0;
case 0x10464:
return 0;
case 0x10465:
return 0;
case 0x10466:
return 0;
case 0x10467:
return 0;
case 0x10468:
return 0;
case 0x10469:
return 0;
case 0x1046a:
return 0;
case 0x1046b:
return 0;
case 0x1046c:
return 0;
case 0x1046d:
return 0;
case 0x1046e:
return 0;
case 0x1046f:
return 0;
case 0x10470:
return 0;
case 0x10471:
return 0;
case 0x10472:
return 0;
case 0x10473:
return 0;
case 0x10474:
return 0;
case 0x10475:
return 0;
case 0x10476:
return 0;
case 0x10477:
return 0;
case 0x10478:
return 0;
case 0x10479:
return 0;
case 0x1047a:
return 0;
case 0x1047b:
return 0;
case 0x1047c:
return 0;
case 0x1047d:
return 0;
case 0x1047e:
return 0;
case 0x1047f:
return 0;
case 0x10480:
return 0;
case 0x10481:
return 0;
case 0x10482:
return 0;
case 0x10483:
return 0;
case 0x10484:
return 0;
case 0x10485:
return 0;
case 0x10486:
return 0;
case 0x10487:
return 0;
case 0x10488:
return 0;
case 0x10489:
return 0;
case 0x1048a:
return 0;
case 0x1048b:
return 0;
case 0x1048c:
return 0;
case 0x1048d:
return 0;
case 0x1048e:
return 0;
case 0x1048f:
return 0;
case 0x10490:
return 0;
case 0x10491:
return 0;
case 0x10492:
return 0;
case 0x10493:
return 0;
case 0x10494:
return 0;
case 0x10495:
return 0;
case 0x10496:
return 0;
case 0x10497:
return 0;
case 0x10498:
return 0;
case 0x10499:
return 0;
case 0x1049a:
return 0;
case 0x1049b:
return 0;
case 0x1049c:
return 0;
case 0x1049d:
return 0;
case 0x104d8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b0:
return 1;
}
}
return 0;
case 0x104d9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b1:
return 1;
}
}
return 0;
case 0x104da:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b2:
return 1;
}
}
return 0;
case 0x104db:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b3:
return 1;
}
}
return 0;
case 0x104dc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b4:
return 1;
}
}
return 0;
case 0x104dd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b5:
return 1;
}
}
return 0;
case 0x104de:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b6:
return 1;
}
}
return 0;
case 0x104df:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b7:
return 1;
}
}
return 0;
case 0x104e0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b8:
return 1;
}
}
return 0;
case 0x104e1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104b9:
return 1;
}
}
return 0;
case 0x104e2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104ba:
return 1;
}
}
return 0;
case 0x104e3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104bb:
return 1;
}
}
return 0;
case 0x104e4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104bc:
return 1;
}
}
return 0;
case 0x104e5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104bd:
return 1;
}
}
return 0;
case 0x104e6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104be:
return 1;
}
}
return 0;
case 0x104e7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104bf:
return 1;
}
}
return 0;
case 0x104e8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c0:
return 1;
}
}
return 0;
case 0x104e9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c1:
return 1;
}
}
return 0;
case 0x104ea:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c2:
return 1;
}
}
return 0;
case 0x104eb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c3:
return 1;
}
}
return 0;
case 0x104ec:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c4:
return 1;
}
}
return 0;
case 0x104ed:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c5:
return 1;
}
}
return 0;
case 0x104ee:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c6:
return 1;
}
}
return 0;
case 0x104ef:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c7:
return 1;
}
}
return 0;
case 0x104f0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c8:
return 1;
}
}
return 0;
case 0x104f1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104c9:
return 1;
}
}
return 0;
case 0x104f2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104ca:
return 1;
}
}
return 0;
case 0x104f3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104cb:
return 1;
}
}
return 0;
case 0x104f4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104cc:
return 1;
}
}
return 0;
case 0x104f5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104cd:
return 1;
}
}
return 0;
case 0x104f6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104ce:
return 1;
}
}
return 0;
case 0x104f7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104cf:
return 1;
}
}
return 0;
case 0x104f8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104d0:
return 1;
}
}
return 0;
case 0x104f9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104d1:
return 1;
}
}
return 0;
case 0x104fa:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104d2:
return 1;
}
}
return 0;
case 0x104fb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x104d3:
return 1;
}
}
return 0;
case 0x10500:
return 0;
case 0x10501:
return 0;
case 0x10502:
return 0;
case 0x10503:
return 0;
case 0x10504:
return 0;
case 0x10505:
return 0;
case 0x10506:
return 0;
case 0x10507:
return 0;
case 0x10508:
return 0;
case 0x10509:
return 0;
case 0x1050a:
return 0;
case 0x1050b:
return 0;
case 0x1050c:
return 0;
case 0x1050d:
return 0;
case 0x1050e:
return 0;
case 0x1050f:
return 0;
case 0x10510:
return 0;
case 0x10511:
return 0;
case 0x10512:
return 0;
case 0x10513:
return 0;
case 0x10514:
return 0;
case 0x10515:
return 0;
case 0x10516:
return 0;
case 0x10517:
return 0;
case 0x10518:
return 0;
case 0x10519:
return 0;
case 0x1051a:
return 0;
case 0x1051b:
return 0;
case 0x1051c:
return 0;
case 0x1051d:
return 0;
case 0x1051e:
return 0;
case 0x1051f:
return 0;
case 0x10520:
return 0;
case 0x10521:
return 0;
case 0x10522:
return 0;
case 0x10523:
return 0;
case 0x10524:
return 0;
case 0x10525:
return 0;
case 0x10526:
return 0;
case 0x10527:
return 0;
case 0x10530:
return 0;
case 0x10531:
return 0;
case 0x10532:
return 0;
case 0x10533:
return 0;
case 0x10534:
return 0;
case 0x10535:
return 0;
case 0x10536:
return 0;
case 0x10537:
return 0;
case 0x10538:
return 0;
case 0x10539:
return 0;
case 0x1053a:
return 0;
case 0x1053b:
return 0;
case 0x1053c:
return 0;
case 0x1053d:
return 0;
case 0x1053e:
return 0;
case 0x1053f:
return 0;
case 0x10540:
return 0;
case 0x10541:
return 0;
case 0x10542:
return 0;
case 0x10543:
return 0;
case 0x10544:
return 0;
case 0x10545:
return 0;
case 0x10546:
return 0;
case 0x10547:
return 0;
case 0x10548:
return 0;
case 0x10549:
return 0;
case 0x1054a:
return 0;
case 0x1054b:
return 0;
case 0x1054c:
return 0;
case 0x1054d:
return 0;
case 0x1054e:
return 0;
case 0x1054f:
return 0;
case 0x10550:
return 0;
case 0x10551:
return 0;
case 0x10552:
return 0;
case 0x10553:
return 0;
case 0x10554:
return 0;
case 0x10555:
return 0;
case 0x10556:
return 0;
case 0x10557:
return 0;
case 0x10558:
return 0;
case 0x10559:
return 0;
case 0x1055a:
return 0;
case 0x1055b:
return 0;
case 0x1055c:
return 0;
case 0x1055d:
return 0;
case 0x1055e:
return 0;
case 0x1055f:
return 0;
case 0x10560:
return 0;
case 0x10561:
return 0;
case 0x10562:
return 0;
case 0x10563:
return 0;
case 0x10600:
return 0;
case 0x10601:
return 0;
case 0x10602:
return 0;
case 0x10603:
return 0;
case 0x10604:
return 0;
case 0x10605:
return 0;
case 0x10606:
return 0;
case 0x10607:
return 0;
case 0x10608:
return 0;
case 0x10609:
return 0;
case 0x1060a:
return 0;
case 0x1060b:
return 0;
case 0x1060c:
return 0;
case 0x1060d:
return 0;
case 0x1060e:
return 0;
case 0x1060f:
return 0;
case 0x10610:
return 0;
case 0x10611:
return 0;
case 0x10612:
return 0;
case 0x10613:
return 0;
case 0x10614:
return 0;
case 0x10615:
return 0;
case 0x10616:
return 0;
case 0x10617:
return 0;
case 0x10618:
return 0;
case 0x10619:
return 0;
case 0x1061a:
return 0;
case 0x1061b:
return 0;
case 0x1061c:
return 0;
case 0x1061d:
return 0;
case 0x1061e:
return 0;
case 0x1061f:
return 0;
case 0x10620:
return 0;
case 0x10621:
return 0;
case 0x10622:
return 0;
case 0x10623:
return 0;
case 0x10624:
return 0;
case 0x10625:
return 0;
case 0x10626:
return 0;
case 0x10627:
return 0;
case 0x10628:
return 0;
case 0x10629:
return 0;
case 0x1062a:
return 0;
case 0x1062b:
return 0;
case 0x1062c:
return 0;
case 0x1062d:
return 0;
case 0x1062e:
return 0;
case 0x1062f:
return 0;
case 0x10630:
return 0;
case 0x10631:
return 0;
case 0x10632:
return 0;
case 0x10633:
return 0;
case 0x10634:
return 0;
case 0x10635:
return 0;
case 0x10636:
return 0;
case 0x10637:
return 0;
case 0x10638:
return 0;
case 0x10639:
return 0;
case 0x1063a:
return 0;
case 0x1063b:
return 0;
case 0x1063c:
return 0;
case 0x1063d:
return 0;
case 0x1063e:
return 0;
case 0x1063f:
return 0;
case 0x10640:
return 0;
case 0x10641:
return 0;
case 0x10642:
return 0;
case 0x10643:
return 0;
case 0x10644:
return 0;
case 0x10645:
return 0;
case 0x10646:
return 0;
case 0x10647:
return 0;
case 0x10648:
return 0;
case 0x10649:
return 0;
case 0x1064a:
return 0;
case 0x1064b:
return 0;
case 0x1064c:
return 0;
case 0x1064d:
return 0;
case 0x1064e:
return 0;
case 0x1064f:
return 0;
case 0x10650:
return 0;
case 0x10651:
return 0;
case 0x10652:
return 0;
case 0x10653:
return 0;
case 0x10654:
return 0;
case 0x10655:
return 0;
case 0x10656:
return 0;
case 0x10657:
return 0;
case 0x10658:
return 0;
case 0x10659:
return 0;
case 0x1065a:
return 0;
case 0x1065b:
return 0;
case 0x1065c:
return 0;
case 0x1065d:
return 0;
case 0x1065e:
return 0;
case 0x1065f:
return 0;
case 0x10660:
return 0;
case 0x10661:
return 0;
case 0x10662:
return 0;
case 0x10663:
return 0;
case 0x10664:
return 0;
case 0x10665:
return 0;
case 0x10666:
return 0;
case 0x10667:
return 0;
case 0x10668:
return 0;
case 0x10669:
return 0;
case 0x1066a:
return 0;
case 0x1066b:
return 0;
case 0x1066c:
return 0;
case 0x1066d:
return 0;
case 0x1066e:
return 0;
case 0x1066f:
return 0;
case 0x10670:
return 0;
case 0x10671:
return 0;
case 0x10672:
return 0;
case 0x10673:
return 0;
case 0x10674:
return 0;
case 0x10675:
return 0;
case 0x10676:
return 0;
case 0x10677:
return 0;
case 0x10678:
return 0;
case 0x10679:
return 0;
case 0x1067a:
return 0;
case 0x1067b:
return 0;
case 0x1067c:
return 0;
case 0x1067d:
return 0;
case 0x1067e:
return 0;
case 0x1067f:
return 0;
case 0x10680:
return 0;
case 0x10681:
return 0;
case 0x10682:
return 0;
case 0x10683:
return 0;
case 0x10684:
return 0;
case 0x10685:
return 0;
case 0x10686:
return 0;
case 0x10687:
return 0;
case 0x10688:
return 0;
case 0x10689:
return 0;
case 0x1068a:
return 0;
case 0x1068b:
return 0;
case 0x1068c:
return 0;
case 0x1068d:
return 0;
case 0x1068e:
return 0;
case 0x1068f:
return 0;
case 0x10690:
return 0;
case 0x10691:
return 0;
case 0x10692:
return 0;
case 0x10693:
return 0;
case 0x10694:
return 0;
case 0x10695:
return 0;
case 0x10696:
return 0;
case 0x10697:
return 0;
case 0x10698:
return 0;
case 0x10699:
return 0;
case 0x1069a:
return 0;
case 0x1069b:
return 0;
case 0x1069c:
return 0;
case 0x1069d:
return 0;
case 0x1069e:
return 0;
case 0x1069f:
return 0;
case 0x106a0:
return 0;
case 0x106a1:
return 0;
case 0x106a2:
return 0;
case 0x106a3:
return 0;
case 0x106a4:
return 0;
case 0x106a5:
return 0;
case 0x106a6:
return 0;
case 0x106a7:
return 0;
case 0x106a8:
return 0;
case 0x106a9:
return 0;
case 0x106aa:
return 0;
case 0x106ab:
return 0;
case 0x106ac:
return 0;
case 0x106ad:
return 0;
case 0x106ae:
return 0;
case 0x106af:
return 0;
case 0x106b0:
return 0;
case 0x106b1:
return 0;
case 0x106b2:
return 0;
case 0x106b3:
return 0;
case 0x106b4:
return 0;
case 0x106b5:
return 0;
case 0x106b6:
return 0;
case 0x106b7:
return 0;
case 0x106b8:
return 0;
case 0x106b9:
return 0;
case 0x106ba:
return 0;
case 0x106bb:
return 0;
case 0x106bc:
return 0;
case 0x106bd:
return 0;
case 0x106be:
return 0;
case 0x106bf:
return 0;
case 0x106c0:
return 0;
case 0x106c1:
return 0;
case 0x106c2:
return 0;
case 0x106c3:
return 0;
case 0x106c4:
return 0;
case 0x106c5:
return 0;
case 0x106c6:
return 0;
case 0x106c7:
return 0;
case 0x106c8:
return 0;
case 0x106c9:
return 0;
case 0x106ca:
return 0;
case 0x106cb:
return 0;
case 0x106cc:
return 0;
case 0x106cd:
return 0;
case 0x106ce:
return 0;
case 0x106cf:
return 0;
case 0x106d0:
return 0;
case 0x106d1:
return 0;
case 0x106d2:
return 0;
case 0x106d3:
return 0;
case 0x106d4:
return 0;
case 0x106d5:
return 0;
case 0x106d6:
return 0;
case 0x106d7:
return 0;
case 0x106d8:
return 0;
case 0x106d9:
return 0;
case 0x106da:
return 0;
case 0x106db:
return 0;
case 0x106dc:
return 0;
case 0x106dd:
return 0;
case 0x106de:
return 0;
case 0x106df:
return 0;
case 0x106e0:
return 0;
case 0x106e1:
return 0;
case 0x106e2:
return 0;
case 0x106e3:
return 0;
case 0x106e4:
return 0;
case 0x106e5:
return 0;
case 0x106e6:
return 0;
case 0x106e7:
return 0;
case 0x106e8:
return 0;
case 0x106e9:
return 0;
case 0x106ea:
return 0;
case 0x106eb:
return 0;
case 0x106ec:
return 0;
case 0x106ed:
return 0;
case 0x106ee:
return 0;
case 0x106ef:
return 0;
case 0x106f0:
return 0;
case 0x106f1:
return 0;
case 0x106f2:
return 0;
case 0x106f3:
return 0;
case 0x106f4:
return 0;
case 0x106f5:
return 0;
case 0x106f6:
return 0;
case 0x106f7:
return 0;
case 0x106f8:
return 0;
case 0x106f9:
return 0;
case 0x106fa:
return 0;
case 0x106fb:
return 0;
case 0x106fc:
return 0;
case 0x106fd:
return 0;
case 0x106fe:
return 0;
case 0x106ff:
return 0;
case 0x10700:
return 0;
case 0x10701:
return 0;
case 0x10702:
return 0;
case 0x10703:
return 0;
case 0x10704:
return 0;
case 0x10705:
return 0;
case 0x10706:
return 0;
case 0x10707:
return 0;
case 0x10708:
return 0;
case 0x10709:
return 0;
case 0x1070a:
return 0;
case 0x1070b:
return 0;
case 0x1070c:
return 0;
case 0x1070d:
return 0;
case 0x1070e:
return 0;
case 0x1070f:
return 0;
case 0x10710:
return 0;
case 0x10711:
return 0;
case 0x10712:
return 0;
case 0x10713:
return 0;
case 0x10714:
return 0;
case 0x10715:
return 0;
case 0x10716:
return 0;
case 0x10717:
return 0;
case 0x10718:
return 0;
case 0x10719:
return 0;
case 0x1071a:
return 0;
case 0x1071b:
return 0;
case 0x1071c:
return 0;
case 0x1071d:
return 0;
case 0x1071e:
return 0;
case 0x1071f:
return 0;
case 0x10720:
return 0;
case 0x10721:
return 0;
case 0x10722:
return 0;
case 0x10723:
return 0;
case 0x10724:
return 0;
case 0x10725:
return 0;
case 0x10726:
return 0;
case 0x10727:
return 0;
case 0x10728:
return 0;
case 0x10729:
return 0;
case 0x1072a:
return 0;
case 0x1072b:
return 0;
case 0x1072c:
return 0;
case 0x1072d:
return 0;
case 0x1072e:
return 0;
case 0x1072f:
return 0;
case 0x10730:
return 0;
case 0x10731:
return 0;
case 0x10732:
return 0;
case 0x10733:
return 0;
case 0x10734:
return 0;
case 0x10735:
return 0;
case 0x10736:
return 0;
case 0x10740:
return 0;
case 0x10741:
return 0;
case 0x10742:
return 0;
case 0x10743:
return 0;
case 0x10744:
return 0;
case 0x10745:
return 0;
case 0x10746:
return 0;
case 0x10747:
return 0;
case 0x10748:
return 0;
case 0x10749:
return 0;
case 0x1074a:
return 0;
case 0x1074b:
return 0;
case 0x1074c:
return 0;
case 0x1074d:
return 0;
case 0x1074e:
return 0;
case 0x1074f:
return 0;
case 0x10750:
return 0;
case 0x10751:
return 0;
case 0x10752:
return 0;
case 0x10753:
return 0;
case 0x10754:
return 0;
case 0x10755:
return 0;
case 0x10760:
return 0;
case 0x10761:
return 0;
case 0x10762:
return 0;
case 0x10763:
return 0;
case 0x10764:
return 0;
case 0x10765:
return 0;
case 0x10766:
return 0;
case 0x10767:
return 0;
case 0x10800:
return 0;
case 0x10801:
return 0;
case 0x10802:
return 0;
case 0x10803:
return 0;
case 0x10804:
return 0;
case 0x10805:
return 0;
case 0x10808:
return 0;
case 0x1080a:
return 0;
case 0x1080b:
return 0;
case 0x1080c:
return 0;
case 0x1080d:
return 0;
case 0x1080e:
return 0;
case 0x1080f:
return 0;
case 0x10810:
return 0;
case 0x10811:
return 0;
case 0x10812:
return 0;
case 0x10813:
return 0;
case 0x10814:
return 0;
case 0x10815:
return 0;
case 0x10816:
return 0;
case 0x10817:
return 0;
case 0x10818:
return 0;
case 0x10819:
return 0;
case 0x1081a:
return 0;
case 0x1081b:
return 0;
case 0x1081c:
return 0;
case 0x1081d:
return 0;
case 0x1081e:
return 0;
case 0x1081f:
return 0;
case 0x10820:
return 0;
case 0x10821:
return 0;
case 0x10822:
return 0;
case 0x10823:
return 0;
case 0x10824:
return 0;
case 0x10825:
return 0;
case 0x10826:
return 0;
case 0x10827:
return 0;
case 0x10828:
return 0;
case 0x10829:
return 0;
case 0x1082a:
return 0;
case 0x1082b:
return 0;
case 0x1082c:
return 0;
case 0x1082d:
return 0;
case 0x1082e:
return 0;
case 0x1082f:
return 0;
case 0x10830:
return 0;
case 0x10831:
return 0;
case 0x10832:
return 0;
case 0x10833:
return 0;
case 0x10834:
return 0;
case 0x10835:
return 0;
case 0x10837:
return 0;
case 0x10838:
return 0;
case 0x1083c:
return 0;
case 0x1083f:
return 0;
case 0x10840:
return 0;
case 0x10841:
return 0;
case 0x10842:
return 0;
case 0x10843:
return 0;
case 0x10844:
return 0;
case 0x10845:
return 0;
case 0x10846:
return 0;
case 0x10847:
return 0;
case 0x10848:
return 0;
case 0x10849:
return 0;
case 0x1084a:
return 0;
case 0x1084b:
return 0;
case 0x1084c:
return 0;
case 0x1084d:
return 0;
case 0x1084e:
return 0;
case 0x1084f:
return 0;
case 0x10850:
return 0;
case 0x10851:
return 0;
case 0x10852:
return 0;
case 0x10853:
return 0;
case 0x10854:
return 0;
case 0x10855:
return 0;
case 0x10860:
return 0;
case 0x10861:
return 0;
case 0x10862:
return 0;
case 0x10863:
return 0;
case 0x10864:
return 0;
case 0x10865:
return 0;
case 0x10866:
return 0;
case 0x10867:
return 0;
case 0x10868:
return 0;
case 0x10869:
return 0;
case 0x1086a:
return 0;
case 0x1086b:
return 0;
case 0x1086c:
return 0;
case 0x1086e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1086d:
return 1;
}
}
return 0;
case 0x1086f:
return 0;
case 0x10870:
return 0;
case 0x10871:
return 0;
case 0x10872:
return 0;
case 0x10873:
return 0;
case 0x10874:
return 0;
case 0x10875:
return 0;
case 0x10876:
return 0;
case 0x10881:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10880:
return 1;
}
}
return 0;
case 0x10883:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10882:
return 1;
}
}
return 0;
case 0x10884:
return 0;
case 0x10885:
return 0;
case 0x10887:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10886:
return 1;
}
}
return 0;
case 0x10888:
return 0;
case 0x10889:
return 0;
case 0x1088a:
return 0;
case 0x1088b:
return 0;
case 0x1088d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1088c:
return 1;
}
}
return 0;
case 0x1088f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1088e:
return 1;
}
}
return 0;
case 0x10891:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10890:
return 1;
}
}
return 0;
case 0x10893:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10892:
return 1;
}
}
return 0;
case 0x10895:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10894:
return 1;
}
}
return 0;
case 0x10896:
return 0;
case 0x10897:
return 0;
case 0x10898:
return 0;
case 0x10899:
return 0;
case 0x1089a:
return 0;
case 0x1089b:
return 0;
case 0x1089d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1089c:
return 1;
}
}
return 0;
case 0x1089e:
return 0;
case 0x108e0:
return 0;
case 0x108e1:
return 0;
case 0x108e2:
return 0;
case 0x108e3:
return 0;
case 0x108e4:
return 0;
case 0x108e5:
return 0;
case 0x108e6:
return 0;
case 0x108e7:
return 0;
case 0x108e8:
return 0;
case 0x108e9:
return 0;
case 0x108ea:
return 0;
case 0x108eb:
return 0;
case 0x108ec:
return 0;
case 0x108ed:
return 0;
case 0x108ee:
return 0;
case 0x108ef:
return 0;
case 0x108f0:
return 0;
case 0x108f1:
return 0;
case 0x108f2:
return 0;
case 0x108f4:
return 0;
case 0x108f5:
return 0;
case 0x10900:
return 0;
case 0x10901:
return 0;
case 0x10902:
return 0;
case 0x10903:
return 0;
case 0x10904:
return 0;
case 0x10905:
return 0;
case 0x10906:
return 0;
case 0x10907:
return 0;
case 0x10908:
return 0;
case 0x10909:
return 0;
case 0x1090a:
return 0;
case 0x1090b:
return 0;
case 0x1090c:
return 0;
case 0x1090d:
return 0;
case 0x1090e:
return 0;
case 0x1090f:
return 0;
case 0x10910:
return 0;
case 0x10911:
return 0;
case 0x10912:
return 0;
case 0x10913:
return 0;
case 0x10914:
return 0;
case 0x10915:
return 0;
case 0x10920:
return 0;
case 0x10921:
return 0;
case 0x10922:
return 0;
case 0x10923:
return 0;
case 0x10924:
return 0;
case 0x10925:
return 0;
case 0x10926:
return 0;
case 0x10927:
return 0;
case 0x10928:
return 0;
case 0x10929:
return 0;
case 0x1092a:
return 0;
case 0x1092b:
return 0;
case 0x1092c:
return 0;
case 0x1092d:
return 0;
case 0x1092e:
return 0;
case 0x1092f:
return 0;
case 0x10930:
return 0;
case 0x10931:
return 0;
case 0x10932:
return 0;
case 0x10933:
return 0;
case 0x10934:
return 0;
case 0x10935:
return 0;
case 0x10936:
return 0;
case 0x10937:
return 0;
case 0x10938:
return 0;
case 0x10939:
return 0;
case 0x1099e:
return 0;
case 0x1099f:
return 0;
case 0x109a0:
return 0;
case 0x109a1:
return 0;
case 0x109a2:
return 0;
case 0x109a3:
return 0;
case 0x109a4:
return 0;
case 0x109a5:
return 0;
case 0x109a6:
return 0;
case 0x109a7:
return 0;
case 0x109a8:
return 0;
case 0x109a9:
return 0;
case 0x109aa:
return 0;
case 0x109ab:
return 0;
case 0x109ac:
return 0;
case 0x109ad:
return 0;
case 0x109ae:
return 0;
case 0x109af:
return 0;
case 0x109b1:
return 0;
case 0x109b2:
return 0;
case 0x109b3:
return 0;
case 0x109b4:
return 0;
case 0x109b5:
return 0;
case 0x109b6:
return 0;
case 0x109b7:
return 0;
case 0x109be:
return 0;
case 0x109bf:
return 0;
case 0x10a00:
return 0;
case 0x10a01:
return 0;
case 0x10a02:
return 0;
case 0x10a03:
return 0;
case 0x10a05:
return 0;
case 0x10a06:
return 0;
case 0x10a0c:
return 0;
case 0x10a10:
return 0;
case 0x10a11:
return 0;
case 0x10a12:
return 0;
case 0x10a13:
return 0;
case 0x10a15:
return 0;
case 0x10a16:
return 0;
case 0x10a17:
return 0;
case 0x10a19:
return 0;
case 0x10a1a:
return 0;
case 0x10a1b:
return 0;
case 0x10a1c:
return 0;
case 0x10a1d:
return 0;
case 0x10a1e:
return 0;
case 0x10a1f:
return 0;
case 0x10a20:
return 0;
case 0x10a21:
return 0;
case 0x10a22:
return 0;
case 0x10a23:
return 0;
case 0x10a24:
return 0;
case 0x10a25:
return 0;
case 0x10a26:
return 0;
case 0x10a27:
return 0;
case 0x10a28:
return 0;
case 0x10a29:
return 0;
case 0x10a2a:
return 0;
case 0x10a2b:
return 0;
case 0x10a2c:
return 0;
case 0x10a2d:
return 0;
case 0x10a2e:
return 0;
case 0x10a2f:
return 0;
case 0x10a30:
return 0;
case 0x10a31:
return 0;
case 0x10a32:
return 0;
case 0x10a33:
return 0;
case 0x10a3f:
return 0;
case 0x10a60:
return 0;
case 0x10a61:
return 0;
case 0x10a62:
return 0;
case 0x10a63:
return 0;
case 0x10a64:
return 0;
case 0x10a65:
return 0;
case 0x10a66:
return 0;
case 0x10a67:
return 0;
case 0x10a68:
return 0;
case 0x10a69:
return 0;
case 0x10a6a:
return 0;
case 0x10a6b:
return 0;
case 0x10a6c:
return 0;
case 0x10a6d:
return 0;
case 0x10a6e:
return 0;
case 0x10a6f:
return 0;
case 0x10a70:
return 0;
case 0x10a71:
return 0;
case 0x10a72:
return 0;
case 0x10a73:
return 0;
case 0x10a74:
return 0;
case 0x10a75:
return 0;
case 0x10a76:
return 0;
case 0x10a77:
return 0;
case 0x10a78:
return 0;
case 0x10a79:
return 0;
case 0x10a7a:
return 0;
case 0x10a7b:
return 0;
case 0x10a7c:
return 0;
case 0x10a80:
return 0;
case 0x10a81:
return 0;
case 0x10a82:
return 0;
case 0x10a83:
return 0;
case 0x10a84:
return 0;
case 0x10a85:
return 0;
case 0x10a86:
return 0;
case 0x10a87:
return 0;
case 0x10a88:
return 0;
case 0x10a89:
return 0;
case 0x10a8a:
return 0;
case 0x10a8b:
return 0;
case 0x10a8c:
return 0;
case 0x10a8d:
return 0;
case 0x10a8e:
return 0;
case 0x10a8f:
return 0;
case 0x10a90:
return 0;
case 0x10a91:
return 0;
case 0x10a92:
return 0;
case 0x10a93:
return 0;
case 0x10a94:
return 0;
case 0x10a95:
return 0;
case 0x10a96:
return 0;
case 0x10a97:
return 0;
case 0x10a98:
return 0;
case 0x10a99:
return 0;
case 0x10a9a:
return 0;
case 0x10a9b:
return 0;
case 0x10a9c:
return 0;
case 0x10ac0:
return 0;
case 0x10ac1:
return 0;
case 0x10ac2:
return 0;
case 0x10ac3:
return 0;
case 0x10ac4:
return 0;
case 0x10ac5:
return 0;
case 0x10ac6:
return 0;
case 0x10ac7:
return 0;
case 0x10ac9:
return 0;
case 0x10aca:
return 0;
case 0x10acb:
return 0;
case 0x10acc:
return 0;
case 0x10acd:
return 0;
case 0x10ace:
return 0;
case 0x10acf:
return 0;
case 0x10ad0:
return 0;
case 0x10ad1:
return 0;
case 0x10ad2:
return 0;
case 0x10ad3:
return 0;
case 0x10ad4:
return 0;
case 0x10ad5:
return 0;
case 0x10ad6:
return 0;
case 0x10ad7:
return 0;
case 0x10ad8:
return 0;
case 0x10ad9:
return 0;
case 0x10ada:
return 0;
case 0x10adb:
return 0;
case 0x10adc:
return 0;
case 0x10add:
return 0;
case 0x10ade:
return 0;
case 0x10adf:
return 0;
case 0x10ae0:
return 0;
case 0x10ae1:
return 0;
case 0x10ae2:
return 0;
case 0x10ae3:
return 0;
case 0x10ae4:
return 0;
case 0x10b00:
return 0;
case 0x10b01:
return 0;
case 0x10b02:
return 0;
case 0x10b03:
return 0;
case 0x10b04:
return 0;
case 0x10b05:
return 0;
case 0x10b06:
return 0;
case 0x10b07:
return 0;
case 0x10b08:
return 0;
case 0x10b09:
return 0;
case 0x10b0a:
return 0;
case 0x10b0b:
return 0;
case 0x10b0c:
return 0;
case 0x10b0d:
return 0;
case 0x10b0e:
return 0;
case 0x10b0f:
return 0;
case 0x10b10:
return 0;
case 0x10b11:
return 0;
case 0x10b12:
return 0;
case 0x10b13:
return 0;
case 0x10b14:
return 0;
case 0x10b15:
return 0;
case 0x10b16:
return 0;
case 0x10b17:
return 0;
case 0x10b18:
return 0;
case 0x10b19:
return 0;
case 0x10b1a:
return 0;
case 0x10b1b:
return 0;
case 0x10b1c:
return 0;
case 0x10b1d:
return 0;
case 0x10b1e:
return 0;
case 0x10b1f:
return 0;
case 0x10b20:
return 0;
case 0x10b21:
return 0;
case 0x10b22:
return 0;
case 0x10b23:
return 0;
case 0x10b24:
return 0;
case 0x10b25:
return 0;
case 0x10b26:
return 0;
case 0x10b27:
return 0;
case 0x10b28:
return 0;
case 0x10b29:
return 0;
case 0x10b2a:
return 0;
case 0x10b2b:
return 0;
case 0x10b2c:
return 0;
case 0x10b2d:
return 0;
case 0x10b2f:
return 0;
case 0x10b30:
return 0;
case 0x10b31:
return 0;
case 0x10b32:
return 0;
case 0x10b33:
return 0;
case 0x10b34:
return 0;
case 0x10b35:
return 0;
case 0x10b40:
return 0;
case 0x10b41:
return 0;
case 0x10b42:
return 0;
case 0x10b43:
return 0;
case 0x10b44:
return 0;
case 0x10b45:
return 0;
case 0x10b46:
return 0;
case 0x10b47:
return 0;
case 0x10b48:
return 0;
case 0x10b49:
return 0;
case 0x10b4a:
return 0;
case 0x10b4b:
return 0;
case 0x10b4c:
return 0;
case 0x10b4d:
return 0;
case 0x10b4e:
return 0;
case 0x10b4f:
return 0;
case 0x10b50:
return 0;
case 0x10b51:
return 0;
case 0x10b52:
return 0;
case 0x10b53:
return 0;
case 0x10b54:
return 0;
case 0x10b55:
return 0;
case 0x10b60:
return 0;
case 0x10b61:
return 0;
case 0x10b62:
return 0;
case 0x10b63:
return 0;
case 0x10b64:
return 0;
case 0x10b65:
return 0;
case 0x10b66:
return 0;
case 0x10b67:
return 0;
case 0x10b68:
return 0;
case 0x10b69:
return 0;
case 0x10b6a:
return 0;
case 0x10b6b:
return 0;
case 0x10b6c:
return 0;
case 0x10b6d:
return 0;
case 0x10b6e:
return 0;
case 0x10b6f:
return 0;
case 0x10b70:
return 0;
case 0x10b71:
return 0;
case 0x10b72:
return 0;
case 0x10b80:
return 0;
case 0x10b81:
return 0;
case 0x10b82:
return 0;
case 0x10b83:
return 0;
case 0x10b84:
return 0;
case 0x10b85:
return 0;
case 0x10b86:
return 0;
case 0x10b87:
return 0;
case 0x10b88:
return 0;
case 0x10b89:
return 0;
case 0x10b8a:
return 0;
case 0x10b8b:
return 0;
case 0x10b8c:
return 0;
case 0x10b8d:
return 0;
case 0x10b8e:
return 0;
case 0x10b8f:
return 0;
case 0x10b90:
return 0;
case 0x10b91:
return 0;
case 0x10c00:
return 0;
case 0x10c02:
return 0;
case 0x10c03:
return 0;
case 0x10c05:
return 0;
case 0x10c06:
return 0;
case 0x10c07:
return 0;
case 0x10c09:
return 0;
case 0x10c0b:
return 0;
case 0x10c0d:
return 0;
case 0x10c0f:
return 0;
case 0x10c11:
return 0;
case 0x10c13:
return 0;
case 0x10c14:
return 0;
case 0x10c16:
return 0;
case 0x10c18:
return 0;
case 0x10c1a:
return 0;
case 0x10c1c:
return 0;
case 0x10c1e:
return 0;
case 0x10c20:
return 0;
case 0x10c21:
return 0;
case 0x10c22:
return 0;
case 0x10c23:
return 0;
case 0x10c24:
return 0;
case 0x10c26:
return 0;
case 0x10c28:
return 0;
case 0x10c2a:
return 0;
case 0x10c2c:
return 0;
case 0x10c2d:
return 0;
case 0x10c2f:
return 0;
case 0x10c30:
return 0;
case 0x10c31:
return 0;
case 0x10c32:
return 0;
case 0x10c34:
return 0;
case 0x10c36:
return 0;
case 0x10c38:
return 0;
case 0x10c3a:
return 0;
case 0x10c3c:
return 0;
case 0x10c3d:
return 0;
case 0x10c3e:
return 0;
case 0x10c3f:
return 0;
case 0x10c41:
return 0;
case 0x10c43:
return 0;
case 0x10c45:
return 0;
case 0x10c47:
return 0;
case 0x10c48:
return 0;
case 0x10cc0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c80:
return 1;
case 0x10c81:
return 1;
}
}
return 0;
case 0x10cc2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c82:
return 1;
}
}
return 0;
case 0x10cc3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c83:
return 1;
}
}
return 0;
case 0x10cc4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c84:
return 1;
}
}
return 0;
case 0x10cc5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c85:
return 1;
}
}
return 0;
case 0x10cc6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c86:
return 1;
}
}
return 0;
case 0x10cc7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c87:
return 1;
}
}
return 0;
case 0x10cc8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c88:
return 1;
}
}
return 0;
case 0x10cc9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c89:
return 1;
case 0x10c8a:
return 1;
case 0x10c8b:
return 1;
}
}
return 0;
case 0x10ccc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c8c:
return 1;
}
}
return 0;
case 0x10ccd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c8d:
return 1;
}
}
return 0;
case 0x10cce:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c8e:
return 1;
}
}
return 0;
case 0x10ccf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c8f:
return 1;
}
}
return 0;
case 0x10cd0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c90:
return 1;
case 0x10c91:
return 1;
}
}
return 0;
case 0x10cd2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c92:
return 1;
}
}
return 0;
case 0x10cd3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c93:
return 1;
}
}
return 0;
case 0x10cd4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c94:
return 1;
}
}
return 0;
case 0x10cd5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c95:
return 1;
}
}
return 0;
case 0x10cd6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c96:
return 1;
}
}
return 0;
case 0x10cd7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c97:
return 1;
}
}
return 0;
case 0x10cd8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c98:
return 1;
}
}
return 0;
case 0x10cd9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c99:
return 1;
}
}
return 0;
case 0x10cda:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c9a:
return 1;
}
}
return 0;
case 0x10cdb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c9b:
return 1;
case 0x10c9c:
return 1;
}
}
return 0;
case 0x10cdd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10c9d:
return 1;
case 0x10c9e:
return 1;
case 0x10c9f:
return 1;
}
}
return 0;
case 0x10ce0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca0:
return 1;
}
}
return 0;
case 0x10ce1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca1:
return 1;
}
}
return 0;
case 0x10ce2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca2:
return 1;
case 0x10ca3:
return 1;
}
}
return 0;
case 0x10ce4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca4:
return 1;
}
}
return 0;
case 0x10ce5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca5:
return 1;
}
}
return 0;
case 0x10ce6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca6:
return 1;
}
}
return 0;
case 0x10ce7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca7:
return 1;
}
}
return 0;
case 0x10ce8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca8:
return 1;
}
}
return 0;
case 0x10ce9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10ca9:
return 1;
}
}
return 0;
case 0x10cea:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10caa:
return 1;
case 0x10cab:
return 1;
}
}
return 0;
case 0x10cec:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10cac:
return 1;
case 0x10cad:
return 1;
}
}
return 0;
case 0x10cee:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10cae:
return 1;
}
}
return 0;
case 0x10cef:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10caf:
return 1;
}
}
return 0;
case 0x10cf0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10cb0:
return 1;
}
}
return 0;
case 0x10cf1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10cb1:
return 1;
}
}
return 0;
case 0x10cf2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x10cb2:
return 1;
}
}
return 0;
case 0x11003:
return 0;
case 0x11004:
return 0;
case 0x11005:
return 0;
case 0x11006:
return 0;
case 0x11007:
return 0;
case 0x11008:
return 0;
case 0x11009:
return 0;
case 0x1100a:
return 0;
case 0x1100b:
return 0;
case 0x1100c:
return 0;
case 0x1100d:
return 0;
case 0x1100e:
return 0;
case 0x1100f:
return 0;
case 0x11010:
return 0;
case 0x11011:
return 0;
case 0x11012:
return 0;
case 0x11013:
return 0;
case 0x11014:
return 0;
case 0x11015:
return 0;
case 0x11016:
return 0;
case 0x11017:
return 0;
case 0x11018:
return 0;
case 0x11019:
return 0;
case 0x1101a:
return 0;
case 0x1101b:
return 0;
case 0x1101c:
return 0;
case 0x1101d:
return 0;
case 0x1101e:
return 0;
case 0x1101f:
return 0;
case 0x11020:
return 0;
case 0x11021:
return 0;
case 0x11022:
return 0;
case 0x11023:
return 0;
case 0x11024:
return 0;
case 0x11025:
return 0;
case 0x11026:
return 0;
case 0x11027:
return 0;
case 0x11028:
return 0;
case 0x11029:
return 0;
case 0x1102a:
return 0;
case 0x1102b:
return 0;
case 0x1102c:
return 0;
case 0x1102d:
return 0;
case 0x1102e:
return 0;
case 0x1102f:
return 0;
case 0x11030:
return 0;
case 0x11031:
return 0;
case 0x11032:
return 0;
case 0x11033:
return 0;
case 0x11034:
return 0;
case 0x11035:
return 0;
case 0x11036:
return 0;
case 0x11037:
return 0;
case 0x11038:
return 0;
case 0x11039:
return 0;
case 0x1103a:
return 0;
case 0x1103b:
return 0;
case 0x1103c:
return 0;
case 0x1103d:
return 0;
case 0x1103e:
return 0;
case 0x1103f:
return 0;
case 0x11040:
return 0;
case 0x11041:
return 0;
case 0x11042:
return 0;
case 0x11043:
return 0;
case 0x11044:
return 0;
case 0x11045:
return 0;
case 0x11046:
return 0;
case 0x1107f:
return 0;
case 0x11083:
return 0;
case 0x11084:
return 0;
case 0x11085:
return 0;
case 0x11086:
return 0;
case 0x11087:
return 0;
case 0x11088:
return 0;
case 0x11089:
return 0;
case 0x1108a:
return 0;
case 0x1108b:
return 0;
case 0x1108c:
return 0;
case 0x1108d:
return 0;
case 0x1108e:
return 0;
case 0x1108f:
return 0;
case 0x11090:
return 0;
case 0x11091:
return 0;
case 0x11092:
return 0;
case 0x11093:
return 0;
case 0x11094:
return 0;
case 0x11095:
return 0;
case 0x11096:
return 0;
case 0x11097:
return 0;
case 0x11098:
return 0;
case 0x11099:
return 0;
case 0x1109b:
return 0;
case 0x1109d:
return 0;
case 0x1109e:
return 0;
case 0x1109f:
return 0;
case 0x110a0:
return 0;
case 0x110a1:
return 0;
case 0x110a2:
return 0;
case 0x110a3:
return 0;
case 0x110a4:
return 0;
case 0x110a5:
return 0;
case 0x110a6:
return 0;
case 0x110a7:
return 0;
case 0x110a8:
return 0;
case 0x110a9:
return 0;
case 0x110aa:
return 0;
case 0x110ac:
return 0;
case 0x110ad:
return 0;
case 0x110ae:
return 0;
case 0x110af:
return 0;
case 0x110b0:
return 0;
case 0x110b1:
return 0;
case 0x110b2:
return 0;
case 0x110b3:
return 0;
case 0x110b4:
return 0;
case 0x110b5:
return 0;
case 0x110b6:
return 0;
case 0x110b7:
return 0;
case 0x110b8:
return 0;
case 0x110b9:
return 0;
case 0x110d0:
return 0;
case 0x110d1:
return 0;
case 0x110d2:
return 0;
case 0x110d3:
return 0;
case 0x110d4:
return 0;
case 0x110d5:
return 0;
case 0x110d6:
return 0;
case 0x110d7:
return 0;
case 0x110d8:
return 0;
case 0x110d9:
return 0;
case 0x110da:
return 0;
case 0x110db:
return 0;
case 0x110dc:
return 0;
case 0x110dd:
return 0;
case 0x110de:
return 0;
case 0x110df:
return 0;
case 0x110e0:
return 0;
case 0x110e1:
return 0;
case 0x110e2:
return 0;
case 0x110e3:
return 0;
case 0x110e4:
return 0;
case 0x110e5:
return 0;
case 0x110e6:
return 0;
case 0x110e7:
return 0;
case 0x110e8:
return 0;
case 0x11103:
return 0;
case 0x11104:
return 0;
case 0x11105:
return 0;
case 0x11106:
return 0;
case 0x11107:
return 0;
case 0x11108:
return 0;
case 0x11109:
return 0;
case 0x1110a:
return 0;
case 0x1110b:
return 0;
case 0x1110c:
return 0;
case 0x1110d:
return 0;
case 0x1110e:
return 0;
case 0x1110f:
return 0;
case 0x11110:
return 0;
case 0x11111:
return 0;
case 0x11112:
return 0;
case 0x11113:
return 0;
case 0x11114:
return 0;
case 0x11115:
return 0;
case 0x11116:
return 0;
case 0x11117:
return 0;
case 0x11118:
return 0;
case 0x11119:
return 0;
case 0x1111a:
return 0;
case 0x1111b:
return 0;
case 0x1111c:
return 0;
case 0x1111d:
return 0;
case 0x1111e:
return 0;
case 0x1111f:
return 0;
case 0x11120:
return 0;
case 0x11121:
return 0;
case 0x11122:
return 0;
case 0x11123:
return 0;
case 0x11124:
return 0;
case 0x11125:
return 0;
case 0x11126:
return 0;
case 0x11127:
return 0;
case 0x11128:
return 0;
case 0x11129:
return 0;
case 0x1112a:
return 0;
case 0x1112b:
return 0;
case 0x1112c:
return 0;
case 0x1112d:
return 0;
case 0x1112e:
return 0;
case 0x1112f:
return 0;
case 0x11130:
return 0;
case 0x11131:
return 0;
case 0x11132:
return 0;
case 0x11133:
return 0;
case 0x11134:
return 0;
case 0x11150:
return 0;
case 0x11151:
return 0;
case 0x11152:
return 0;
case 0x11153:
return 0;
case 0x11154:
return 0;
case 0x11155:
return 0;
case 0x11156:
return 0;
case 0x11157:
return 0;
case 0x11158:
return 0;
case 0x11159:
return 0;
case 0x1115a:
return 0;
case 0x1115b:
return 0;
case 0x1115c:
return 0;
case 0x1115d:
return 0;
case 0x1115e:
return 0;
case 0x1115f:
return 0;
case 0x11160:
return 0;
case 0x11161:
return 0;
case 0x11162:
return 0;
case 0x11163:
return 0;
case 0x11164:
return 0;
case 0x11165:
return 0;
case 0x11166:
return 0;
case 0x11167:
return 0;
case 0x11168:
return 0;
case 0x11169:
return 0;
case 0x1116a:
return 0;
case 0x1116b:
return 0;
case 0x1116c:
return 0;
case 0x1116d:
return 0;
case 0x1116e:
return 0;
case 0x1116f:
return 0;
case 0x11170:
return 0;
case 0x11171:
return 0;
case 0x11172:
return 0;
case 0x11176:
return 0;
case 0x11183:
return 0;
case 0x11184:
return 0;
case 0x11185:
return 0;
case 0x11186:
return 0;
case 0x11187:
return 0;
case 0x11188:
return 0;
case 0x11189:
return 0;
case 0x1118a:
return 0;
case 0x1118b:
return 0;
case 0x1118c:
return 0;
case 0x1118d:
return 0;
case 0x1118e:
return 0;
case 0x1118f:
return 0;
case 0x11190:
return 0;
case 0x11191:
return 0;
case 0x11192:
return 0;
case 0x11193:
return 0;
case 0x11194:
return 0;
case 0x11195:
return 0;
case 0x11196:
return 0;
case 0x11197:
return 0;
case 0x11198:
return 0;
case 0x11199:
return 0;
case 0x1119a:
return 0;
case 0x1119b:
return 0;
case 0x1119c:
return 0;
case 0x1119d:
return 0;
case 0x1119e:
return 0;
case 0x1119f:
return 0;
case 0x111a0:
return 0;
case 0x111a1:
return 0;
case 0x111a2:
return 0;
case 0x111a3:
return 0;
case 0x111a4:
return 0;
case 0x111a5:
return 0;
case 0x111a6:
return 0;
case 0x111a7:
return 0;
case 0x111a8:
return 0;
case 0x111a9:
return 0;
case 0x111aa:
return 0;
case 0x111ab:
return 0;
case 0x111ac:
return 0;
case 0x111ad:
return 0;
case 0x111ae:
return 0;
case 0x111af:
return 0;
case 0x111b0:
return 0;
case 0x111b1:
return 0;
case 0x111b2:
return 0;
case 0x111b3:
return 0;
case 0x111b4:
return 0;
case 0x111b5:
return 0;
case 0x111b6:
return 0;
case 0x111b7:
return 0;
case 0x111b8:
return 0;
case 0x111b9:
return 0;
case 0x111ba:
return 0;
case 0x111bb:
return 0;
case 0x111bc:
return 0;
case 0x111bd:
return 0;
case 0x111be:
return 0;
case 0x111bf:
return 0;
case 0x111c0:
return 0;
case 0x111c1:
return 0;
case 0x111c2:
return 0;
case 0x111c3:
return 0;
case 0x111c4:
return 0;
case 0x111da:
return 0;
case 0x111dc:
return 0;
case 0x11200:
return 0;
case 0x11201:
return 0;
case 0x11202:
return 0;
case 0x11203:
return 0;
case 0x11204:
return 0;
case 0x11205:
return 0;
case 0x11206:
return 0;
case 0x11207:
return 0;
case 0x11208:
return 0;
case 0x11209:
return 0;
case 0x1120a:
return 0;
case 0x1120b:
return 0;
case 0x1120c:
return 0;
case 0x1120d:
return 0;
case 0x1120e:
return 0;
case 0x1120f:
return 0;
case 0x11210:
return 0;
case 0x11211:
return 0;
case 0x11213:
return 0;
case 0x11214:
return 0;
case 0x11215:
return 0;
case 0x11216:
return 0;
case 0x11217:
return 0;
case 0x11218:
return 0;
case 0x11219:
return 0;
case 0x1121a:
return 0;
case 0x1121b:
return 0;
case 0x1121c:
return 0;
case 0x1121d:
return 0;
case 0x1121e:
return 0;
case 0x1121f:
return 0;
case 0x11220:
return 0;
case 0x11221:
return 0;
case 0x11222:
return 0;
case 0x11223:
return 0;
case 0x11224:
return 0;
case 0x11225:
return 0;
case 0x11226:
return 0;
case 0x11227:
return 0;
case 0x11228:
return 0;
case 0x11229:
return 0;
case 0x1122a:
return 0;
case 0x1122b:
return 0;
case 0x1122c:
return 0;
case 0x1122d:
return 0;
case 0x1122e:
return 0;
case 0x1122f:
return 0;
case 0x11230:
return 0;
case 0x11231:
return 0;
case 0x11232:
return 0;
case 0x11233:
return 0;
case 0x11235:
return 0;
case 0x11280:
return 0;
case 0x11281:
return 0;
case 0x11282:
return 0;
case 0x11283:
return 0;
case 0x11284:
return 0;
case 0x11285:
return 0;
case 0x11286:
return 0;
case 0x11288:
return 0;
case 0x1128a:
return 0;
case 0x1128b:
return 0;
case 0x1128c:
return 0;
case 0x1128d:
return 0;
case 0x1128f:
return 0;
case 0x11290:
return 0;
case 0x11291:
return 0;
case 0x11292:
return 0;
case 0x11293:
return 0;
case 0x11294:
return 0;
case 0x11295:
return 0;
case 0x11296:
return 0;
case 0x11297:
return 0;
case 0x11298:
return 0;
case 0x11299:
return 0;
case 0x1129a:
return 0;
case 0x1129b:
return 0;
case 0x1129c:
return 0;
case 0x1129d:
return 0;
case 0x1129f:
return 0;
case 0x112a0:
return 0;
case 0x112a1:
return 0;
case 0x112a2:
return 0;
case 0x112a3:
return 0;
case 0x112a4:
return 0;
case 0x112a5:
return 0;
case 0x112a6:
return 0;
case 0x112a7:
return 0;
case 0x112a8:
return 0;
case 0x112b0:
return 0;
case 0x112b1:
return 0;
case 0x112b2:
return 0;
case 0x112b3:
return 0;
case 0x112b4:
return 0;
case 0x112b5:
return 0;
case 0x112b6:
return 0;
case 0x112b7:
return 0;
case 0x112b8:
return 0;
case 0x112b9:
return 0;
case 0x112ba:
return 0;
case 0x112bb:
return 0;
case 0x112bc:
return 0;
case 0x112bd:
return 0;
case 0x112be:
return 0;
case 0x112bf:
return 0;
case 0x112c0:
return 0;
case 0x112c1:
return 0;
case 0x112c2:
return 0;
case 0x112c3:
return 0;
case 0x112c4:
return 0;
case 0x112c5:
return 0;
case 0x112c6:
return 0;
case 0x112c7:
return 0;
case 0x112c8:
return 0;
case 0x112c9:
return 0;
case 0x112ca:
return 0;
case 0x112cb:
return 0;
case 0x112cc:
return 0;
case 0x112cd:
return 0;
case 0x112ce:
return 0;
case 0x112cf:
return 0;
case 0x112d0:
return 0;
case 0x112d1:
return 0;
case 0x112d2:
return 0;
case 0x112d3:
return 0;
case 0x112d4:
return 0;
case 0x112d5:
return 0;
case 0x112d6:
return 0;
case 0x112d7:
return 0;
case 0x112d8:
return 0;
case 0x112d9:
return 0;
case 0x112da:
return 0;
case 0x112db:
return 0;
case 0x112dc:
return 0;
case 0x112dd:
return 0;
case 0x112de:
return 0;
case 0x112e0:
return 0;
case 0x112e1:
return 0;
case 0x112e2:
return 0;
case 0x112e3:
return 0;
case 0x112e4:
return 0;
case 0x112e5:
return 0;
case 0x112e6:
return 0;
case 0x112e7:
return 0;
case 0x112e8:
return 0;
case 0x112ea:
return 0;
case 0x11305:
return 0;
case 0x11306:
return 0;
case 0x11307:
return 0;
case 0x11308:
return 0;
case 0x11309:
return 0;
case 0x1130a:
return 0;
case 0x1130b:
return 0;
case 0x1130c:
return 0;
case 0x1130f:
return 0;
case 0x11310:
return 0;
case 0x11313:
return 0;
case 0x11314:
return 0;
case 0x11315:
return 0;
case 0x11316:
return 0;
case 0x11317:
return 0;
case 0x11318:
return 0;
case 0x11319:
return 0;
case 0x1131a:
return 0;
case 0x1131b:
return 0;
case 0x1131c:
return 0;
case 0x1131d:
return 0;
case 0x1131e:
return 0;
case 0x1131f:
return 0;
case 0x11320:
return 0;
case 0x11321:
return 0;
case 0x11322:
return 0;
case 0x11323:
return 0;
case 0x11324:
return 0;
case 0x11325:
return 0;
case 0x11326:
return 0;
case 0x11327:
return 0;
case 0x11328:
return 0;
case 0x1132a:
return 0;
case 0x1132b:
return 0;
case 0x1132c:
return 0;
case 0x1132d:
return 0;
case 0x1132e:
return 0;
case 0x1132f:
return 0;
case 0x11330:
return 0;
case 0x11332:
return 0;
case 0x11333:
return 0;
case 0x11335:
return 0;
case 0x11336:
return 0;
case 0x11337:
return 0;
case 0x11338:
return 0;
case 0x11339:
return 0;
case 0x1133d:
return 0;
case 0x1133e:
return 0;
case 0x1133f:
return 0;
case 0x11340:
return 0;
case 0x11341:
return 0;
case 0x11342:
return 0;
case 0x11343:
return 0;
case 0x11344:
return 0;
case 0x11347:
return 0;
case 0x11348:
return 0;
case 0x1134d:
return 0;
case 0x11350:
return 0;
case 0x11357:
return 0;
case 0x1135d:
return 0;
case 0x1135e:
return 0;
case 0x1135f:
return 0;
case 0x11360:
return 0;
case 0x11361:
return 0;
case 0x11362:
return 0;
case 0x11363:
return 0;
case 0x11480:
return 0;
case 0x11481:
return 0;
case 0x11482:
return 0;
case 0x11483:
return 0;
case 0x11484:
return 0;
case 0x11485:
return 0;
case 0x11486:
return 0;
case 0x11487:
return 0;
case 0x11488:
return 0;
case 0x11489:
return 0;
case 0x1148a:
return 0;
case 0x1148b:
return 0;
case 0x1148c:
return 0;
case 0x1148d:
return 0;
case 0x1148e:
return 0;
case 0x1148f:
return 0;
case 0x11490:
return 0;
case 0x11491:
return 0;
case 0x11492:
return 0;
case 0x11493:
return 0;
case 0x11494:
return 0;
case 0x11495:
return 0;
case 0x11496:
return 0;
case 0x11497:
return 0;
case 0x11498:
return 0;
case 0x11499:
return 0;
case 0x1149a:
return 0;
case 0x1149b:
return 0;
case 0x1149c:
return 0;
case 0x1149d:
return 0;
case 0x1149e:
return 0;
case 0x1149f:
return 0;
case 0x114a0:
return 0;
case 0x114a1:
return 0;
case 0x114a2:
return 0;
case 0x114a3:
return 0;
case 0x114a4:
return 0;
case 0x114a5:
return 0;
case 0x114a6:
return 0;
case 0x114a7:
return 0;
case 0x114a8:
return 0;
case 0x114a9:
return 0;
case 0x114aa:
return 0;
case 0x114ab:
return 0;
case 0x114ac:
return 0;
case 0x114ad:
return 0;
case 0x114ae:
return 0;
case 0x114af:
return 0;
case 0x114b0:
return 0;
case 0x114b1:
return 0;
case 0x114b2:
return 0;
case 0x114b3:
return 0;
case 0x114b4:
return 0;
case 0x114b5:
return 0;
case 0x114b6:
return 0;
case 0x114b7:
return 0;
case 0x114b8:
return 0;
case 0x114b9:
return 0;
case 0x114ba:
return 0;
case 0x114bd:
return 0;
case 0x114c2:
return 0;
case 0x114c4:
return 0;
case 0x114c5:
return 0;
case 0x114c7:
return 0;
case 0x11580:
return 0;
case 0x11581:
return 0;
case 0x11582:
return 0;
case 0x11583:
return 0;
case 0x11584:
return 0;
case 0x11585:
return 0;
case 0x11586:
return 0;
case 0x11587:
return 0;
case 0x11588:
return 0;
case 0x11589:
return 0;
case 0x1158a:
return 0;
case 0x1158b:
return 0;
case 0x1158c:
return 0;
case 0x1158d:
return 0;
case 0x1158e:
return 0;
case 0x1158f:
return 0;
case 0x11590:
return 0;
case 0x11591:
return 0;
case 0x11592:
return 0;
case 0x11593:
return 0;
case 0x11594:
return 0;
case 0x11595:
return 0;
case 0x11596:
return 0;
case 0x11597:
return 0;
case 0x11598:
return 0;
case 0x11599:
return 0;
case 0x1159a:
return 0;
case 0x1159b:
return 0;
case 0x1159c:
return 0;
case 0x1159d:
return 0;
case 0x1159e:
return 0;
case 0x1159f:
return 0;
case 0x115a0:
return 0;
case 0x115a1:
return 0;
case 0x115a2:
return 0;
case 0x115a3:
return 0;
case 0x115a4:
return 0;
case 0x115a5:
return 0;
case 0x115a6:
return 0;
case 0x115a7:
return 0;
case 0x115a8:
return 0;
case 0x115a9:
return 0;
case 0x115aa:
return 0;
case 0x115ab:
return 0;
case 0x115ac:
return 0;
case 0x115ad:
return 0;
case 0x115ae:
return 0;
case 0x115af:
return 0;
case 0x115b0:
return 0;
case 0x115b1:
return 0;
case 0x115b2:
return 0;
case 0x115b3:
return 0;
case 0x115b4:
return 0;
case 0x115b5:
return 0;
case 0x115b8:
return 0;
case 0x115b9:
return 0;
case 0x115bf:
return 0;
case 0x11680:
return 0;
case 0x11681:
return 0;
case 0x11682:
return 0;
case 0x11683:
return 0;
case 0x11684:
return 0;
case 0x11685:
return 0;
case 0x11686:
return 0;
case 0x11687:
return 0;
case 0x11688:
return 0;
case 0x11689:
return 0;
case 0x1168a:
return 0;
case 0x1168b:
return 0;
case 0x1168c:
return 0;
case 0x1168d:
return 0;
case 0x1168e:
return 0;
case 0x1168f:
return 0;
case 0x11690:
return 0;
case 0x11691:
return 0;
case 0x11692:
return 0;
case 0x11693:
return 0;
case 0x11694:
return 0;
case 0x11695:
return 0;
case 0x11696:
return 0;
case 0x11697:
return 0;
case 0x11698:
return 0;
case 0x11699:
return 0;
case 0x1169a:
return 0;
case 0x1169b:
return 0;
case 0x1169c:
return 0;
case 0x1169d:
return 0;
case 0x1169e:
return 0;
case 0x1169f:
return 0;
case 0x116a0:
return 0;
case 0x116a1:
return 0;
case 0x116a2:
return 0;
case 0x116a3:
return 0;
case 0x116a4:
return 0;
case 0x116a5:
return 0;
case 0x116a6:
return 0;
case 0x116a7:
return 0;
case 0x116a8:
return 0;
case 0x116a9:
return 0;
case 0x116aa:
return 0;
case 0x116ad:
return 0;
case 0x116ae:
return 0;
case 0x116af:
return 0;
case 0x116b0:
return 0;
case 0x116b1:
return 0;
case 0x116b2:
return 0;
case 0x116b3:
return 0;
case 0x116b4:
return 0;
case 0x116b5:
return 0;
case 0x116b6:
return 0;
case 0x118c0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a0:
return 1;
}
}
return 0;
case 0x118c1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a1:
return 1;
}
}
return 0;
case 0x118c2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a2:
return 1;
}
}
return 0;
case 0x118c3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a3:
return 1;
}
}
return 0;
case 0x118c4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a4:
return 1;
}
}
return 0;
case 0x118c5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a5:
return 1;
}
}
return 0;
case 0x118c6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a6:
return 1;
}
}
return 0;
case 0x118c7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a7:
return 1;
}
}
return 0;
case 0x118c8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a8:
return 1;
}
}
return 0;
case 0x118c9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118a9:
return 1;
}
}
return 0;
case 0x118ca:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118aa:
return 1;
}
}
return 0;
case 0x118cb:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118ab:
return 1;
}
}
return 0;
case 0x118cc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118ac:
return 1;
}
}
return 0;
case 0x118cd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118ad:
return 1;
}
}
return 0;
case 0x118ce:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118ae:
return 1;
}
}
return 0;
case 0x118cf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118af:
return 1;
}
}
return 0;
case 0x118d0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b0:
return 1;
}
}
return 0;
case 0x118d1:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b1:
return 1;
}
}
return 0;
case 0x118d2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b2:
return 1;
}
}
return 0;
case 0x118d3:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b3:
return 1;
}
}
return 0;
case 0x118d4:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b4:
return 1;
}
}
return 0;
case 0x118d5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b5:
return 1;
}
}
return 0;
case 0x118d6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b6:
return 1;
}
}
return 0;
case 0x118d7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b7:
return 1;
}
}
return 0;
case 0x118d8:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b8:
return 1;
}
}
return 0;
case 0x118d9:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118b9:
return 1;
}
}
return 0;
case 0x118da:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118ba:
return 1;
}
}
return 0;
case 0x118db:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118bb:
return 1;
}
}
return 0;
case 0x118dc:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118bc:
return 1;
}
}
return 0;
case 0x118dd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118bd:
return 1;
}
}
return 0;
case 0x118de:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118be:
return 1;
}
}
return 0;
case 0x118df:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x118bf:
return 1;
}
}
return 0;
case 0x118ff:
return 0;
case 0x11ac0:
return 0;
case 0x11ac1:
return 0;
case 0x11ac2:
return 0;
case 0x11ac3:
return 0;
case 0x11ac4:
return 0;
case 0x11ac5:
return 0;
case 0x11ac6:
return 0;
case 0x11ac7:
return 0;
case 0x11ac8:
return 0;
case 0x11ac9:
return 0;
case 0x11aca:
return 0;
case 0x11acb:
return 0;
case 0x11acc:
return 0;
case 0x11acd:
return 0;
case 0x11ace:
return 0;
case 0x11acf:
return 0;
case 0x11ad0:
return 0;
case 0x11ad1:
return 0;
case 0x11ad2:
return 0;
case 0x11ad3:
return 0;
case 0x11ad4:
return 0;
case 0x11ad5:
return 0;
case 0x11ad6:
return 0;
case 0x11ad7:
return 0;
case 0x11ad8:
return 0;
case 0x11ad9:
return 0;
case 0x11ada:
return 0;
case 0x11adb:
return 0;
case 0x11adc:
return 0;
case 0x11add:
return 0;
case 0x11ade:
return 0;
case 0x11adf:
return 0;
case 0x11ae0:
return 0;
case 0x11ae1:
return 0;
case 0x11ae2:
return 0;
case 0x11ae3:
return 0;
case 0x11ae4:
return 0;
case 0x11ae5:
return 0;
case 0x11ae6:
return 0;
case 0x11ae7:
return 0;
case 0x11ae8:
return 0;
case 0x11ae9:
return 0;
case 0x11aea:
return 0;
case 0x11aeb:
return 0;
case 0x11aec:
return 0;
case 0x11aed:
return 0;
case 0x11aee:
return 0;
case 0x11aef:
return 0;
case 0x11af0:
return 0;
case 0x11af1:
return 0;
case 0x11af2:
return 0;
case 0x11af3:
return 0;
case 0x11af4:
return 0;
case 0x11af5:
return 0;
case 0x11af6:
return 0;
case 0x11af7:
return 0;
case 0x11af8:
return 0;
case 0x11c00:
return 0;
case 0x11c01:
return 0;
case 0x11c02:
return 0;
case 0x11c03:
return 0;
case 0x11c04:
return 0;
case 0x11c05:
return 0;
case 0x11c06:
return 0;
case 0x11c07:
return 0;
case 0x11c08:
return 0;
case 0x11c0a:
return 0;
case 0x11c0b:
return 0;
case 0x11c0c:
return 0;
case 0x11c0d:
return 0;
case 0x11c0e:
return 0;
case 0x11c0f:
return 0;
case 0x11c10:
return 0;
case 0x11c11:
return 0;
case 0x11c12:
return 0;
case 0x11c13:
return 0;
case 0x11c14:
return 0;
case 0x11c15:
return 0;
case 0x11c16:
return 0;
case 0x11c17:
return 0;
case 0x11c18:
return 0;
case 0x11c19:
return 0;
case 0x11c1a:
return 0;
case 0x11c1b:
return 0;
case 0x11c1c:
return 0;
case 0x11c1d:
return 0;
case 0x11c1e:
return 0;
case 0x11c1f:
return 0;
case 0x11c20:
return 0;
case 0x11c21:
return 0;
case 0x11c22:
return 0;
case 0x11c23:
return 0;
case 0x11c24:
return 0;
case 0x11c25:
return 0;
case 0x11c26:
return 0;
case 0x11c27:
return 0;
case 0x11c28:
return 0;
case 0x11c29:
return 0;
case 0x11c2a:
return 0;
case 0x11c2b:
return 0;
case 0x11c2c:
return 0;
case 0x11c2d:
return 0;
case 0x11c2e:
return 0;
case 0x11c2f:
return 0;
case 0x11c30:
return 0;
case 0x11c31:
return 0;
case 0x11c32:
return 0;
case 0x11c33:
return 0;
case 0x11c34:
return 0;
case 0x11c35:
return 0;
case 0x11c36:
return 0;
case 0x11c38:
return 0;
case 0x11c39:
return 0;
case 0x11c3a:
return 0;
case 0x11c3b:
return 0;
case 0x11c3f:
return 0;
case 0x11c40:
return 0;
case 0x11c72:
return 0;
case 0x11c73:
return 0;
case 0x11c74:
return 0;
case 0x11c75:
return 0;
case 0x11c76:
return 0;
case 0x11c77:
return 0;
case 0x11c78:
return 0;
case 0x11c79:
return 0;
case 0x11c7a:
return 0;
case 0x11c7b:
return 0;
case 0x11c7c:
return 0;
case 0x11c7d:
return 0;
case 0x11c7e:
return 0;
case 0x11c7f:
return 0;
case 0x11c80:
return 0;
case 0x11c81:
return 0;
case 0x11c82:
return 0;
case 0x11c83:
return 0;
case 0x11c84:
return 0;
case 0x11c85:
return 0;
case 0x11c86:
return 0;
case 0x11c87:
return 0;
case 0x11c88:
return 0;
case 0x11c89:
return 0;
case 0x11c8a:
return 0;
case 0x11c8b:
return 0;
case 0x11c8c:
return 0;
case 0x11c8d:
return 0;
case 0x11c8e:
return 0;
case 0x11c8f:
return 0;
case 0x11c92:
return 0;
case 0x11c93:
return 0;
case 0x11c94:
return 0;
case 0x11c95:
return 0;
case 0x11c96:
return 0;
case 0x11c97:
return 0;
case 0x11c98:
return 0;
case 0x11c99:
return 0;
case 0x11c9a:
return 0;
case 0x11c9b:
return 0;
case 0x11c9c:
return 0;
case 0x11c9d:
return 0;
case 0x11c9e:
return 0;
case 0x11c9f:
return 0;
case 0x11ca0:
return 0;
case 0x11ca1:
return 0;
case 0x11ca2:
return 0;
case 0x11ca3:
return 0;
case 0x11ca4:
return 0;
case 0x11ca5:
return 0;
case 0x11ca6:
return 0;
case 0x11ca7:
return 0;
case 0x11ca9:
return 0;
case 0x11caa:
return 0;
case 0x11cab:
return 0;
case 0x11cac:
return 0;
case 0x11cad:
return 0;
case 0x11cae:
return 0;
case 0x11caf:
return 0;
case 0x11cb0:
return 0;
case 0x11cb1:
return 0;
case 0x11cb2:
return 0;
case 0x11cb3:
return 0;
case 0x11cb4:
return 0;
case 0x12000:
return 0;
case 0x12001:
return 0;
case 0x12002:
return 0;
case 0x12003:
return 0;
case 0x12004:
return 0;
case 0x12005:
return 0;
case 0x12006:
return 0;
case 0x12007:
return 0;
case 0x12008:
return 0;
case 0x12009:
return 0;
case 0x1200a:
return 0;
case 0x1200b:
return 0;
case 0x1200c:
return 0;
case 0x1200d:
return 0;
case 0x1200e:
return 0;
case 0x1200f:
return 0;
case 0x12010:
return 0;
case 0x12011:
return 0;
case 0x12012:
return 0;
case 0x12013:
return 0;
case 0x12014:
return 0;
case 0x12015:
return 0;
case 0x12016:
return 0;
case 0x12017:
return 0;
case 0x12018:
return 0;
case 0x12019:
return 0;
case 0x1201a:
return 0;
case 0x1201b:
return 0;
case 0x1201c:
return 0;
case 0x1201d:
return 0;
case 0x1201e:
return 0;
case 0x1201f:
return 0;
case 0x12020:
return 0;
case 0x12021:
return 0;
case 0x12022:
return 0;
case 0x12023:
return 0;
case 0x12024:
return 0;
case 0x12025:
return 0;
case 0x12026:
return 0;
case 0x12027:
return 0;
case 0x12028:
return 0;
case 0x12029:
return 0;
case 0x1202a:
return 0;
case 0x1202b:
return 0;
case 0x1202c:
return 0;
case 0x1202d:
return 0;
case 0x1202e:
return 0;
case 0x1202f:
return 0;
case 0x12030:
return 0;
case 0x12031:
return 0;
case 0x12032:
return 0;
case 0x12033:
return 0;
case 0x12034:
return 0;
case 0x12035:
return 0;
case 0x12036:
return 0;
case 0x12037:
return 0;
case 0x12038:
return 0;
case 0x12039:
return 0;
case 0x1203a:
return 0;
case 0x1203b:
return 0;
case 0x1203c:
return 0;
case 0x1203d:
return 0;
case 0x1203e:
return 0;
case 0x1203f:
return 0;
case 0x12040:
return 0;
case 0x12041:
return 0;
case 0x12042:
return 0;
case 0x12043:
return 0;
case 0x12044:
return 0;
case 0x12045:
return 0;
case 0x12046:
return 0;
case 0x12047:
return 0;
case 0x12048:
return 0;
case 0x12049:
return 0;
case 0x1204a:
return 0;
case 0x1204b:
return 0;
case 0x1204c:
return 0;
case 0x1204d:
return 0;
case 0x1204e:
return 0;
case 0x1204f:
return 0;
case 0x12050:
return 0;
case 0x12051:
return 0;
case 0x12052:
return 0;
case 0x12053:
return 0;
case 0x12054:
return 0;
case 0x12055:
return 0;
case 0x12056:
return 0;
case 0x12057:
return 0;
case 0x12058:
return 0;
case 0x12059:
return 0;
case 0x1205a:
return 0;
case 0x1205b:
return 0;
case 0x1205c:
return 0;
case 0x1205d:
return 0;
case 0x1205e:
return 0;
case 0x1205f:
return 0;
case 0x12060:
return 0;
case 0x12061:
return 0;
case 0x12062:
return 0;
case 0x12063:
return 0;
case 0x12064:
return 0;
case 0x12065:
return 0;
case 0x12066:
return 0;
case 0x12067:
return 0;
case 0x12068:
return 0;
case 0x12069:
return 0;
case 0x1206a:
return 0;
case 0x1206b:
return 0;
case 0x1206c:
return 0;
case 0x1206d:
return 0;
case 0x1206e:
return 0;
case 0x1206f:
return 0;
case 0x12070:
return 0;
case 0x12071:
return 0;
case 0x12072:
return 0;
case 0x12073:
return 0;
case 0x12074:
return 0;
case 0x12075:
return 0;
case 0x12076:
return 0;
case 0x12077:
return 0;
case 0x12078:
return 0;
case 0x12079:
return 0;
case 0x1207a:
return 0;
case 0x1207b:
return 0;
case 0x1207c:
return 0;
case 0x1207d:
return 0;
case 0x1207e:
return 0;
case 0x1207f:
return 0;
case 0x12080:
return 0;
case 0x12081:
return 0;
case 0x12082:
return 0;
case 0x12083:
return 0;
case 0x12084:
return 0;
case 0x12085:
return 0;
case 0x12086:
return 0;
case 0x12087:
return 0;
case 0x12088:
return 0;
case 0x12089:
return 0;
case 0x1208a:
return 0;
case 0x1208b:
return 0;
case 0x1208c:
return 0;
case 0x1208d:
return 0;
case 0x1208e:
return 0;
case 0x1208f:
return 0;
case 0x12090:
return 0;
case 0x12091:
return 0;
case 0x12092:
return 0;
case 0x12093:
return 0;
case 0x12094:
return 0;
case 0x12095:
return 0;
case 0x12096:
return 0;
case 0x12097:
return 0;
case 0x12098:
return 0;
case 0x12099:
return 0;
case 0x1209a:
return 0;
case 0x1209b:
return 0;
case 0x1209c:
return 0;
case 0x1209d:
return 0;
case 0x1209e:
return 0;
case 0x1209f:
return 0;
case 0x120a0:
return 0;
case 0x120a1:
return 0;
case 0x120a2:
return 0;
case 0x120a3:
return 0;
case 0x120a4:
return 0;
case 0x120a5:
return 0;
case 0x120a6:
return 0;
case 0x120a7:
return 0;
case 0x120a8:
return 0;
case 0x120a9:
return 0;
case 0x120aa:
return 0;
case 0x120ab:
return 0;
case 0x120ac:
return 0;
case 0x120ad:
return 0;
case 0x120ae:
return 0;
case 0x120af:
return 0;
case 0x120b0:
return 0;
case 0x120b1:
return 0;
case 0x120b2:
return 0;
case 0x120b3:
return 0;
case 0x120b4:
return 0;
case 0x120b5:
return 0;
case 0x120b6:
return 0;
case 0x120b7:
return 0;
case 0x120b8:
return 0;
case 0x120b9:
return 0;
case 0x120ba:
return 0;
case 0x120bb:
return 0;
case 0x120bc:
return 0;
case 0x120bd:
return 0;
case 0x120be:
return 0;
case 0x120bf:
return 0;
case 0x120c0:
return 0;
case 0x120c1:
return 0;
case 0x120c2:
return 0;
case 0x120c3:
return 0;
case 0x120c4:
return 0;
case 0x120c5:
return 0;
case 0x120c6:
return 0;
case 0x120c7:
return 0;
case 0x120c8:
return 0;
case 0x120c9:
return 0;
case 0x120ca:
return 0;
case 0x120cb:
return 0;
case 0x120cc:
return 0;
case 0x120cd:
return 0;
case 0x120ce:
return 0;
case 0x120cf:
return 0;
case 0x120d0:
return 0;
case 0x120d1:
return 0;
case 0x120d2:
return 0;
case 0x120d3:
return 0;
case 0x120d4:
return 0;
case 0x120d5:
return 0;
case 0x120d6:
return 0;
case 0x120d7:
return 0;
case 0x120d8:
return 0;
case 0x120d9:
return 0;
case 0x120da:
return 0;
case 0x120db:
return 0;
case 0x120dc:
return 0;
case 0x120dd:
return 0;
case 0x120de:
return 0;
case 0x120df:
return 0;
case 0x120e0:
return 0;
case 0x120e1:
return 0;
case 0x120e2:
return 0;
case 0x120e3:
return 0;
case 0x120e4:
return 0;
case 0x120e5:
return 0;
case 0x120e6:
return 0;
case 0x120e7:
return 0;
case 0x120e8:
return 0;
case 0x120e9:
return 0;
case 0x120ea:
return 0;
case 0x120eb:
return 0;
case 0x120ec:
return 0;
case 0x120ed:
return 0;
case 0x120ee:
return 0;
case 0x120ef:
return 0;
case 0x120f0:
return 0;
case 0x120f1:
return 0;
case 0x120f2:
return 0;
case 0x120f3:
return 0;
case 0x120f4:
return 0;
case 0x120f5:
return 0;
case 0x120f6:
return 0;
case 0x120f7:
return 0;
case 0x120f8:
return 0;
case 0x120f9:
return 0;
case 0x120fa:
return 0;
case 0x120fb:
return 0;
case 0x120fc:
return 0;
case 0x120fd:
return 0;
case 0x120fe:
return 0;
case 0x120ff:
return 0;
case 0x12100:
return 0;
case 0x12101:
return 0;
case 0x12102:
return 0;
case 0x12103:
return 0;
case 0x12104:
return 0;
case 0x12105:
return 0;
case 0x12106:
return 0;
case 0x12107:
return 0;
case 0x12108:
return 0;
case 0x12109:
return 0;
case 0x1210a:
return 0;
case 0x1210b:
return 0;
case 0x1210c:
return 0;
case 0x1210d:
return 0;
case 0x1210e:
return 0;
case 0x1210f:
return 0;
case 0x12110:
return 0;
case 0x12111:
return 0;
case 0x12112:
return 0;
case 0x12113:
return 0;
case 0x12114:
return 0;
case 0x12115:
return 0;
case 0x12116:
return 0;
case 0x12117:
return 0;
case 0x12118:
return 0;
case 0x12119:
return 0;
case 0x1211a:
return 0;
case 0x1211b:
return 0;
case 0x1211c:
return 0;
case 0x1211d:
return 0;
case 0x1211e:
return 0;
case 0x1211f:
return 0;
case 0x12120:
return 0;
case 0x12121:
return 0;
case 0x12122:
return 0;
case 0x12123:
return 0;
case 0x12124:
return 0;
case 0x12125:
return 0;
case 0x12126:
return 0;
case 0x12127:
return 0;
case 0x12128:
return 0;
case 0x12129:
return 0;
case 0x1212a:
return 0;
case 0x1212b:
return 0;
case 0x1212c:
return 0;
case 0x1212d:
return 0;
case 0x1212e:
return 0;
case 0x1212f:
return 0;
case 0x12130:
return 0;
case 0x12131:
return 0;
case 0x12132:
return 0;
case 0x12133:
return 0;
case 0x12134:
return 0;
case 0x12135:
return 0;
case 0x12136:
return 0;
case 0x12137:
return 0;
case 0x12138:
return 0;
case 0x12139:
return 0;
case 0x1213a:
return 0;
case 0x1213b:
return 0;
case 0x1213c:
return 0;
case 0x1213d:
return 0;
case 0x1213e:
return 0;
case 0x1213f:
return 0;
case 0x12140:
return 0;
case 0x12141:
return 0;
case 0x12142:
return 0;
case 0x12143:
return 0;
case 0x12144:
return 0;
case 0x12145:
return 0;
case 0x12146:
return 0;
case 0x12147:
return 0;
case 0x12148:
return 0;
case 0x12149:
return 0;
case 0x1214a:
return 0;
case 0x1214b:
return 0;
case 0x1214c:
return 0;
case 0x1214d:
return 0;
case 0x1214e:
return 0;
case 0x1214f:
return 0;
case 0x12150:
return 0;
case 0x12151:
return 0;
case 0x12152:
return 0;
case 0x12153:
return 0;
case 0x12154:
return 0;
case 0x12155:
return 0;
case 0x12156:
return 0;
case 0x12157:
return 0;
case 0x12158:
return 0;
case 0x12159:
return 0;
case 0x1215a:
return 0;
case 0x1215b:
return 0;
case 0x1215c:
return 0;
case 0x1215d:
return 0;
case 0x1215e:
return 0;
case 0x1215f:
return 0;
case 0x12160:
return 0;
case 0x12161:
return 0;
case 0x12162:
return 0;
case 0x12163:
return 0;
case 0x12164:
return 0;
case 0x12165:
return 0;
case 0x12166:
return 0;
case 0x12167:
return 0;
case 0x12168:
return 0;
case 0x12169:
return 0;
case 0x1216a:
return 0;
case 0x1216b:
return 0;
case 0x1216c:
return 0;
case 0x1216d:
return 0;
case 0x1216e:
return 0;
case 0x1216f:
return 0;
case 0x12170:
return 0;
case 0x12171:
return 0;
case 0x12172:
return 0;
case 0x12173:
return 0;
case 0x12174:
return 0;
case 0x12175:
return 0;
case 0x12176:
return 0;
case 0x12177:
return 0;
case 0x12178:
return 0;
case 0x12179:
return 0;
case 0x1217a:
return 0;
case 0x1217b:
return 0;
case 0x1217c:
return 0;
case 0x1217d:
return 0;
case 0x1217e:
return 0;
case 0x1217f:
return 0;
case 0x12180:
return 0;
case 0x12181:
return 0;
case 0x12182:
return 0;
case 0x12183:
return 0;
case 0x12184:
return 0;
case 0x12185:
return 0;
case 0x12186:
return 0;
case 0x12187:
return 0;
case 0x12188:
return 0;
case 0x12189:
return 0;
case 0x1218a:
return 0;
case 0x1218b:
return 0;
case 0x1218c:
return 0;
case 0x1218d:
return 0;
case 0x1218e:
return 0;
case 0x1218f:
return 0;
case 0x12190:
return 0;
case 0x12191:
return 0;
case 0x12192:
return 0;
case 0x12193:
return 0;
case 0x12194:
return 0;
case 0x12195:
return 0;
case 0x12196:
return 0;
case 0x12197:
return 0;
case 0x12198:
return 0;
case 0x12199:
return 0;
case 0x1219a:
return 0;
case 0x1219b:
return 0;
case 0x1219c:
return 0;
case 0x1219d:
return 0;
case 0x1219e:
return 0;
case 0x1219f:
return 0;
case 0x121a0:
return 0;
case 0x121a1:
return 0;
case 0x121a2:
return 0;
case 0x121a3:
return 0;
case 0x121a4:
return 0;
case 0x121a5:
return 0;
case 0x121a6:
return 0;
case 0x121a7:
return 0;
case 0x121a8:
return 0;
case 0x121a9:
return 0;
case 0x121aa:
return 0;
case 0x121ab:
return 0;
case 0x121ac:
return 0;
case 0x121ad:
return 0;
case 0x121ae:
return 0;
case 0x121af:
return 0;
case 0x121b0:
return 0;
case 0x121b1:
return 0;
case 0x121b2:
return 0;
case 0x121b3:
return 0;
case 0x121b4:
return 0;
case 0x121b5:
return 0;
case 0x121b6:
return 0;
case 0x121b7:
return 0;
case 0x121b8:
return 0;
case 0x121b9:
return 0;
case 0x121ba:
return 0;
case 0x121bb:
return 0;
case 0x121bc:
return 0;
case 0x121bd:
return 0;
case 0x121be:
return 0;
case 0x121bf:
return 0;
case 0x121c0:
return 0;
case 0x121c1:
return 0;
case 0x121c2:
return 0;
case 0x121c3:
return 0;
case 0x121c4:
return 0;
case 0x121c5:
return 0;
case 0x121c6:
return 0;
case 0x121c7:
return 0;
case 0x121c8:
return 0;
case 0x121c9:
return 0;
case 0x121ca:
return 0;
case 0x121cb:
return 0;
case 0x121cc:
return 0;
case 0x121cd:
return 0;
case 0x121ce:
return 0;
case 0x121cf:
return 0;
case 0x121d0:
return 0;
case 0x121d1:
return 0;
case 0x121d2:
return 0;
case 0x121d3:
return 0;
case 0x121d4:
return 0;
case 0x121d5:
return 0;
case 0x121d6:
return 0;
case 0x121d7:
return 0;
case 0x121d8:
return 0;
case 0x121d9:
return 0;
case 0x121da:
return 0;
case 0x121db:
return 0;
case 0x121dc:
return 0;
case 0x121dd:
return 0;
case 0x121de:
return 0;
case 0x121df:
return 0;
case 0x121e0:
return 0;
case 0x121e1:
return 0;
case 0x121e2:
return 0;
case 0x121e3:
return 0;
case 0x121e4:
return 0;
case 0x121e5:
return 0;
case 0x121e6:
return 0;
case 0x121e7:
return 0;
case 0x121e8:
return 0;
case 0x121e9:
return 0;
case 0x121ea:
return 0;
case 0x121eb:
return 0;
case 0x121ec:
return 0;
case 0x121ed:
return 0;
case 0x121ee:
return 0;
case 0x121ef:
return 0;
case 0x121f0:
return 0;
case 0x121f1:
return 0;
case 0x121f2:
return 0;
case 0x121f3:
return 0;
case 0x121f4:
return 0;
case 0x121f5:
return 0;
case 0x121f6:
return 0;
case 0x121f7:
return 0;
case 0x121f8:
return 0;
case 0x121f9:
return 0;
case 0x121fa:
return 0;
case 0x121fb:
return 0;
case 0x121fc:
return 0;
case 0x121fd:
return 0;
case 0x121fe:
return 0;
case 0x121ff:
return 0;
case 0x12200:
return 0;
case 0x12201:
return 0;
case 0x12202:
return 0;
case 0x12203:
return 0;
case 0x12204:
return 0;
case 0x12205:
return 0;
case 0x12206:
return 0;
case 0x12207:
return 0;
case 0x12208:
return 0;
case 0x12209:
return 0;
case 0x1220a:
return 0;
case 0x1220b:
return 0;
case 0x1220c:
return 0;
case 0x1220d:
return 0;
case 0x1220e:
return 0;
case 0x1220f:
return 0;
case 0x12210:
return 0;
case 0x12211:
return 0;
case 0x12212:
return 0;
case 0x12213:
return 0;
case 0x12214:
return 0;
case 0x12215:
return 0;
case 0x12216:
return 0;
case 0x12217:
return 0;
case 0x12218:
return 0;
case 0x12219:
return 0;
case 0x1221a:
return 0;
case 0x1221b:
return 0;
case 0x1221c:
return 0;
case 0x1221d:
return 0;
case 0x1221e:
return 0;
case 0x1221f:
return 0;
case 0x12220:
return 0;
case 0x12221:
return 0;
case 0x12222:
return 0;
case 0x12223:
return 0;
case 0x12224:
return 0;
case 0x12225:
return 0;
case 0x12226:
return 0;
case 0x12227:
return 0;
case 0x12228:
return 0;
case 0x12229:
return 0;
case 0x1222a:
return 0;
case 0x1222b:
return 0;
case 0x1222c:
return 0;
case 0x1222d:
return 0;
case 0x1222e:
return 0;
case 0x1222f:
return 0;
case 0x12230:
return 0;
case 0x12231:
return 0;
case 0x12232:
return 0;
case 0x12233:
return 0;
case 0x12234:
return 0;
case 0x12235:
return 0;
case 0x12236:
return 0;
case 0x12237:
return 0;
case 0x12238:
return 0;
case 0x12239:
return 0;
case 0x1223a:
return 0;
case 0x1223b:
return 0;
case 0x1223c:
return 0;
case 0x1223d:
return 0;
case 0x1223e:
return 0;
case 0x1223f:
return 0;
case 0x12240:
return 0;
case 0x12241:
return 0;
case 0x12242:
return 0;
case 0x12243:
return 0;
case 0x12244:
return 0;
case 0x12245:
return 0;
case 0x12246:
return 0;
case 0x12247:
return 0;
case 0x12248:
return 0;
case 0x12249:
return 0;
case 0x1224a:
return 0;
case 0x1224b:
return 0;
case 0x1224c:
return 0;
case 0x1224d:
return 0;
case 0x1224e:
return 0;
case 0x1224f:
return 0;
case 0x12250:
return 0;
case 0x12251:
return 0;
case 0x12252:
return 0;
case 0x12253:
return 0;
case 0x12254:
return 0;
case 0x12255:
return 0;
case 0x12256:
return 0;
case 0x12257:
return 0;
case 0x12258:
return 0;
case 0x12259:
return 0;
case 0x1225a:
return 0;
case 0x1225b:
return 0;
case 0x1225c:
return 0;
case 0x1225d:
return 0;
case 0x1225e:
return 0;
case 0x1225f:
return 0;
case 0x12260:
return 0;
case 0x12261:
return 0;
case 0x12262:
return 0;
case 0x12263:
return 0;
case 0x12264:
return 0;
case 0x12265:
return 0;
case 0x12266:
return 0;
case 0x12267:
return 0;
case 0x12268:
return 0;
case 0x12269:
return 0;
case 0x1226a:
return 0;
case 0x1226b:
return 0;
case 0x1226c:
return 0;
case 0x1226d:
return 0;
case 0x1226e:
return 0;
case 0x1226f:
return 0;
case 0x12270:
return 0;
case 0x12271:
return 0;
case 0x12272:
return 0;
case 0x12273:
return 0;
case 0x12274:
return 0;
case 0x12275:
return 0;
case 0x12276:
return 0;
case 0x12277:
return 0;
case 0x12278:
return 0;
case 0x12279:
return 0;
case 0x1227a:
return 0;
case 0x1227b:
return 0;
case 0x1227c:
return 0;
case 0x1227d:
return 0;
case 0x1227e:
return 0;
case 0x1227f:
return 0;
case 0x12280:
return 0;
case 0x12281:
return 0;
case 0x12282:
return 0;
case 0x12283:
return 0;
case 0x12284:
return 0;
case 0x12285:
return 0;
case 0x12286:
return 0;
case 0x12287:
return 0;
case 0x12288:
return 0;
case 0x12289:
return 0;
case 0x1228a:
return 0;
case 0x1228b:
return 0;
case 0x1228c:
return 0;
case 0x1228d:
return 0;
case 0x1228e:
return 0;
case 0x1228f:
return 0;
case 0x12290:
return 0;
case 0x12291:
return 0;
case 0x12292:
return 0;
case 0x12293:
return 0;
case 0x12294:
return 0;
case 0x12295:
return 0;
case 0x12296:
return 0;
case 0x12297:
return 0;
case 0x12298:
return 0;
case 0x12299:
return 0;
case 0x1229a:
return 0;
case 0x1229b:
return 0;
case 0x1229c:
return 0;
case 0x1229d:
return 0;
case 0x1229e:
return 0;
case 0x1229f:
return 0;
case 0x122a0:
return 0;
case 0x122a1:
return 0;
case 0x122a2:
return 0;
case 0x122a3:
return 0;
case 0x122a4:
return 0;
case 0x122a5:
return 0;
case 0x122a6:
return 0;
case 0x122a7:
return 0;
case 0x122a8:
return 0;
case 0x122a9:
return 0;
case 0x122aa:
return 0;
case 0x122ab:
return 0;
case 0x122ac:
return 0;
case 0x122ad:
return 0;
case 0x122ae:
return 0;
case 0x122af:
return 0;
case 0x122b0:
return 0;
case 0x122b1:
return 0;
case 0x122b2:
return 0;
case 0x122b3:
return 0;
case 0x122b4:
return 0;
case 0x122b5:
return 0;
case 0x122b6:
return 0;
case 0x122b7:
return 0;
case 0x122b8:
return 0;
case 0x122b9:
return 0;
case 0x122ba:
return 0;
case 0x122bb:
return 0;
case 0x122bc:
return 0;
case 0x122bd:
return 0;
case 0x122be:
return 0;
case 0x122bf:
return 0;
case 0x122c0:
return 0;
case 0x122c1:
return 0;
case 0x122c2:
return 0;
case 0x122c3:
return 0;
case 0x122c4:
return 0;
case 0x122c5:
return 0;
case 0x122c6:
return 0;
case 0x122c7:
return 0;
case 0x122c8:
return 0;
case 0x122c9:
return 0;
case 0x122ca:
return 0;
case 0x122cb:
return 0;
case 0x122cc:
return 0;
case 0x122cd:
return 0;
case 0x122ce:
return 0;
case 0x122cf:
return 0;
case 0x122d0:
return 0;
case 0x122d1:
return 0;
case 0x122d2:
return 0;
case 0x122d3:
return 0;
case 0x122d4:
return 0;
case 0x122d5:
return 0;
case 0x122d6:
return 0;
case 0x122d7:
return 0;
case 0x122d8:
return 0;
case 0x122d9:
return 0;
case 0x122da:
return 0;
case 0x122db:
return 0;
case 0x122dc:
return 0;
case 0x122dd:
return 0;
case 0x122de:
return 0;
case 0x122df:
return 0;
case 0x122e0:
return 0;
case 0x122e1:
return 0;
case 0x122e2:
return 0;
case 0x122e3:
return 0;
case 0x122e4:
return 0;
case 0x122e5:
return 0;
case 0x122e6:
return 0;
case 0x122e7:
return 0;
case 0x122e8:
return 0;
case 0x122e9:
return 0;
case 0x122ea:
return 0;
case 0x122eb:
return 0;
case 0x122ec:
return 0;
case 0x122ed:
return 0;
case 0x122ee:
return 0;
case 0x122ef:
return 0;
case 0x122f0:
return 0;
case 0x122f1:
return 0;
case 0x122f2:
return 0;
case 0x122f3:
return 0;
case 0x122f4:
return 0;
case 0x122f5:
return 0;
case 0x122f6:
return 0;
case 0x122f7:
return 0;
case 0x122f8:
return 0;
case 0x122f9:
return 0;
case 0x122fa:
return 0;
case 0x122fb:
return 0;
case 0x122fc:
return 0;
case 0x122fd:
return 0;
case 0x122fe:
return 0;
case 0x122ff:
return 0;
case 0x12300:
return 0;
case 0x12301:
return 0;
case 0x12302:
return 0;
case 0x12303:
return 0;
case 0x12304:
return 0;
case 0x12305:
return 0;
case 0x12306:
return 0;
case 0x12307:
return 0;
case 0x12308:
return 0;
case 0x12309:
return 0;
case 0x1230a:
return 0;
case 0x1230b:
return 0;
case 0x1230c:
return 0;
case 0x1230d:
return 0;
case 0x1230e:
return 0;
case 0x1230f:
return 0;
case 0x12310:
return 0;
case 0x12311:
return 0;
case 0x12312:
return 0;
case 0x12313:
return 0;
case 0x12314:
return 0;
case 0x12315:
return 0;
case 0x12316:
return 0;
case 0x12317:
return 0;
case 0x12318:
return 0;
case 0x12319:
return 0;
case 0x1231a:
return 0;
case 0x1231b:
return 0;
case 0x1231c:
return 0;
case 0x1231d:
return 0;
case 0x1231e:
return 0;
case 0x1231f:
return 0;
case 0x12320:
return 0;
case 0x12321:
return 0;
case 0x12322:
return 0;
case 0x12323:
return 0;
case 0x12324:
return 0;
case 0x12325:
return 0;
case 0x12326:
return 0;
case 0x12327:
return 0;
case 0x12328:
return 0;
case 0x12329:
return 0;
case 0x1232a:
return 0;
case 0x1232b:
return 0;
case 0x1232c:
return 0;
case 0x1232d:
return 0;
case 0x1232e:
return 0;
case 0x1232f:
return 0;
case 0x12330:
return 0;
case 0x12331:
return 0;
case 0x12332:
return 0;
case 0x12333:
return 0;
case 0x12334:
return 0;
case 0x12335:
return 0;
case 0x12336:
return 0;
case 0x12337:
return 0;
case 0x12338:
return 0;
case 0x12339:
return 0;
case 0x1233a:
return 0;
case 0x1233b:
return 0;
case 0x1233c:
return 0;
case 0x1233d:
return 0;
case 0x1233e:
return 0;
case 0x1233f:
return 0;
case 0x12340:
return 0;
case 0x12341:
return 0;
case 0x12342:
return 0;
case 0x12343:
return 0;
case 0x12344:
return 0;
case 0x12345:
return 0;
case 0x12346:
return 0;
case 0x12347:
return 0;
case 0x12348:
return 0;
case 0x12349:
return 0;
case 0x1234a:
return 0;
case 0x1234b:
return 0;
case 0x1234c:
return 0;
case 0x1234d:
return 0;
case 0x1234e:
return 0;
case 0x1234f:
return 0;
case 0x12350:
return 0;
case 0x12351:
return 0;
case 0x12352:
return 0;
case 0x12353:
return 0;
case 0x12354:
return 0;
case 0x12355:
return 0;
case 0x12356:
return 0;
case 0x12357:
return 0;
case 0x12358:
return 0;
case 0x12359:
return 0;
case 0x1235a:
return 0;
case 0x1235b:
return 0;
case 0x1235c:
return 0;
case 0x1235d:
return 0;
case 0x1235e:
return 0;
case 0x1235f:
return 0;
case 0x12360:
return 0;
case 0x12361:
return 0;
case 0x12362:
return 0;
case 0x12363:
return 0;
case 0x12364:
return 0;
case 0x12365:
return 0;
case 0x12366:
return 0;
case 0x12367:
return 0;
case 0x12368:
return 0;
case 0x12369:
return 0;
case 0x1236a:
return 0;
case 0x1236b:
return 0;
case 0x1236c:
return 0;
case 0x1236d:
return 0;
case 0x1236e:
return 0;
case 0x1236f:
return 0;
case 0x12370:
return 0;
case 0x12371:
return 0;
case 0x12372:
return 0;
case 0x12373:
return 0;
case 0x12374:
return 0;
case 0x12375:
return 0;
case 0x12376:
return 0;
case 0x12377:
return 0;
case 0x12378:
return 0;
case 0x12379:
return 0;
case 0x1237a:
return 0;
case 0x1237b:
return 0;
case 0x1237c:
return 0;
case 0x1237d:
return 0;
case 0x1237e:
return 0;
case 0x1237f:
return 0;
case 0x12380:
return 0;
case 0x12381:
return 0;
case 0x12382:
return 0;
case 0x12383:
return 0;
case 0x12384:
return 0;
case 0x12385:
return 0;
case 0x12386:
return 0;
case 0x12387:
return 0;
case 0x12388:
return 0;
case 0x12389:
return 0;
case 0x1238a:
return 0;
case 0x1238b:
return 0;
case 0x1238c:
return 0;
case 0x1238d:
return 0;
case 0x1238e:
return 0;
case 0x1238f:
return 0;
case 0x12390:
return 0;
case 0x12391:
return 0;
case 0x12392:
return 0;
case 0x12393:
return 0;
case 0x12394:
return 0;
case 0x12395:
return 0;
case 0x12396:
return 0;
case 0x12397:
return 0;
case 0x12398:
return 0;
case 0x12399:
return 0;
case 0x12480:
return 0;
case 0x12481:
return 0;
case 0x12482:
return 0;
case 0x12483:
return 0;
case 0x12484:
return 0;
case 0x12485:
return 0;
case 0x12486:
return 0;
case 0x12487:
return 0;
case 0x12488:
return 0;
case 0x12489:
return 0;
case 0x1248a:
return 0;
case 0x1248b:
return 0;
case 0x1248c:
return 0;
case 0x1248d:
return 0;
case 0x1248e:
return 0;
case 0x1248f:
return 0;
case 0x12490:
return 0;
case 0x12491:
return 0;
case 0x12492:
return 0;
case 0x12493:
return 0;
case 0x12494:
return 0;
case 0x12495:
return 0;
case 0x12496:
return 0;
case 0x12497:
return 0;
case 0x12498:
return 0;
case 0x12499:
return 0;
case 0x1249a:
return 0;
case 0x1249b:
return 0;
case 0x1249c:
return 0;
case 0x1249d:
return 0;
case 0x1249e:
return 0;
case 0x1249f:
return 0;
case 0x124a0:
return 0;
case 0x124a1:
return 0;
case 0x124a2:
return 0;
case 0x124a3:
return 0;
case 0x124a4:
return 0;
case 0x124a5:
return 0;
case 0x124a6:
return 0;
case 0x124a7:
return 0;
case 0x124a8:
return 0;
case 0x124a9:
return 0;
case 0x124aa:
return 0;
case 0x124ab:
return 0;
case 0x124ac:
return 0;
case 0x124ad:
return 0;
case 0x124ae:
return 0;
case 0x124af:
return 0;
case 0x124b0:
return 0;
case 0x124b1:
return 0;
case 0x124b2:
return 0;
case 0x124b3:
return 0;
case 0x124b4:
return 0;
case 0x124b5:
return 0;
case 0x124b6:
return 0;
case 0x124b7:
return 0;
case 0x124b8:
return 0;
case 0x124b9:
return 0;
case 0x124ba:
return 0;
case 0x124bb:
return 0;
case 0x124bc:
return 0;
case 0x124bd:
return 0;
case 0x124be:
return 0;
case 0x124bf:
return 0;
case 0x124c0:
return 0;
case 0x124c1:
return 0;
case 0x124c2:
return 0;
case 0x124c3:
return 0;
case 0x124c4:
return 0;
case 0x124c5:
return 0;
case 0x124c6:
return 0;
case 0x124c7:
return 0;
case 0x124c8:
return 0;
case 0x124c9:
return 0;
case 0x124ca:
return 0;
case 0x124cb:
return 0;
case 0x124cc:
return 0;
case 0x124cd:
return 0;
case 0x124ce:
return 0;
case 0x124cf:
return 0;
case 0x124d0:
return 0;
case 0x124d1:
return 0;
case 0x124d2:
return 0;
case 0x124d3:
return 0;
case 0x124d4:
return 0;
case 0x124d5:
return 0;
case 0x124d6:
return 0;
case 0x124d7:
return 0;
case 0x124d8:
return 0;
case 0x124d9:
return 0;
case 0x124da:
return 0;
case 0x124db:
return 0;
case 0x124dc:
return 0;
case 0x124dd:
return 0;
case 0x124de:
return 0;
case 0x124df:
return 0;
case 0x124e0:
return 0;
case 0x124e1:
return 0;
case 0x124e2:
return 0;
case 0x124e3:
return 0;
case 0x124e4:
return 0;
case 0x124e5:
return 0;
case 0x124e6:
return 0;
case 0x124e7:
return 0;
case 0x124e8:
return 0;
case 0x124e9:
return 0;
case 0x124ea:
return 0;
case 0x124eb:
return 0;
case 0x124ec:
return 0;
case 0x124ed:
return 0;
case 0x124ee:
return 0;
case 0x124ef:
return 0;
case 0x124f0:
return 0;
case 0x124f1:
return 0;
case 0x124f2:
return 0;
case 0x124f3:
return 0;
case 0x124f4:
return 0;
case 0x124f5:
return 0;
case 0x124f6:
return 0;
case 0x124f7:
return 0;
case 0x124f8:
return 0;
case 0x124f9:
return 0;
case 0x124fa:
return 0;
case 0x124fb:
return 0;
case 0x124fc:
return 0;
case 0x124fd:
return 0;
case 0x124fe:
return 0;
case 0x124ff:
return 0;
case 0x12500:
return 0;
case 0x12501:
return 0;
case 0x12502:
return 0;
case 0x12503:
return 0;
case 0x12504:
return 0;
case 0x12505:
return 0;
case 0x12506:
return 0;
case 0x12507:
return 0;
case 0x12508:
return 0;
case 0x12509:
return 0;
case 0x1250a:
return 0;
case 0x1250b:
return 0;
case 0x1250c:
return 0;
case 0x1250d:
return 0;
case 0x1250e:
return 0;
case 0x1250f:
return 0;
case 0x12510:
return 0;
case 0x12511:
return 0;
case 0x12512:
return 0;
case 0x12513:
return 0;
case 0x12514:
return 0;
case 0x12515:
return 0;
case 0x12516:
return 0;
case 0x12517:
return 0;
case 0x12518:
return 0;
case 0x12519:
return 0;
case 0x1251a:
return 0;
case 0x1251b:
return 0;
case 0x1251c:
return 0;
case 0x1251d:
return 0;
case 0x1251e:
return 0;
case 0x1251f:
return 0;
case 0x12520:
return 0;
case 0x12521:
return 0;
case 0x12522:
return 0;
case 0x12523:
return 0;
case 0x12524:
return 0;
case 0x12525:
return 0;
case 0x12526:
return 0;
case 0x12527:
return 0;
case 0x12528:
return 0;
case 0x12529:
return 0;
case 0x1252a:
return 0;
case 0x1252b:
return 0;
case 0x1252c:
return 0;
case 0x1252d:
return 0;
case 0x1252e:
return 0;
case 0x1252f:
return 0;
case 0x12530:
return 0;
case 0x12531:
return 0;
case 0x12532:
return 0;
case 0x12533:
return 0;
case 0x12534:
return 0;
case 0x12535:
return 0;
case 0x12536:
return 0;
case 0x12537:
return 0;
case 0x12538:
return 0;
case 0x12539:
return 0;
case 0x1253a:
return 0;
case 0x1253b:
return 0;
case 0x1253c:
return 0;
case 0x1253d:
return 0;
case 0x1253e:
return 0;
case 0x1253f:
return 0;
case 0x12540:
return 0;
case 0x12541:
return 0;
case 0x12542:
return 0;
case 0x12543:
return 0;
case 0x13000:
return 0;
case 0x13001:
return 0;
case 0x13002:
return 0;
case 0x13003:
return 0;
case 0x13004:
return 0;
case 0x13005:
return 0;
case 0x13006:
return 0;
case 0x13007:
return 0;
case 0x13008:
return 0;
case 0x13009:
return 0;
case 0x1300a:
return 0;
case 0x1300b:
return 0;
case 0x1300c:
return 0;
case 0x1300d:
return 0;
case 0x1300e:
return 0;
case 0x1300f:
return 0;
case 0x13010:
return 0;
case 0x13011:
return 0;
case 0x13012:
return 0;
case 0x13013:
return 0;
case 0x13014:
return 0;
case 0x13015:
return 0;
case 0x13016:
return 0;
case 0x13017:
return 0;
case 0x13018:
return 0;
case 0x13019:
return 0;
case 0x1301a:
return 0;
case 0x1301b:
return 0;
case 0x1301c:
return 0;
case 0x1301d:
return 0;
case 0x1301e:
return 0;
case 0x1301f:
return 0;
case 0x13020:
return 0;
case 0x13021:
return 0;
case 0x13022:
return 0;
case 0x13023:
return 0;
case 0x13024:
return 0;
case 0x13025:
return 0;
case 0x13026:
return 0;
case 0x13027:
return 0;
case 0x13028:
return 0;
case 0x13029:
return 0;
case 0x1302a:
return 0;
case 0x1302b:
return 0;
case 0x1302c:
return 0;
case 0x1302d:
return 0;
case 0x1302e:
return 0;
case 0x1302f:
return 0;
case 0x13030:
return 0;
case 0x13031:
return 0;
case 0x13032:
return 0;
case 0x13033:
return 0;
case 0x13034:
return 0;
case 0x13035:
return 0;
case 0x13036:
return 0;
case 0x13037:
return 0;
case 0x13038:
return 0;
case 0x13039:
return 0;
case 0x1303a:
return 0;
case 0x1303b:
return 0;
case 0x1303c:
return 0;
case 0x1303d:
return 0;
case 0x1303e:
return 0;
case 0x1303f:
return 0;
case 0x13040:
return 0;
case 0x13041:
return 0;
case 0x13042:
return 0;
case 0x13043:
return 0;
case 0x13044:
return 0;
case 0x13045:
return 0;
case 0x13046:
return 0;
case 0x13047:
return 0;
case 0x13048:
return 0;
case 0x13049:
return 0;
case 0x1304a:
return 0;
case 0x1304b:
return 0;
case 0x1304c:
return 0;
case 0x1304d:
return 0;
case 0x1304e:
return 0;
case 0x1304f:
return 0;
case 0x13050:
return 0;
case 0x13051:
return 0;
case 0x13052:
return 0;
case 0x13053:
return 0;
case 0x13054:
return 0;
case 0x13055:
return 0;
case 0x13056:
return 0;
case 0x13057:
return 0;
case 0x13058:
return 0;
case 0x13059:
return 0;
case 0x1305a:
return 0;
case 0x1305b:
return 0;
case 0x1305c:
return 0;
case 0x1305d:
return 0;
case 0x1305e:
return 0;
case 0x1305f:
return 0;
case 0x13060:
return 0;
case 0x13061:
return 0;
case 0x13062:
return 0;
case 0x13063:
return 0;
case 0x13064:
return 0;
case 0x13065:
return 0;
case 0x13066:
return 0;
case 0x13067:
return 0;
case 0x13068:
return 0;
case 0x13069:
return 0;
case 0x1306a:
return 0;
case 0x1306b:
return 0;
case 0x1306c:
return 0;
case 0x1306d:
return 0;
case 0x1306e:
return 0;
case 0x1306f:
return 0;
case 0x13070:
return 0;
case 0x13071:
return 0;
case 0x13072:
return 0;
case 0x13073:
return 0;
case 0x13074:
return 0;
case 0x13075:
return 0;
case 0x13076:
return 0;
case 0x13077:
return 0;
case 0x13078:
return 0;
case 0x13079:
return 0;
case 0x1307a:
return 0;
case 0x1307b:
return 0;
case 0x1307c:
return 0;
case 0x1307d:
return 0;
case 0x1307e:
return 0;
case 0x1307f:
return 0;
case 0x13080:
return 0;
case 0x13081:
return 0;
case 0x13082:
return 0;
case 0x13083:
return 0;
case 0x13084:
return 0;
case 0x13085:
return 0;
case 0x13086:
return 0;
case 0x13087:
return 0;
case 0x13088:
return 0;
case 0x13089:
return 0;
case 0x1308a:
return 0;
case 0x1308b:
return 0;
case 0x1308c:
return 0;
case 0x1308d:
return 0;
case 0x1308e:
return 0;
case 0x1308f:
return 0;
case 0x13090:
return 0;
case 0x13091:
return 0;
case 0x13092:
return 0;
case 0x13093:
return 0;
case 0x13094:
return 0;
case 0x13095:
return 0;
case 0x13096:
return 0;
case 0x13097:
return 0;
case 0x13098:
return 0;
case 0x13099:
return 0;
case 0x1309a:
return 0;
case 0x1309b:
return 0;
case 0x1309c:
return 0;
case 0x1309d:
return 0;
case 0x1309e:
return 0;
case 0x1309f:
return 0;
case 0x130a0:
return 0;
case 0x130a1:
return 0;
case 0x130a2:
return 0;
case 0x130a3:
return 0;
case 0x130a4:
return 0;
case 0x130a5:
return 0;
case 0x130a6:
return 0;
case 0x130a7:
return 0;
case 0x130a8:
return 0;
case 0x130a9:
return 0;
case 0x130aa:
return 0;
case 0x130ab:
return 0;
case 0x130ac:
return 0;
case 0x130ad:
return 0;
case 0x130ae:
return 0;
case 0x130af:
return 0;
case 0x130b0:
return 0;
case 0x130b1:
return 0;
case 0x130b2:
return 0;
case 0x130b3:
return 0;
case 0x130b4:
return 0;
case 0x130b5:
return 0;
case 0x130b6:
return 0;
case 0x130b7:
return 0;
case 0x130b8:
return 0;
case 0x130b9:
return 0;
case 0x130ba:
return 0;
case 0x130bb:
return 0;
case 0x130bc:
return 0;
case 0x130bd:
return 0;
case 0x130be:
return 0;
case 0x130bf:
return 0;
case 0x130c0:
return 0;
case 0x130c1:
return 0;
case 0x130c2:
return 0;
case 0x130c3:
return 0;
case 0x130c4:
return 0;
case 0x130c5:
return 0;
case 0x130c6:
return 0;
case 0x130c7:
return 0;
case 0x130c8:
return 0;
case 0x130c9:
return 0;
case 0x130ca:
return 0;
case 0x130cb:
return 0;
case 0x130cc:
return 0;
case 0x130cd:
return 0;
case 0x130ce:
return 0;
case 0x130cf:
return 0;
case 0x130d0:
return 0;
case 0x130d1:
return 0;
case 0x130d2:
return 0;
case 0x130d3:
return 0;
case 0x130d4:
return 0;
case 0x130d5:
return 0;
case 0x130d6:
return 0;
case 0x130d7:
return 0;
case 0x130d8:
return 0;
case 0x130d9:
return 0;
case 0x130da:
return 0;
case 0x130db:
return 0;
case 0x130dc:
return 0;
case 0x130dd:
return 0;
case 0x130de:
return 0;
case 0x130df:
return 0;
case 0x130e0:
return 0;
case 0x130e1:
return 0;
case 0x130e2:
return 0;
case 0x130e3:
return 0;
case 0x130e4:
return 0;
case 0x130e5:
return 0;
case 0x130e6:
return 0;
case 0x130e7:
return 0;
case 0x130e8:
return 0;
case 0x130e9:
return 0;
case 0x130ea:
return 0;
case 0x130eb:
return 0;
case 0x130ec:
return 0;
case 0x130ed:
return 0;
case 0x130ee:
return 0;
case 0x130ef:
return 0;
case 0x130f0:
return 0;
case 0x130f1:
return 0;
case 0x130f2:
return 0;
case 0x130f3:
return 0;
case 0x130f4:
return 0;
case 0x130f5:
return 0;
case 0x130f6:
return 0;
case 0x130f7:
return 0;
case 0x130f8:
return 0;
case 0x130f9:
return 0;
case 0x130fa:
return 0;
case 0x130fb:
return 0;
case 0x130fc:
return 0;
case 0x130fd:
return 0;
case 0x130fe:
return 0;
case 0x130ff:
return 0;
case 0x13100:
return 0;
case 0x13101:
return 0;
case 0x13102:
return 0;
case 0x13103:
return 0;
case 0x13104:
return 0;
case 0x13105:
return 0;
case 0x13106:
return 0;
case 0x13107:
return 0;
case 0x13108:
return 0;
case 0x13109:
return 0;
case 0x1310a:
return 0;
case 0x1310b:
return 0;
case 0x1310c:
return 0;
case 0x1310d:
return 0;
case 0x1310e:
return 0;
case 0x1310f:
return 0;
case 0x13110:
return 0;
case 0x13111:
return 0;
case 0x13112:
return 0;
case 0x13113:
return 0;
case 0x13114:
return 0;
case 0x13115:
return 0;
case 0x13116:
return 0;
case 0x13117:
return 0;
case 0x13118:
return 0;
case 0x13119:
return 0;
case 0x1311a:
return 0;
case 0x1311b:
return 0;
case 0x1311c:
return 0;
case 0x1311d:
return 0;
case 0x1311e:
return 0;
case 0x1311f:
return 0;
case 0x13120:
return 0;
case 0x13121:
return 0;
case 0x13122:
return 0;
case 0x13123:
return 0;
case 0x13124:
return 0;
case 0x13125:
return 0;
case 0x13126:
return 0;
case 0x13127:
return 0;
case 0x13128:
return 0;
case 0x13129:
return 0;
case 0x1312a:
return 0;
case 0x1312b:
return 0;
case 0x1312c:
return 0;
case 0x1312d:
return 0;
case 0x1312e:
return 0;
case 0x1312f:
return 0;
case 0x13130:
return 0;
case 0x13131:
return 0;
case 0x13132:
return 0;
case 0x13133:
return 0;
case 0x13134:
return 0;
case 0x13135:
return 0;
case 0x13136:
return 0;
case 0x13137:
return 0;
case 0x13138:
return 0;
case 0x13139:
return 0;
case 0x1313a:
return 0;
case 0x1313b:
return 0;
case 0x1313c:
return 0;
case 0x1313d:
return 0;
case 0x1313e:
return 0;
case 0x1313f:
return 0;
case 0x13140:
return 0;
case 0x13141:
return 0;
case 0x13142:
return 0;
case 0x13143:
return 0;
case 0x13144:
return 0;
case 0x13145:
return 0;
case 0x13146:
return 0;
case 0x13147:
return 0;
case 0x13148:
return 0;
case 0x13149:
return 0;
case 0x1314a:
return 0;
case 0x1314b:
return 0;
case 0x1314c:
return 0;
case 0x1314d:
return 0;
case 0x1314e:
return 0;
case 0x1314f:
return 0;
case 0x13150:
return 0;
case 0x13151:
return 0;
case 0x13152:
return 0;
case 0x13153:
return 0;
case 0x13154:
return 0;
case 0x13155:
return 0;
case 0x13156:
return 0;
case 0x13157:
return 0;
case 0x13158:
return 0;
case 0x13159:
return 0;
case 0x1315a:
return 0;
case 0x1315b:
return 0;
case 0x1315c:
return 0;
case 0x1315d:
return 0;
case 0x1315e:
return 0;
case 0x1315f:
return 0;
case 0x13160:
return 0;
case 0x13161:
return 0;
case 0x13162:
return 0;
case 0x13163:
return 0;
case 0x13164:
return 0;
case 0x13165:
return 0;
case 0x13166:
return 0;
case 0x13167:
return 0;
case 0x13168:
return 0;
case 0x13169:
return 0;
case 0x1316a:
return 0;
case 0x1316b:
return 0;
case 0x1316c:
return 0;
case 0x1316d:
return 0;
case 0x1316e:
return 0;
case 0x1316f:
return 0;
case 0x13170:
return 0;
case 0x13171:
return 0;
case 0x13172:
return 0;
case 0x13173:
return 0;
case 0x13174:
return 0;
case 0x13175:
return 0;
case 0x13176:
return 0;
case 0x13177:
return 0;
case 0x13178:
return 0;
case 0x13179:
return 0;
case 0x1317a:
return 0;
case 0x1317b:
return 0;
case 0x1317c:
return 0;
case 0x1317d:
return 0;
case 0x1317e:
return 0;
case 0x1317f:
return 0;
case 0x13180:
return 0;
case 0x13181:
return 0;
case 0x13182:
return 0;
case 0x13183:
return 0;
case 0x13184:
return 0;
case 0x13185:
return 0;
case 0x13186:
return 0;
case 0x13187:
return 0;
case 0x13188:
return 0;
case 0x13189:
return 0;
case 0x1318a:
return 0;
case 0x1318b:
return 0;
case 0x1318c:
return 0;
case 0x1318d:
return 0;
case 0x1318e:
return 0;
case 0x1318f:
return 0;
case 0x13190:
return 0;
case 0x13191:
return 0;
case 0x13192:
return 0;
case 0x13193:
return 0;
case 0x13194:
return 0;
case 0x13195:
return 0;
case 0x13196:
return 0;
case 0x13197:
return 0;
case 0x13198:
return 0;
case 0x13199:
return 0;
case 0x1319a:
return 0;
case 0x1319b:
return 0;
case 0x1319c:
return 0;
case 0x1319d:
return 0;
case 0x1319e:
return 0;
case 0x1319f:
return 0;
case 0x131a0:
return 0;
case 0x131a1:
return 0;
case 0x131a2:
return 0;
case 0x131a3:
return 0;
case 0x131a4:
return 0;
case 0x131a5:
return 0;
case 0x131a6:
return 0;
case 0x131a7:
return 0;
case 0x131a8:
return 0;
case 0x131a9:
return 0;
case 0x131aa:
return 0;
case 0x131ab:
return 0;
case 0x131ac:
return 0;
case 0x131ad:
return 0;
case 0x131ae:
return 0;
case 0x131af:
return 0;
case 0x131b0:
return 0;
case 0x131b1:
return 0;
case 0x131b2:
return 0;
case 0x131b3:
return 0;
case 0x131b4:
return 0;
case 0x131b5:
return 0;
case 0x131b6:
return 0;
case 0x131b7:
return 0;
case 0x131b8:
return 0;
case 0x131b9:
return 0;
case 0x131ba:
return 0;
case 0x131bb:
return 0;
case 0x131bc:
return 0;
case 0x131bd:
return 0;
case 0x131be:
return 0;
case 0x131bf:
return 0;
case 0x131c0:
return 0;
case 0x131c1:
return 0;
case 0x131c2:
return 0;
case 0x131c3:
return 0;
case 0x131c4:
return 0;
case 0x131c5:
return 0;
case 0x131c6:
return 0;
case 0x131c7:
return 0;
case 0x131c8:
return 0;
case 0x131c9:
return 0;
case 0x131ca:
return 0;
case 0x131cb:
return 0;
case 0x131cc:
return 0;
case 0x131cd:
return 0;
case 0x131ce:
return 0;
case 0x131cf:
return 0;
case 0x131d0:
return 0;
case 0x131d1:
return 0;
case 0x131d2:
return 0;
case 0x131d3:
return 0;
case 0x131d4:
return 0;
case 0x131d5:
return 0;
case 0x131d6:
return 0;
case 0x131d7:
return 0;
case 0x131d8:
return 0;
case 0x131d9:
return 0;
case 0x131da:
return 0;
case 0x131db:
return 0;
case 0x131dc:
return 0;
case 0x131dd:
return 0;
case 0x131de:
return 0;
case 0x131df:
return 0;
case 0x131e0:
return 0;
case 0x131e1:
return 0;
case 0x131e2:
return 0;
case 0x131e3:
return 0;
case 0x131e4:
return 0;
case 0x131e5:
return 0;
case 0x131e6:
return 0;
case 0x131e7:
return 0;
case 0x131e8:
return 0;
case 0x131e9:
return 0;
case 0x131ea:
return 0;
case 0x131eb:
return 0;
case 0x131ec:
return 0;
case 0x131ed:
return 0;
case 0x131ee:
return 0;
case 0x131ef:
return 0;
case 0x131f0:
return 0;
case 0x131f1:
return 0;
case 0x131f2:
return 0;
case 0x131f3:
return 0;
case 0x131f4:
return 0;
case 0x131f5:
return 0;
case 0x131f6:
return 0;
case 0x131f7:
return 0;
case 0x131f8:
return 0;
case 0x131f9:
return 0;
case 0x131fa:
return 0;
case 0x131fb:
return 0;
case 0x131fc:
return 0;
case 0x131fd:
return 0;
case 0x131fe:
return 0;
case 0x131ff:
return 0;
case 0x13200:
return 0;
case 0x13201:
return 0;
case 0x13202:
return 0;
case 0x13203:
return 0;
case 0x13204:
return 0;
case 0x13205:
return 0;
case 0x13206:
return 0;
case 0x13207:
return 0;
case 0x13208:
return 0;
case 0x13209:
return 0;
case 0x1320a:
return 0;
case 0x1320b:
return 0;
case 0x1320c:
return 0;
case 0x1320d:
return 0;
case 0x1320e:
return 0;
case 0x1320f:
return 0;
case 0x13210:
return 0;
case 0x13211:
return 0;
case 0x13212:
return 0;
case 0x13213:
return 0;
case 0x13214:
return 0;
case 0x13215:
return 0;
case 0x13216:
return 0;
case 0x13217:
return 0;
case 0x13218:
return 0;
case 0x13219:
return 0;
case 0x1321a:
return 0;
case 0x1321b:
return 0;
case 0x1321c:
return 0;
case 0x1321d:
return 0;
case 0x1321e:
return 0;
case 0x1321f:
return 0;
case 0x13220:
return 0;
case 0x13221:
return 0;
case 0x13222:
return 0;
case 0x13223:
return 0;
case 0x13224:
return 0;
case 0x13225:
return 0;
case 0x13226:
return 0;
case 0x13227:
return 0;
case 0x13228:
return 0;
case 0x13229:
return 0;
case 0x1322a:
return 0;
case 0x1322b:
return 0;
case 0x1322c:
return 0;
case 0x1322d:
return 0;
case 0x1322e:
return 0;
case 0x1322f:
return 0;
case 0x13230:
return 0;
case 0x13231:
return 0;
case 0x13232:
return 0;
case 0x13233:
return 0;
case 0x13234:
return 0;
case 0x13235:
return 0;
case 0x13236:
return 0;
case 0x13237:
return 0;
case 0x13238:
return 0;
case 0x13239:
return 0;
case 0x1323a:
return 0;
case 0x1323b:
return 0;
case 0x1323c:
return 0;
case 0x1323d:
return 0;
case 0x1323e:
return 0;
case 0x1323f:
return 0;
case 0x13240:
return 0;
case 0x13241:
return 0;
case 0x13242:
return 0;
case 0x13243:
return 0;
case 0x13244:
return 0;
case 0x13245:
return 0;
case 0x13246:
return 0;
case 0x13247:
return 0;
case 0x13248:
return 0;
case 0x13249:
return 0;
case 0x1324a:
return 0;
case 0x1324b:
return 0;
case 0x1324c:
return 0;
case 0x1324d:
return 0;
case 0x1324e:
return 0;
case 0x1324f:
return 0;
case 0x13250:
return 0;
case 0x13251:
return 0;
case 0x13252:
return 0;
case 0x13253:
return 0;
case 0x13254:
return 0;
case 0x13255:
return 0;
case 0x13256:
return 0;
case 0x13257:
return 0;
case 0x13258:
return 0;
case 0x13259:
return 0;
case 0x1325a:
return 0;
case 0x1325b:
return 0;
case 0x1325c:
return 0;
case 0x1325d:
return 0;
case 0x1325e:
return 0;
case 0x1325f:
return 0;
case 0x13260:
return 0;
case 0x13261:
return 0;
case 0x13262:
return 0;
case 0x13263:
return 0;
case 0x13264:
return 0;
case 0x13265:
return 0;
case 0x13266:
return 0;
case 0x13267:
return 0;
case 0x13268:
return 0;
case 0x13269:
return 0;
case 0x1326a:
return 0;
case 0x1326b:
return 0;
case 0x1326c:
return 0;
case 0x1326d:
return 0;
case 0x1326e:
return 0;
case 0x1326f:
return 0;
case 0x13270:
return 0;
case 0x13271:
return 0;
case 0x13272:
return 0;
case 0x13273:
return 0;
case 0x13274:
return 0;
case 0x13275:
return 0;
case 0x13276:
return 0;
case 0x13277:
return 0;
case 0x13278:
return 0;
case 0x13279:
return 0;
case 0x1327a:
return 0;
case 0x1327b:
return 0;
case 0x1327c:
return 0;
case 0x1327d:
return 0;
case 0x1327e:
return 0;
case 0x1327f:
return 0;
case 0x13280:
return 0;
case 0x13281:
return 0;
case 0x13282:
return 0;
case 0x13283:
return 0;
case 0x13284:
return 0;
case 0x13285:
return 0;
case 0x13286:
return 0;
case 0x13287:
return 0;
case 0x13288:
return 0;
case 0x13289:
return 0;
case 0x1328a:
return 0;
case 0x1328b:
return 0;
case 0x1328c:
return 0;
case 0x1328d:
return 0;
case 0x1328e:
return 0;
case 0x1328f:
return 0;
case 0x13290:
return 0;
case 0x13291:
return 0;
case 0x13292:
return 0;
case 0x13293:
return 0;
case 0x13294:
return 0;
case 0x13295:
return 0;
case 0x13296:
return 0;
case 0x13297:
return 0;
case 0x13298:
return 0;
case 0x13299:
return 0;
case 0x1329a:
return 0;
case 0x1329b:
return 0;
case 0x1329c:
return 0;
case 0x1329d:
return 0;
case 0x1329e:
return 0;
case 0x1329f:
return 0;
case 0x132a0:
return 0;
case 0x132a1:
return 0;
case 0x132a2:
return 0;
case 0x132a3:
return 0;
case 0x132a4:
return 0;
case 0x132a5:
return 0;
case 0x132a6:
return 0;
case 0x132a7:
return 0;
case 0x132a8:
return 0;
case 0x132a9:
return 0;
case 0x132aa:
return 0;
case 0x132ab:
return 0;
case 0x132ac:
return 0;
case 0x132ad:
return 0;
case 0x132ae:
return 0;
case 0x132af:
return 0;
case 0x132b0:
return 0;
case 0x132b1:
return 0;
case 0x132b2:
return 0;
case 0x132b3:
return 0;
case 0x132b4:
return 0;
case 0x132b5:
return 0;
case 0x132b6:
return 0;
case 0x132b7:
return 0;
case 0x132b8:
return 0;
case 0x132b9:
return 0;
case 0x132ba:
return 0;
case 0x132bb:
return 0;
case 0x132bc:
return 0;
case 0x132bd:
return 0;
case 0x132be:
return 0;
case 0x132bf:
return 0;
case 0x132c0:
return 0;
case 0x132c1:
return 0;
case 0x132c2:
return 0;
case 0x132c3:
return 0;
case 0x132c4:
return 0;
case 0x132c5:
return 0;
case 0x132c6:
return 0;
case 0x132c7:
return 0;
case 0x132c8:
return 0;
case 0x132c9:
return 0;
case 0x132ca:
return 0;
case 0x132cb:
return 0;
case 0x132cc:
return 0;
case 0x132cd:
return 0;
case 0x132ce:
return 0;
case 0x132cf:
return 0;
case 0x132d0:
return 0;
case 0x132d1:
return 0;
case 0x132d2:
return 0;
case 0x132d3:
return 0;
case 0x132d4:
return 0;
case 0x132d5:
return 0;
case 0x132d6:
return 0;
case 0x132d7:
return 0;
case 0x132d8:
return 0;
case 0x132d9:
return 0;
case 0x132da:
return 0;
case 0x132db:
return 0;
case 0x132dc:
return 0;
case 0x132dd:
return 0;
case 0x132de:
return 0;
case 0x132df:
return 0;
case 0x132e0:
return 0;
case 0x132e1:
return 0;
case 0x132e2:
return 0;
case 0x132e3:
return 0;
case 0x132e4:
return 0;
case 0x132e5:
return 0;
case 0x132e6:
return 0;
case 0x132e7:
return 0;
case 0x132e8:
return 0;
case 0x132e9:
return 0;
case 0x132ea:
return 0;
case 0x132eb:
return 0;
case 0x132ec:
return 0;
case 0x132ed:
return 0;
case 0x132ee:
return 0;
case 0x132ef:
return 0;
case 0x132f0:
return 0;
case 0x132f1:
return 0;
case 0x132f2:
return 0;
case 0x132f3:
return 0;
case 0x132f4:
return 0;
case 0x132f5:
return 0;
case 0x132f6:
return 0;
case 0x132f7:
return 0;
case 0x132f8:
return 0;
case 0x132f9:
return 0;
case 0x132fa:
return 0;
case 0x132fb:
return 0;
case 0x132fc:
return 0;
case 0x132fd:
return 0;
case 0x132fe:
return 0;
case 0x132ff:
return 0;
case 0x13300:
return 0;
case 0x13301:
return 0;
case 0x13302:
return 0;
case 0x13303:
return 0;
case 0x13304:
return 0;
case 0x13305:
return 0;
case 0x13306:
return 0;
case 0x13307:
return 0;
case 0x13308:
return 0;
case 0x13309:
return 0;
case 0x1330a:
return 0;
case 0x1330b:
return 0;
case 0x1330c:
return 0;
case 0x1330d:
return 0;
case 0x1330e:
return 0;
case 0x1330f:
return 0;
case 0x13310:
return 0;
case 0x13311:
return 0;
case 0x13312:
return 0;
case 0x13313:
return 0;
case 0x13314:
return 0;
case 0x13315:
return 0;
case 0x13316:
return 0;
case 0x13317:
return 0;
case 0x13318:
return 0;
case 0x13319:
return 0;
case 0x1331a:
return 0;
case 0x1331b:
return 0;
case 0x1331c:
return 0;
case 0x1331d:
return 0;
case 0x1331e:
return 0;
case 0x1331f:
return 0;
case 0x13320:
return 0;
case 0x13321:
return 0;
case 0x13322:
return 0;
case 0x13323:
return 0;
case 0x13324:
return 0;
case 0x13325:
return 0;
case 0x13326:
return 0;
case 0x13327:
return 0;
case 0x13328:
return 0;
case 0x13329:
return 0;
case 0x1332a:
return 0;
case 0x1332b:
return 0;
case 0x1332c:
return 0;
case 0x1332d:
return 0;
case 0x1332e:
return 0;
case 0x1332f:
return 0;
case 0x13330:
return 0;
case 0x13331:
return 0;
case 0x13332:
return 0;
case 0x13333:
return 0;
case 0x13334:
return 0;
case 0x13335:
return 0;
case 0x13336:
return 0;
case 0x13337:
return 0;
case 0x13338:
return 0;
case 0x13339:
return 0;
case 0x1333a:
return 0;
case 0x1333b:
return 0;
case 0x1333c:
return 0;
case 0x1333d:
return 0;
case 0x1333e:
return 0;
case 0x1333f:
return 0;
case 0x13340:
return 0;
case 0x13341:
return 0;
case 0x13342:
return 0;
case 0x13343:
return 0;
case 0x13344:
return 0;
case 0x13345:
return 0;
case 0x13346:
return 0;
case 0x13347:
return 0;
case 0x13348:
return 0;
case 0x13349:
return 0;
case 0x1334a:
return 0;
case 0x1334b:
return 0;
case 0x1334c:
return 0;
case 0x1334d:
return 0;
case 0x1334e:
return 0;
case 0x1334f:
return 0;
case 0x13350:
return 0;
case 0x13351:
return 0;
case 0x13352:
return 0;
case 0x13353:
return 0;
case 0x13354:
return 0;
case 0x13355:
return 0;
case 0x13356:
return 0;
case 0x13357:
return 0;
case 0x13358:
return 0;
case 0x13359:
return 0;
case 0x1335a:
return 0;
case 0x1335b:
return 0;
case 0x1335c:
return 0;
case 0x1335d:
return 0;
case 0x1335e:
return 0;
case 0x1335f:
return 0;
case 0x13360:
return 0;
case 0x13361:
return 0;
case 0x13362:
return 0;
case 0x13363:
return 0;
case 0x13364:
return 0;
case 0x13365:
return 0;
case 0x13366:
return 0;
case 0x13367:
return 0;
case 0x13368:
return 0;
case 0x13369:
return 0;
case 0x1336a:
return 0;
case 0x1336b:
return 0;
case 0x1336c:
return 0;
case 0x1336d:
return 0;
case 0x1336e:
return 0;
case 0x1336f:
return 0;
case 0x13370:
return 0;
case 0x13371:
return 0;
case 0x13372:
return 0;
case 0x13373:
return 0;
case 0x13374:
return 0;
case 0x13375:
return 0;
case 0x13376:
return 0;
case 0x13377:
return 0;
case 0x13378:
return 0;
case 0x13379:
return 0;
case 0x1337a:
return 0;
case 0x1337b:
return 0;
case 0x1337c:
return 0;
case 0x1337d:
return 0;
case 0x1337e:
return 0;
case 0x1337f:
return 0;
case 0x13380:
return 0;
case 0x13381:
return 0;
case 0x13382:
return 0;
case 0x13383:
return 0;
case 0x13384:
return 0;
case 0x13385:
return 0;
case 0x13386:
return 0;
case 0x13387:
return 0;
case 0x13388:
return 0;
case 0x13389:
return 0;
case 0x1338a:
return 0;
case 0x1338b:
return 0;
case 0x1338c:
return 0;
case 0x1338d:
return 0;
case 0x1338e:
return 0;
case 0x1338f:
return 0;
case 0x13390:
return 0;
case 0x13391:
return 0;
case 0x13392:
return 0;
case 0x13393:
return 0;
case 0x13394:
return 0;
case 0x13395:
return 0;
case 0x13396:
return 0;
case 0x13397:
return 0;
case 0x13398:
return 0;
case 0x13399:
return 0;
case 0x1339a:
return 0;
case 0x1339b:
return 0;
case 0x1339c:
return 0;
case 0x1339d:
return 0;
case 0x1339e:
return 0;
case 0x1339f:
return 0;
case 0x133a0:
return 0;
case 0x133a1:
return 0;
case 0x133a2:
return 0;
case 0x133a3:
return 0;
case 0x133a4:
return 0;
case 0x133a5:
return 0;
case 0x133a6:
return 0;
case 0x133a7:
return 0;
case 0x133a8:
return 0;
case 0x133a9:
return 0;
case 0x133aa:
return 0;
case 0x133ab:
return 0;
case 0x133ac:
return 0;
case 0x133ad:
return 0;
case 0x133ae:
return 0;
case 0x133af:
return 0;
case 0x133b0:
return 0;
case 0x133b1:
return 0;
case 0x133b2:
return 0;
case 0x133b3:
return 0;
case 0x133b4:
return 0;
case 0x133b5:
return 0;
case 0x133b6:
return 0;
case 0x133b7:
return 0;
case 0x133b8:
return 0;
case 0x133b9:
return 0;
case 0x133ba:
return 0;
case 0x133bb:
return 0;
case 0x133bc:
return 0;
case 0x133bd:
return 0;
case 0x133be:
return 0;
case 0x133bf:
return 0;
case 0x133c0:
return 0;
case 0x133c1:
return 0;
case 0x133c2:
return 0;
case 0x133c3:
return 0;
case 0x133c4:
return 0;
case 0x133c5:
return 0;
case 0x133c6:
return 0;
case 0x133c7:
return 0;
case 0x133c8:
return 0;
case 0x133c9:
return 0;
case 0x133ca:
return 0;
case 0x133cb:
return 0;
case 0x133cc:
return 0;
case 0x133cd:
return 0;
case 0x133ce:
return 0;
case 0x133cf:
return 0;
case 0x133d0:
return 0;
case 0x133d1:
return 0;
case 0x133d2:
return 0;
case 0x133d3:
return 0;
case 0x133d4:
return 0;
case 0x133d5:
return 0;
case 0x133d6:
return 0;
case 0x133d7:
return 0;
case 0x133d8:
return 0;
case 0x133d9:
return 0;
case 0x133da:
return 0;
case 0x133db:
return 0;
case 0x133dc:
return 0;
case 0x133dd:
return 0;
case 0x133de:
return 0;
case 0x133df:
return 0;
case 0x133e0:
return 0;
case 0x133e1:
return 0;
case 0x133e2:
return 0;
case 0x133e3:
return 0;
case 0x133e4:
return 0;
case 0x133e5:
return 0;
case 0x133e6:
return 0;
case 0x133e7:
return 0;
case 0x133e8:
return 0;
case 0x133e9:
return 0;
case 0x133ea:
return 0;
case 0x133eb:
return 0;
case 0x133ec:
return 0;
case 0x133ed:
return 0;
case 0x133ee:
return 0;
case 0x133ef:
return 0;
case 0x133f0:
return 0;
case 0x133f1:
return 0;
case 0x133f2:
return 0;
case 0x133f3:
return 0;
case 0x133f4:
return 0;
case 0x133f5:
return 0;
case 0x133f6:
return 0;
case 0x133f7:
return 0;
case 0x133f8:
return 0;
case 0x133f9:
return 0;
case 0x133fa:
return 0;
case 0x133fb:
return 0;
case 0x133fc:
return 0;
case 0x133fd:
return 0;
case 0x133fe:
return 0;
case 0x133ff:
return 0;
case 0x13400:
return 0;
case 0x13401:
return 0;
case 0x13402:
return 0;
case 0x13403:
return 0;
case 0x13404:
return 0;
case 0x13405:
return 0;
case 0x13406:
return 0;
case 0x13407:
return 0;
case 0x13408:
return 0;
case 0x13409:
return 0;
case 0x1340a:
return 0;
case 0x1340b:
return 0;
case 0x1340c:
return 0;
case 0x1340d:
return 0;
case 0x1340e:
return 0;
case 0x1340f:
return 0;
case 0x13410:
return 0;
case 0x13411:
return 0;
case 0x13412:
return 0;
case 0x13413:
return 0;
case 0x13414:
return 0;
case 0x13415:
return 0;
case 0x13416:
return 0;
case 0x13417:
return 0;
case 0x13418:
return 0;
case 0x13419:
return 0;
case 0x1341a:
return 0;
case 0x1341b:
return 0;
case 0x1341c:
return 0;
case 0x1341d:
return 0;
case 0x1341e:
return 0;
case 0x1341f:
return 0;
case 0x13420:
return 0;
case 0x13421:
return 0;
case 0x13422:
return 0;
case 0x13423:
return 0;
case 0x13424:
return 0;
case 0x13425:
return 0;
case 0x13426:
return 0;
case 0x13427:
return 0;
case 0x13428:
return 0;
case 0x13429:
return 0;
case 0x1342a:
return 0;
case 0x1342b:
return 0;
case 0x1342c:
return 0;
case 0x1342d:
return 0;
case 0x1342e:
return 0;
case 0x14400:
return 0;
case 0x14401:
return 0;
case 0x14402:
return 0;
case 0x14403:
return 0;
case 0x14404:
return 0;
case 0x14405:
return 0;
case 0x14406:
return 0;
case 0x14407:
return 0;
case 0x14408:
return 0;
case 0x14409:
return 0;
case 0x1440a:
return 0;
case 0x1440b:
return 0;
case 0x1440c:
return 0;
case 0x1440d:
return 0;
case 0x1440e:
return 0;
case 0x1440f:
return 0;
case 0x14410:
return 0;
case 0x14411:
return 0;
case 0x14412:
return 0;
case 0x14413:
return 0;
case 0x14414:
return 0;
case 0x14415:
return 0;
case 0x14416:
return 0;
case 0x14417:
return 0;
case 0x14418:
return 0;
case 0x14419:
return 0;
case 0x1441a:
return 0;
case 0x1441b:
return 0;
case 0x1441c:
return 0;
case 0x1441d:
return 0;
case 0x1441e:
return 0;
case 0x1441f:
return 0;
case 0x14420:
return 0;
case 0x14421:
return 0;
case 0x14422:
return 0;
case 0x14423:
return 0;
case 0x14424:
return 0;
case 0x14425:
return 0;
case 0x14426:
return 0;
case 0x14427:
return 0;
case 0x14428:
return 0;
case 0x14429:
return 0;
case 0x1442a:
return 0;
case 0x1442b:
return 0;
case 0x1442c:
return 0;
case 0x1442d:
return 0;
case 0x1442e:
return 0;
case 0x1442f:
return 0;
case 0x14430:
return 0;
case 0x14431:
return 0;
case 0x14432:
return 0;
case 0x14433:
return 0;
case 0x14434:
return 0;
case 0x14435:
return 0;
case 0x14436:
return 0;
case 0x14437:
return 0;
case 0x14438:
return 0;
case 0x14439:
return 0;
case 0x1443a:
return 0;
case 0x1443b:
return 0;
case 0x1443c:
return 0;
case 0x1443d:
return 0;
case 0x1443e:
return 0;
case 0x1443f:
return 0;
case 0x14440:
return 0;
case 0x14441:
return 0;
case 0x14442:
return 0;
case 0x14443:
return 0;
case 0x14444:
return 0;
case 0x14445:
return 0;
case 0x14446:
return 0;
case 0x14447:
return 0;
case 0x14448:
return 0;
case 0x14449:
return 0;
case 0x1444a:
return 0;
case 0x1444b:
return 0;
case 0x1444c:
return 0;
case 0x1444d:
return 0;
case 0x1444e:
return 0;
case 0x1444f:
return 0;
case 0x14450:
return 0;
case 0x14451:
return 0;
case 0x14452:
return 0;
case 0x14453:
return 0;
case 0x14454:
return 0;
case 0x14455:
return 0;
case 0x14456:
return 0;
case 0x14457:
return 0;
case 0x14458:
return 0;
case 0x14459:
return 0;
case 0x1445a:
return 0;
case 0x1445b:
return 0;
case 0x1445c:
return 0;
case 0x1445d:
return 0;
case 0x1445e:
return 0;
case 0x1445f:
return 0;
case 0x14460:
return 0;
case 0x14461:
return 0;
case 0x14462:
return 0;
case 0x14463:
return 0;
case 0x14464:
return 0;
case 0x14465:
return 0;
case 0x14466:
return 0;
case 0x14467:
return 0;
case 0x14468:
return 0;
case 0x14469:
return 0;
case 0x1446a:
return 0;
case 0x1446b:
return 0;
case 0x1446c:
return 0;
case 0x1446d:
return 0;
case 0x1446e:
return 0;
case 0x1446f:
return 0;
case 0x14470:
return 0;
case 0x14471:
return 0;
case 0x14472:
return 0;
case 0x14473:
return 0;
case 0x14474:
return 0;
case 0x14475:
return 0;
case 0x14476:
return 0;
case 0x14477:
return 0;
case 0x14478:
return 0;
case 0x14479:
return 0;
case 0x1447a:
return 0;
case 0x1447b:
return 0;
case 0x1447c:
return 0;
case 0x1447d:
return 0;
case 0x1447e:
return 0;
case 0x1447f:
return 0;
case 0x14480:
return 0;
case 0x14481:
return 0;
case 0x14482:
return 0;
case 0x14483:
return 0;
case 0x14484:
return 0;
case 0x14485:
return 0;
case 0x14486:
return 0;
case 0x14487:
return 0;
case 0x14488:
return 0;
case 0x14489:
return 0;
case 0x1448a:
return 0;
case 0x1448b:
return 0;
case 0x1448c:
return 0;
case 0x1448d:
return 0;
case 0x1448e:
return 0;
case 0x1448f:
return 0;
case 0x14490:
return 0;
case 0x14491:
return 0;
case 0x14492:
return 0;
case 0x14493:
return 0;
case 0x14494:
return 0;
case 0x14495:
return 0;
case 0x14496:
return 0;
case 0x14497:
return 0;
case 0x14498:
return 0;
case 0x14499:
return 0;
case 0x1449a:
return 0;
case 0x1449b:
return 0;
case 0x1449c:
return 0;
case 0x1449d:
return 0;
case 0x1449e:
return 0;
case 0x1449f:
return 0;
case 0x144a0:
return 0;
case 0x144a1:
return 0;
case 0x144a2:
return 0;
case 0x144a3:
return 0;
case 0x144a4:
return 0;
case 0x144a5:
return 0;
case 0x144a6:
return 0;
case 0x144a7:
return 0;
case 0x144a8:
return 0;
case 0x144a9:
return 0;
case 0x144aa:
return 0;
case 0x144ab:
return 0;
case 0x144ac:
return 0;
case 0x144ad:
return 0;
case 0x144ae:
return 0;
case 0x144af:
return 0;
case 0x144b0:
return 0;
case 0x144b1:
return 0;
case 0x144b2:
return 0;
case 0x144b3:
return 0;
case 0x144b4:
return 0;
case 0x144b5:
return 0;
case 0x144b6:
return 0;
case 0x144b7:
return 0;
case 0x144b8:
return 0;
case 0x144b9:
return 0;
case 0x144ba:
return 0;
case 0x144bb:
return 0;
case 0x144bc:
return 0;
case 0x144bd:
return 0;
case 0x144be:
return 0;
case 0x144bf:
return 0;
case 0x144c0:
return 0;
case 0x144c1:
return 0;
case 0x144c2:
return 0;
case 0x144c3:
return 0;
case 0x144c4:
return 0;
case 0x144c5:
return 0;
case 0x144c6:
return 0;
case 0x144c7:
return 0;
case 0x144c8:
return 0;
case 0x144c9:
return 0;
case 0x144ca:
return 0;
case 0x144cb:
return 0;
case 0x144cc:
return 0;
case 0x144cd:
return 0;
case 0x144ce:
return 0;
case 0x144cf:
return 0;
case 0x144d0:
return 0;
case 0x144d1:
return 0;
case 0x144d2:
return 0;
case 0x144d3:
return 0;
case 0x144d4:
return 0;
case 0x144d5:
return 0;
case 0x144d6:
return 0;
case 0x144d7:
return 0;
case 0x144d8:
return 0;
case 0x144d9:
return 0;
case 0x144da:
return 0;
case 0x144db:
return 0;
case 0x144dc:
return 0;
case 0x144dd:
return 0;
case 0x144de:
return 0;
case 0x144df:
return 0;
case 0x144e0:
return 0;
case 0x144e1:
return 0;
case 0x144e2:
return 0;
case 0x144e3:
return 0;
case 0x144e4:
return 0;
case 0x144e5:
return 0;
case 0x144e6:
return 0;
case 0x144e7:
return 0;
case 0x144e8:
return 0;
case 0x144e9:
return 0;
case 0x144ea:
return 0;
case 0x144eb:
return 0;
case 0x144ec:
return 0;
case 0x144ed:
return 0;
case 0x144ee:
return 0;
case 0x144ef:
return 0;
case 0x144f0:
return 0;
case 0x144f1:
return 0;
case 0x144f2:
return 0;
case 0x144f3:
return 0;
case 0x144f4:
return 0;
case 0x144f5:
return 0;
case 0x144f6:
return 0;
case 0x144f7:
return 0;
case 0x144f8:
return 0;
case 0x144f9:
return 0;
case 0x144fa:
return 0;
case 0x144fb:
return 0;
case 0x144fc:
return 0;
case 0x144fd:
return 0;
case 0x144fe:
return 0;
case 0x144ff:
return 0;
case 0x14500:
return 0;
case 0x14501:
return 0;
case 0x14502:
return 0;
case 0x14503:
return 0;
case 0x14504:
return 0;
case 0x14505:
return 0;
case 0x14506:
return 0;
case 0x14507:
return 0;
case 0x14508:
return 0;
case 0x14509:
return 0;
case 0x1450a:
return 0;
case 0x1450b:
return 0;
case 0x1450c:
return 0;
case 0x1450d:
return 0;
case 0x1450e:
return 0;
case 0x1450f:
return 0;
case 0x14510:
return 0;
case 0x14511:
return 0;
case 0x14512:
return 0;
case 0x14513:
return 0;
case 0x14514:
return 0;
case 0x14515:
return 0;
case 0x14516:
return 0;
case 0x14517:
return 0;
case 0x14518:
return 0;
case 0x14519:
return 0;
case 0x1451a:
return 0;
case 0x1451b:
return 0;
case 0x1451c:
return 0;
case 0x1451d:
return 0;
case 0x1451e:
return 0;
case 0x1451f:
return 0;
case 0x14520:
return 0;
case 0x14521:
return 0;
case 0x14522:
return 0;
case 0x14523:
return 0;
case 0x14524:
return 0;
case 0x14525:
return 0;
case 0x14526:
return 0;
case 0x14527:
return 0;
case 0x14528:
return 0;
case 0x14529:
return 0;
case 0x1452a:
return 0;
case 0x1452b:
return 0;
case 0x1452c:
return 0;
case 0x1452d:
return 0;
case 0x1452e:
return 0;
case 0x1452f:
return 0;
case 0x14530:
return 0;
case 0x14531:
return 0;
case 0x14532:
return 0;
case 0x14533:
return 0;
case 0x14534:
return 0;
case 0x14535:
return 0;
case 0x14536:
return 0;
case 0x14537:
return 0;
case 0x14538:
return 0;
case 0x14539:
return 0;
case 0x1453a:
return 0;
case 0x1453b:
return 0;
case 0x1453c:
return 0;
case 0x1453d:
return 0;
case 0x1453e:
return 0;
case 0x1453f:
return 0;
case 0x14540:
return 0;
case 0x14541:
return 0;
case 0x14542:
return 0;
case 0x14543:
return 0;
case 0x14544:
return 0;
case 0x14545:
return 0;
case 0x14546:
return 0;
case 0x14547:
return 0;
case 0x14548:
return 0;
case 0x14549:
return 0;
case 0x1454a:
return 0;
case 0x1454b:
return 0;
case 0x1454c:
return 0;
case 0x1454d:
return 0;
case 0x1454e:
return 0;
case 0x1454f:
return 0;
case 0x14550:
return 0;
case 0x14551:
return 0;
case 0x14552:
return 0;
case 0x14553:
return 0;
case 0x14554:
return 0;
case 0x14555:
return 0;
case 0x14556:
return 0;
case 0x14557:
return 0;
case 0x14558:
return 0;
case 0x14559:
return 0;
case 0x1455a:
return 0;
case 0x1455b:
return 0;
case 0x1455c:
return 0;
case 0x1455d:
return 0;
case 0x1455e:
return 0;
case 0x1455f:
return 0;
case 0x14560:
return 0;
case 0x14561:
return 0;
case 0x14562:
return 0;
case 0x14563:
return 0;
case 0x14564:
return 0;
case 0x14565:
return 0;
case 0x14566:
return 0;
case 0x14567:
return 0;
case 0x14568:
return 0;
case 0x14569:
return 0;
case 0x1456a:
return 0;
case 0x1456b:
return 0;
case 0x1456c:
return 0;
case 0x1456d:
return 0;
case 0x1456e:
return 0;
case 0x1456f:
return 0;
case 0x14570:
return 0;
case 0x14571:
return 0;
case 0x14572:
return 0;
case 0x14573:
return 0;
case 0x14574:
return 0;
case 0x14575:
return 0;
case 0x14576:
return 0;
case 0x14577:
return 0;
case 0x14578:
return 0;
case 0x14579:
return 0;
case 0x1457a:
return 0;
case 0x1457b:
return 0;
case 0x1457c:
return 0;
case 0x1457d:
return 0;
case 0x1457e:
return 0;
case 0x1457f:
return 0;
case 0x14580:
return 0;
case 0x14581:
return 0;
case 0x14582:
return 0;
case 0x14583:
return 0;
case 0x14584:
return 0;
case 0x14585:
return 0;
case 0x14586:
return 0;
case 0x14587:
return 0;
case 0x14588:
return 0;
case 0x14589:
return 0;
case 0x1458a:
return 0;
case 0x1458b:
return 0;
case 0x1458c:
return 0;
case 0x1458d:
return 0;
case 0x1458e:
return 0;
case 0x1458f:
return 0;
case 0x14590:
return 0;
case 0x14591:
return 0;
case 0x14592:
return 0;
case 0x14593:
return 0;
case 0x14594:
return 0;
case 0x14595:
return 0;
case 0x14596:
return 0;
case 0x14597:
return 0;
case 0x14598:
return 0;
case 0x14599:
return 0;
case 0x1459a:
return 0;
case 0x1459b:
return 0;
case 0x1459c:
return 0;
case 0x1459d:
return 0;
case 0x1459e:
return 0;
case 0x1459f:
return 0;
case 0x145a0:
return 0;
case 0x145a1:
return 0;
case 0x145a2:
return 0;
case 0x145a3:
return 0;
case 0x145a4:
return 0;
case 0x145a5:
return 0;
case 0x145a6:
return 0;
case 0x145a7:
return 0;
case 0x145a8:
return 0;
case 0x145a9:
return 0;
case 0x145aa:
return 0;
case 0x145ab:
return 0;
case 0x145ac:
return 0;
case 0x145ad:
return 0;
case 0x145ae:
return 0;
case 0x145af:
return 0;
case 0x145b0:
return 0;
case 0x145b1:
return 0;
case 0x145b2:
return 0;
case 0x145b3:
return 0;
case 0x145b4:
return 0;
case 0x145b5:
return 0;
case 0x145b6:
return 0;
case 0x145b7:
return 0;
case 0x145b8:
return 0;
case 0x145b9:
return 0;
case 0x145ba:
return 0;
case 0x145bb:
return 0;
case 0x145bc:
return 0;
case 0x145bd:
return 0;
case 0x145be:
return 0;
case 0x145bf:
return 0;
case 0x145c0:
return 0;
case 0x145c1:
return 0;
case 0x145c2:
return 0;
case 0x145c3:
return 0;
case 0x145c4:
return 0;
case 0x145c5:
return 0;
case 0x145c6:
return 0;
case 0x145c7:
return 0;
case 0x145c8:
return 0;
case 0x145c9:
return 0;
case 0x145ca:
return 0;
case 0x145cb:
return 0;
case 0x145cc:
return 0;
case 0x145cd:
return 0;
case 0x145ce:
return 0;
case 0x145cf:
return 0;
case 0x145d0:
return 0;
case 0x145d1:
return 0;
case 0x145d2:
return 0;
case 0x145d3:
return 0;
case 0x145d4:
return 0;
case 0x145d5:
return 0;
case 0x145d6:
return 0;
case 0x145d7:
return 0;
case 0x145d8:
return 0;
case 0x145d9:
return 0;
case 0x145da:
return 0;
case 0x145db:
return 0;
case 0x145dc:
return 0;
case 0x145dd:
return 0;
case 0x145de:
return 0;
case 0x145df:
return 0;
case 0x145e0:
return 0;
case 0x145e1:
return 0;
case 0x145e2:
return 0;
case 0x145e3:
return 0;
case 0x145e4:
return 0;
case 0x145e5:
return 0;
case 0x145e6:
return 0;
case 0x145e7:
return 0;
case 0x145e8:
return 0;
case 0x145e9:
return 0;
case 0x145ea:
return 0;
case 0x145eb:
return 0;
case 0x145ec:
return 0;
case 0x145ed:
return 0;
case 0x145ee:
return 0;
case 0x145ef:
return 0;
case 0x145f0:
return 0;
case 0x145f1:
return 0;
case 0x145f2:
return 0;
case 0x145f3:
return 0;
case 0x145f4:
return 0;
case 0x145f5:
return 0;
case 0x145f6:
return 0;
case 0x145f7:
return 0;
case 0x145f8:
return 0;
case 0x145f9:
return 0;
case 0x145fa:
return 0;
case 0x145fb:
return 0;
case 0x145fc:
return 0;
case 0x145fd:
return 0;
case 0x145fe:
return 0;
case 0x145ff:
return 0;
case 0x14600:
return 0;
case 0x14601:
return 0;
case 0x14602:
return 0;
case 0x14603:
return 0;
case 0x14604:
return 0;
case 0x14605:
return 0;
case 0x14606:
return 0;
case 0x14607:
return 0;
case 0x14608:
return 0;
case 0x14609:
return 0;
case 0x1460a:
return 0;
case 0x1460b:
return 0;
case 0x1460c:
return 0;
case 0x1460d:
return 0;
case 0x1460e:
return 0;
case 0x1460f:
return 0;
case 0x14610:
return 0;
case 0x14611:
return 0;
case 0x14612:
return 0;
case 0x14613:
return 0;
case 0x14614:
return 0;
case 0x14615:
return 0;
case 0x14616:
return 0;
case 0x14617:
return 0;
case 0x14618:
return 0;
case 0x14619:
return 0;
case 0x1461a:
return 0;
case 0x1461b:
return 0;
case 0x1461c:
return 0;
case 0x1461d:
return 0;
case 0x1461e:
return 0;
case 0x1461f:
return 0;
case 0x14620:
return 0;
case 0x14621:
return 0;
case 0x14622:
return 0;
case 0x14623:
return 0;
case 0x14624:
return 0;
case 0x14625:
return 0;
case 0x14626:
return 0;
case 0x14627:
return 0;
case 0x14628:
return 0;
case 0x14629:
return 0;
case 0x1462a:
return 0;
case 0x1462b:
return 0;
case 0x1462c:
return 0;
case 0x1462d:
return 0;
case 0x1462e:
return 0;
case 0x1462f:
return 0;
case 0x14630:
return 0;
case 0x14631:
return 0;
case 0x14632:
return 0;
case 0x14633:
return 0;
case 0x14634:
return 0;
case 0x14635:
return 0;
case 0x14636:
return 0;
case 0x14637:
return 0;
case 0x14638:
return 0;
case 0x14639:
return 0;
case 0x1463a:
return 0;
case 0x1463b:
return 0;
case 0x1463c:
return 0;
case 0x1463d:
return 0;
case 0x1463e:
return 0;
case 0x1463f:
return 0;
case 0x14640:
return 0;
case 0x14641:
return 0;
case 0x14642:
return 0;
case 0x14643:
return 0;
case 0x14644:
return 0;
case 0x14645:
return 0;
case 0x14646:
return 0;
case 0x16800:
return 0;
case 0x16801:
return 0;
case 0x16802:
return 0;
case 0x16803:
return 0;
case 0x16804:
return 0;
case 0x16805:
return 0;
case 0x16806:
return 0;
case 0x16807:
return 0;
case 0x16808:
return 0;
case 0x16809:
return 0;
case 0x1680a:
return 0;
case 0x1680b:
return 0;
case 0x1680c:
return 0;
case 0x1680d:
return 0;
case 0x1680e:
return 0;
case 0x1680f:
return 0;
case 0x16810:
return 0;
case 0x16811:
return 0;
case 0x16812:
return 0;
case 0x16813:
return 0;
case 0x16814:
return 0;
case 0x16815:
return 0;
case 0x16816:
return 0;
case 0x16817:
return 0;
case 0x16818:
return 0;
case 0x16819:
return 0;
case 0x1681a:
return 0;
case 0x1681b:
return 0;
case 0x1681c:
return 0;
case 0x1681d:
return 0;
case 0x1681e:
return 0;
case 0x1681f:
return 0;
case 0x16820:
return 0;
case 0x16821:
return 0;
case 0x16822:
return 0;
case 0x16823:
return 0;
case 0x16824:
return 0;
case 0x16825:
return 0;
case 0x16826:
return 0;
case 0x16827:
return 0;
case 0x16828:
return 0;
case 0x16829:
return 0;
case 0x1682a:
return 0;
case 0x1682b:
return 0;
case 0x1682c:
return 0;
case 0x1682d:
return 0;
case 0x1682e:
return 0;
case 0x1682f:
return 0;
case 0x16830:
return 0;
case 0x16831:
return 0;
case 0x16832:
return 0;
case 0x16833:
return 0;
case 0x16834:
return 0;
case 0x16835:
return 0;
case 0x16836:
return 0;
case 0x16837:
return 0;
case 0x16838:
return 0;
case 0x16839:
return 0;
case 0x1683a:
return 0;
case 0x1683b:
return 0;
case 0x1683c:
return 0;
case 0x1683d:
return 0;
case 0x1683e:
return 0;
case 0x1683f:
return 0;
case 0x16840:
return 0;
case 0x16841:
return 0;
case 0x16842:
return 0;
case 0x16843:
return 0;
case 0x16844:
return 0;
case 0x16845:
return 0;
case 0x16846:
return 0;
case 0x16847:
return 0;
case 0x16848:
return 0;
case 0x16849:
return 0;
case 0x1684a:
return 0;
case 0x1684b:
return 0;
case 0x1684c:
return 0;
case 0x1684d:
return 0;
case 0x1684e:
return 0;
case 0x1684f:
return 0;
case 0x16850:
return 0;
case 0x16851:
return 0;
case 0x16852:
return 0;
case 0x16853:
return 0;
case 0x16854:
return 0;
case 0x16855:
return 0;
case 0x16856:
return 0;
case 0x16857:
return 0;
case 0x16858:
return 0;
case 0x16859:
return 0;
case 0x1685a:
return 0;
case 0x1685b:
return 0;
case 0x1685c:
return 0;
case 0x1685d:
return 0;
case 0x1685e:
return 0;
case 0x1685f:
return 0;
case 0x16860:
return 0;
case 0x16861:
return 0;
case 0x16862:
return 0;
case 0x16863:
return 0;
case 0x16864:
return 0;
case 0x16865:
return 0;
case 0x16866:
return 0;
case 0x16867:
return 0;
case 0x16868:
return 0;
case 0x16869:
return 0;
case 0x1686a:
return 0;
case 0x1686b:
return 0;
case 0x1686c:
return 0;
case 0x1686d:
return 0;
case 0x1686e:
return 0;
case 0x1686f:
return 0;
case 0x16870:
return 0;
case 0x16871:
return 0;
case 0x16872:
return 0;
case 0x16873:
return 0;
case 0x16874:
return 0;
case 0x16875:
return 0;
case 0x16876:
return 0;
case 0x16877:
return 0;
case 0x16878:
return 0;
case 0x16879:
return 0;
case 0x1687a:
return 0;
case 0x1687b:
return 0;
case 0x1687c:
return 0;
case 0x1687d:
return 0;
case 0x1687e:
return 0;
case 0x1687f:
return 0;
case 0x16880:
return 0;
case 0x16881:
return 0;
case 0x16882:
return 0;
case 0x16883:
return 0;
case 0x16884:
return 0;
case 0x16885:
return 0;
case 0x16886:
return 0;
case 0x16887:
return 0;
case 0x16888:
return 0;
case 0x16889:
return 0;
case 0x1688a:
return 0;
case 0x1688b:
return 0;
case 0x1688c:
return 0;
case 0x1688d:
return 0;
case 0x1688e:
return 0;
case 0x1688f:
return 0;
case 0x16890:
return 0;
case 0x16891:
return 0;
case 0x16892:
return 0;
case 0x16893:
return 0;
case 0x16894:
return 0;
case 0x16895:
return 0;
case 0x16896:
return 0;
case 0x16897:
return 0;
case 0x16898:
return 0;
case 0x16899:
return 0;
case 0x1689a:
return 0;
case 0x1689b:
return 0;
case 0x1689c:
return 0;
case 0x1689d:
return 0;
case 0x1689e:
return 0;
case 0x1689f:
return 0;
case 0x168a0:
return 0;
case 0x168a1:
return 0;
case 0x168a2:
return 0;
case 0x168a3:
return 0;
case 0x168a4:
return 0;
case 0x168a5:
return 0;
case 0x168a6:
return 0;
case 0x168a7:
return 0;
case 0x168a8:
return 0;
case 0x168a9:
return 0;
case 0x168aa:
return 0;
case 0x168ab:
return 0;
case 0x168ac:
return 0;
case 0x168ad:
return 0;
case 0x168ae:
return 0;
case 0x168af:
return 0;
case 0x168b0:
return 0;
case 0x168b1:
return 0;
case 0x168b2:
return 0;
case 0x168b3:
return 0;
case 0x168b4:
return 0;
case 0x168b5:
return 0;
case 0x168b6:
return 0;
case 0x168b7:
return 0;
case 0x168b8:
return 0;
case 0x168b9:
return 0;
case 0x168ba:
return 0;
case 0x168bb:
return 0;
case 0x168bc:
return 0;
case 0x168bd:
return 0;
case 0x168be:
return 0;
case 0x168bf:
return 0;
case 0x168c0:
return 0;
case 0x168c1:
return 0;
case 0x168c2:
return 0;
case 0x168c3:
return 0;
case 0x168c4:
return 0;
case 0x168c5:
return 0;
case 0x168c6:
return 0;
case 0x168c7:
return 0;
case 0x168c8:
return 0;
case 0x168c9:
return 0;
case 0x168ca:
return 0;
case 0x168cb:
return 0;
case 0x168cc:
return 0;
case 0x168cd:
return 0;
case 0x168ce:
return 0;
case 0x168cf:
return 0;
case 0x168d0:
return 0;
case 0x168d1:
return 0;
case 0x168d2:
return 0;
case 0x168d3:
return 0;
case 0x168d4:
return 0;
case 0x168d5:
return 0;
case 0x168d6:
return 0;
case 0x168d7:
return 0;
case 0x168d8:
return 0;
case 0x168d9:
return 0;
case 0x168da:
return 0;
case 0x168db:
return 0;
case 0x168dc:
return 0;
case 0x168dd:
return 0;
case 0x168de:
return 0;
case 0x168df:
return 0;
case 0x168e0:
return 0;
case 0x168e1:
return 0;
case 0x168e2:
return 0;
case 0x168e3:
return 0;
case 0x168e4:
return 0;
case 0x168e5:
return 0;
case 0x168e6:
return 0;
case 0x168e7:
return 0;
case 0x168e8:
return 0;
case 0x168e9:
return 0;
case 0x168ea:
return 0;
case 0x168eb:
return 0;
case 0x168ec:
return 0;
case 0x168ed:
return 0;
case 0x168ee:
return 0;
case 0x168ef:
return 0;
case 0x168f0:
return 0;
case 0x168f1:
return 0;
case 0x168f2:
return 0;
case 0x168f3:
return 0;
case 0x168f4:
return 0;
case 0x168f5:
return 0;
case 0x168f6:
return 0;
case 0x168f7:
return 0;
case 0x168f8:
return 0;
case 0x168f9:
return 0;
case 0x168fa:
return 0;
case 0x168fb:
return 0;
case 0x168fc:
return 0;
case 0x168fd:
return 0;
case 0x168fe:
return 0;
case 0x168ff:
return 0;
case 0x16900:
return 0;
case 0x16901:
return 0;
case 0x16902:
return 0;
case 0x16903:
return 0;
case 0x16904:
return 0;
case 0x16905:
return 0;
case 0x16906:
return 0;
case 0x16907:
return 0;
case 0x16908:
return 0;
case 0x16909:
return 0;
case 0x1690a:
return 0;
case 0x1690b:
return 0;
case 0x1690c:
return 0;
case 0x1690d:
return 0;
case 0x1690e:
return 0;
case 0x1690f:
return 0;
case 0x16910:
return 0;
case 0x16911:
return 0;
case 0x16912:
return 0;
case 0x16913:
return 0;
case 0x16914:
return 0;
case 0x16915:
return 0;
case 0x16916:
return 0;
case 0x16917:
return 0;
case 0x16918:
return 0;
case 0x16919:
return 0;
case 0x1691a:
return 0;
case 0x1691b:
return 0;
case 0x1691c:
return 0;
case 0x1691d:
return 0;
case 0x1691e:
return 0;
case 0x1691f:
return 0;
case 0x16920:
return 0;
case 0x16921:
return 0;
case 0x16922:
return 0;
case 0x16923:
return 0;
case 0x16924:
return 0;
case 0x16925:
return 0;
case 0x16926:
return 0;
case 0x16927:
return 0;
case 0x16928:
return 0;
case 0x16929:
return 0;
case 0x1692a:
return 0;
case 0x1692b:
return 0;
case 0x1692c:
return 0;
case 0x1692d:
return 0;
case 0x1692e:
return 0;
case 0x1692f:
return 0;
case 0x16930:
return 0;
case 0x16931:
return 0;
case 0x16932:
return 0;
case 0x16933:
return 0;
case 0x16934:
return 0;
case 0x16935:
return 0;
case 0x16936:
return 0;
case 0x16937:
return 0;
case 0x16938:
return 0;
case 0x16939:
return 0;
case 0x1693a:
return 0;
case 0x1693b:
return 0;
case 0x1693c:
return 0;
case 0x1693d:
return 0;
case 0x1693e:
return 0;
case 0x1693f:
return 0;
case 0x16940:
return 0;
case 0x16941:
return 0;
case 0x16942:
return 0;
case 0x16943:
return 0;
case 0x16944:
return 0;
case 0x16945:
return 0;
case 0x16946:
return 0;
case 0x16947:
return 0;
case 0x16948:
return 0;
case 0x16949:
return 0;
case 0x1694a:
return 0;
case 0x1694b:
return 0;
case 0x1694c:
return 0;
case 0x1694d:
return 0;
case 0x1694e:
return 0;
case 0x1694f:
return 0;
case 0x16950:
return 0;
case 0x16951:
return 0;
case 0x16952:
return 0;
case 0x16953:
return 0;
case 0x16954:
return 0;
case 0x16955:
return 0;
case 0x16956:
return 0;
case 0x16957:
return 0;
case 0x16958:
return 0;
case 0x16959:
return 0;
case 0x1695a:
return 0;
case 0x1695b:
return 0;
case 0x1695c:
return 0;
case 0x1695d:
return 0;
case 0x1695e:
return 0;
case 0x1695f:
return 0;
case 0x16960:
return 0;
case 0x16961:
return 0;
case 0x16962:
return 0;
case 0x16963:
return 0;
case 0x16964:
return 0;
case 0x16965:
return 0;
case 0x16966:
return 0;
case 0x16967:
return 0;
case 0x16968:
return 0;
case 0x16969:
return 0;
case 0x1696a:
return 0;
case 0x1696b:
return 0;
case 0x1696c:
return 0;
case 0x1696d:
return 0;
case 0x1696e:
return 0;
case 0x1696f:
return 0;
case 0x16970:
return 0;
case 0x16971:
return 0;
case 0x16972:
return 0;
case 0x16973:
return 0;
case 0x16974:
return 0;
case 0x16975:
return 0;
case 0x16976:
return 0;
case 0x16977:
return 0;
case 0x16978:
return 0;
case 0x16979:
return 0;
case 0x1697a:
return 0;
case 0x1697b:
return 0;
case 0x1697c:
return 0;
case 0x1697d:
return 0;
case 0x1697e:
return 0;
case 0x1697f:
return 0;
case 0x16980:
return 0;
case 0x16981:
return 0;
case 0x16982:
return 0;
case 0x16983:
return 0;
case 0x16984:
return 0;
case 0x16985:
return 0;
case 0x16986:
return 0;
case 0x16987:
return 0;
case 0x16988:
return 0;
case 0x16989:
return 0;
case 0x1698a:
return 0;
case 0x1698b:
return 0;
case 0x1698c:
return 0;
case 0x1698d:
return 0;
case 0x1698e:
return 0;
case 0x1698f:
return 0;
case 0x16990:
return 0;
case 0x16991:
return 0;
case 0x16992:
return 0;
case 0x16993:
return 0;
case 0x16994:
return 0;
case 0x16995:
return 0;
case 0x16996:
return 0;
case 0x16997:
return 0;
case 0x16998:
return 0;
case 0x16999:
return 0;
case 0x1699a:
return 0;
case 0x1699b:
return 0;
case 0x1699c:
return 0;
case 0x1699d:
return 0;
case 0x1699e:
return 0;
case 0x1699f:
return 0;
case 0x169a0:
return 0;
case 0x169a1:
return 0;
case 0x169a2:
return 0;
case 0x169a3:
return 0;
case 0x169a4:
return 0;
case 0x169a5:
return 0;
case 0x169a6:
return 0;
case 0x169a7:
return 0;
case 0x169a8:
return 0;
case 0x169a9:
return 0;
case 0x169aa:
return 0;
case 0x169ab:
return 0;
case 0x169ac:
return 0;
case 0x169ad:
return 0;
case 0x169ae:
return 0;
case 0x169af:
return 0;
case 0x169b0:
return 0;
case 0x169b1:
return 0;
case 0x169b2:
return 0;
case 0x169b3:
return 0;
case 0x169b4:
return 0;
case 0x169b5:
return 0;
case 0x169b6:
return 0;
case 0x169b7:
return 0;
case 0x169b8:
return 0;
case 0x169b9:
return 0;
case 0x169ba:
return 0;
case 0x169bb:
return 0;
case 0x169bc:
return 0;
case 0x169bd:
return 0;
case 0x169be:
return 0;
case 0x169bf:
return 0;
case 0x169c0:
return 0;
case 0x169c1:
return 0;
case 0x169c2:
return 0;
case 0x169c3:
return 0;
case 0x169c4:
return 0;
case 0x169c5:
return 0;
case 0x169c6:
return 0;
case 0x169c7:
return 0;
case 0x169c8:
return 0;
case 0x169c9:
return 0;
case 0x169ca:
return 0;
case 0x169cb:
return 0;
case 0x169cc:
return 0;
case 0x169cd:
return 0;
case 0x169ce:
return 0;
case 0x169cf:
return 0;
case 0x169d0:
return 0;
case 0x169d1:
return 0;
case 0x169d2:
return 0;
case 0x169d3:
return 0;
case 0x169d4:
return 0;
case 0x169d5:
return 0;
case 0x169d6:
return 0;
case 0x169d7:
return 0;
case 0x169d8:
return 0;
case 0x169d9:
return 0;
case 0x169da:
return 0;
case 0x169db:
return 0;
case 0x169dc:
return 0;
case 0x169dd:
return 0;
case 0x169de:
return 0;
case 0x169df:
return 0;
case 0x169e0:
return 0;
case 0x169e1:
return 0;
case 0x169e2:
return 0;
case 0x169e3:
return 0;
case 0x169e4:
return 0;
case 0x169e5:
return 0;
case 0x169e6:
return 0;
case 0x169e7:
return 0;
case 0x169e8:
return 0;
case 0x169e9:
return 0;
case 0x169ea:
return 0;
case 0x169eb:
return 0;
case 0x169ec:
return 0;
case 0x169ed:
return 0;
case 0x169ee:
return 0;
case 0x169ef:
return 0;
case 0x169f0:
return 0;
case 0x169f1:
return 0;
case 0x169f2:
return 0;
case 0x169f3:
return 0;
case 0x169f4:
return 0;
case 0x169f5:
return 0;
case 0x169f6:
return 0;
case 0x169f7:
return 0;
case 0x169f8:
return 0;
case 0x169f9:
return 0;
case 0x169fa:
return 0;
case 0x169fb:
return 0;
case 0x169fc:
return 0;
case 0x169fd:
return 0;
case 0x169fe:
return 0;
case 0x169ff:
return 0;
case 0x16a00:
return 0;
case 0x16a01:
return 0;
case 0x16a02:
return 0;
case 0x16a03:
return 0;
case 0x16a04:
return 0;
case 0x16a05:
return 0;
case 0x16a06:
return 0;
case 0x16a07:
return 0;
case 0x16a08:
return 0;
case 0x16a09:
return 0;
case 0x16a0a:
return 0;
case 0x16a0b:
return 0;
case 0x16a0c:
return 0;
case 0x16a0d:
return 0;
case 0x16a0e:
return 0;
case 0x16a0f:
return 0;
case 0x16a10:
return 0;
case 0x16a11:
return 0;
case 0x16a12:
return 0;
case 0x16a13:
return 0;
case 0x16a14:
return 0;
case 0x16a15:
return 0;
case 0x16a16:
return 0;
case 0x16a17:
return 0;
case 0x16a18:
return 0;
case 0x16a19:
return 0;
case 0x16a1a:
return 0;
case 0x16a1b:
return 0;
case 0x16a1c:
return 0;
case 0x16a1d:
return 0;
case 0x16a1e:
return 0;
case 0x16a1f:
return 0;
case 0x16a20:
return 0;
case 0x16a21:
return 0;
case 0x16a22:
return 0;
case 0x16a23:
return 0;
case 0x16a24:
return 0;
case 0x16a25:
return 0;
case 0x16a26:
return 0;
case 0x16a27:
return 0;
case 0x16a28:
return 0;
case 0x16a29:
return 0;
case 0x16a2a:
return 0;
case 0x16a2b:
return 0;
case 0x16a2c:
return 0;
case 0x16a2d:
return 0;
case 0x16a2e:
return 0;
case 0x16a2f:
return 0;
case 0x16a30:
return 0;
case 0x16a31:
return 0;
case 0x16a32:
return 0;
case 0x16a33:
return 0;
case 0x16a34:
return 0;
case 0x16a35:
return 0;
case 0x16a36:
return 0;
case 0x16a37:
return 0;
case 0x16a38:
return 0;
case 0x16a40:
return 0;
case 0x16a41:
return 0;
case 0x16a42:
return 0;
case 0x16a43:
return 0;
case 0x16a44:
return 0;
case 0x16a45:
return 0;
case 0x16a46:
return 0;
case 0x16a47:
return 0;
case 0x16a48:
return 0;
case 0x16a49:
return 0;
case 0x16a4a:
return 0;
case 0x16a4b:
return 0;
case 0x16a4c:
return 0;
case 0x16a4d:
return 0;
case 0x16a4e:
return 0;
case 0x16a4f:
return 0;
case 0x16a50:
return 0;
case 0x16a51:
return 0;
case 0x16a52:
return 0;
case 0x16a53:
return 0;
case 0x16a54:
return 0;
case 0x16a55:
return 0;
case 0x16a56:
return 0;
case 0x16a57:
return 0;
case 0x16a58:
return 0;
case 0x16a59:
return 0;
case 0x16a5a:
return 0;
case 0x16a5b:
return 0;
case 0x16a5c:
return 0;
case 0x16a5d:
return 0;
case 0x16a5e:
return 0;
case 0x16ad0:
return 0;
case 0x16ad1:
return 0;
case 0x16ad2:
return 0;
case 0x16ad3:
return 0;
case 0x16ad4:
return 0;
case 0x16ad5:
return 0;
case 0x16ad6:
return 0;
case 0x16ad7:
return 0;
case 0x16ad8:
return 0;
case 0x16ad9:
return 0;
case 0x16ada:
return 0;
case 0x16adb:
return 0;
case 0x16adc:
return 0;
case 0x16add:
return 0;
case 0x16ade:
return 0;
case 0x16adf:
return 0;
case 0x16ae0:
return 0;
case 0x16ae1:
return 0;
case 0x16ae2:
return 0;
case 0x16ae3:
return 0;
case 0x16ae4:
return 0;
case 0x16ae5:
return 0;
case 0x16ae6:
return 0;
case 0x16ae7:
return 0;
case 0x16ae8:
return 0;
case 0x16ae9:
return 0;
case 0x16aea:
return 0;
case 0x16aeb:
return 0;
case 0x16aec:
return 0;
case 0x16aed:
return 0;
case 0x16b00:
return 0;
case 0x16b01:
return 0;
case 0x16b02:
return 0;
case 0x16b03:
return 0;
case 0x16b04:
return 0;
case 0x16b05:
return 0;
case 0x16b06:
return 0;
case 0x16b07:
return 0;
case 0x16b08:
return 0;
case 0x16b09:
return 0;
case 0x16b0a:
return 0;
case 0x16b0b:
return 0;
case 0x16b0c:
return 0;
case 0x16b0d:
return 0;
case 0x16b0e:
return 0;
case 0x16b0f:
return 0;
case 0x16b10:
return 0;
case 0x16b11:
return 0;
case 0x16b12:
return 0;
case 0x16b13:
return 0;
case 0x16b14:
return 0;
case 0x16b15:
return 0;
case 0x16b16:
return 0;
case 0x16b17:
return 0;
case 0x16b18:
return 0;
case 0x16b19:
return 0;
case 0x16b1a:
return 0;
case 0x16b1b:
return 0;
case 0x16b1c:
return 0;
case 0x16b1d:
return 0;
case 0x16b1e:
return 0;
case 0x16b1f:
return 0;
case 0x16b20:
return 0;
case 0x16b21:
return 0;
case 0x16b22:
return 0;
case 0x16b23:
return 0;
case 0x16b24:
return 0;
case 0x16b25:
return 0;
case 0x16b26:
return 0;
case 0x16b27:
return 0;
case 0x16b28:
return 0;
case 0x16b29:
return 0;
case 0x16b2a:
return 0;
case 0x16b2b:
return 0;
case 0x16b2c:
return 0;
case 0x16b2d:
return 0;
case 0x16b2e:
return 0;
case 0x16b2f:
return 0;
case 0x16b40:
return 0;
case 0x16b41:
return 0;
case 0x16b63:
return 0;
case 0x16b64:
return 0;
case 0x16b65:
return 0;
case 0x16b66:
return 0;
case 0x16b67:
return 0;
case 0x16b68:
return 0;
case 0x16b69:
return 0;
case 0x16b6a:
return 0;
case 0x16b6b:
return 0;
case 0x16b6c:
return 0;
case 0x16b6d:
return 0;
case 0x16b6e:
return 0;
case 0x16b6f:
return 0;
case 0x16b70:
return 0;
case 0x16b71:
return 0;
case 0x16b72:
return 0;
case 0x16b73:
return 0;
case 0x16b74:
return 0;
case 0x16b75:
return 0;
case 0x16b76:
return 0;
case 0x16b77:
return 0;
case 0x16b7d:
return 0;
case 0x16b7e:
return 0;
case 0x16b7f:
return 0;
case 0x16b80:
return 0;
case 0x16b81:
return 0;
case 0x16b82:
return 0;
case 0x16b83:
return 0;
case 0x16b84:
return 0;
case 0x16b85:
return 0;
case 0x16b86:
return 0;
case 0x16b87:
return 0;
case 0x16b88:
return 0;
case 0x16b89:
return 0;
case 0x16b8a:
return 0;
case 0x16b8b:
return 0;
case 0x16b8c:
return 0;
case 0x16b8d:
return 0;
case 0x16b8e:
return 0;
case 0x16b8f:
return 0;
case 0x16f00:
return 0;
case 0x16f01:
return 0;
case 0x16f02:
return 0;
case 0x16f03:
return 0;
case 0x16f04:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x16f06:
return 1;
}
}
return 0;
case 0x16f05:
return 0;
case 0x16f07:
return 0;
case 0x16f08:
return 0;
case 0x16f09:
return 0;
case 0x16f0a:
return 0;
case 0x16f0b:
return 0;
case 0x16f0c:
return 0;
case 0x16f0d:
return 0;
case 0x16f0e:
return 0;
case 0x16f0f:
return 0;
case 0x16f10:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x16f13:
return 1;
}
}
return 0;
case 0x16f11:
return 0;
case 0x16f12:
return 0;
case 0x16f14:
return 0;
case 0x16f15:
return 0;
case 0x16f16:
return 0;
case 0x16f17:
return 0;
case 0x16f18:
return 0;
case 0x16f19:
return 0;
case 0x16f1a:
return 0;
case 0x16f1b:
return 0;
case 0x16f1c:
return 0;
case 0x16f1d:
return 0;
case 0x16f1e:
return 0;
case 0x16f1f:
return 0;
case 0x16f20:
return 0;
case 0x16f21:
return 0;
case 0x16f22:
return 0;
case 0x16f23:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x16f25:
return 1;
}
}
return 0;
case 0x16f24:
return 0;
case 0x16f26:
return 0;
case 0x16f27:
return 0;
case 0x16f28:
return 0;
case 0x16f29:
return 0;
case 0x16f2a:
return 0;
case 0x16f2b:
return 0;
case 0x16f2c:
return 0;
case 0x16f2d:
return 0;
case 0x16f2e:
return 0;
case 0x16f2f:
return 0;
case 0x16f30:
return 0;
case 0x16f31:
return 0;
case 0x16f32:
return 0;
case 0x16f33:
return 0;
case 0x16f34:
return 0;
case 0x16f35:
return 0;
case 0x16f36:
return 0;
case 0x16f37:
return 0;
case 0x16f38:
return 0;
case 0x16f39:
return 0;
case 0x16f3a:
return 0;
case 0x16f3b:
return 0;
case 0x16f3c:
return 0;
case 0x16f3d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x16f3f:
return 1;
}
}
return 0;
case 0x16f3e:
return 0;
case 0x16f40:
return 0;
case 0x16f41:
return 0;
case 0x16f42:
return 0;
case 0x16f43:
return 0;
case 0x16f44:
return 0;
case 0x16f50:
return 0;
case 0x16f51:
return 0;
case 0x16f52:
return 0;
case 0x16f53:
return 0;
case 0x16f54:
return 0;
case 0x16f55:
return 0;
case 0x16f56:
return 0;
case 0x16f57:
return 0;
case 0x16f58:
return 0;
case 0x16f59:
return 0;
case 0x16f5a:
return 0;
case 0x16f5b:
return 0;
case 0x16f5c:
return 0;
case 0x16f5d:
return 0;
case 0x16f5e:
return 0;
case 0x16f5f:
return 0;
case 0x16f60:
return 0;
case 0x16f61:
return 0;
case 0x16f62:
return 0;
case 0x16f63:
return 0;
case 0x16f64:
return 0;
case 0x16f65:
return 0;
case 0x16f66:
return 0;
case 0x16f67:
return 0;
case 0x16f68:
return 0;
case 0x16f69:
return 0;
case 0x16f6a:
return 0;
case 0x16f6b:
return 0;
case 0x16f6c:
return 0;
case 0x16f6d:
return 0;
case 0x16f6e:
return 0;
case 0x16f6f:
return 0;
case 0x16f70:
return 0;
case 0x16f71:
return 0;
case 0x16f72:
return 0;
case 0x16f73:
return 0;
case 0x16f74:
return 0;
case 0x16f75:
return 0;
case 0x16f76:
return 0;
case 0x16f77:
return 0;
case 0x16f78:
return 0;
case 0x16f79:
return 0;
case 0x16f7a:
return 0;
case 0x16f7b:
return 0;
case 0x16f7c:
return 0;
case 0x16f7d:
return 0;
case 0x16f7e:
return 0;
case 0x16f8f:
return 0;
case 0x16f90:
return 0;
case 0x16f91:
return 0;
case 0x16f92:
return 0;
case 0x16f93:
return 0;
case 0x16f94:
return 0;
case 0x16f95:
return 0;
case 0x16f96:
return 0;
case 0x16f97:
return 0;
case 0x16f98:
return 0;
case 0x16f99:
return 0;
case 0x16f9a:
return 0;
case 0x16f9b:
return 0;
case 0x16f9c:
return 0;
case 0x16f9d:
return 0;
case 0x16f9e:
return 0;
case 0x16f9f:
return 0;
case 0x17000:
return 0;
case 0x17001:
return 0;
case 0x17002:
return 0;
case 0x17003:
return 0;
case 0x18800:
return 0;
case 0x18801:
return 0;
case 0x18802:
return 0;
case 0x18803:
return 0;
case 0x18af2:
return 0;
case 0x1b000:
return 0;
case 0x1b001:
return 0;
case 0x1bc00:
return 0;
case 0x1bc01:
return 0;
case 0x1bc02:
return 0;
case 0x1bc03:
return 0;
case 0x1bc04:
return 0;
case 0x1bc05:
return 0;
case 0x1bc06:
return 0;
case 0x1bc07:
return 0;
case 0x1bc08:
return 0;
case 0x1bc09:
return 0;
case 0x1bc0a:
return 0;
case 0x1bc0b:
return 0;
case 0x1bc0c:
return 0;
case 0x1bc0d:
return 0;
case 0x1bc0e:
return 0;
case 0x1bc0f:
return 0;
case 0x1bc10:
return 0;
case 0x1bc11:
return 0;
case 0x1bc12:
return 0;
case 0x1bc13:
return 0;
case 0x1bc14:
return 0;
case 0x1bc15:
return 0;
case 0x1bc16:
return 0;
case 0x1bc17:
return 0;
case 0x1bc18:
return 0;
case 0x1bc19:
return 0;
case 0x1bc1a:
return 0;
case 0x1bc1b:
return 0;
case 0x1bc1c:
return 0;
case 0x1bc1d:
return 0;
case 0x1bc1e:
return 0;
case 0x1bc1f:
return 0;
case 0x1bc20:
return 0;
case 0x1bc21:
return 0;
case 0x1bc22:
return 0;
case 0x1bc23:
return 0;
case 0x1bc24:
return 0;
case 0x1bc25:
return 0;
case 0x1bc26:
return 0;
case 0x1bc27:
return 0;
case 0x1bc28:
return 0;
case 0x1bc29:
return 0;
case 0x1bc2a:
return 0;
case 0x1bc2b:
return 0;
case 0x1bc2c:
return 0;
case 0x1bc2d:
return 0;
case 0x1bc2e:
return 0;
case 0x1bc2f:
return 0;
case 0x1bc30:
return 0;
case 0x1bc31:
return 0;
case 0x1bc32:
return 0;
case 0x1bc33:
return 0;
case 0x1bc34:
return 0;
case 0x1bc35:
return 0;
case 0x1bc36:
return 0;
case 0x1bc37:
return 0;
case 0x1bc38:
return 0;
case 0x1bc39:
return 0;
case 0x1bc3a:
return 0;
case 0x1bc3b:
return 0;
case 0x1bc3c:
return 0;
case 0x1bc3d:
return 0;
case 0x1bc3e:
return 0;
case 0x1bc3f:
return 0;
case 0x1bc40:
return 0;
case 0x1bc41:
return 0;
case 0x1bc42:
return 0;
case 0x1bc43:
return 0;
case 0x1bc44:
return 0;
case 0x1bc45:
return 0;
case 0x1bc46:
return 0;
case 0x1bc47:
return 0;
case 0x1bc48:
return 0;
case 0x1bc49:
return 0;
case 0x1bc4a:
return 0;
case 0x1bc4b:
return 0;
case 0x1bc4c:
return 0;
case 0x1bc4d:
return 0;
case 0x1bc4e:
return 0;
case 0x1bc4f:
return 0;
case 0x1bc50:
return 0;
case 0x1bc51:
return 0;
case 0x1bc52:
return 0;
case 0x1bc53:
return 0;
case 0x1bc54:
return 0;
case 0x1bc55:
return 0;
case 0x1bc56:
return 0;
case 0x1bc57:
return 0;
case 0x1bc58:
return 0;
case 0x1bc59:
return 0;
case 0x1bc5a:
return 0;
case 0x1bc5b:
return 0;
case 0x1bc5c:
return 0;
case 0x1bc5d:
return 0;
case 0x1bc5e:
return 0;
case 0x1bc5f:
return 0;
case 0x1bc60:
return 0;
case 0x1bc61:
return 0;
case 0x1bc62:
return 0;
case 0x1bc63:
return 0;
case 0x1bc64:
return 0;
case 0x1bc65:
return 0;
case 0x1bc66:
return 0;
case 0x1bc67:
return 0;
case 0x1bc68:
return 0;
case 0x1bc69:
return 0;
case 0x1bc6a:
return 0;
case 0x1bc70:
return 0;
case 0x1bc71:
return 0;
case 0x1bc72:
return 0;
case 0x1bc73:
return 0;
case 0x1bc74:
return 0;
case 0x1bc75:
return 0;
case 0x1bc76:
return 0;
case 0x1bc77:
return 0;
case 0x1bc78:
return 0;
case 0x1bc79:
return 0;
case 0x1bc7a:
return 0;
case 0x1bc7b:
return 0;
case 0x1bc7c:
return 0;
case 0x1bc80:
return 0;
case 0x1bc81:
return 0;
case 0x1bc82:
return 0;
case 0x1bc83:
return 0;
case 0x1bc84:
return 0;
case 0x1bc85:
return 0;
case 0x1bc86:
return 0;
case 0x1bc87:
return 0;
case 0x1bc88:
return 0;
case 0x1bc90:
return 0;
case 0x1bc91:
return 0;
case 0x1bc92:
return 0;
case 0x1bc93:
return 0;
case 0x1bc94:
return 0;
case 0x1bc95:
return 0;
case 0x1bc96:
return 0;
case 0x1bc97:
return 0;
case 0x1bc98:
return 0;
case 0x1bc99:
return 0;
case 0x1e800:
return 0;
case 0x1e801:
return 0;
case 0x1e802:
return 0;
case 0x1e803:
return 0;
case 0x1e804:
return 0;
case 0x1e805:
return 0;
case 0x1e806:
return 0;
case 0x1e807:
return 0;
case 0x1e808:
return 0;
case 0x1e809:
return 0;
case 0x1e80a:
return 0;
case 0x1e80b:
return 0;
case 0x1e80c:
return 0;
case 0x1e80d:
return 0;
case 0x1e80e:
return 0;
case 0x1e80f:
return 0;
case 0x1e810:
return 0;
case 0x1e811:
return 0;
case 0x1e812:
return 0;
case 0x1e813:
return 0;
case 0x1e814:
return 0;
case 0x1e815:
return 0;
case 0x1e816:
return 0;
case 0x1e817:
return 0;
case 0x1e818:
return 0;
case 0x1e819:
return 0;
case 0x1e81a:
return 0;
case 0x1e81b:
return 0;
case 0x1e81c:
return 0;
case 0x1e81d:
return 0;
case 0x1e81e:
return 0;
case 0x1e81f:
return 0;
case 0x1e820:
return 0;
case 0x1e821:
return 0;
case 0x1e822:
return 0;
case 0x1e823:
return 0;
case 0x1e824:
return 0;
case 0x1e825:
return 0;
case 0x1e826:
return 0;
case 0x1e827:
return 0;
case 0x1e828:
return 0;
case 0x1e829:
return 0;
case 0x1e82a:
return 0;
case 0x1e82b:
return 0;
case 0x1e82c:
return 0;
case 0x1e82d:
return 0;
case 0x1e82e:
return 0;
case 0x1e82f:
return 0;
case 0x1e830:
return 0;
case 0x1e831:
return 0;
case 0x1e832:
return 0;
case 0x1e833:
return 0;
case 0x1e834:
return 0;
case 0x1e835:
return 0;
case 0x1e836:
return 0;
case 0x1e837:
return 0;
case 0x1e838:
return 0;
case 0x1e839:
return 0;
case 0x1e83a:
return 0;
case 0x1e83b:
return 0;
case 0x1e83c:
return 0;
case 0x1e83d:
return 0;
case 0x1e83e:
return 0;
case 0x1e83f:
return 0;
case 0x1e840:
return 0;
case 0x1e841:
return 0;
case 0x1e842:
return 0;
case 0x1e843:
return 0;
case 0x1e844:
return 0;
case 0x1e845:
return 0;
case 0x1e846:
return 0;
case 0x1e847:
return 0;
case 0x1e848:
return 0;
case 0x1e849:
return 0;
case 0x1e84a:
return 0;
case 0x1e84b:
return 0;
case 0x1e84c:
return 0;
case 0x1e84d:
return 0;
case 0x1e84e:
return 0;
case 0x1e84f:
return 0;
case 0x1e850:
return 0;
case 0x1e851:
return 0;
case 0x1e852:
return 0;
case 0x1e853:
return 0;
case 0x1e854:
return 0;
case 0x1e855:
return 0;
case 0x1e856:
return 0;
case 0x1e857:
return 0;
case 0x1e858:
return 0;
case 0x1e859:
return 0;
case 0x1e85a:
return 0;
case 0x1e85b:
return 0;
case 0x1e85c:
return 0;
case 0x1e85d:
return 0;
case 0x1e85e:
return 0;
case 0x1e85f:
return 0;
case 0x1e860:
return 0;
case 0x1e861:
return 0;
case 0x1e862:
return 0;
case 0x1e863:
return 0;
case 0x1e864:
return 0;
case 0x1e865:
return 0;
case 0x1e866:
return 0;
case 0x1e867:
return 0;
case 0x1e868:
return 0;
case 0x1e869:
return 0;
case 0x1e86a:
return 0;
case 0x1e86b:
return 0;
case 0x1e86c:
return 0;
case 0x1e86d:
return 0;
case 0x1e86e:
return 0;
case 0x1e86f:
return 0;
case 0x1e870:
return 0;
case 0x1e871:
return 0;
case 0x1e872:
return 0;
case 0x1e873:
return 0;
case 0x1e874:
return 0;
case 0x1e875:
return 0;
case 0x1e876:
return 0;
case 0x1e877:
return 0;
case 0x1e878:
return 0;
case 0x1e879:
return 0;
case 0x1e87a:
return 0;
case 0x1e87b:
return 0;
case 0x1e87c:
return 0;
case 0x1e87d:
return 0;
case 0x1e87e:
return 0;
case 0x1e87f:
return 0;
case 0x1e880:
return 0;
case 0x1e881:
return 0;
case 0x1e882:
return 0;
case 0x1e883:
return 0;
case 0x1e884:
return 0;
case 0x1e885:
return 0;
case 0x1e886:
return 0;
case 0x1e887:
return 0;
case 0x1e888:
return 0;
case 0x1e889:
return 0;
case 0x1e88a:
return 0;
case 0x1e88b:
return 0;
case 0x1e88c:
return 0;
case 0x1e88d:
return 0;
case 0x1e88e:
return 0;
case 0x1e88f:
return 0;
case 0x1e890:
return 0;
case 0x1e891:
return 0;
case 0x1e892:
return 0;
case 0x1e893:
return 0;
case 0x1e894:
return 0;
case 0x1e895:
return 0;
case 0x1e896:
return 0;
case 0x1e897:
return 0;
case 0x1e898:
return 0;
case 0x1e899:
return 0;
case 0x1e89a:
return 0;
case 0x1e89b:
return 0;
case 0x1e89c:
return 0;
case 0x1e89d:
return 0;
case 0x1e89e:
return 0;
case 0x1e89f:
return 0;
case 0x1e8a0:
return 0;
case 0x1e8a1:
return 0;
case 0x1e8a2:
return 0;
case 0x1e8a3:
return 0;
case 0x1e8a4:
return 0;
case 0x1e8a5:
return 0;
case 0x1e8a6:
return 0;
case 0x1e8a7:
return 0;
case 0x1e8a8:
return 0;
case 0x1e8a9:
return 0;
case 0x1e8aa:
return 0;
case 0x1e8ab:
return 0;
case 0x1e8ac:
return 0;
case 0x1e8ad:
return 0;
case 0x1e8ae:
return 0;
case 0x1e8af:
return 0;
case 0x1e8b0:
return 0;
case 0x1e8b1:
return 0;
case 0x1e8b2:
return 0;
case 0x1e8b3:
return 0;
case 0x1e8b4:
return 0;
case 0x1e8b5:
return 0;
case 0x1e8b6:
return 0;
case 0x1e8b7:
return 0;
case 0x1e8b8:
return 0;
case 0x1e8b9:
return 0;
case 0x1e8ba:
return 0;
case 0x1e8bb:
return 0;
case 0x1e8bc:
return 0;
case 0x1e8bd:
return 0;
case 0x1e8be:
return 0;
case 0x1e8bf:
return 0;
case 0x1e8c0:
return 0;
case 0x1e8c1:
return 0;
case 0x1e8c2:
return 0;
case 0x1e8c3:
return 0;
case 0x1e8c4:
return 0;
case 0x1e922:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e900:
return 1;
}
}
return 0;
case 0x1e923:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e901:
return 1;
}
}
return 0;
case 0x1e924:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e902:
return 1;
}
}
return 0;
case 0x1e925:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e903:
return 1;
}
}
return 0;
case 0x1e926:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e904:
return 1;
}
}
return 0;
case 0x1e927:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e905:
return 1;
}
}
return 0;
case 0x1e928:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e906:
return 1;
}
}
return 0;
case 0x1e929:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e907:
return 1;
}
}
return 0;
case 0x1e92a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e908:
return 1;
}
}
return 0;
case 0x1e92b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e909:
return 1;
}
}
return 0;
case 0x1e92c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e90a:
return 1;
}
}
return 0;
case 0x1e92d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e90b:
return 1;
}
}
return 0;
case 0x1e92e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e90c:
return 1;
}
}
return 0;
case 0x1e92f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e90d:
return 1;
}
}
return 0;
case 0x1e930:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e90e:
return 1;
}
}
return 0;
case 0x1e931:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e90f:
return 1;
}
}
return 0;
case 0x1e932:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e910:
return 1;
}
}
return 0;
case 0x1e933:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e911:
return 1;
}
}
return 0;
case 0x1e934:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e912:
return 1;
}
}
return 0;
case 0x1e935:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e913:
return 1;
}
}
return 0;
case 0x1e936:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e914:
return 1;
}
}
return 0;
case 0x1e937:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e915:
return 1;
}
}
return 0;
case 0x1e938:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e916:
return 1;
}
}
return 0;
case 0x1e939:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e917:
return 1;
}
}
return 0;
case 0x1e93a:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e918:
return 1;
}
}
return 0;
case 0x1e93b:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e919:
return 1;
}
}
return 0;
case 0x1e93c:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e91a:
return 1;
}
}
return 0;
case 0x1e93d:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e91b:
return 1;
}
}
return 0;
case 0x1e93e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e91c:
return 1;
}
}
return 0;
case 0x1e93f:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e91d:
return 1;
}
}
return 0;
case 0x1e940:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e91e:
return 1;
}
}
return 0;
case 0x1e941:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e91f:
return 1;
}
}
return 0;
case 0x1e942:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e920:
return 1;
}
}
return 0;
case 0x1e943:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x1e921:
return 1;
}
}
return 0;
}
}
if (2 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0x438:
switch (get_unicos(indexa + 1, unia)){
case 0x306:
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x418:
switch (get_unicos(indexb + 1, unib)){
case 0x306:
return 1;
default: return 0;
}
}
}
return 0;
default: return 0;
}
case 0x9c7:
switch (get_unicos(indexa + 1, unia)){
case 0x9be:
return 0;
case 0x9d7:
return 0;
default: return 0;
}
case 0xb47:
switch (get_unicos(indexa + 1, unia)){
case 0xb3e:
return 0;
case 0xb56:
return 0;
case 0xb57:
return 0;
default: return 0;
}
case 0xb92:
switch (get_unicos(indexa + 1, unia)){
case 0xbd7:
return 0;
default: return 0;
}
case 0xbc6:
switch (get_unicos(indexa + 1, unia)){
case 0xbbe:
return 0;
case 0xbd7:
return 0;
default: return 0;
}
case 0xbc7:
switch (get_unicos(indexa + 1, unia)){
case 0xbbe:
return 0;
default: return 0;
}
case 0xc46:
switch (get_unicos(indexa + 1, unia)){
case 0xc56:
return 0;
default: return 0;
}
case 0xcbf:
switch (get_unicos(indexa + 1, unia)){
case 0xcd5:
return 0;
default: return 0;
}
case 0xcc6:
switch (get_unicos(indexa + 1, unia)){
case 0xcc2:
return 0;
case 0xcd5:
return 0;
case 0xcd6:
return 0;
default: return 0;
}
case 0xd46:
switch (get_unicos(indexa + 1, unia)){
case 0xd3e:
return 0;
case 0xd57:
return 0;
default: return 0;
}
case 0xd47:
switch (get_unicos(indexa + 1, unia)){
case 0xd3e:
return 0;
default: return 0;
}
case 0xdd9:
switch (get_unicos(indexa + 1, unia)){
case 0xdca:
return 0;
case 0xdcf:
return 0;
case 0xddf:
return 0;
default: return 0;
}
case 0xf71:
switch (get_unicos(indexa + 1, unia)){
case 0xf72:
return 0;
case 0xf74:
return 0;
case 0xf80:
return 0;
default: return 0;
}
case 0x1025:
switch (get_unicos(indexa + 1, unia)){
case 0x102e:
return 0;
default: return 0;
}
case 0x1b05:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b07:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b09:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b0b:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b0d:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b11:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b3a:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b3c:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b3e:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b3f:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x1b42:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
return 0;
default: return 0;
}
case 0x11347:
switch (get_unicos(indexa + 1, unia)){
case 0x1133e:
return 0;
case 0x11357:
return 0;
default: return 0;
}
case 0x114b9:
switch (get_unicos(indexa + 1, unia)){
case 0x114b0:
return 0;
case 0x114ba:
return 0;
case 0x114bd:
return 0;
default: return 0;
}
case 0x115b8:
switch (get_unicos(indexa + 1, unia)){
case 0x115af:
return 0;
default: return 0;
}
case 0x115b9:
switch (get_unicos(indexa + 1, unia)){
case 0x115af:
return 0;
default: return 0;
}
}
}
if (3 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0xcc6:
switch (get_unicos(indexa + 1, unia)){
case 0xcc2:
switch (get_unicos(indexa + 2, unia)){
case 0xcd5:
return 0;
default: return 0;
}
default: return 0;
}
case 0xdd9:
switch (get_unicos(indexa + 1, unia)){
case 0xdcf:
switch (get_unicos(indexa + 2, unia)){
case 0xdca:
return 0;
default: return 0;
}
default: return 0;
}
}
}
return 0;
}
