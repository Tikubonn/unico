#include <unico.h>
#define min(a,b) ((a)<(b)?(a):(b))

void focus_unicos (size_t index, size_t end, unicos *uni, unicos *uniout){
  size_t size = size_unicos(uni);
  size_t ind = min(index, size);
  size_t ed = min(end, size);
  uniout->address = uni->address_beginning + ind;
  uniout->address_beginning = uni->address_beginning + ind;
  uniout->address_end = uni->address_beginning + end;
}
