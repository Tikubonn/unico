#include <unico.h>
int is_cyrillic_unicoc (unicoc* uni){
return is_cyrillic_unicos(uni->beginning, uni->end, uni->unicos);
}
