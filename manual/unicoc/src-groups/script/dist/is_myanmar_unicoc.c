#include <unico.h>
int is_myanmar_unicoc (unicoc* uni){
return is_myanmar_unicos(uni->beginning, uni->end, uni->unicos);
}
