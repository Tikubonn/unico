#include <unico.h>
int is_bamum_unicoc (unicoc* uni){
return is_bamum_unicos(uni->beginning, uni->end, uni->unicos);
}
