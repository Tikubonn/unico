#include <unico.h>

int put_unicob_as_utf32be (unico code, unicob *uniout){
  int status = put_unicob_as_utf32be_manually(code, uniout);
  if (status == UNICOB_NOT_ENOUGH_MEMORY){
    size_t size = real_size_unicob(uniout);
    int status = extend_unicob(size * 2, uniout);
    if (status) return status;
    return put_unicob_as_utf32be(code, uniout);
  }
  return status;
}

int put_unicob_as_utf32le (unico code, unicob *uniout){
  int status = put_unicob_as_utf32le_manually(code, uniout);
  if (status == UNICOB_NOT_ENOUGH_MEMORY){
    size_t size = real_size_unicob(uniout);
    int status = extend_unicob(size * 2, uniout);
    if (status) return status;
    return put_unicob_as_utf32le(code, uniout);
  }
  return status;
}
