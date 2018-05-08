#include <unico.h>
#include <stddef.h>

int position_unicos (unico code, unicos *uni){
  size_t size = size_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unico code2 = get_unicos(index, uni);
    if (code2 == code){
      *indexout = index;
      return 1;
    }
  }
  return 0;
}

int positionc_unicos (unicoc *character, unicos *uni, size_t *indexout){
  size_t size = length_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unicoc temp;
    int status = get_unicoc_from_unicos(index, uni, &temp);
    if (status) return 0;
    if (equal_unicoc(character, &temp)){
      *indexout = index;
      return 1;
    }
  }
  return 0;
}

static int position_unicos_in (size_t index, unicos *unia, unicos *unib){
  size_t size = length_unicos(unia);
  size_t ind;
  for (ind = 0; ind < size; ind++){
    unicoc tempa;
    unicoc tempb;
    if (get_unicoc_from_unicos(ind, unia, &tempa)) return 0;
    if (get_unicoc_from_unicos(ind + index, unib, &tempb)) return 0;
    if (unequal_unicoc(&tempa, &tempb)) return 0;
  }
  return 1;
}

size_t positions_unicos (unicos *unia, unicos *unib, size_t *indexout){
  size_t sizea = length_unicos(unia);
  size_t sizeb = length_unicos(unib);
  if (sizea == 0) return 0;
  if (sizeb == 0) return 0;
  if (sizea <= sizeb){
    size_t index;
    for (index = 0; index <= sizeb - sizea; index++){
      if (position_unicos_in(index, unia, unib)){
        *indexout = index;
        return 1;
      }
    }
  }
  return 0;
}
