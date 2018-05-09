#include <unico.h>
int is_old_turkic_unicoc (unicoc* uni){
return is_old_turkic_unicos(uni->beginning, uni->end, uni->unicos);
}
