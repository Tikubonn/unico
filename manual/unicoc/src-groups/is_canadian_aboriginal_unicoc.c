#include <unico.h>
int is_canadian_aboriginal_unicoc (unicoc* uni){
return is_canadian_aboriginal_unicos(uni->beginning, uni->end, uni->unicos);
}
