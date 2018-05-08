#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

int extend_unicos (size_t size, unicos *uniout){
  unico *sequence = realloc(uniout->address_beginning, size * sizeof(unico));
  if (sequence == NULL)
    return 1;
  if (sequence == uniout->address_beginning){
    swap_unicos(uniout->address_beginning, size, uniout);
    return 0;
  }
  else {
    swap_unicos(sequence, size, uniout);
    return 0;
  }
}
