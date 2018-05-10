#include <unico.h>

int is_titlecase_unicoc (unicoc *uni){
  return is_titlecase_unicos(uni->beginning, uni->end, uni->unicos);
}
