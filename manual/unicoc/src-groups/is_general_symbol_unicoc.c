#include <unico.h>
int is_general_symbol_unicoc (unicoc* uni){
return is_general_symbol_unicos(uni->beginning, uni->end, uni->unicos);
}
