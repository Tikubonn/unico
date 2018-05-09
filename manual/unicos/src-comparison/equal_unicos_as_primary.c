#include <unico.h>
#include <stddef.h>

int equal_unicos_as_primary (unicos *unia, size_t indexa, size_t enda, unicos *unib, size_t indexb, size_t endb){
  if (indexa <= enda && indexb <= endb){
    if (enda - indexa == endb - indexb){
      size_t inda;
      size_t indb;
      for (inda = indexa, indb = indexb; inda < enda; inda++, indb++){
        unico codea = get_unicos(inda, unia);
        unico codeb = get_unicos(indb, unib);
        if (codea != codeb)
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
