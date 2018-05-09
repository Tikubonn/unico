#include <unico.h>
int is_georgian_unicoc (unicoc* uni){
return is_georgian_unicos(uni->beginning, uni->end, uni->unicos);
}
