
all:
	make utf16.lib

update:

clean:
	rm -f utf16.lib
	rm -f compiled/init_unicop_utf16.o
	rm -f compiled/utilities_unicop_utf16.o
	rm -f compiled/put_unicop_utf16_manually.o
	rm -f compiled/put_unicob_as_utf16_manually.o
	rm -f compiled/put_bom_unicob_as_utf16_manually.o
	rm -f compiled/load_unicos_from_utf16_array.o

utf16.lib: compiled/init_unicop_utf16.o compiled/utilities_unicop_utf16.o compiled/put_unicop_utf16_manually.o compiled/put_unicob_as_utf16_manually.o compiled/put_bom_unicob_as_utf16_manually.o compiled/load_unicos_from_utf16_array.o
	ar r utf16.lib compiled/init_unicop_utf16.o compiled/utilities_unicop_utf16.o compiled/put_unicop_utf16_manually.o compiled/put_unicob_as_utf16_manually.o compiled/put_bom_unicob_as_utf16_manually.o compiled/load_unicos_from_utf16_array.o

compiled/init_unicop_utf16.o: src/init_unicop_utf16.c
	$(CC) $(CFLAGS) -c src/init_unicop_utf16.c -o compiled/init_unicop_utf16.o

compiled/utilities_unicop_utf16.o: src/utilities_unicop_utf16.c
	$(CC) $(CFLAGS) -c src/utilities_unicop_utf16.c -o compiled/utilities_unicop_utf16.o

compiled/put_unicop_utf16_manually.o: src/put_unicop_utf16_manually.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf16_manually.c -o compiled/put_unicop_utf16_manually.o

compiled/put_unicob_as_utf16_manually.o: src/put_unicob_as_utf16_manually.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf16_manually.c -o compiled/put_unicob_as_utf16_manually.o

compiled/put_bom_unicob_as_utf16_manually.o: src/put_bom_unicob_as_utf16_manually.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf16_manually.c -o compiled/put_bom_unicob_as_utf16_manually.o

compiled/load_unicos_from_utf16_array.o: src/load_unicos_from_utf16_array.c
	$(CC) $(CFLAGS) -c src/load_unicos_from_utf16_array.c -o compiled/load_unicos_from_utf16_array.o
