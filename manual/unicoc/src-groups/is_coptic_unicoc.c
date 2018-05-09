#include <unico.h>
int is_coptic_unicoc (unicoc* uni){
return is_coptic_unicos(uni->beginning, uni->end, uni->unicos);
}
