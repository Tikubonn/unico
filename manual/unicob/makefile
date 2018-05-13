
all:
	make unicob.lib
  
update:
	
clean:
	rm -f unicob.lib 
	rm -f compiled/init_unicob.o
	rm -f compiled/swap_unicob.o
	rm -f compiled/put_unicob_manually.o
	rm -f compiled/write_unicob_manually.o
	rm -f compiled/get_unicob.o
	rm -f compiled/size_unicob.o
	rm -f compiled/has_margin_unicob.o
	rm -f compiled/copy_unicob_manually.o
	rm -f compiled/clear_unicob.o

unicob.lib: compiled/init_unicob.o compiled/swap_unicob.o compiled/put_unicob_manually.o compiled/write_unicob_manually.o compiled/get_unicob.o compiled/size_unicob.o compiled/has_margin_unicob.o compiled/copy_unicob_manually.o compiled/clear_unicob.o
	ar r unicob.lib compiled/init_unicob.o compiled/swap_unicob.o compiled/put_unicob_manually.o compiled/write_unicob_manually.o compiled/get_unicob.o compiled/size_unicob.o compiled/has_margin_unicob.o compiled/copy_unicob_manually.o compiled/clear_unicob.o

compiled/init_unicob.o: src/init_unicob.c
	$(CC) $(CFLAGS) -c src/init_unicob.c -o compiled/init_unicob.o

compiled/swap_unicob.o: src/swap_unicob.c
	$(CC) $(CFLAGS) -c src/swap_unicob.c -o compiled/swap_unicob.o

compiled/put_unicob_manually.o: src/put_unicob_manually.c
	$(CC) $(CFLAGS) -c src/put_unicob_manually.c -o compiled/put_unicob_manually.o

compiled/write_unicob_manually.o: src/write_unicob_manually.c
	$(CC) $(CFLAGS) -c src/write_unicob_manually.c -o compiled/write_unicob_manually.o

compiled/get_unicob.o: src/get_unicob.c
	$(CC) $(CFLAGS) -c src/get_unicob.c -o compiled/get_unicob.o

compiled/size_unicob.o: src/size_unicob.c
	$(CC) $(CFLAGS) -c src/size_unicob.c -o compiled/size_unicob.o

compiled/has_margin_unicob.o: src/has_margin_unicob.c
	$(CC) $(CFLAGS) -c src/has_margin_unicob.c -o compiled/has_margin_unicob.o

compiled/copy_unicob_manually.o: src/copy_unicob_manually.c
	$(CC) $(CFLAGS) -c src/copy_unicob_manually.c -o compiled/copy_unicob_manually.o

compiled/clear_unicob.o: src/clear_unicob.c
	$(CC) $(CFLAGS) -c src/clear_unicob.c -o compiled/clear_unicob.o
