#include <unico.h>
int is_avestan_unicoc (unicoc* uni){
return is_avestan_unicos(uni->beginning, uni->end, uni->unicos);
}
