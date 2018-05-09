#include <unico.h>
int is_mahajani_unicoc (unicoc* uni){
return is_mahajani_unicos(uni->beginning, uni->end, uni->unicos);
}
