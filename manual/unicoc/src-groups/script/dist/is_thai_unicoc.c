#include <unico.h>
int is_thai_unicoc (unicoc* uni){
return is_thai_unicos(uni->beginning, uni->end, uni->unicos);
}
