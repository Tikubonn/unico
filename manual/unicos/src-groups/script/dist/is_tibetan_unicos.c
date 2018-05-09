#include <unico.h>
#include <stddef.h>
int is_tibetan_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xf71:
switch (get_unicos(index +0, uni)){
case 0xf72:
return 1;
case 0xf74:
return 1;
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
