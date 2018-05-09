#include <unico.h>
int is_hebrew_unicoc (unicoc* uni){
return is_hebrew_unicos(uni->beginning, uni->end, uni->unicos);
}
