#include <unico.h>
#include <stddef.h>

void init_unicob (unsigned char *sequence, size_t size, unicob *uniout){
  uniout->address = sequence;
  uniout->address_beginning = sequence;
  uniout->address_end = sequence + size;
}
