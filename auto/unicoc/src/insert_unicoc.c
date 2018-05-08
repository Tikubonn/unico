#include <unico.h>
#include <stddef.h>

int insert_unicoc (unico code, size_t index, unicoc *uniout){
  int status = insert_unicoc_manually(code, index, uniout);
  if (status){
    size_t size = size_unicoc(uniout);
    int status = extend_unicoc(size * 2, uniout);
    if (status) return status;
    return insert_unicoc(code, index, uniout);
  }
  return 0;
}
