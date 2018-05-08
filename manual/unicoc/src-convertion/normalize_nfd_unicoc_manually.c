#include <unico.h>

int normalize_nfd_unicoc_manually (unicoc *uniout){
  return normalize_nfd_unicos_manually(
    uniout->beginning,
    uniout->end,
    uniout->unicos);
}
