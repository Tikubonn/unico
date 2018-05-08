#include <unico.h>

int upcase_unicoc_manually (unicoc *uniout){
  return upcase_unicos_manually(
    uniout->beginning,
    uniout->end,
    uniout->unicos);
}
