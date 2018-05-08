#include <unico.h>
#include <stddef.h>

int extend_unicoc (size_t size, unicoc *uniout){
  size_t si = size_unicoc(uniout);
  if (si < size){
    size_t sio = real_size_unicos(uniout->unicos);
    return extend_unicos(sio + size - si, uniout->unicos);
  }
  return 1;
}
