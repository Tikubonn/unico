#include <unico.h>
#include <stddef.h>

#define make_tmp_unicos(var, size)\
size_t __ ## var ## _make_argument1 = size;\
unico __ ## var ## _unicos_data[ __ ## var ## _make_argument1 ];\
unicos __ ## var ## _unicos;\
unicos *var = &__ ## var ## _unicos;\
init_unicos(\
__ ## var ## _unicos_data,\
__ ## var ## _make_argument1, var);
