#include <unico.h>
int is_grantha_unicoc (unicoc* uni){
return is_grantha_unicos(uni->beginning, uni->end, uni->unicos);
}
