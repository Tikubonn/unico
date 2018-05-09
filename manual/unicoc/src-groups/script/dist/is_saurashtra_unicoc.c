#include <unico.h>
int is_saurashtra_unicoc (unicoc* uni){
return is_saurashtra_unicos(uni->beginning, uni->end, uni->unicos);
}
