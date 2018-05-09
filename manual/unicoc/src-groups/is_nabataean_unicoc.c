#include <unico.h>
int is_nabataean_unicoc (unicoc* uni){
return is_nabataean_unicos(uni->beginning, uni->end, uni->unicos);
}
