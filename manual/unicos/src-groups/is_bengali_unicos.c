#include <unico.h>
#include <stddef.h>
int is_bengali_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x9c7:
switch (get_unicos(index +0, uni)){
case 0x9be:
return 1;
case 0x9d7:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
