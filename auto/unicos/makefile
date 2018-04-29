
all:
	make unicos.lib 
	
clean:
	rm -f unicos.lib
	rm -f compiled/make_unicos.o
	rm -f compiled/free_unicos.o
	rm -f compiled/copy_unicos.o
	rm -f compiled/extend_unicos.o
	rm -f compiled/put_unicos.o

unicos.lib: compiled/make_unicos.o compiled/free_unicos.o compiled/copy_unicos.o compiled/extend_unicos.o  compiled/put_unicos.o
	ar r unicos.lib compiled/make_unicos.o compiled/free_unicos.o compiled/copy_unicos.o compiled/extend_unicos.o  compiled/put_unicos.o

compiled/make_unicos.o: src/make_unicos.c
	$(CC) $(CFLAGS) -c src/make_unicos.c -o compiled/make_unicos.o
	
compiled/free_unicos.o: src/free_unicos.c
	$(CC) $(CFLAGS) -c src/free_unicos.c -o compiled/free_unicos.o
	
compiled/copy_unicos.o: src/copy_unicos.c
	$(CC) $(CFLAGS) -c src/copy_unicos.c -o compiled/copy_unicos.o
	
compiled/extend_unicos.o: src/extend_unicos.c
	$(CC) $(CFLAGS) -c src/extend_unicos.c -o compiled/extend_unicos.o
	
compiled/put_unicos.o: src/put_unicos.c
	$(CC) $(CFLAGS) -c src/put_unicos.c -o compiled/put_unicos.o
