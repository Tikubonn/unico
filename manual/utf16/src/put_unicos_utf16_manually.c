#include <unico.h>
#include "unicos_utf16_utilities.h"

/* bom */

static int put_unicos_utf16bom_manually (unsigned char character, unicos_utf16 *uniout){
	switch (uniout->count){
		case 0:
			uniout->value1 = character;
			uniout->count++;
			return 0;
		case 1:
			uniout->value1 <<= 8;
			uniout->value1 += character;
			uniout->count++;
			/* found bom */
			if (is_bom_big_endian_utf16(uniout->value1)){
				uniout->endian = UNICOS_UTF16_BIG_ENDIAN;
				uniout->value1 = 0;
				uniout->count = 0;
				return 0;
			}
			/* found bom */
			if (is_bom_little_endian_utf16(uniout->value1)){
				uniout->endian = UNICOS_UTF16_LITTLE_ENDIAN;
				uniout->value1 = 0;
				uniout->count = 0;
				return 0;
			}
			/* found surrogate */
			if (is_high_surrogate_utf16(uniout->value1)){
				uniout->endian = UNICOS_UTF16_BIG_ENDIAN;
				uniout->value1 = 0;
				uniout->count = 0;
				return 0;
			}
			put_unicos_manually(uniout->value1, (unicos*)uniout);
			uniout->endian = UNICOS_UTF16_BIG_ENDIAN;
			uniout->value1 = 0;
			uniout->count = 0;
			return 0;
		default: 
			uniout->value1 = 0;
			uniout->value2 = 0;
			uniout->count = 0;
			return UNICOS_UTF16_SYNTAX_ERROR;
	}
}

/* big endian */

static int put_unicos_utf16be_manually_in0 (unsigned char character, unicos_utf16 *uniout){
	uniout->value1 = character;
	uniout->count++;
	return 0;
}

static inline int put_unicos_utf16be_manually_in1 (unsigned char character, unicos_utf16 *uniout){
	unico code = uniout->value1;
	code <<= 8;
	code |= character;
	if (is_bom_big_endian_utf16(code)){
		uniout->value1 = 0;
		uniout->count = 0;
		return UNICOS_UTF16_SYNTAX_ERROR;
	}
	if (is_bom_little_endian_utf16(code)){
		uniout->value1 = 0;
		uniout->count = 0;
		return UNICOS_UTF16_SYNTAX_ERROR;
	}
	if (is_high_surrogate_utf16(code)){
		uniout->value1 = code;
		uniout->count++;
		return 0;
	}
	else {
		int status = put_unicos_manually(code, (unicos*)uniout);
		if (status == UNICOS_NOT_ENOUGH_MEMORY)
			return UNICOS_NOT_ENOUGH_MEMORY;
		uniout->value1 = 0;
		uniout->count = 0;
		return 0;
	}
}

static int put_unicos_utf16be_manually_in2 (unsigned char character, unicos_utf16 *uniout){
	uniout->value2 = character;
	uniout->count++;
	return 0;
}

static int put_unicos_utf16be_manually_in3 (unsigned char character, unicos_utf16 *uniout){
	unico code = uniout->value2;
	code <<= 8;
	code |= character;
	if (is_low_surrogate_utf16(code)){
		unico decoded = decode_surrogate_utf16(uniout->value1, code);
		int status = put_unicos_manually(decoded, (unicos*)uniout);
		if (status == UNICOS_NOT_ENOUGH_MEMORY)
			return UNICOS_NOT_ENOUGH_MEMORY;
		else {
			uniout->value1 = 0;
			uniout->value2 = 0;
			uniout->count = 0;
			return 0;
		}
	}
	else {
		uniout->value1 = 0;
		uniout->value2 = 0;
		uniout->count = 0;
		return UNICOS_UTF16_SYNTAX_ERROR;	
	}
}

static int put_unicos_utf16be_manually (unsigned char character, unicos_utf16 *uniout){
	switch (uniout->count){
		case 0: return put_unicos_utf16be_manually_in0(character, uniout);
		case 1: return put_unicos_utf16be_manually_in1(character, uniout);
		case 2: return put_unicos_utf16be_manually_in2(character, uniout);
		case 3: return put_unicos_utf16be_manually_in3(character, uniout);
		default: return UNICOS_UTF16_SYNTAX_ERROR;
	}
}

/* little endian */

static int put_unicos_utf16le_manually_in0 (unsigned char character, unicos_utf16 *uniout){
	uniout->value1 = character;
	uniout->count++;
	return 0;
}

static int put_unicos_utf16le_manually_in1 (unsigned char character, unicos_utf16 *uniout){
	unico code = uniout->value1;
	code |= character << 8;
	if (is_bom_big_endian_utf16(code)){
		uniout->value1 = 0;
		uniout->count = 0;
		return UNICOS_UTF16_SYNTAX_ERROR;
	}
	if (is_bom_little_endian_utf16(code)){
		uniout->value1 = 0;
		uniout->count = 0;
		return UNICOS_UTF16_SYNTAX_ERROR;
	}
	if (is_high_surrogate_utf16(code)){
		uniout->value1 = code;
		uniout->count++;
		return 0;
	}
	else {
		int status = put_unicos_manually(code, (unicos*)uniout);
		if (status == UNICOS_NOT_ENOUGH_MEMORY)
			return UNICOS_NOT_ENOUGH_MEMORY;
		uniout->value1 = 0;
		uniout->count = 0;
		return 0;
	}
}

static int put_unicos_utf16le_manually_in2 (unsigned char character, unicos_utf16 *uniout){
	uniout->value2 = character;
	uniout->count++;
	return 0;
}

static int put_unicos_utf16le_manually_in3 (unsigned char character, unicos_utf16 *uniout){
	unico code = uniout->value1;
	code |= character << 8;
	if (is_low_surrogate_utf16(code)){
		unico decoded = decode_surrogate_utf16(uniout->value1, code);
		int status = put_unicos_manually(decoded, (unicos*)uniout);
		if (status == UNICOS_NOT_ENOUGH_MEMORY)
			return UNICOS_NOT_ENOUGH_MEMORY;
		uniout->value1 = 0;
		uniout->value2 = 0;
		uniout->count = 0;
		return 0;
	}
	else {
		uniout->value1 = 0;
		uniout->value2 = 0;
		uniout->count = 0;
		return UNICOS_UTF16_SYNTAX_ERROR;
	}
}

static int put_unicos_utf16le_manually (unsigned char character, unicos_utf16 *uniout){
	switch (uniout->count){
		case 0: return put_unicos_utf16le_manually_in0(character, uniout);
		case 1: return put_unicos_utf16le_manually_in1(character, uniout);
		case 2: return put_unicos_utf16le_manually_in2(character, uniout);
		case 3: return put_unicos_utf16le_manually_in3(character, uniout);
		default: return UNICOS_UTF16_SYNTAX_ERROR;
	}
}

/* export routine */

int put_unicos_utf16_manually (unsigned char character, unicos_utf16 *uniout){
	switch (uniout->endian){
		case UNICOS_UTF16_BIG_ENDIAN:
			return put_unicos_utf16be_manually(character, uniout);
		case UNICOS_UTF16_LITTLE_ENDIAN:
			return put_unicos_utf16le_manually(character, uniout);
		case UNICOS_UTF16_BOM_ENDIAN:
			if (size_unicos((unicos*)uniout) == 0)
				return put_unicos_utf16bom_manually(character, uniout);
			return 1;
	}
}
