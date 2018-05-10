#include <unico.h>
#include <stddef.h>

size_t titlecase_size_unicoc (unicoc *uni){
  return titlecase_size_unicos(
    uni->beginning,
    uni->end,
    uni->unicos);
}
