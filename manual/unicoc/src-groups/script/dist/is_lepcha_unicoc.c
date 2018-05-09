#include <unico.h>
int is_lepcha_unicoc (unicoc* uni){
return is_lepcha_unicos(uni->beginning, uni->end, uni->unicos);
}
