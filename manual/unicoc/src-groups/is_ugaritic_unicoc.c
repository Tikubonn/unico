#include <unico.h>
int is_ugaritic_unicoc (unicoc* uni){
return is_ugaritic_unicos(uni->beginning, uni->end, uni->unicos);
}
