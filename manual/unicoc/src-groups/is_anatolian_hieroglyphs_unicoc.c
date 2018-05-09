#include <unico.h>
int is_anatolian_hieroglyphs_unicoc (unicoc* uni){
return is_anatolian_hieroglyphs_unicos(uni->beginning, uni->end, uni->unicos);
}
