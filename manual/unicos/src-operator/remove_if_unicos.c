#include <unico.h>

void remove_if_unicos (remove_if_unicos_function func, unicos *uniout, void *param){
  size_t size = size_unicos(uniout);
  size_t index;
  for (index = 0; index < size; index++){
    unico code = get_unicos(index, uniout);
    if (func(code, param)){
      drop_unicos(index, uniout);
      return;
    }
  }
}

void removec_if_unicos (removec_if_unicos_function func, unicos *uniout, void *param){
  size_t size = length_unicos(uniout);
  size_t index;
  for (index = 0; index < size; index++){
    unicoc temp;
    if (get_unicoc_from_unicos(index, uniout, &temp)) return;
    if (func(&temp, param)){
      size_t si = size_unicoc(&temp);
      drops_unicoc(0, si, &temp);
      return;
    }
  }
}
