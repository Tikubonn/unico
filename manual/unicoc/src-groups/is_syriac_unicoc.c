#include <unico.h>
int is_syriac_unicoc (unicoc* uni){
return is_syriac_unicos(uni->beginning, uni->end, uni->unicos);
}
