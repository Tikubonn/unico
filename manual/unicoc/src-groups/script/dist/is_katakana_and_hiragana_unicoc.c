#include <unico.h>
int is_katakana_and_hiragana_unicoc (unicoc* uni){
return is_katakana_and_hiragana_unicos(uni->beginning, uni->end, uni->unicos);
}
