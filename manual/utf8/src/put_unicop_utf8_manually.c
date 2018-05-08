#include <unico.h>

int put_unicop_utf8_manually (unsigned char character, unicop_utf8 *uniout){
  if (uniout->count == 0){
    int value = value_of_char_unicop_utf8(character);
    int count = size_of_char_unicop_utf8(character);
    if (count == -1){
      return UNICOP_UTF8_SYNTAX_ERROR;
    }
    if (count == 1){
      return insert_unicos_manually(value, -1, uniout->unicos);
    }
    else {
      uniout->count = count -1;
      uniout->code = value;
      return 0;
    }
  }
  if (uniout->count == 1){
    if (is_continuation_char_unicop_utf8(character)){
      int value = value_of_char_unicop_utf8(character);
      int width = width_of_char_unicop_utf8(character);
      int code = (uniout->code << width) | value;
      if (is_bom_unicode_unicop_utf8(code)){
        if (size_unicos(uniout->unicos) || uniout->bom)
          return UNICOP_UTF8_SYNTAX_ERROR;
        uniout->bom = 1;
        uniout->code = 0;
        uniout->count = 0;
        return 0;
      }
      else {
        int status = insert_unicos_manually(code, -1, uniout->unicos);
        if (status) return status;
        uniout->code = 0;
        uniout->count = 0;
        return 0;
      }
    }
    return UNICOP_UTF8_SYNTAX_ERROR;
  }
  else {
    if (is_continuation_char_unicop_utf8(character)){
      int value = value_of_char_unicop_utf8(character);
      int width = width_of_char_unicop_utf8(character);
      int code = (uniout->code << width) | value;
      uniout->code = code;
      uniout->count --;
      return 0;
    }
    return UNICOP_UTF8_SYNTAX_ERROR;
  }
}
