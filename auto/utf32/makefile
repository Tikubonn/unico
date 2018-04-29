
all:
	make utf32.lib 
	
clean:
	rm -f utf32.lib 
	rm -f compiled/make_unicos_utf32.o
	rm -f compiled/free_unicos_utf32.o
	rm -f compiled/copy_unicos_utf32.o
	rm -f compiled/put_unicos_utf32.o

utf32.lib: compiled/make_unicos_utf32.o compiled/free_unicos_utf32.o compiled/copy_unicos_utf32.o compiled/put_unicos_utf32.o
	ar r utf32.lib compiled/make_unicos_utf32.o compiled/free_unicos_utf32.o compiled/copy_unicos_utf32.o compiled/put_unicos_utf32.o

compiled/make_unicos_utf32.o: src/make_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/make_unicos_utf32.c -o compiled/make_unicos_utf32.o

compiled/free_unicos_utf32.o: src/free_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/free_unicos_utf32.c -o compiled/free_unicos_utf32.o

compiled/copy_unicos_utf32.o: src/copy_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/copy_unicos_utf32.c -o compiled/copy_unicos_utf32.o

compiled/put_unicos_utf32.o: src/put_unicos_utf32.c
	$(CC) $(CFLAGS) -c src/put_unicos_utf32.c -o compiled/put_unicos_utf32.o
