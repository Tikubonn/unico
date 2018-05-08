#include <unico.h>

static int reverse_unicos_manually (unicoc *uni, unicos *uniout){
  size_t size = size_unicoc(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unico code = get_unicoc(index, uni);
    int status = insert_unicoc_manually(code, -1, uni);
    if (status) return status;
  }
  return 0;
}

int reverse_unicos_manually (unicos *uni, unicos *uniout){
  size_t size = size_unicos(uni);
  if (has_margins_unicos(uniout)){
    size_t si = length_unicos(uni);
    size_t count = si;
    while (count--){
      unicoc temp;
      int statusa = get_unicoc_from_unicos(count, uni, &temp);
      if (statusa) return status;
      int statusb = reverse_unicos_manually(&temp, uniout);
      if (statusb) return statusb;
    }
    return 0;
  }
  return 1;
}
