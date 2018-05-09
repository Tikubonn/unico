#include <unico.h>
int is_syloti_nagri_unicoc (unicoc* uni){
return is_syloti_nagri_unicos(uni->beginning, uni->end, uni->unicos);
}
