#include <unico.h>
int is_kannada_unicoc (unicoc* uni){
return is_kannada_unicos(uni->beginning, uni->end, uni->unicos);
}
