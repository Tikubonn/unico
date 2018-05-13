#include <unico.h>
int is_cjk_extensions_unicoc (unicoc* uni){
return is_cjk_extensions_unicos(uni->beginning, uni->end, uni->unicos);
}
