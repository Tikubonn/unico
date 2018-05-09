#include <unico.h>
#include <stddef.h>
int is_grantha_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x11347:
switch (get_unicos(index +0, uni)){
case 0x1133e:
return 1;
case 0x11357:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
