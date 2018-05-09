#include <unico.h>
int is_tagalog_unicoc (unicoc* uni){
return is_tagalog_unicos(uni->beginning, uni->end, uni->unicos);
}
