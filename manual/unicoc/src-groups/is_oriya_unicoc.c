#include <unico.h>
int is_oriya_unicoc (unicoc* uni){
return is_oriya_unicos(uni->beginning, uni->end, uni->unicos);
}
