#include <unico.h>
int is_secondary_unicoc (unicoc* uni){
return is_secondary_unicos(uni->beginning, uni->end, uni->unicos);
}
