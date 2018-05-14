#include <unico.h>
#include <stddef.h>

#define titlecased_tmp_unicos(var, uni)\
unicos *__ ## var ## _titlecased_argument1 = uni;\
size_t __ ## var ## _titlecased_size = titlecase_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _titlecased_size);\
int __ ## var ## _titlecased_status = titlecase_unicos_manually(0, -1, var);\
if (__ ## var ## _titlecased_status){ var = NULL; }
