#include <unico.h>
#include <stddef.h>

int equalp_unicos (unicos *unia, unicos *unib){
  size_t sizea = length_unicos(unia);
  size_t sizeb = length_unicos(unib);
  if (sizea == sizeb){
    size_t index;
    for (index = 0; index < sizea; index++){
      unicoc unica;
      unicoc unicb;
      if (get_unicoc_from_unicos(index, unia, &unica)) return 0;
      if (get_unicoc_from_unicos(index, unib, &unicb)) return 0;
      if (equal_unicoc_as_primary(&unica, &unicb) == 0 &&
          equal_unicoc_as_secondary(&unica, &unicb) == 0 && 
          equal_unicoc_as_tertiary(&unica, &unicb) == 0 && 
          equal_unicoc_as_quaternary(&unica, &unicb) == 0) return 0;
    }
    return 1;
  }
  return 0;
}
