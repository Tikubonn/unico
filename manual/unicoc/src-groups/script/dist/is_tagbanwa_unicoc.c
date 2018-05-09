#include <unico.h>
int is_tagbanwa_unicoc (unicoc* uni){
return is_tagbanwa_unicos(uni->beginning, uni->end, uni->unicos);
}
