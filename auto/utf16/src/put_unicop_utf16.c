#include <unico.h>

int put_unicop_utf16 (unsigned char character, unicop_utf16 *uniout){
  int status = put_unicop_utf16_manually(character, uniout);
  if (status == UNICOS_NOT_ENOUGH_MEMORY){
    size_t size = real_size_unicos(uniout->unicos);
    int status = extend_unicos(size * 2, uniout->unicos);
    if (status) return status;
    return put_unicop_utf16(character, uniout);
  }
  return status;
}
