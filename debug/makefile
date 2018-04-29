
all:
	make debug.lib
	
clean:
	rm -f debug.lib 
	rm -f compiled/print_unicos_as_code_position.o 
	rm -f compiled/print_unicos_as_utf8.o
	rm -f compiled/print_unicos_as_utf16.o
	rm -f compiled/print_unicos_as_utf32.o
	rm -f compiled/print_unicoc_as_hexadecimal.o

debug.lib: compiled/print_unicos_as_code_position.o compiled/print_unicos_as_utf8.o compiled/print_unicos_as_utf16.o compiled/print_unicos_as_utf32.o compiled/print_unicoc_as_hexadecimal.o
	ar r debug.lib compiled/print_unicos_as_code_position.o compiled/print_unicos_as_utf8.o compiled/print_unicos_as_utf16.o compiled/print_unicos_as_utf32.o compiled/print_unicoc_as_hexadecimal.o

compiled/print_unicos_as_code_position.o: src/print_unicos_as_code_position.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_code_position.c -o compiled/print_unicos_as_code_position.o
	
compiled/print_unicos_as_utf8.o: src/print_unicos_as_utf8.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_utf8.c -o compiled/print_unicos_as_utf8.o

compiled/print_unicos_as_utf16.o: src/print_unicos_as_utf16.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_utf16.c -o compiled/print_unicos_as_utf16.o

compiled/print_unicos_as_utf32.o: src/print_unicos_as_utf32.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_utf32.c -o compiled/print_unicos_as_utf32.o

compiled/print_unicoc_as_hexadecimal.o: src/print_unicoc_as_hexadecimal.c
	$(CC) $(CFLAGS) -c src/print_unicoc_as_hexadecimal.c -o compiled/print_unicoc_as_hexadecimal.o
