#include <unico.h>
int is_ignored_unicoc (unicoc* uni){
return is_ignored_unicos(uni->beginning, uni->end, uni->unicos);
}
