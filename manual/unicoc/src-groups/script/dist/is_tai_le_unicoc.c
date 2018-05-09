#include <unico.h>
int is_tai_le_unicoc (unicoc* uni){
return is_tai_le_unicos(uni->beginning, uni->end, uni->unicos);
}
