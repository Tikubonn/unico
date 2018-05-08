#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

void copy_unicos_manually (unicos *uni, unicos *uniout){
  clear_unicos(uniout);
  size_t sizea = size_unicos(uni);
  size_t sizeb = real_size_unicos(uniout);
  size_t size = min(sizea, sizeb);
  inserts_unicos_manually(uni->address_beginning, size, 0, uniout);
}
