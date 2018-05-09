#include <unico.h>
#include <stddef.h>
int is_tirhuta_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x114b9:
switch (get_unicos(index +0, uni)){
case 0x114b0:
return 1;
case 0x114ba:
return 1;
case 0x114bd:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
