#include <unico.h>
#include <stddef.h>

int foldcase_unicoc (unicoc *uniout){
  int status = foldcase_unicoc(uniout);
  if (status){
    size_t size = size_unicoc(uniout);
    int status = extend_unicoc(size * 2, uniout);
    if (status) return 1;
    return foldcase_unicoc(uniout);
  }
  return 0;
}
