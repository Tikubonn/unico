#include <unico.h>
#include <stddef.h>
int is_siddham_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x115b8:
switch (get_unicos(index +0, uni)){
case 0x115af:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x115b9:
switch (get_unicos(index +0, uni)){
case 0x115af:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
