#include <unico.h>
#include <stddef.h>

unicos *concat_unicos (unicos *unia, unicos *unib){
  size_t sizea = size_unicos(unia);
  size_t sizeb = size_unicos(unib);
  size_t size = sizea + sizeb;
  unicos *uniout = make_unicos(size);
  if (uniout == NULL)
    return NULL;
  concat_unicos_manually(unia, unib, uniout);
  return uniout;
}
