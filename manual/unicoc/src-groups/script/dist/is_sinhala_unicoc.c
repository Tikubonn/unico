#include <unico.h>
int is_sinhala_unicoc (unicoc* uni){
return is_sinhala_unicos(uni->beginning, uni->end, uni->unicos);
}
