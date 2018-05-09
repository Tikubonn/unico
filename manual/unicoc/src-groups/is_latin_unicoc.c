#include <unico.h>
int is_latin_unicoc (unicoc* uni){
return is_latin_unicos(uni->beginning, uni->end, uni->unicos);
}
