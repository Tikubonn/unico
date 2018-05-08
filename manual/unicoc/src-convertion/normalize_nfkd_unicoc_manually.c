#include <unico.h>

int normalize_nfkd_unicoc_manually (unicoc *uniout){
  return normalize_nfkd_unicos_manually(
    uniout->beginning,
    uniout->end,
    uniout->unicos);
}
