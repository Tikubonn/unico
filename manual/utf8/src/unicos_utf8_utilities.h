#pragma once
#include <unico.h>

extern int size_of_unicode (unico);
extern int size_of_utf8 (unsigned char);
extern int width_of_utf8 (unsigned char);
extern int value_of_utf8 (unsigned char);
extern int is_concatenated_utf8 (unsigned char);
