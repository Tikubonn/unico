#include <unico.h>
int is_digits_unicoc (unicoc* uni){
return is_digits_unicos(uni->beginning, uni->end, uni->unicos);
}
