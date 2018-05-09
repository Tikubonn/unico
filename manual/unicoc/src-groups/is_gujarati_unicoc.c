#include <unico.h>
int is_gujarati_unicoc (unicoc* uni){
return is_gujarati_unicos(uni->beginning, uni->end, uni->unicos);
}
