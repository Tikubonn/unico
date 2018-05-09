#include <unico.h>
int is_ogham_unicoc (unicoc* uni){
return is_ogham_unicos(uni->beginning, uni->end, uni->unicos);
}
