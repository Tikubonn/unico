#include <unico.h>
#include <stddef.h>

size_t foldcase_size_unicoc (unicoc *uni){
  return foldcase_size_unicos(
    uni->beginning,
    uni->end,
    uni->unicos);
}
