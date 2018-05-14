#include <unico.h>
#include <stddef.h>

#define replace_tmp_unicos(var, pattern, substitute, source)\
unicos *__ ## var ## _replace_argument1 = pattern;\
unicos *__ ## var ## _replace_argument2 = substitute;\
unicos *__ ## var ## _replace_argument3 = source;\
size_t __ ## var ## _replace_size = replace_size_unicos(\
__ ## var ## _replace_argument1,\
__ ## var ## _replace_argument2,\
__ ## var ## _replace_argument3);\
make_tmp_unicos(var, __ ## var ## _replace_size);\
int __ ## var ## _replace_status = replace_unicos_manually(\
__ ## var ## _replace_argument1,\
__ ## var ## _replace_argument2,\
__ ## var ## _replace_argument3, var);\
if (__ ## var ## _replace_status){ var = NULL; }
