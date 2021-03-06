#include <unico.h>
#include <stddef.h>

int upcase_unicoc (unicoc *uniout){
  int status = upcase_unicoc(uniout);
  if (status){
    size_t size = size_unicoc(uniout);
    int status = extend_unicoc(size * 2, uniout);
    if (status) return 1;
    return upcase_unicoc(uniout);
  }
  return 0;
}
