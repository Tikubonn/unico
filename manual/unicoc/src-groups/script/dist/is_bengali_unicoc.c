#include <unico.h>
int is_bengali_unicoc (unicoc* uni){
return is_bengali_unicos(uni->beginning, uni->end, uni->unicos);
}
