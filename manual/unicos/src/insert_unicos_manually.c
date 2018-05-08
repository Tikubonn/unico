#include <unico.h>
#include <stddef.h>
#define max(a,b) ((a)<(b)?(b):(a))
#define min(a,b) ((a)<(b)?(a):(b))

int insert_unicos_manually (unico code, size_t index, unicos *uniout){
  if (has_margin_unicos(uniout)){
    uniout->address++;
    size_t size = size_unicos(uniout);
    size_t ind = min(index, size -1);
    unico cd = code;
    for (; ind < size; ind++){
      unico cda = get_unicos(ind, uniout);
      set_unicos(cd, ind, uniout);
      cd = cda;
    }
    return 0;
  }
  return UNICOS_NOT_ENOUGH_MEMORY;
}
