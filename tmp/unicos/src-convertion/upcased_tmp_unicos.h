#include <unico.h>
#include <stddef.h>

#define upcased_tmp_unicos(var, uni)\
unicos *__ ## var ## _upcased_argument1 = uni;\
size_t __ ## var ## _upcased_size = upcase_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _upcased_size);\
int __ ## var ## _upcased_status = upcase_unicos_manually(0, -1, var);\
if (__ ## var ## _upcased_status){ var = NULL; }
