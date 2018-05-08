#include <unico.h>
#include <stddef.h>

typedef int (*position_if_unicos_function)(unico, unico, void*);
typedef int (*positionc_if_unicos_function)(unicoc*, unicoc*, void*);

extern int position_if_unicos (unico, unicos*, size_t*, void*);
extern int positionc_if_unicos (unicoc*, unicos*, size_t*, void*);
