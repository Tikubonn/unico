#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

void drop_unicos (size_t index, unicos *uniout){
  size_t size = size_unicos(uniout);
  if (0 < size){
    size_t indexa = min(index, size -1);
    size_t indexb = indexa +1;
    for(; indexb < size; indexa++, indexb++){
      unico code = get_unicos(indexb, uniout);
      set_unicos(code, indexa, uniout);
    }
    uniout->address--;
  }
}
