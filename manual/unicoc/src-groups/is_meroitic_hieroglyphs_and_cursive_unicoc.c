#include <unico.h>
int is_meroitic_hieroglyphs_and_cursive_unicoc (unicoc* uni){
return is_meroitic_hieroglyphs_and_cursive_unicos(uni->beginning, uni->end, uni->unicos);
}
