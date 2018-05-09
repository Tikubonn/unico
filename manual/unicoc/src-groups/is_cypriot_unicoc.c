#include <unico.h>
int is_cypriot_unicoc (unicoc* uni){
return is_cypriot_unicos(uni->beginning, uni->end, uni->unicos);
}
