#include <unico.h>
#include <stddef.h>

unsigned char get_unicob (size_t index, unicob *uni){
  size_t size = size_unicob(uni);
  if (index < size)
    return uni->address_beginning[index];
  return 0;
}
