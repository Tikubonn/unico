#include <unico.h>
#include <stddef.h>
int is_oriya_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xb47:
switch (get_unicos(index +0, uni)){
case 0xb3e:
return 1;
case 0xb56:
return 1;
case 0xb57:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
