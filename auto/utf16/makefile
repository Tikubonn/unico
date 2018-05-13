
all:
	make utf16.lib

update:

clean:
	rm -f utf16.lib
	rm -f compiled/put_unicop_utf16.o
	rm -f compiled/put_unicob_as_utf16.o
	rm -f compiled/put_bom_unicob_as_utf16.o
	rm -f compiled/make_unicos_from_utf16_array.o

utf16.lib: compiled/put_unicop_utf16.o compiled/put_unicob_as_utf16.o compiled/put_bom_unicob_as_utf16.o
	ar r utf16.lib compiled/put_unicop_utf16.o compiled/put_unicob_as_utf16.o compiled/put_bom_unicob_as_utf16.o

compiled/put_unicop_utf16.o: src/put_unicop_utf16.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf16.c -o compiled/put_unicop_utf16.o

compiled/put_unicob_as_utf16.o: src/put_unicob_as_utf16.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf16.c -o compiled/put_unicob_as_utf16.o

compiled/put_bom_unicob_as_utf16.o: src/put_bom_unicob_as_utf16.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf16.c -o compiled/put_bom_unicob_as_utf16.o

compiled/make_unicos_from_utf16_array.o: src/make_unicos_from_utf16_array.c
	$(CC) $(CFLAGS) -c src/make_unicos_from_utf16_array.c -o compiled/make_unicos_from_utf16_array.o
