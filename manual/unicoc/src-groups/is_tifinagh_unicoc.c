#include <unico.h>
int is_tifinagh_unicoc (unicoc* uni){
return is_tifinagh_unicos(uni->beginning, uni->end, uni->unicos);
}
