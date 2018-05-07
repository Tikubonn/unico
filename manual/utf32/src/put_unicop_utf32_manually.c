#include <unico.h>

static int put_unicop_utf32_manually_bom (unsigned char character, unicop_utf32 *uniout){
	unico code = (uniout->code << 8) | character;
	switch (uniout->count){
		case 0:
			uniout->code = character;
			uniout->count++;
			return 0;
		case 1:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 2:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 3:
			if (is_bom_big_endian_unicop_utf32(code)){
				uniout->endian = UNICOP_UTF32_BIG_ENDIAN;
				uniout->code = 0;
				uniout->count = 0;
				return 0;
			}
			if (is_bom_little_endian_unicop_utf32(code)){
				uniout->endian = UNICOP_UTF32_LITTLE_ENDIAN;
				uniout->code = 0;
				uniout->count = 0;
				return 0;
			}
			return UNICOP_UTF32_SYNTAX_ERROR;
		default:
			return UNICOP_UTF32_SYNTAX_ERROR;
	}
}

static int put_unicop_utf32_manually_be (unsigned char character, unicop_utf32 *uniout){
	unico code = (uniout->code << 8) | character;
	switch (uniout->count){
		case 0:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 1:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 2:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 3: {
			if (is_bom_little_endian_unicop_utf32(code))
				return UNICOP_UTF32_SYNTAX_ERROR;
			if (is_bom_little_endian_unicop_utf32(code))
				return UNICOP_UTF32_SYNTAX_ERROR;
			int status = insert_unicos_manually(code, -1, uniout->unicos);
			if (status) return status;
			uniout->code = 0;
			uniout->count = 0;
			return 0;
		}
		default:
			return UNICOP_UTF32_SYNTAX_ERROR;
	}
}

static int put_unicop_utf32_manually_le (unsigned char character, unicop_utf32 *uniout){
	unico code = uniout->code | (character << 8 * uniout->count);
	switch (uniout->count){
		case 0:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 1:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 2:
			uniout->code = code;
			uniout->count++;
			return 0;
		case 3: {
			if (is_bom_big_endian_unicop_utf32(code))
				return UNICOP_UTF32_SYNTAX_ERROR;
			if (is_bom_little_endian_unicop_utf32(code))
				return UNICOP_UTF32_SYNTAX_ERROR;
			int status = insert_unicos_manually(code, -1, uniout->unicos);
			if (status) return status;
			uniout->code = 0;
			uniout->count = 0;
			return 0;
		}
		default:
			return UNICOP_UTF32_SYNTAX_ERROR;
	}
}

int put_unicop_utf32_manually (unsigned char character, unicop_utf32 *uniout){
	switch (uniout->endian){
		case UNICOP_UTF32_BOM_ENDIAN: return put_unicop_utf32_manually_bom(character, uniout);
		case UNICOP_UTF32_BIG_ENDIAN: return put_unicop_utf32_manually_be(character, uniout);
		case UNICOP_UTF32_LITTLE_ENDIAN: return put_unicop_utf32_manually_le(character, uniout);
		default: return UNICOP_UTF32_ERROR;
	}
}
