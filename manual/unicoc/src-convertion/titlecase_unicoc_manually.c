#include <unico.h>

int titlecase_unicoc_manually (unicoc *uniout){
  return titlecase_unicos_manually(
    uniout->beginning,
    uniout->end,
    uniout->unicos);
}
