#include <unico.h>
#include <stddef.h>

int equal_unicos (unicos *unia, unicos *unib){
  size_t sizea = size_unicos(unia);
  size_t sizeb = size_unicos(unib);
  if (sizea == sizeb){
    size_t index;
    for (index = 0; index < sizea; index++){
      unico codea = get_unicos(index, unia);
      unico codeb = get_unicos(index, unib);
      if (codea != codeb)
        return 0;
    }
    return 1;
  }
  return 0;
}
