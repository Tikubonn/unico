#include <unico.h>
#include <stddef.h>
int is_tamil_unicos (size_t index, size_t end, unicos *uni){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xb92:
switch (get_unicos(index +0, uni)){
case 0xbd7:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xbc6:
switch (get_unicos(index +0, uni)){
case 0xbbe:
return 1;
case 0xbd7:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0xbc7:
switch (get_unicos(index +0, uni)){
case 0xbbe:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
