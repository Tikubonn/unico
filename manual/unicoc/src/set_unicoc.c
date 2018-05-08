#include <unico.h>
#include <stddef.h>

void set_unicoc (unico code, size_t index, unicoc *uniout){
  size_t size = size_unicoc(uniout);
  if (index < size){
    set_unicos(code, uniout->beginning + index, uniout->unicos);
  }
}
