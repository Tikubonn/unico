#include <unico.h>
#include <stddef.h>

size_t count_unicos (unico code, unicos *uni){
  size_t count = 0;
  size_t size = size_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unico code2 = get_unicos(index, uni);
    if (code2 == code){
      count++;
    }
  }
  return count;
}

size_t countc_unicos (unicoc *unic, unicos *uni){
  size_t count = 0;
  size_t size = length_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unicoc temp;
    int status = get_unicoc_from_unicos(index, uni, &temp);
    if (status) return count;
    if (equal_unicoc(unic, &temp))
      count++;
  }
  return count;
}

static int counts_unicos (size_t index, unicos *unia, unicos *unib){
  size_t size = length_unicos(unia);
  size_t ind;
  for (ind = 0; ind < size; ind++){
    unicoc unica;
    unicoc unicb;
    if (get_unicoc_from_unicos(ind, unia, &unica)) return 0;
    if (get_unicoc_from_unicos(ind + index, unib, &unicb)) return 0;
    if (unequal_unicoc(&unica, &unicb)) return 0;
  }
  return 1;
}

size_t counts_unicos (unicos *unia, unicos *unib){
  size_t sizea = length_unicos(unia);
  size_t sizeb = length_unicos(unib);
  if (sizea == 0)
    return 0;
  if (sizeb == 0)
    return 0;
  if (sizeb <= sizea){
    size_t count = 0;
    size_t index;
    for (index = 0; index <= sizeb - sizea; index++){
      if (counts_unicos_in(index, unia, unib))
        count++;
    }
    return count;
  }
  return 0;
}
