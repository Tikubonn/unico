#include <unico.h>
int is_ethiopic_unicoc (unicoc* uni){
return is_ethiopic_unicos(uni->beginning, uni->end, uni->unicos);
}
