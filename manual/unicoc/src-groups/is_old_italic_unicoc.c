#include <unico.h>
int is_old_italic_unicoc (unicoc* uni){
return is_old_italic_unicos(uni->beginning, uni->end, uni->unicos);
}
