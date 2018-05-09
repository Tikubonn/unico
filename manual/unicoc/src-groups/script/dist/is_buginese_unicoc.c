#include <unico.h>
int is_buginese_unicoc (unicoc* uni){
return is_buginese_unicos(uni->beginning, uni->end, uni->unicos);
}
