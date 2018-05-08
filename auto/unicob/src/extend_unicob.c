#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

int extend_unicob (size_t size, unicob *uniout){
  unsigned char *sequence = realloc(uniout->address_beginning, size * sizeof(char));
  if (sequence == NULL)
    return 1;
  if (sequence == uniout->address_beginning){
    swap_unicob(sequence, size, uniout);
    return 0;
  }
  else {
    swap_unicob(sequence, size, uniout);
    return 0;
  }
}
