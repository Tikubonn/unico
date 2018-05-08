#include <unico.h>
#include <stddef.h>

void init_unicoc (unicos *uni, size_t beginning, size_t end, unicoc *uniout){
  uniout->unicos = uni;
  uniout->beginning = beginning;
  uniout->end = end;
}
