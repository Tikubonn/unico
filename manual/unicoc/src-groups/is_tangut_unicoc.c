#include <unico.h>
int is_tangut_unicoc (unicoc* uni){
return is_tangut_unicos(uni->beginning, uni->end, uni->unicos);
}
