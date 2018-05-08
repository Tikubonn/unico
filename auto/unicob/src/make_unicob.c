#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicob *make_unicob (size_t size){
  unsigned char *sequence = malloc(size * sizeof(char));
  if (sequence == NULL)
    return NULL;
  unicob *uniout = malloc(sizeof(unicob));
  if (uniout == NULL){
    free(sequence);
    return NULL;
  }
  init_unicob(sequence, size, uniout);
  return uniout;
}
