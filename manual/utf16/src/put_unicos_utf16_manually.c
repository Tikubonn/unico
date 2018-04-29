#include <unico.h>
#include "unicos_utf16_utilities.h"

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
			return 1;
	}
}

static int put_unicos_utf16be_manually (unsigned char character, unicos_utf16 *uniout){
	switch (uniout->count){
		case 0:
			uniout->value1 <<= 8;
			uniout->value1 |= character;
			uniout->count++;
			return 0;
		case 1:
			uniout->value1 <<= 8;
			uniout->value1 |= character;
			uniout->count++;
			/* found bom */
			if (is_bom_big_endian_utf16(uniout->value1)){
				uniout->value1 = 0;
				uniout->count = 0;
				return 1;
			}
			/* found bom */
			if (is_bom_little_endian_utf16(uniout->value1)){
				uniout->value1 = 0;
				uniout->count = 0;
				return 1;
			}
			/* found high surrogate */
			if (!is_high_surrogate_utf16(uniout->value1)){
				put_unicos_manually(uniout->value1, (unicos*)uniout);
				uniout->value1 = 0;
				uniout->count = 0;
				return 0;
			}
			return 0;
		case 2:
			uniout->value2 <<= 8;
			uniout->value2 |= character;
			uniout->count++;
			return 0;
		case 3:
			uniout->value2 <<= 8;
			uniout->value2 |= character;
			uniout->count++;
			if (is_low_surrogate_utf16(uniout->value1)){
				unico uni = decode_surrogate_utf16(uniout->value1, uniout->value2);
				put_unicos_manually(uni, (unicos*)uniout);
				uniout->value1 = 0;
				uniout->value2 = 0;
				uniout->count = 0;
				return 0;
			}
			uniout->value1 = 0;
			uniout->value2 = 0;
			uniout->count = 0;
			return 1;
		default:
			return 1;
	}
}

static int put_unicos_utf16le_manually (unsigned char character, unicos_utf16 *uniout){
	switch (uniout->count){
		case 0:
			uniout->value1 = character;
			uniout->count++;
			return 0;
		case 1:
			uniout->value1 |= character << 8;
			uniout->count++;
			/* found bom */
			if (is_bom_big_endian_utf16(uniout->value1)){
				uniout->value1 = 0;
				uniout->count = 0;
				return 1;
			}
			/* found bom */
			if (is_bom_little_endian_utf16(uniout->value1)){
				uniout->value1 = 0;
				uniout->count = 0;
				return 1;
			}
			/* found high surrogate */
			if (!is_high_surrogate_utf16(uniout->value1)){
				put_unicos_manually(uniout->value1, (unicos*)uniout);
				uniout->value1 = 0;
				uniout->count = 0;
				return 0;
			}
			return 1;
		case 2:
			uniout->value2 = character;
			uniout->count++;
			return 0;
		case 3:
			uniout->value2 |= character << 8;
			uniout->count++;
			if (is_low_surrogate_utf16(uniout->value1)){
				unico uni = decode_surrogate_utf16(uniout->value1, uniout->value2);
				put_unicos_manually(uni, (unicos*)uniout);
				uniout->value1 = 0;
				uniout->value2 = 0;
				uniout->count = 0;
				return 0;
			}
			uniout->value1 = 0;
			uniout->value2 = 0;
			uniout->count = 0;
			return 1;
		default:
			return 1;
	}
}

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
