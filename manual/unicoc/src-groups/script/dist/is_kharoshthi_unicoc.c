#include <unico.h>
int is_kharoshthi_unicoc (unicoc* uni){
return is_kharoshthi_unicos(uni->beginning, uni->end, uni->unicos);
}
