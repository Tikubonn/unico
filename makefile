
export CC = gcc
export CFLAGS = -I$(CURDIR) -L$(CURDIR) -fPIC -Wall -g3
export PYTHON = py
export ROOTDIR = $(CURDIR)

all:
	make update
	make -C manual
	make -C auto
	make -C debug
	make dist/unico.lib
	make dist/unico.dll
	make test.exe
	
update:
	make -C manual update
	make -C auto update
	make -C debug update
	
clean:
	make -C manual clean
	make -C auto clean
	make -C debug clean

tmp = $(shell mktemp -d)

dist/unico.lib: manual/unico/unico.lib manual/unicos/unicos.lib manual/unicos/src-groups/groups.lib manual/unicoc/unicoc.lib manual/unicoc/src-groups/groups.lib manual/unicob/unicob.lib manual/utf8/utf8.lib manual/utf16/utf16.lib manual/utf32/utf32.lib auto/unicos/unicos.lib auto/unicoc/unicoc.lib auto/unicob/unicob.lib auto/utf8/utf8.lib auto/utf16/utf16.lib auto/utf32/utf32.lib debug/debug.lib
	cd $(tmp) && \
ar xv $(ROOTDIR)/manual/unico/unico.lib && \
ar xv $(ROOTDIR)/manual/unicos/unicos.lib && \
ar xv $(ROOTDIR)/manual/unicos/src-groups/groups.lib && \
ar xv $(ROOTDIR)/manual/unicoc/unicoc.lib && \
ar xv $(ROOTDIR)/manual/unicoc/src-groups/groups.lib && \
ar xv $(ROOTDIR)/manual/unicob/unicob.lib && \
ar xv $(ROOTDIR)/manual/utf8/utf8.lib && \
ar xv $(ROOTDIR)/manual/utf16/utf16.lib && \
ar xv $(ROOTDIR)/manual/utf32/utf32.lib && \
ar xv $(ROOTDIR)/auto/unicos/unicos.lib && \
ar xv $(ROOTDIR)/auto/unicoc/unicoc.lib && \
ar xv $(ROOTDIR)/auto/unicob/unicob.lib && \
ar xv $(ROOTDIR)/auto/utf8/utf8.lib && \
ar xv $(ROOTDIR)/auto/utf16/utf16.lib && \
ar xv $(ROOTDIR)/auto/utf32/utf32.lib && \
ar xv $(ROOTDIR)/debug/debug.lib && \
ar r $(ROOTDIR)/dist/unico.lib *.o

dist/unico.dll: manual/unico/unico.lib manual/unicos/unicos.lib manual/unicos/src-groups/groups.lib manual/unicoc/unicoc.lib manual/unicoc/src-groups/groups.lib manual/unicob/unicob.lib manual/utf8/utf8.lib manual/utf16/utf16.lib manual/utf32/utf32.lib auto/unicos/unicos.lib auto/unicoc/unicoc.lib auto/unicob/unicob.lib auto/utf8/utf8.lib auto/utf16/utf16.lib auto/utf32/utf32.lib debug/debug.lib
	cd $(tmp) && \
ar xv $(ROOTDIR)/manual/unico/unico.lib && \
ar xv $(ROOTDIR)/manual/unicos/unicos.lib && \
ar xv $(ROOTDIR)/manual/unicos/src-groups/groups.lib && \
ar xv $(ROOTDIR)/manual/unicoc/unicoc.lib && \
ar xv $(ROOTDIR)/manual/unicoc/src-groups/groups.lib && \
ar xv $(ROOTDIR)/manual/unicob/unicob.lib && \
ar xv $(ROOTDIR)/manual/utf8/utf8.lib && \
ar xv $(ROOTDIR)/manual/utf16/utf16.lib && \
ar xv $(ROOTDIR)/manual/utf32/utf32.lib && \
ar xv $(ROOTDIR)/auto/unicos/unicos.lib && \
ar xv $(ROOTDIR)/auto/unicoc/unicoc.lib && \
ar xv $(ROOTDIR)/auto/unicob/unicob.lib && \
ar xv $(ROOTDIR)/auto/utf8/utf8.lib && \
ar xv $(ROOTDIR)/auto/utf16/utf16.lib && \
ar xv $(ROOTDIR)/auto/utf32/utf32.lib && \
ar xv $(ROOTDIR)/debug/debug.lib && \
$(CC) $(CFLAGS) -shared *.o -o $(ROOTDIR)/dist/unico.dll

test.exe: test.c dist/unico.lib
	$(CC) $(CFLAGS) test.c dist/unico.lib -o test.exe
