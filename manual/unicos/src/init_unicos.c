#include <unico.h>
#include <stddef.h>

void init_unicos (unico *sequence, size_t size, unicos *uniout){
  uniout->address = sequence;
  uniout->address_beginning = sequence;
  uniout->address_end = sequence + size;
}
