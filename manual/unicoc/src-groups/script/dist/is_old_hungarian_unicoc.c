#include <unico.h>
int is_old_hungarian_unicoc (unicoc* uni){
return is_old_hungarian_unicos(uni->beginning, uni->end, uni->unicos);
}
