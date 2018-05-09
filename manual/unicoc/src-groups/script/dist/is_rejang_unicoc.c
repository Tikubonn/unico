#include <unico.h>
int is_rejang_unicoc (unicoc* uni){
return is_rejang_unicos(uni->beginning, uni->end, uni->unicos);
}
