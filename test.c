#include <unico.h>
#include <stdio.h>
#include <stdlib.h>

int main (){

	/* utf8 */
	
	{
		make_tmp_unicos_utf8(uni, 1024);
		FILE *stream = fopen("test/test-utf8n.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf8_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	{
		make_tmp_unicos_utf8(uni, 1024);
		FILE *stream = fopen("test/test-utf8.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf8_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	/* utf16 */
	
	{
		make_tmp_unicos_utf16(uni, 1024, UNICOS_UTF16_BOM_ENDIAN);
		FILE *stream = fopen("test/test-utf16.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf16_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}

	{
		make_tmp_unicos_utf16(uni, 1024, UNICOS_UTF16_BOM_ENDIAN);
		FILE *stream = fopen("test/test-utf16-2.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf16_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	{
		make_tmp_unicos_utf16(uni, 1024, UNICOS_UTF16_BIG_ENDIAN);
		FILE *stream = fopen("test/test-utf16be.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf16_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	{
		make_tmp_unicos_utf16(uni, 1024, UNICOS_UTF16_LITTLE_ENDIAN);
		FILE *stream = fopen("test/test-utf16le.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf16_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	/* utf32 */
	
	{
		make_tmp_unicos_utf32(uni, 1024, UNICOS_UTF32_BOM_ENDIAN);
		FILE *stream = fopen("test/test-utf32.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf32_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}

	{
		make_tmp_unicos_utf32(uni, 1024, UNICOS_UTF32_BOM_ENDIAN);
		FILE *stream = fopen("test/test-utf32-2.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf32_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	{
		make_tmp_unicos_utf32(uni, 1024, UNICOS_UTF32_BIG_ENDIAN);
		FILE *stream = fopen("test/test-utf32be.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf32_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	{
		make_tmp_unicos_utf32(uni, 1024, UNICOS_UTF32_LITTLE_ENDIAN);
		FILE *stream = fopen("test/test-utf32le.txt", "r");
		int character;
		while ((character = fgetc(stream)) != EOF)
			put_unicos_utf32_manually(character, uni);
		fclose(stream);
		print_unicos_as_utf8_ln((unicos*)uni, stdout);
	}
	
	return 0;
}
