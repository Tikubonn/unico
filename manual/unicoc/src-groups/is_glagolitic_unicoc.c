#include <unico.h>
int is_glagolitic_unicoc (unicoc* uni){
return is_glagolitic_unicos(uni->beginning, uni->end, uni->unicos);
}
