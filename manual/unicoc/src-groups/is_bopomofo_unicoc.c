#include <unico.h>
int is_bopomofo_unicoc (unicoc* uni){
return is_bopomofo_unicos(uni->beginning, uni->end, uni->unicos);
}
