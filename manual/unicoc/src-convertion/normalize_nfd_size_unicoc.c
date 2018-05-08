#include <unico.h>
#include <stddef.h>

size_t normalize_nfd_size_unicoc (unicoc *uni){
  return normalize_nfd_size_unicos(
    uni->beginning,
    uni->end,
    uni->unicos);
}
