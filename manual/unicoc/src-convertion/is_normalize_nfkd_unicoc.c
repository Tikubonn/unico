#include <unico.h>

int is_normalize_nfkd_unicoc (unicoc *uni){
  return is_normalize_nfkd_unicos(uni->beginning, uni->end, uni->unicos);
}
