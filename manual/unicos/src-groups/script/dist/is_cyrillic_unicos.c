#include <unico.h>
#include <stddef.h>
int is_cyrillic_unicos (size_t index, size_t end, unicos *uni){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x438:
switch (get_unicos(index +0, uni)){
case 0x306:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
