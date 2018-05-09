#include <unico.h>
int is_sundanese_unicoc (unicoc* uni){
return is_sundanese_unicos(uni->beginning, uni->end, uni->unicos);
}
