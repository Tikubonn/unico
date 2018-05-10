#include <unico.h>

int is_normalize_nfd_unicoc (unicoc *uni){
  return is_normalize_nfd_unicos(uni->beginning, uni->end, uni->unicos);
}
