#include <unico.h>

int downcase_unicoc_manually (unicoc *uniout){
  return downcase_unicos_manually(
    uniout->beginning,
    uniout->end,
    uniout->unicos);
}
