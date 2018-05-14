#include <unico.h>
#include <stddef.h>

#define reverse_tmp_unicos(var, unicos)\
unicos *__ ## var ## _reverse_argument1 = unicos;\
size_t __ ## var ## _reverse_size = reverse_size_unicos(\
__ ## var ## _reverse_argument1);\
make_tmp_unicos(var, __ ## var ## _reverse_argument1);\
int __ ## var ## _reverse_status = reverse_unicos_manually(\
__ ## var ## _reverse_argument1, var);\
if (__ ## var ## _reverse_status){ var = NULL; }
