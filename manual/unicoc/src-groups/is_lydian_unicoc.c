#include <unico.h>
int is_lydian_unicoc (unicoc* uni){
return is_lydian_unicos(uni->beginning, uni->end, uni->unicos);
}
