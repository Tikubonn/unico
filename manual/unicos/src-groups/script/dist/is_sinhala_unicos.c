#include <unico.h>
#include <stddef.h>
int is_sinhala_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xdd9:
switch (get_unicos(index +0, uni)){
case 0xdca:
return 1;
case 0xdcf:
return 1;
case 0xddf:
return 1;
default: return 0;
}
default: return 0;
}
}
if (2 == end - index){
switch (get_unicos(index, uni)){
case 0xdd9:
switch (get_unicos(index +0, uni)){
case 0xdcf:
switch (get_unicos(index +1, uni)){
case 0xdca:
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
