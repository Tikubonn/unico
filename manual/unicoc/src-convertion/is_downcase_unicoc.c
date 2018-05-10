#include <unico.h>

int is_downcase_unicoc (unicoc *uni){
  return is_downcase_unicos(uni->beginning, uni->end, uni->unicos);
}
