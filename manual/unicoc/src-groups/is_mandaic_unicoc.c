#include <unico.h>
int is_mandaic_unicoc (unicoc* uni){
return is_mandaic_unicos(uni->beginning, uni->end, uni->unicos);
}
