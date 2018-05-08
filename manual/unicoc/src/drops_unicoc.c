#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

void drops_unicoc (size_t index, size_t size, unicoc *uniout){
  size_t si = size_unicoc(uniout);
  size_t ind = min(index, si);
  size_t sid = min(size, si - ind);
  drops_unicos(ind, sid, uniout->unicos);
  uniout->end -= sid;
}
