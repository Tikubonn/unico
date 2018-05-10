#include <unico.h>

int is_normalize_nfkc_unicoc (unicoc *uni){
  return is_normalize_nfkc_unicos(uni->beginning, uni->end, uni->unicos);
}
