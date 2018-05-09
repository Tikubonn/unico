#include <unico.h>
int is_tai_viet_unicoc (unicoc* uni){
return is_tai_viet_unicos(uni->beginning, uni->end, uni->unicos);
}
