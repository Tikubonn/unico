
all:
	make utf32.lib

update:

clean:
	rm -f utf32.lib
	rm -f compiled/init_unicop_utf32.o
	rm -f compiled/utilities_unicop_utf32.o
	rm -f compiled/put_unicop_utf32_manually.o
	rm -f compiled/put_unicob_as_utf32_manually.o
	rm -f compiled/put_bom_unicob_as_utf32_manually.o
	rm -f compiled/load_unicos_from_utf32_array.o

utf32.lib: compiled/init_unicop_utf32.o compiled/utilities_unicop_utf32.o compiled/put_unicop_utf32_manually.o compiled/put_unicob_as_utf32_manually.o compiled/put_bom_unicob_as_utf32_manually.o compiled/load_unicos_from_utf32_array.o
	ar r utf32.lib compiled/init_unicop_utf32.o compiled/utilities_unicop_utf32.o compiled/put_unicop_utf32_manually.o compiled/put_unicob_as_utf32_manually.o compiled/put_bom_unicob_as_utf32_manually.o compiled/load_unicos_from_utf32_array.o

compiled/init_unicop_utf32.o: src/init_unicop_utf32.c
	$(CC) $(CFLAGS) -c src/init_unicop_utf32.c -o compiled/init_unicop_utf32.o

compiled/utilities_unicop_utf32.o: src/utilities_unicop_utf32.c
	$(CC) $(CFLAGS) -c src/utilities_unicop_utf32.c -o compiled/utilities_unicop_utf32.o

compiled/put_unicop_utf32_manually.o: src/put_unicop_utf32_manually.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf32_manually.c -o compiled/put_unicop_utf32_manually.o

compiled/put_unicob_as_utf32_manually.o: src/put_unicob_as_utf32_manually.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf32_manually.c -o compiled/put_unicob_as_utf32_manually.o

compiled/put_bom_unicob_as_utf32_manually.o: src/put_bom_unicob_as_utf32_manually.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf32_manually.c -o compiled/put_bom_unicob_as_utf32_manually.o

compiled/load_unicos_from_utf32_array.o: src/load_unicos_from_utf32_array.c
	$(CC) $(CFLAGS) -c src/load_unicos_from_utf32_array.c -o compiled/load_unicos_from_utf32_array.o
