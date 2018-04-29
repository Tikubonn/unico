
all:
	make utf16.lib 
	
clean:
	rm -f utf16.lib 
	rm -f compiled/make_unicos_utf16.o
	rm -f compiled/free_unicos_utf16.o
	rm -f compiled/copy_unicos_utf16.o
	rm -f compiled/put_unicos_utf16.o

utf16.lib: compiled/make_unicos_utf16.o compiled/free_unicos_utf16.o compiled/copy_unicos_utf16.o compiled/put_unicos_utf16.o
	ar r utf16.lib compiled/make_unicos_utf16.o compiled/free_unicos_utf16.o compiled/copy_unicos_utf16.o compiled/put_unicos_utf16.o

compiled/make_unicos_utf16.o: src/make_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/make_unicos_utf16.c -o compiled/make_unicos_utf16.o

compiled/free_unicos_utf16.o: src/free_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/free_unicos_utf16.c -o compiled/free_unicos_utf16.o

compiled/copy_unicos_utf16.o: src/copy_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/copy_unicos_utf16.c -o compiled/copy_unicos_utf16.o

compiled/put_unicos_utf16.o: src/put_unicos_utf16.c
	$(CC) $(CFLAGS) -c src/put_unicos_utf16.c -o compiled/put_unicos_utf16.o
