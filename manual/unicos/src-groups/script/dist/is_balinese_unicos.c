#include <unico.h>
#include <stddef.h>
int is_balinese_unicos (size_t index, size_t end, unicos *uni){
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b05:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b07:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b09:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b0b:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b0d:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b11:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b3a:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b3c:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b3e:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b3f:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
if (1 == end - index){
switch (get_unicos(index, uni)){
case 0x1b42:
switch (get_unicos(index +0, uni)){
case 0x1b35:
return 1;
default: return 0;
}
default: return 0;
}
}
return 0;
}
