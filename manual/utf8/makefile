
all:
	make utf8.lib
	
clean:
	rm -f utf8.lib 
	rm -f compiled/init_unicos_utf8.o
	rm -f compiled/unicos_utf8_utilities.o
	rm -f compiled/put_unicos_utf8_manually.o
	rm -f compiled/put_unicoc_as_utf8.o
	rm -f compiled/put_bom_unicoc_as_utf8.o
	rm -f compiled/copy_unicos_utf8_manually.o
	rm -f compiled/reset_unicos_utf8.o
	rm -f compiled/clear_unicos_utf8.o

utf8.lib: compiled/init_unicos_utf8.o compiled/unicos_utf8_utilities.o compiled/put_unicos_utf8_manually.o compiled/put_unicoc_as_utf8.o compiled/put_bom_unicoc_as_utf8.o compiled/copy_unicos_utf8_manually.o compiled/reset_unicos_utf8.o compiled/clear_unicos_utf8.o
	ar r utf8.lib compiled/init_unicos_utf8.o compiled/unicos_utf8_utilities.o compiled/put_unicos_utf8_manually.o compiled/put_unicoc_as_utf8.o compiled/put_bom_unicoc_as_utf8.o compiled/copy_unicos_utf8_manually.o compiled/reset_unicos_utf8.o compiled/clear_unicos_utf8.o

compiled/init_unicos_utf8.o: src/init_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/init_unicos_utf8.c -o compiled/init_unicos_utf8.o

compiled/unicos_utf8_utilities.o: src/unicos_utf8_utilities.c
	$(CC) $(CFLAGS) -c src/unicos_utf8_utilities.c -o compiled/unicos_utf8_utilities.o

compiled/put_unicos_utf8_manually.o: src/put_unicos_utf8_manually.c
	$(CC) $(CFLAGS) -c src/put_unicos_utf8_manually.c -o compiled/put_unicos_utf8_manually.o

compiled/put_unicoc_as_utf8.o: src/put_unicoc_as_utf8.c
	$(CC) $(CFLAGS) -c src/put_unicoc_as_utf8.c -o compiled/put_unicoc_as_utf8.o

compiled/put_bom_unicoc_as_utf8.o: src/put_bom_unicoc_as_utf8.c
	$(CC) $(CFLAGS) -c src/put_bom_unicoc_as_utf8.c -o compiled/put_bom_unicoc_as_utf8.o

compiled/copy_unicos_utf8_manually.o: src/copy_unicos_utf8_manually.c
	$(CC) $(CFLAGS) -c src/copy_unicos_utf8_manually.c -o compiled/copy_unicos_utf8_manually.o

compiled/reset_unicos_utf8.o: src/reset_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/reset_unicos_utf8.c -o compiled/reset_unicos_utf8.o

compiled/clear_unicos_utf8.o: src/clear_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/clear_unicos_utf8.c -o compiled/clear_unicos_utf8.o
