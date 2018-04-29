
all:
	make utf8.lib 
	
clean:
	rm -f utf8.lib 
	rm -f compiled/make_unicos_utf8.o
	rm -f compiled/free_unicos_utf8.o
	rm -f compiled/copy_unicos_utf8.o
	rm -f compiled/put_unicos_utf8.o

utf8.lib: compiled/make_unicos_utf8.o compiled/free_unicos_utf8.o compiled/copy_unicos_utf8.o compiled/put_unicos_utf8.o
	ar r utf8.lib compiled/make_unicos_utf8.o compiled/free_unicos_utf8.o compiled/copy_unicos_utf8.o compiled/put_unicos_utf8.o

compiled/make_unicos_utf8.o: src/make_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/make_unicos_utf8.c -o compiled/make_unicos_utf8.o

compiled/free_unicos_utf8.o: src/free_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/free_unicos_utf8.c -o compiled/free_unicos_utf8.o

compiled/copy_unicos_utf8.o: src/copy_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/copy_unicos_utf8.c -o compiled/copy_unicos_utf8.o

compiled/put_unicos_utf8.o: src/put_unicos_utf8.c
	$(CC) $(CFLAGS) -c src/put_unicos_utf8.c -o compiled/put_unicos_utf8.o
