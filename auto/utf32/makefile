
all:
	make utf32.lib

update:
	
clean:
	rm -f utf32.lib
	rm -f compiled/put_unicop_utf32.o
	rm -f compiled/put_unicob_as_utf32.o
	rm -f compiled/put_bom_unicob_as_utf32.o
	rm -f compiled/make_unicos_from_utf32_array.o

utf32.lib: compiled/put_unicop_utf32.o compiled/put_unicob_as_utf32.o compiled/put_bom_unicob_as_utf32.o
	ar r utf32.lib compiled/put_unicop_utf32.o compiled/put_unicob_as_utf32.o compiled/put_bom_unicob_as_utf32.o

compiled/put_unicop_utf32.o: src/put_unicop_utf32.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf32.c -o compiled/put_unicop_utf32.o

compiled/put_unicob_as_utf32.o: src/put_unicob_as_utf32.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf32.c -o compiled/put_unicob_as_utf32.o

compiled/put_bom_unicob_as_utf32.o: src/put_bom_unicob_as_utf32.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf32.c -o compiled/put_bom_unicob_as_utf32.o

compiled/make_unicos_from_utf32_array.o: src/make_unicos_from_utf32_array.c
	$(CC) $(CFLAGS) -c src/make_unicos_from_utf32_array.c -o compiled/make_unicos_from_utf32_array.o
