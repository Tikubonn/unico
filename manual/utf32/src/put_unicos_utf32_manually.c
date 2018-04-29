#include <unico.h>

static int put_unicos_utf32bom_manually (unsigned char character, unicos_utf32 *uniout){
	uniout->value <<= 8;
	uniout->value |= character;
	uniout->count++;
	if (uniout->count == 4){
		if (uniout->value == 0x0000feff){
			uniout->endian = UNICOS_UTF32_BIG_ENDIAN;
			uniout->value = 0;
			uniout->count = 0;
			return 0;
		}
		if (uniout->value == 0xfffe0000){
			uniout->endian = UNICOS_UTF32_LITTLE_ENDIAN;
			uniout->value = 0;
			uniout->count = 0;
			return 0;
		}
		uniout->value = 0;
		uniout->count = 0;
		return UNICOS_UTF32_SYNTAX_ERROR;
	}
	return 0;
}

static int put_unicos_utf32be_manually (unsigned char character, unicos_utf32 *uniout){
	unico code = uniout->value;
	code <<= 8;
	code |= character;
	if (uniout->count == 3){
		if (uniout->value == 0xfffe0000){
			uniout->value = 0;
			uniout->count = 0;
			return UNICOS_UTF32_SYNTAX_ERROR;
		}
		if (uniout->value == 0x0000feff){
			uniout->value = 0;
			uniout->count = 0;
			return UNICOS_UTF32_SYNTAX_ERROR;
		}
		int status = put_unicos_manually(code, (unicos*)uniout);
		if (status == UNICOS_NOT_ENOUGH_MEMORY)
			return UNICOS_NOT_ENOUGH_MEMORY;
		uniout->value = 0;
		uniout->count = 0;
		return 0;
	}
	else {
		uniout->value = code;
		uniout->count++;
		return 0;
	}
}

static int put_unicos_utf32le_manually (unsigned char character, unicos_utf32 *uniout){
	unico code = uniout->value;
	code |= character << (8 * uniout->count);
	if (uniout->count == 3){
		if (uniout->value == 0xfffe0000){
			uniout->value = 0;
			uniout->count = 0;
			return UNICOS_UTF32_SYNTAX_ERROR;
		}
		if (uniout->value == 0x0000feff){
			uniout->value = 0;
			uniout->count = 0;
			return UNICOS_UTF32_SYNTAX_ERROR;
		}
		int status = put_unicos_manually(code, (unicos*)uniout);
		if (status == UNICOS_NOT_ENOUGH_MEMORY)
			return UNICOS_NOT_ENOUGH_MEMORY;
		uniout->value = 0;
		uniout->count = 0;
		return 0;
	}
	else {
		uniout->value = code;
		uniout->count++;
		return 0;
	}
}

int put_unicos_utf32_manually (unsigned char character, unicos_utf32 *uniout){
	switch (uniout->endian){
		case UNICOS_UTF32_BIG_ENDIAN:
			return put_unicos_utf32be_manually(character, uniout);
		case UNICOS_UTF32_LITTLE_ENDIAN:
			return put_unicos_utf32le_manually(character, uniout);
		case UNICOS_UTF32_BOM_ENDIAN:
			if (size_unicos((unicos*)uniout) == 0)
				return put_unicos_utf32bom_manually(character, uniout);
			return UNICOS_UTF32_SYNTAX_ERROR;
		default:
			return UNICOS_UTF32_SYNTAX_ERROR;
	}
}
