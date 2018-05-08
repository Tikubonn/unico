#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos *make_unicos (size_t size){
  unico *sequence = malloc(size * sizeof(unico));
  if (sequence == NULL)
    return NULL;
  unicos *uni = malloc(sizeof(unicos));
  if (uni == NULL){
    free(sequence);
    return NULL;
  }
  init_unicos(sequence, size, uni);
  return uni;
}
