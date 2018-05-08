#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

int is_downcase_unicos (size_t index, size_t size, unicos *uniout){
  size_t si = size_unicos(uniout);
  size_t sid = min(size, si);
  size_t ind = index;
  while (ind < sid){
    int status = is_downcase_unicos_in(ind, size, uniout, &ind);
    if (status) return status;
  }
  return 0;
}
