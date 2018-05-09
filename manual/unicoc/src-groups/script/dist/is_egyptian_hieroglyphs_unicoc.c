#include <unico.h>
int is_egyptian_hieroglyphs_unicoc (unicoc* uni){
return is_egyptian_hieroglyphs_unicos(uni->beginning, uni->end, uni->unicos);
}
