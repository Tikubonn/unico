#include <unico.h>
int is_devanagari_unicoc (unicoc* uni){
return is_devanagari_unicos(uni->beginning, uni->end, uni->unicos);
}
