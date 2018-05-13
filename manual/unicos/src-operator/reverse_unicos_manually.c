#include <unico.h>

static int reverse_unicos_manually_in (unicoc *uni, unicos *uniout){
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
  if (has_margins_unicos(size, uniout)){
    size_t si = length_unicos(uni);
    size_t count = si;
    while (count--){
      unicoc temp;
      int status1 = get_unicoc_from_unicos(count, uni, &temp);
      if (status1) return status1;
      int status2 = reverse_unicos_manually_in(&temp, uniout);
      if (status2) return status2;
    }
    return 0;
  }
  return 1;
}
