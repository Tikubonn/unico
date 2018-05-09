#include <unico.h>
int is_arabic_unicoc (unicoc* uni){
return is_arabic_unicos(uni->beginning, uni->end, uni->unicos);
}
