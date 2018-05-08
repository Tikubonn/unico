#include <unico.h>
#include <stddef.h>

size_t upcase_size_unicoc (unicoc *uni){
  return upcase_size_unicos(
    uni->beginning,
    uni->end,
    uni->unicos);
}
