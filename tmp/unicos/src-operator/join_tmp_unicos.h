#include <unico.h>
#include <stddef.h>

#define join_tmp_unicos(var, sentences, size, separator)\
unicos *__ ## var ## _concat_argument1 = sentences;\
size_t __ ## var ## _concat_argument2 = size;\
unicos *__ ## var ## _concat_argument3 = separator;\
size_t __ ## var ## _concat_size = join_size_unicos(\
__ ## var ## _concat_argument1,\
__ ## var ## _concat_argument2,\
__ ## var ## _concat_argument3);\
make_tmp_unicos(var, __ ## var ## _concat_size);\
int __ ## var ## _concat_status = join_unicos_manually(\
__ ## var ## _concat_argument1,\
__ ## var ## _concat_argument2,\
__ ## var ## _concat_argument3, var);\
if (__ ## var ## _concat_status){ var = NULL; }
