
all:
	make utf16.lib
	
clean:
	rm -f utf16.lib 
	rm -f compiled/init_unicos_utf16.o
	rm -f compiled/unicos_utf16_utilities.o
	rm -f compiled/put_unicos_utf16_manually.o
	rm -f compiled/put_unicoc_as_utf16.o
	rm -f compiled/put_bom_unicoc_as_utf16.o
	rm -f compiled/copy_unicos_utf16_manually.o
	rm -f compiled/reset_unicos_utf16.o
	rm -f compiled/clear_unicos_utf16.o

utf16.lib: compiled/init_unicos_utf16.o compiled/unicos_utf16_utilities.o compiled/put_unicos_utf16_manually.o compiled/put_unicoc_as_utf16.o compiled/put_bom_unicoc_as_utf16.o compiled/copy_unicos_utf16_manually.o compiled/reset_unicos_utf16.o compiled/clear_unicos_utf16.o
	ar r utf16.lib compiled/init_unicos_utf16.o compiled/unicos_utf16_utilities.o compiled/put_unicos_utf16_manually.o compiled/put_unicoc_as_utf16.o compiled/put_bom_unicoc_as_utf16.o compiled/copy_unicos_utf16_manually.o compiled/reset_unicos_utf16.o compiled/clear_unicos_utf16.o

compiled/init_unicos_utf16.o: src/init_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/init_unicos_utf16.c -o compiled/init_unicos_utf16.o

compiled/unicos_utf16_utilities.o: src/unicos_utf16_utilities.c
	$(CC) $(CFLAGS) -c src/unicos_utf16_utilities.c -o compiled/unicos_utf16_utilities.o

compiled/put_unicos_utf16_manually.o: src/put_unicos_utf16_manually.c
	$(CC) $(CFLAGS) -c src/put_unicos_utf16_manually.c -o compiled/put_unicos_utf16_manually.o

compiled/put_unicoc_as_utf16.o: src/put_unicoc_as_utf16.c
	$(CC) $(CFLAGS) -c src/put_unicoc_as_utf16.c -o compiled/put_unicoc_as_utf16.o

compiled/put_bom_unicoc_as_utf16.o: src/put_bom_unicoc_as_utf16.c
	$(CC) $(CFLAGS) -c src/put_bom_unicoc_as_utf16.c -o compiled/put_bom_unicoc_as_utf16.o

compiled/copy_unicos_utf16_manually.o: src/copy_unicos_utf16_manually.c
	$(CC) $(CFLAGS) -c src/copy_unicos_utf16_manually.c -o compiled/copy_unicos_utf16_manually.o

compiled/reset_unicos_utf16.o: src/reset_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/reset_unicos_utf16.c -o compiled/reset_unicos_utf16.o

compiled/clear_unicos_utf16.o: src/clear_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/clear_unicos_utf16.c -o compiled/clear_unicos_utf16.o
