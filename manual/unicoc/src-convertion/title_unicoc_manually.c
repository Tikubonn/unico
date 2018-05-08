#include <unico.h>

int title_unicoc_manually (unicoc *uniout){
  return title_unicos_manually(
    uniout->beginning,
    uniout->end,
    uniout->unicos);
}
