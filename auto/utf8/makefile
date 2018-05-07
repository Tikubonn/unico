
all:
	make utf8.lib
	
clean:
	rm -f utf8.lib
	rm -f compiled/put_unicop_utf8.o
	rm -f compiled/put_unicob_as_utf8.o
	rm -f compiled/put_bom_unicob_as_utf8.o

utf8.lib: compiled/put_unicop_utf8.o compiled/put_unicob_as_utf8.o compiled/put_bom_unicob_as_utf8.o
	ar r utf8.lib compiled/put_unicop_utf8.o compiled/put_unicob_as_utf8.o compiled/put_bom_unicob_as_utf8.o

compiled/put_unicop_utf8.o: src/put_unicop_utf8.c
	$(CC) $(CFLAGS) -c src/put_unicop_utf8.c -o compiled/put_unicop_utf8.o

compiled/put_unicob_as_utf8.o: src/put_unicob_as_utf8.c
	$(CC) $(CFLAGS) -c src/put_unicob_as_utf8.c -o compiled/put_unicob_as_utf8.o

compiled/put_bom_unicob_as_utf8.o: src/put_bom_unicob_as_utf8.c
	$(CC) $(CFLAGS) -c src/put_bom_unicob_as_utf8.c -o compiled/put_bom_unicob_as_utf8.o
