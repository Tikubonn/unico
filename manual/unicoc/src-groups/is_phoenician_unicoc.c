#include <unico.h>
int is_phoenician_unicoc (unicoc* uni){
return is_phoenician_unicos(uni->beginning, uni->end, uni->unicos);
}
