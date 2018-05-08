#include <unico.h>
#include <stddef.h>

extern int has_margin_unicoc (unicoc *uni){
  return has_margin_unicos(uni->unicos);
}

extern int has_margins_unicoc (size_t size, unicoc *uni){
  return has_margins_unicos(size, uni->unicos);
}
