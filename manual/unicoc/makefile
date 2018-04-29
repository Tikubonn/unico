
all:
	make unicoc.lib
	
clean:
	rm -f unicoc.lib
	rm -f compiled/init_unicoc.o
	rm -f compiled/clear_unicoc.o
	rm -f compiled/get_unicoc.o
	rm -f compiled/put_unicoc_manually.o
	rm -f compiled/has_margin_unicoc.o
	rm -f compiled/size_unicoc.o
	rm -f compiled/copy_unicoc_manually.o
	rm -f compiled/write_unicoc_manually.o
	rm -f compiled/copy_to_unicoc.o
	
unicoc.lib: compiled/init_unicoc.o compiled/clear_unicoc.o compiled/get_unicoc.o compiled/put_unicoc_manually.o compiled/has_margin_unicoc.o compiled/size_unicoc.o compiled/copy_unicoc_manually.o compiled/write_unicoc_manually.o compiled/copy_to_unicoc.o
	ar r unicoc.lib compiled/init_unicoc.o compiled/clear_unicoc.o compiled/get_unicoc.o compiled/put_unicoc_manually.o compiled/has_margin_unicoc.o compiled/size_unicoc.o compiled/copy_unicoc_manually.o compiled/write_unicoc_manually.o compiled/copy_to_unicoc.o

compiled/init_unicoc.o: src/init_unicoc.c
	$(CC) $(CFLAGS) -c src/init_unicoc.c -o compiled/init_unicoc.o
	
compiled/clear_unicoc.o: src/clear_unicoc.c
	$(CC) $(CFLAGS) -c src/clear_unicoc.c -o compiled/clear_unicoc.o
	
compiled/get_unicoc.o: src/get_unicoc.c
	$(CC) $(CFLAGS) -c src/get_unicoc.c -o compiled/get_unicoc.o
	
compiled/put_unicoc_manually.o: src/put_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/put_unicoc_manually.c -o compiled/put_unicoc_manually.o
	
compiled/has_margin_unicoc.o: src/has_margin_unicoc.c
	$(CC) $(CFLAGS) -c src/has_margin_unicoc.c -o compiled/has_margin_unicoc.o
	
compiled/size_unicoc.o: src/size_unicoc.c
	$(CC) $(CFLAGS) -c src/size_unicoc.c -o compiled/size_unicoc.o

compiled/copy_unicoc_manually.o: src/copy_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/copy_unicoc_manually.c -o compiled/copy_unicoc_manually.o

compiled/write_unicoc_manually.o: src/write_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/write_unicoc_manually.c -o compiled/write_unicoc_manually.o

compiled/copy_to_unicoc.o: src/copy_to_unicoc.c
	$(CC) $(CFLAGS) -c src/copy_to_unicoc.c -o compiled/copy_to_unicoc.o
