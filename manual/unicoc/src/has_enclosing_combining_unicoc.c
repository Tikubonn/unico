#include <unico.h>
#include <stddef.h>

int has_enclosing_combining_unicoc (unicoc *uni){
  size_t size = size_unicoc(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unico code = get_unicoc(index, uni);
    if (is_enclosing_combining_unico(code))
      return 1;
  }
  return 0;
}
