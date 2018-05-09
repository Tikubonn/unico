#include <unico.h>
int is_tibetan_unicoc (unicoc* uni){
return is_tibetan_unicos(uni->beginning, uni->end, uni->unicos);
}
