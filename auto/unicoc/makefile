
all:
	make unicoc.lib 
	
clean:
	rm -f unicoc.lib
	rm -f compiled/make_unicoc.o
	rm -f compiled/free_unicoc.o
	rm -f compiled/copy_unicoc.o
	rm -f compiled/extend_unicoc.o
	rm -f compiled/put_unicoc.o

unicoc.lib: compiled/make_unicoc.o compiled/free_unicoc.o compiled/copy_unicoc.o compiled/extend_unicoc.o  compiled/put_unicoc.o
	ar r unicoc.lib compiled/make_unicoc.o compiled/free_unicoc.o compiled/copy_unicoc.o compiled/extend_unicoc.o  compiled/put_unicoc.o

compiled/make_unicoc.o: src/make_unicoc.c
	$(CC) $(CFLAGS) -c src/make_unicoc.c -o compiled/make_unicoc.o
	
compiled/free_unicoc.o: src/free_unicoc.c
	$(CC) $(CFLAGS) -c src/free_unicoc.c -o compiled/free_unicoc.o
	
compiled/copy_unicoc.o: src/copy_unicoc.c
	$(CC) $(CFLAGS) -c src/copy_unicoc.c -o compiled/copy_unicoc.o
	
compiled/extend_unicoc.o: src/extend_unicoc.c
	$(CC) $(CFLAGS) -c src/extend_unicoc.c -o compiled/extend_unicoc.o
	
compiled/put_unicoc.o: src/put_unicoc.c
	$(CC) $(CFLAGS) -c src/put_unicoc.c -o compiled/put_unicoc.o
