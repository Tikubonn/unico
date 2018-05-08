#include <unico.h>

typedef int (*count_if_unicos_function)(unico, void*);
typedef int (*countc_if_unicos_function)(unicoc*, void*);

extern int count_if_unicos (count_if_unicos_function, unicos*, void*);
extern int countc_if_unicos (countc_if_unicos_function, unicos*, void*);
