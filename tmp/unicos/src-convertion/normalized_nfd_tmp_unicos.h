#include <unico.h>
#include <stddef.h>

#define normalized_nfd_tmp_unicos(var, uni)\
unicos *__ ## var ## _normalized_nfd_argument1 = uni;\
size_t __ ## var ## _normalized_nfd_size = normalize_nfd_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _normalized_nfd_size);\
int __ ## var ## _normalized_nfd_status = normalize_nfd_unicos_manually(0, -1, var);\
if (__ ## var ## _normalized_nfd_status){ var = NULL; }
