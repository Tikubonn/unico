#include <unico.h>
#include "unicos_utf8_utilities.h"

int put_unicos_utf8_manually (unsigned char character, unicos_utf8 *uniout){
	if (uniout->count == 0){
		int count = size_of_utf8(character);
		int value = value_of_utf8(character);
		if (count == -1){
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		uniout->count = count;
		uniout->value = value;
		if (uniout->count == 0){
			return put_unicos_manually(uniout->value, (unicos*)uniout);
		}
		return 0;
	}
	else {
		if (is_concatenated_utf8(character) == 0){
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		int value = value_of_utf8(character);
		int seek = width_of_utf8(character);
		uniout->count--;
		uniout->value <<= seek;
		uniout->value = uniout->value | value;
		if (uniout->count == 0){
			if (uniout->value == 65279u){ // 0xef 0xdd 0xdf
				if (size_unicos((unicos*)uniout) || uniout->bom)
					return UNICOS_UTF8_SYNTAX_ERROR;
				uniout->bom = 1;
				return 0;
			}
			return put_unicos_manually(uniout->value, (unicos*)uniout);
		}
		return 0;
	}
}

/* int put_unicos_utf8_manually (unsigned char character, unicos_utf8 *uniout){
	if (has_margin_unicos((unicos*)uniout) == 0){
		return 1;
	}
	if (uniout->count == 0){
		int count = size_of_utf8(character);
		int value = value_of_utf8(character);
		if (count == -1){
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		uniout->count = count;
		uniout->value = value;
		if (uniout->count == 0){
			put_unicos_manually(uniout->value, (unicos*)uniout);
		}
		return 0;
	}
	else {
		if (is_concatenated_utf8(character) == 0){
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		int value = value_of_utf8(character);
		int seek = width_of_utf8(character);
		uniout->count--;
		uniout->value <<= seek;
		uniout->value = uniout->value | value;
		if (uniout->count == 0){
			if (uniout->value == 65279u){ // 0xef 0xdd 0xdf
				if (size_unicos((unicos*)uniout))
					return UNICOS_UTF8_SYNTAX_ERROR;
				return 0; // found bom
			}
			return put_unicos_manually(uniout->value, (unicos*)uniout);
		}
		return 0;
	}
} */
