#include <unico.h>
#include <stddef.h>

#define normalized_nfc_tmp_unicos(var, uni)\
unicos *__ ## var ## _normalized_nfc_argument1 = uni;\
size_t __ ## var ## _normalized_nfc_size = normalize_nfc_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _normalized_nfc_size);\
int __ ## var ## _normalized_nfc_status = normalize_nfc_unicos_manually(0, -1, var);\
if (__ ## var ## _normalized_nfc_status){ var = NULL; }
