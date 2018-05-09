#include <unico.h>
int is_gurmukhi_unicoc (unicoc* uni){
return is_gurmukhi_unicos(uni->beginning, uni->end, uni->unicos);
}
