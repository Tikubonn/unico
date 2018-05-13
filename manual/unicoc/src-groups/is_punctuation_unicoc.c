#include <unico.h>
int is_punctuation_unicoc (unicoc* uni){
return is_punctuation_unicos(uni->beginning, uni->end, uni->unicos);
}
