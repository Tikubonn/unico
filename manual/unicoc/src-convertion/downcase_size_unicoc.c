#include <unico.h>
#include <stddef.h>

size_t downcase_size_unicoc (unicoc *uni){
  return downcase_size_unicos(
    uni->beginning,
    uni->end,
    uni->unicos);
}
