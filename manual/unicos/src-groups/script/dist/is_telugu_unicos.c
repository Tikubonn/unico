#include <unico.h>
#include <stddef.h>
int is_telugu_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xc46:
switch (get_unicos(index +0, uni)){
case 0xc56:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
