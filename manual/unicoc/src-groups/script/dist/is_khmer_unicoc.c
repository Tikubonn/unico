#include <unico.h>
int is_khmer_unicoc (unicoc* uni){
return is_khmer_unicos(uni->beginning, uni->end, uni->unicos);
}
