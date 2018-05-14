#include <unico.h>
#include <stddef.h>

#define downcased_tmp_unicos(var, uni)\
unicos *__ ## var ## _downcased_argument1 = uni;\
size_t __ ## var ## _downcased_size = downcase_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _downcased_size);\
int __ ## var ## _downcased_status = downcase_unicos_manually(0, -1, var);\
if (__ ## var ## _downcased_status){ var = NULL; }
