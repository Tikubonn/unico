#include <unico.h>
int is_tai_tham_unicoc (unicoc* uni){
return is_tai_tham_unicos(uni->beginning, uni->end, uni->unicos);
}
