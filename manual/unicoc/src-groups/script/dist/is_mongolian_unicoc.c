#include <unico.h>
int is_mongolian_unicoc (unicoc* uni){
return is_mongolian_unicos(uni->beginning, uni->end, uni->unicos);
}
