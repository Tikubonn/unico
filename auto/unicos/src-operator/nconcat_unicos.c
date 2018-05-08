#include <unico.h>

int nconcat_unicos (unicos *uniout, unicos *uni){
  size_t size = size_unicos(uni);
  if (has_margins_unicos(size, uniout)){
    return nconcat_unicos_manually(uniout, uni);
  }
  else {
    size_t si = size_unicos(uniout);
    int status = extend_unicos(si + size, uniout);
    if (status) return status;
    return nconcat_unicos(uniout, uni);
  }
}
