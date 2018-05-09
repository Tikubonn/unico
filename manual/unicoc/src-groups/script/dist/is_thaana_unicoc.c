#include <unico.h>
int is_thaana_unicoc (unicoc* uni){
return is_thaana_unicos(uni->beginning, uni->end, uni->unicos);
}
