#include <unico.h>

typedef int (*position_if_unicos_function) (unicos*, unicos*);

extern int position_if_unicos (position_if_unicos_function, unicos*, size_t*);
