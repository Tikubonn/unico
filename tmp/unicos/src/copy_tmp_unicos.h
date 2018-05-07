#include <unico.h>
#include <stddef.h>

#define copy_tmp_unicos(var, uni)\
unicos *__ ## var ## _copy_argument1 = uni;\
size_t __ ## var ## _size = size_unicos( __ ## var ## _copy_argument1 );\
make_tmp_unicos(var, __ ## var ## _size);\
copy_unicos_manually(__ ## var ## _copy_argument1, var);
