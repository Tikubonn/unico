#include <unico.h>

int is_normalize_nfc_unicoc (unicoc *uni){
  return is_normalize_nfc_unicos(uni->beginning, uni->end, uni->unicos);
}
