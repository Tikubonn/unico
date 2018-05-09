#include <unico.h>
int is_cuneiform_unicoc (unicoc* uni){
return is_cuneiform_unicos(uni->beginning, uni->end, uni->unicos);
}
