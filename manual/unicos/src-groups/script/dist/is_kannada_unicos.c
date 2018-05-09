#include <unico.h>
#include <stddef.h>
int is_kannada_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xcbf:
switch (get_unicos(index +0, uni)){
case 0xcd5:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xcc6:
switch (get_unicos(index +0, uni)){
case 0xcc2:
return 1;
case 0xcd5:
return 1;
case 0xcd6:
return 1;
default: return 0;
}
default: return 0;
}
}
if (2 == end - index){
switch (get_unicos(index, uni)){
case 0xcc6:
switch (get_unicos(index +0, uni)){
case 0xcc2:
switch (get_unicos(index +1, uni)){
case 0xcd5:
return 1;
default: return 0;
}
default: return 0;
}
default: return 0;
}
}
return 0;
}
