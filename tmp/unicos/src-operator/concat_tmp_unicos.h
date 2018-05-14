#include <unico.h>
#include <stddef.h>

#define concat_tmp_unicos(var, unia, unib)\
unicos *__ ## var ## _concat_argument1 = unia;\
unicos *__ ## var ## _concat_argument2 = unib;\
size_t __ ## var ## _concat_size = concat_size_unicos(\
__ ## var ## _concat_argument1,\
__ ## var ## _concat_argument2);\
make_tmp_unicos(var, __ ## var ## _concat_size);\
int __ ## var ## _concat_status = concat_unicos_manually(\
__ ## var ## _concat_argument1,\
__ ## var ## _concat_argument2, var);\
if (__ ## var ## _concat_status){ var = NULL; }
