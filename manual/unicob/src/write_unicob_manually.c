#include <unico.h>
#include <stddef.h>

int write_unicob_manually (unsigned char *sequence, size_t size, unicob *uniout){
  if (has_margins_unicob(size, uniout)){
    size_t index;
    for (index = 0; index < size; index++)
      put_unicob_manually(sequence[index], uniout);
    return 0;
  }
  return UNICOB_NOT_ENOUGH_MEMORY;
}
