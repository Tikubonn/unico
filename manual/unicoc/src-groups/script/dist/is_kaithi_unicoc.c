#include <unico.h>
int is_kaithi_unicoc (unicoc* uni){
return is_kaithi_unicos(uni->beginning, uni->end, uni->unicos);
}
