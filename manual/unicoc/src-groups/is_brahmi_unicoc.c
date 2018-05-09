#include <unico.h>
int is_brahmi_unicoc (unicoc* uni){
return is_brahmi_unicos(uni->beginning, uni->end, uni->unicos);
}
