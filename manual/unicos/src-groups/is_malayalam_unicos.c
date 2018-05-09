#include <unico.h>
#include <stddef.h>
int is_malayalam_unicos (unicos *uni, size_t index, size_t end){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xd46:
switch (get_unicos(index +0, uni)){
case 0xd3e:
return 1;
case 0xd57:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xd47:
switch (get_unicos(index +0, uni)){
case 0xd3e:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
