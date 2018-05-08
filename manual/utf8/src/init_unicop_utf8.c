#include <unico.h>

void init_unicop_utf8 (unicos *uni, unicop_utf8 *uniout){
  uniout->unicos = uni;
  uniout->code = 0;
  uniout->count = 0;
  uniout->bom = 0;
}
