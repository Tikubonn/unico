#include <unico.h>
#include <stddef.h>

#define copy_tmp_unicob(var, uni)\
unicob *__ ## var ## _copy_argument1 = uni;\
size_t __ ## var ## _size = size_unicob( __ ## var ## _copy_argument1 );\
make_tmp_unicob(var, __ ## var ## _size);\
copy_unicob_manually(__ ## var ## _copy_argument1, var);
