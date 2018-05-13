#include <unico.h>
int is_unsupported_unicoc (unicoc* uni){
return is_unsupported_unicos(uni->beginning, uni->end, uni->unicos);
}
