#pragma once
#define UNICOP_UTF16_ERROR 0x11
#define UNICOP_UTF16_SYNTAX_ERROR 0x12
#define UNICOP_UTF16_BOM_ENDIAN 0
#define UNICOP_UTF16_BIG_ENDIAN 1
#define UNICOP_UTF16_LITTLE_ENDIAN 2

typedef struct unicop_utf16 {
	unicos *unicos;
	unico code1;
	unico code2;
	int endian;
	int count;
} unicop_utf16;
