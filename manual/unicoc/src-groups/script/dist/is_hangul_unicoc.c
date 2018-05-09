#include <unico.h>
int is_hangul_unicoc (unicoc* uni){
return is_hangul_unicos(uni->beginning, uni->end, uni->unicos);
}
