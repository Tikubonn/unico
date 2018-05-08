#include <unico.h>

int nconcat_unicos_manually (unicos *uniout, unicos *uni){
  size_t size = size_unicos(uni);
  if (has_margins_unicos(size, uniout)){
    size_t index;
    for (index = 0; index < size; index++){
      unico code = get_unicos(index, uni);
      insert_unicos(code, -1, uniout);
    }
    return 0;
  }
  return UNICOS_NOT_ENOUGH_MEMORY;
}
