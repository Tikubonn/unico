#include <unico.h>

int put_bom_unicob_as_utf8 (unicob *uniout){
  int status = put_bom_unicob_as_utf8_manually(uniout);
  if (status == UNICOB_NOT_ENOUGH_MEMORY){
    size_t size = real_size_unicob(uniout);
    int status = extend_unicob(size * 2, uniout);
    if (status) return status;
    return put_bom_unicob_as_utf8(uniout);
  }
  return status;
}
