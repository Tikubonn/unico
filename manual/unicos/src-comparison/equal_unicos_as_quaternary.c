#include <unico.h>
#include <stddef.h>
int equal_unicos_as_quaternary (unicos *unia, size_t indexa, size_t enda, unicos *unib, size_t indexb, size_t endb){
if (1 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0x438:
switch (get_unicos(indexa + 1, unia)){
case 0x306:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x9c7:
switch (get_unicos(indexa + 1, unia)){
case 0x9be:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0x9d7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xb47:
switch (get_unicos(indexa + 1, unia)){
case 0xb3e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xb56:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xb57:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xb92:
switch (get_unicos(indexa + 1, unia)){
case 0xbd7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xbc6:
switch (get_unicos(indexa + 1, unia)){
case 0xbbe:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xbd7:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xbc7:
switch (get_unicos(indexa + 1, unia)){
case 0xbbe:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xc46:
switch (get_unicos(indexa + 1, unia)){
case 0xc56:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xcbf:
switch (get_unicos(indexa + 1, unia)){
case 0xcd5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xcc6:
switch (get_unicos(indexa + 1, unia)){
case 0xcc2:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xcd5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xcd6:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xd46:
switch (get_unicos(indexa + 1, unia)){
case 0xd3e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xd57:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xd47:
switch (get_unicos(indexa + 1, unia)){
case 0xd3e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xdd9:
switch (get_unicos(indexa + 1, unia)){
case 0xdca:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xdcf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xddf:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0xf71:
switch (get_unicos(indexa + 1, unia)){
case 0xf72:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xf74:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0xf80:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1025:
switch (get_unicos(indexa + 1, unia)){
case 0x102e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b05:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b07:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b09:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b0b:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b0d:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b11:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b3a:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b3c:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b3e:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b3f:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x1b42:
switch (get_unicos(indexa + 1, unia)){
case 0x1b35:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x11347:
switch (get_unicos(indexa + 1, unia)){
case 0x1133e:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0x11357:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x114b9:
switch (get_unicos(indexa + 1, unia)){
case 0x114b0:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0x114ba:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
case 0x114bd:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x115b8:
switch (get_unicos(indexa + 1, unia)){
case 0x115af:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
case 0x115b9:
switch (get_unicos(indexa + 1, unia)){
case 0x115af:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexa, unia)){
case 0xcc6:
switch (get_unicos(indexa + 1, unia)){
case 0xcc2:
switch (get_unicos(indexa + 2, unia)){
case 0xcd5:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
default: return 0;
}
case 0xdd9:
switch (get_unicos(indexa + 1, unia)){
case 0xdcf:
switch (get_unicos(indexa + 2, unia)){
case 0xdca:
if (1 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0x4c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x6c:
switch (get_unicos(indexb + 1, unib)){
case 0x387:
return 1;
default: return 0;
}
case 0x627:
switch (get_unicos(indexb + 1, unib)){
case 0x653:
return 1;
case 0x654:
return 1;
case 0x655:
return 1;
default: return 0;
}
case 0x648:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0x64a:
switch (get_unicos(indexb + 1, unib)){
case 0x654:
return 1;
default: return 0;
}
case 0xcca:
switch (get_unicos(indexb + 1, unib)){
case 0xcd5:
return 1;
default: return 0;
}
case 0xddc:
switch (get_unicos(indexb + 1, unib)){
case 0xdca:
return 1;
default: return 0;
}
case 0xecd:
switch (get_unicos(indexb + 1, unib)){
case 0xeb2:
return 1;
default: return 0;
}
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf80:
return 1;
case 0xf81:
return 1;
default: return 0;
}
case 0x11131:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
case 0x11132:
switch (get_unicos(indexb + 1, unib)){
case 0x11127:
return 1;
default: return 0;
}
}
}
if (2 == enda - indexa){
switch (get_unicos(indexb, unib)){
case 0xfb2:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
case 0xfb3:
switch (get_unicos(indexb + 1, unib)){
case 0xf71:
switch (get_unicos(indexb + 2, unib)){
case 0xf80:
return 1;
default: return 0;
}
default: return 0;
}
}
}
default: return 0;
}
default: return 0;
}
}
}
return 0;
}
