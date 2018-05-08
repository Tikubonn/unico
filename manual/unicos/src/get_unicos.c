#include <unico.h>
#include <stddef.h>

unico get_unicos (size_t index, unicos *uni){
  size_t size = size_unicos(uni);
  if (index < size){
    return uni->address_beginning[index];
  }
  return 0;
}
