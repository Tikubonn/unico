#include <unico.h>
int is_telugu_unicoc (unicoc* uni){
return is_telugu_unicos(uni->beginning, uni->end, uni->unicos);
}
