#include <unico.h>
#include <stddef.h>

#define slice_tmp_unicos(var, index, end, unicos)\
size_t __ ## var ## _slice_argument1 = index;\
size_t __ ## var ## _slice_argument2 = end;\
unicos *__ ## var ## _slice_argument3 = unicos;\
size_t __ ## var ## _slice_size = slice_size_unicos(\
__ ## var ## _slice_argument1,\
__ ## var ## _slice_argument2,\
__ ## var ## _slice_argument3);\
make_tmp_unicos(var, __ ## var ## _slice_size);\
int __ ## var ## _slice_status = slice_unicos_manually(\
__ ## var ## _slice_argument1,\
__ ## var ## _slice_argument2,\
__ ## var ## _slice_argument3, var);\
if (__ ## var ## _slice_status){ var = NULL; }
