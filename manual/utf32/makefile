
all:
	make utf32.lib
	
clean:
	rm -f utf32.lib 
	rm -f compiled/init_unicos_utf32.o
	rm -f compiled/put_unicos_utf32_manually.o
	rm -f compiled/put_unicoc_as_utf32.o
	rm -f compiled/put_bom_unicoc_as_utf32.o
	rm -f compiled/copy_unicos_utf32_manually.o
	rm -f compiled/reset_unicos_utf32.o
	rm -f compiled/clear_unicos_utf32.o

utf32.lib: compiled/init_unicos_utf32.o compiled/put_unicos_utf32_manually.o compiled/put_unicoc_as_utf32.o compiled/put_bom_unicoc_as_utf32.o compiled/copy_unicos_utf32_manually.o compiled/reset_unicos_utf32.o compiled/clear_unicos_utf32.o
	ar r utf32.lib compiled/init_unicos_utf32.o compiled/put_unicos_utf32_manually.o compiled/put_unicoc_as_utf32.o compiled/put_bom_unicoc_as_utf32.o compiled/copy_unicos_utf32_manually.o compiled/reset_unicos_utf32.o compiled/clear_unicos_utf32.o

compiled/init_unicos_utf32.o: src/init_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/init_unicos_utf32.c -o compiled/init_unicos_utf32.o

compiled/put_unicos_utf32_manually.o: src/put_unicos_utf32_manually.c
	$(CC) $(CFLAGS) -c src/put_unicos_utf32_manually.c -o compiled/put_unicos_utf32_manually.o

compiled/put_unicoc_as_utf32.o: src/put_unicoc_as_utf32.c
	$(CC) $(CFLAGS) -c src/put_unicoc_as_utf32.c -o compiled/put_unicoc_as_utf32.o

compiled/put_bom_unicoc_as_utf32.o: src/put_bom_unicoc_as_utf32.c
	$(CC) $(CFLAGS) -c src/put_bom_unicoc_as_utf32.c -o compiled/put_bom_unicoc_as_utf32.o

compiled/copy_unicos_utf32_manually.o: src/copy_unicos_utf32_manually.c
	$(CC) $(CFLAGS) -c src/copy_unicos_utf32_manually.c -o compiled/copy_unicos_utf32_manually.o

compiled/reset_unicos_utf32.o: src/reset_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/reset_unicos_utf32.c -o compiled/reset_unicos_utf32.o

compiled/clear_unicos_utf32.o: src/clear_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/clear_unicos_utf32.c -o compiled/clear_unicos_utf32.o
