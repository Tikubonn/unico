#include <unico.h>
int is_batak_unicoc (unicoc* uni){
return is_batak_unicos(uni->beginning, uni->end, uni->unicos);
}
