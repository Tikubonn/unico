#include <unico.h>
#include <stddef.h>

size_t length_unicos (unicos *uni){
  size_t size = size_unicos(uni);
  size_t count = 0;
  size_t ind = 0;
  while (ind < size){
    int status = next_unicos(ind, uni, &ind);
    if (status) break;
    count++;
  }
  return count;
}
