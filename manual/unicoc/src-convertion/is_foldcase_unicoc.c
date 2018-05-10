#include <unico.h>

int is_foldcase_unicoc (unicoc *uni){
  return is_foldcase_unicos(uni->beginning, uni->end, uni->unicos);
}
