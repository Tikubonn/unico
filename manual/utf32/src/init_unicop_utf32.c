#include <unico.h>

void init_unicop_utf32 (unicos *uni, int endian, unicop_utf32 *uniout){
  uniout->unicos = uni;
  uniout->code = 0;
  uniout->endian = endian;
  uniout->count = 0;
}
