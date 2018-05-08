#include <unico.h>
#include <stddef.h>

size_t size_unicoc (unicoc *uni){
  return uni->end - uni->beginning;
}
