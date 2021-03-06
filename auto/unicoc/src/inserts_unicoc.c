#include <unico.h>
#include <stddef.h>

int inserts_unicoc (unico *sequence, size_t size, size_t index, unicoc *uniout){
  int status = inserts_unicoc_manually(sequence, size, index, uniout);
  if (status){
    size_t si = size_unicoc(uniout);
    int status = extend_unicoc(si * 2, uniout);
    if (status) return status;
    return inserts_unicoc(sequence, size, index, uniout);
  }
  return 0;
}
