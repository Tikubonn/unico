#include <unico.h>
int is_cjk_unicoc (unicoc* uni){
return is_cjk_unicos(uni->beginning, uni->end, uni->unicos);
}
