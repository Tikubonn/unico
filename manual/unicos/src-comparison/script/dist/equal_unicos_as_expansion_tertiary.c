#include <unico.h>
#include <stddef.h>
int equal_unicos_as_expansion_tertiary (unicos *unia, size_t indexa, size_t enda, unicos *unib, size_t indexb, size_t endb){
if (1 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0x438:
switch (get_unicos(indexa + 1, unia)){
case 0x306:
default: return 0;
}
case 0x9c7:
switch (get_unicos(indexa + 1, unia)){
case 0x9be:
case 0x9d7:
default: return 0;
}
case 0xb47:
switch (get_unicos(indexa + 1, unia)){
case 0xb3e:
case 0xb56:
case 0xb57:
default: return 0;
}
case 0xb92:
switch (get_unicos(indexa + 1, unia)){
case 0xbd7:
default: return 0;
}
case 0xbc6:
switch (get_unicos(indexa + 1, unia)){
case 0xbbe:
case 0xbd7:
default: return 0;
}
case 0xbc7:
switch (get_unicos(indexa + 1, unia)){
case 0xbbe:
default: return 0;
}
case 0xc46:
switch (get_unicos(indexa + 1, unia)){
case 0xc56:
default: return 0;
}
case 0xcbf:
switch (get_unicos(indexa + 1, unia)){
case 0xcd5:
default: return 0;
}
case 0xcc6:
switch (get_unicos(indexa + 1, unia)){
case 0xcc2:
case 0xcd5:
case 0xcd6:
default: return 0;
}
case 0xd46:
switch (get_unicos(indexa + 1, unia)){
case 0xd3e:
case 0xd57:
default: return 0;
}
case 0xd47:
switch (get_unicos(indexa + 1, unia)){
case 0xd3e:
default: return 0;
}
case 0xdd9:
switch (get_unicos(indexa + 1, unia)){
case 0xdca:
case 0xdcf:
case 0xddf:
default: return 0;
}
case 0xf71:
switch (get_unicos(indexa + 1, unia)){
case 0xf72:
case 0xf74:
case 0xf80:
default: return 0;
}
case 0x1025:
switch (get_unicos(indexa + 1, unia)){
case 0x102e:
default: return 0;
}
case 0x1b05:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b07:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b09:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b0b:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b0d:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b11:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b3a:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b3c:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b3e:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b3f:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x1b42:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
default: return 0;
}
case 0x11347:
switch (get_unicos(indexa + 1, unia)){
case 0x1133e:
case 0x11357:
default: return 0;
}
case 0x114b9:
switch (get_unicos(indexa + 1, unia)){
case 0x114b0:
case 0x114ba:
case 0x114bd:
default: return 0;
}
case 0x115b8:
switch (get_unicos(indexa + 1, unia)){
case 0x115af:
default: return 0;
}
case 0x115b9:
switch (get_unicos(indexa + 1, unia)){
case 0x115af:
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0xcc6:
switch (get_unicos(indexa + 1, unia)){
case 0xcc2:
switch (get_unicos(indexa + 2, unia)){
case 0xcd5:
default: return 0;
}
default: return 0;
}
case 0xdd9:
switch (get_unicos(indexa + 1, unia)){
case 0xdcf:
switch (get_unicos(indexa + 2, unia)){
case 0xdca:
default: return 0;
}
default: return 0;
}
}
}
return 0;
}
