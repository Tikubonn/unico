#include <unico.h>
int is_manichaean_unicoc (unicoc* uni){
return is_manichaean_unicos(uni->beginning, uni->end, uni->unicos);
}
