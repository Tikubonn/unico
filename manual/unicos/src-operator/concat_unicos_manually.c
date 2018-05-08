#include <unico.h>

static int concat_unicos_manually_in (unicos *uni, unicos *uniout){
  size_t size = length_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unicoc temp;
    int status = get_unicoc_from_unicos(index, uni, &temp);
    if (status) return status;
    size_t si = size_unicoc(&temp);
    size_t ind;
    for (ind = 0; ind < si; ind++){
      unico code = get_unicoc(ind, &temp);
      int status = insert_unicos(code, -1, uniout);
      if (status) return status;
    }
  }
  return 0;
}

int concat_unicos_manually (unicos *unia, unicos *unib, unicos *uniout){
  size_t sizea = size_unicos(unia);
  size_t sizeb = size_unicos(unib);
  if (has_margins_unicos(sizea + sizeb, uniout)){
    int statusa = concat_unicos_manually(unia, uniout);
    if (statusa) return statusa;
    int statusb = concat_unicos_manually(unia, uniout);
    if (statusb) return statusa;
    return 0;
  }
  return UNICOS_NOT_ENOUGH_MEMORY;
}
