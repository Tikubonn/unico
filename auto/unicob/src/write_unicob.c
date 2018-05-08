#include <unico.h>
#include <stddef.h>

int write_unicob (unsigned char *sequence, size_t size, unicob *uniout){
  int status = write_unicob_manually(sequence, size, uniout);
  if (status){
    size_t si = size_unicob(uniout);
    int status = extend_unicob(si + size, uniout);
    if (status) return status;
    return write_unicob(sequence, size, uniout);
  }
  return 0;
}
