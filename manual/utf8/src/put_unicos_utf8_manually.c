#include <unico.h>
#include "unicos_utf8_utilities.h"

int put_unicos_utf8_manually (unsigned char character, unicos_utf8 *uniout){
	
	/* first character */
	
	if (uniout->count == 0){
		int count = size_of_utf8(character);
		int value = value_of_utf8(character);
		if (count == -1){
			uniout->count = 0;
			uniout->value = 0;
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		if (count == 0){
			int status = put_unicos_manually(value, (unicos*)uniout);
			if (status == UNICOS_NOT_ENOUGH_MEMORY){
				return UNICOS_NOT_ENOUGH_MEMORY;
			}
			else {
				uniout->count = 0;
				uniout->value = 0;
				return 0;
			}
		}
		uniout->count = count;
		uniout->value = value;
		return 0;
	}
	
	/* concatenated character */
	
	else {
		if (!is_concatenated_utf8(character)){
			uniout->count = 0;
			uniout->value = 0;
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		if (uniout->count == 1){
			int value = value_of_utf8(character);
			int width = width_of_utf8(character);
			unico code = uniout->value;
			code <<= width;
			code |= value;
			
			/* bom */
			
			if (code == 0xfeff){ // 0xefdddf
				if (size_unicos((unicos*)uniout) || uniout->bom){
					uniout->count = 0;
					uniout->value = 0;
					return UNICOS_UTF8_SYNTAX_ERROR;
				}
				uniout->bom = 1;
				uniout->count = 0;
				uniout->value = 0;
				return 0;
			}
			
			/* otherwise */
			
			else {
				int status = put_unicos_manually(code, (unicos*)uniout);
				if (status == UNICOS_NOT_ENOUGH_MEMORY){
					return UNICOS_NOT_ENOUGH_MEMORY;
				}
				else {
					uniout->count = 0;
					uniout->value = 0;
					return 0;
				}
			}
		}
		else {
			int value = value_of_utf8(character);
			int width = width_of_utf8(character);
			uniout->count--;
			uniout->value <<= width;
			uniout->value |= value;
			return 0;
		}
	}
}

/* int put_unicos_utf8_manually (unsigned char character, unicos_utf8 *uniout){
	if (uniout->count == 0){
		int count = size_of_utf8(character);
		int value = value_of_utf8(character);
		if (count == -1){
			uniout->count = 0;
			uniout->value = 0;
			return UNICOS_UTF8_SYNTAX_ERROR;
		}
		uniout->count = count;
		uniout->value = value;
		if (uniout->count == 0){
			int status = put_unicos_manually(uniout->value, (unicos*)uniout);
			return status;
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
				if (size_unicos((unicos*)uniout) || uniout->bom){
					uniout->count = 0;
					uniout->value = 0;
					return UNICOS_UTF8_SYNTAX_ERROR;
				}
				uniout->bom = 1;
				return 0;
			}
			return put_unicos_manually(uniout->value, (unicos*)uniout);
		}
		return 0;
	}
} */
