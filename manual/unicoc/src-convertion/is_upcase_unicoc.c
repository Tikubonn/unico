#include <unico.h>

int is_upcase_unicoc (unicoc *uni){
  return is_upcase_unicos(uni->beginning, uni->end, uni->unicos);
}
