#include <unico.h>
int is_tamil_unicoc (unicoc* uni){
return is_tamil_unicos(uni->beginning, uni->end, uni->unicos);
}
