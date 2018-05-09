#include <unico.h>
#include <stddef.h>

int equal_unicoc_as_expansion_quaternary (unicoc *unia, unicoc *unib){
  return equal_unicos_as_expansion_quaternary(
    unia->unicos, unia->beginning, unia->end,
    unib->unicos, unib->beginning, unib->end);
}
