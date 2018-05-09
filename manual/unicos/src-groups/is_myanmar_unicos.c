#include <unico.h>
#include <stddef.h>
int is_myanmar_unicos (size_t index, size_t end, unicos *uni){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1025:
switch (get_unicos(index +0, uni)){
case 0x102e:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
