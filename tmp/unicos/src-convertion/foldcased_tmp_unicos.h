#include <unico.h>
#include <stddef.h>

#define foldcased_tmp_unicos(var, uni)\
unicos *__ ## var ## _foldcased_argument1 = uni;\
size_t __ ## var ## _foldcased_size = foldcase_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _foldcased_size);\
int __ ## var ## _foldcased_status = foldcase_unicos_manually(0, -1, var);\
if (__ ## var ## _foldcased_status){ var = NULL; }
