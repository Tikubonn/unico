#include <unico.h>
#include <stddef.h>

void set_unicos (unico code, size_t index, unicos *uniout){
  size_t size = size_unicos(uniout);
  if (index < size){
    uniout->address_beginning[index] = code;
  }
}
