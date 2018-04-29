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
		return 1;
	}
}

static int put_unicos_utf32be_manually (unsigned char character, unicos_utf32 *uniout){
	uniout->value <<= 8;
	uniout->value |= character;
	uniout->count++;
	if (uniout->count == 4){
		if (uniout->value == 0x0000feff)
			return 1;
		put_unicos_manually(uniout->value, (unicos*)uniout);
		uniout->value = 0;
		uniout->count = 0;
		return 0;
	}
	return 0;
}

static int put_unicos_utf32le_manually (unsigned char character, unicos_utf32 *uniout){
	uniout->value |= character << (8 * uniout->count);
	uniout->count++;
	if (uniout->count == 4){
		if (uniout->value == 0xfffe0000)
			return 1;
		put_unicos_manually(uniout->value, (unicos*)uniout);
		uniout->value = 0;
		uniout->count = 0;
		return 0;
	}
	return 0;
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
			return 1;
		default:
			return 1;
	}
}
