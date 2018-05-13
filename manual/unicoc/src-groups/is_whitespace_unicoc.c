#include <unico.h>
int is_whitespace_unicoc (unicoc* uni){
return is_whitespace_unicos(uni->beginning, uni->end, uni->unicos);
}
