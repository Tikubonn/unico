#include <unico.h>
int is_malayalam_unicoc (unicoc* uni){
return is_malayalam_unicos(uni->beginning, uni->end, uni->unicos);
}
