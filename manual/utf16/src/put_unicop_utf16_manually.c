#include <unico.h>

static int put_unicop_utf16_manually_bom (unsigned char character, unicop_utf16 *uniout){
	if (uniout->count == 0){
		uniout->code1 = character;
		uniout->count++;
		return 0;
	}
	else {
		unico code = (uniout->code1 << 8) | character;
		if (is_bom_big_endian_unicop_utf16(code)){
			uniout->endian = UNICOP_UTF16_BIG_ENDIAN;
			uniout->code1 = 0;
			uniout->count = 0;
			return 0;
		}
		if (is_bom_little_endian_unicop_utf16(code)){
			uniout->endian = UNICOP_UTF16_LITTLE_ENDIAN;
			uniout->code1 = 0;
			uniout->count = 0;
			return 0;
		}
		if (is_high_surrogate_unicop_utf16(uniout->code1)){
			uniout->endian = UNICOP_UTF16_BIG_ENDIAN;
			uniout->code1 = code;
			uniout->count++;
			return 0;
		}
		int status = insert_unicos_manually(code, -1, uniout->unicos);
		if (status) return status;
		uniout->endian = UNICOP_UTF16_BIG_ENDIAN;
		uniout->code1 = 0;
		uniout->count = 0;
		return 0;
	}
}

static int put_unicop_utf16_manually_be (unsigned char character, unicop_utf16 *uniout){
	switch (uniout->count){
		case 0: 
			uniout->code1 = character;
			uniout->count++;
			return 0;
		case 1: {
			unico code = (uniout->code1 << 8) | character;
			if (is_bom_big_endian_unicop_utf16(code)){
				return UNICOP_UTF16_SYNTAX_ERROR;
			}
			if (is_bom_little_endian_unicop_utf16(code)){
				return UNICOP_UTF16_SYNTAX_ERROR;
			}
			if (is_high_surrogate_unicop_utf16(uniout->code1)){
				uniout->code1 = code;
				uniout->count++;
				return 0;
			}
			int status = insert_unicos_manually(code, -1, uniout->unicos);
			if (status) return status;
			uniout->code1 = 0;
			uniout->count = 0;
			return 0;
		}
		case 2:
			uniout->code2 = character;
			uniout->count++;
			return 0;
		case 3: {
			unico code = (uniout->code2 << 8) | character;
			if (is_low_surrogate_unicop_utf16(uniout->code1)){
				unico decoded = decode_surrogate_unicop_utf16(uniout->code1, code);
				int status = insert_unicos_manually(decoded, -1, uniout->unicos);
				if (status) return status;
				uniout->code1 = 0;
				uniout->code2 = 0;
				uniout->count = 0;
				return 0;
			}
			return UNICOP_UTF16_SYNTAX_ERROR;
		}
		default:
			return UNICOP_UTF16_SYNTAX_ERROR;
	}
}

static int put_unicop_utf16_manually_le (unsigned char character, unicop_utf16 *uniout){
	switch (uniout->count){
		case 0: 
			uniout->code1 = character;
			uniout->count++;
			return 0;
		case 1: {
			unico code = uniout->code1 | (character << 8);
			if (is_bom_big_endian_unicop_utf16(code)){
				return UNICOP_UTF16_SYNTAX_ERROR;
			}
			if (is_bom_little_endian_unicop_utf16(code)){
				return UNICOP_UTF16_SYNTAX_ERROR;
			}
			if (is_high_surrogate_unicop_utf16(uniout->code1)){
				uniout->code1 = code;
				uniout->count++;
				return 0;
			}
			int status = insert_unicos_manually(code, -1, uniout->unicos);
			if (status) return status;
			uniout->code1 = 0;
			uniout->count = 0;
			return 0;
		}
		case 2:
			uniout->code2 = character;
			uniout->count++;
			return 0;
		case 3: {
			unico code = uniout->code2 | (character << 8);
			if (is_low_surrogate_unicop_utf16(uniout->code1)){
				unico decoded = decode_surrogate_unicop_utf16(uniout->code1, code);
				int status = insert_unicos_manually(decoded, -1, uniout->unicos);
				if (status) return status;
				uniout->code1 = 0;
				uniout->code2 = 0;
				uniout->count = 0;
				return 0;
			}
			return UNICOP_UTF16_SYNTAX_ERROR;
		}
		default:
			return UNICOP_UTF16_SYNTAX_ERROR;
	}
}

int put_unicop_utf16_manually (unsigned char character, unicop_utf16 *uniout){
	switch (uniout->endian){
		case UNICOP_UTF16_BOM_ENDIAN: return put_unicop_utf16_manually_bom(character, uniout);
		case UNICOP_UTF16_BIG_ENDIAN: return put_unicop_utf16_manually_be(character, uniout);
		case UNICOP_UTF16_LITTLE_ENDIAN: return put_unicop_utf16_manually_le(character, uniout);
		default: return UNICOP_UTF16_ERROR;
	}
}
