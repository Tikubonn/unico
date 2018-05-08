#include <unico.h>
#include <stddef.h>

int get_unicoc_from_unicos (size_t index, unicos *uni, unicoc *uniout){
  size_t size = size_unicos(uni);
  size_t ind = 0;
  while (index--){
    if (!(ind < size)) return 1;
    int status = next_unicos(ind, uni, &ind);
    if (status) return status;
  }
  if (!(ind < size)) return 1;
  size_t inde;
  int status = next_unicos(ind, uni, &inde);
  if (status) return status;
  init_unicoc(uni, ind, inde, uniout);
  return 0;
}
