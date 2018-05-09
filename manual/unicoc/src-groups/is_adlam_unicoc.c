#include <unico.h>
int is_adlam_unicoc (unicoc* uni){
return is_adlam_unicos(uni->beginning, uni->end, uni->unicos);
}
