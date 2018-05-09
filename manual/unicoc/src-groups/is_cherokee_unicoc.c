#include <unico.h>
int is_cherokee_unicoc (unicoc* uni){
return is_cherokee_unicos(uni->beginning, uni->end, uni->unicos);
}
