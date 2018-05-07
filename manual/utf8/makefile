
all:
	make utf8.lib

clean:
	rm -f utf8.lib
	rm -f compiled/init_unicop_utf8.o
	rm -f compiled/utilities_unicop_utf8.o
	rm -f compiled/put_unicop_utf8_manually.o
	rm -f compiled/put_unicob_as_utf8_manually.o
	rm -f compiled/put_bom_unicob_as_utf8_manually.o

utf8.lib: compiled/init_unicop_utf8.o compiled/utilities_unicop_utf8.o compiled/put_unicop_utf8_manually.o compiled/put_unicob_as_utf8_manually.o compiled/put_bom_unicob_as_utf8_manually.o
	ar r utf8.lib compiled/init_unicop_utf8.o compiled/utilities_unicop_utf8.o compiled/put_unicop_utf8_manually.o compiled/put_unicob_as_utf8_manually.o compiled/put_bom_unicob_as_utf8_manually.o

compiled/init_unicop_utf8.o: src/init_unicop_utf8.c
	$(CC) $(CFLAGS) -c src/init_unicop_utf8.c -o compiled/init_unicop_utf8.o

compiled/utilities_unicop_utf8.o: src/utilities_unicop_utf8.c
	$(CC) $(CFLAGS) -c src/utilities_unicop_utf8.c -o compiled/utilities_unicop_utf8.o

compiled/put_unicop_utf8_manually.o: src/put_unicop_utf8_manually.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf8_manually.c -o compiled/put_unicop_utf8_manually.o

compiled/put_unicob_as_utf8_manually.o: src/put_unicob_as_utf8_manually.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf8_manually.c -o compiled/put_unicob_as_utf8_manually.o

compiled/put_bom_unicob_as_utf8_manually.o: src/put_bom_unicob_as_utf8_manually.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf8_manually.c -o compiled/put_bom_unicob_as_utf8_manually.o
