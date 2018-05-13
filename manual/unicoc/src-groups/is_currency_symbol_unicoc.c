#include <unico.h>
int is_currency_symbol_unicoc (unicoc* uni){
return is_currency_symbol_unicos(uni->beginning, uni->end, uni->unicos);
}
