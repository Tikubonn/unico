
all:
	make debug.lib

update:

clean:
	rm -f debug.lib
	rm -f compiled/print_unicos_as_utf8.o
	rm -f compiled/print_unicos_as_utf16.o
	rm -f compiled/print_unicos_as_utf32.o

debug.lib: compiled/print_unicos_as_utf8.o compiled/print_unicos_as_utf16.o compiled/print_unicos_as_utf32.o
	ar r debug.lib compiled/print_unicos_as_utf8.o compiled/print_unicos_as_utf16.o compiled/print_unicos_as_utf32.o

compiled/print_unicos_as_utf8.o: src/print_unicos_as_utf8.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_utf8.c -o compiled/print_unicos_as_utf8.o

compiled/print_unicos_as_utf16.o: src/print_unicos_as_utf16.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_utf16.c -o compiled/print_unicos_as_utf16.o

compiled/print_unicos_as_utf32.o: src/print_unicos_as_utf32.c
	$(CC) $(CFLAGS) -c src/print_unicos_as_utf32.c -o compiled/print_unicos_as_utf32.o
