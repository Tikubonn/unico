#include <unico.h>
int is_greek_unicoc (unicoc* uni){
return is_greek_unicos(uni->beginning, uni->end, uni->unicos);
}
