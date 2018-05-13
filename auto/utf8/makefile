
all:
	make utf8.lib

update:
	
clean:
	rm -f utf8.lib
	rm -f compiled/put_unicop_utf8.o
	rm -f compiled/put_unicob_as_utf8.o
	rm -f compiled/put_bom_unicob_as_utf8.o
	rm -f compiled/make_unicos_from_utf8_array.o
	rm -f compiled/make_unicos_from_utf8_string.o

utf8.lib: compiled/put_unicop_utf8.o compiled/put_unicob_as_utf8.o compiled/put_bom_unicob_as_utf8.o compiled/make_unicos_from_utf8_array.o compiled/make_unicos_from_utf8_string.o
	ar r utf8.lib compiled/put_unicop_utf8.o compiled/put_unicob_as_utf8.o compiled/put_bom_unicob_as_utf8.o compiled/make_unicos_from_utf8_array.o compiled/make_unicos_from_utf8_string.o

compiled/put_unicop_utf8.o: src/put_unicop_utf8.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf8.c -o compiled/put_unicop_utf8.o

compiled/put_unicob_as_utf8.o: src/put_unicob_as_utf8.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf8.c -o compiled/put_unicob_as_utf8.o

compiled/put_bom_unicob_as_utf8.o: src/put_bom_unicob_as_utf8.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf8.c -o compiled/put_bom_unicob_as_utf8.o

compiled/make_unicos_from_utf8_array.o: src/make_unicos_from_utf8_array.c
	$(CC) $(CFLAGS) -c src/make_unicos_from_utf8_array.c -o compiled/make_unicos_from_utf8_array.o

compiled/make_unicos_from_utf8_string.o: src/make_unicos_from_utf8_string.c
	$(CC) $(CFLAGS) -c src/make_unicos_from_utf8_string.c -o compiled/make_unicos_from_utf8_string.o
