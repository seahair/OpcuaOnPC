TARGET = opcuatest
CC = gcc
RM = rm
AR = ar
CFLAGS = -g3 

CINCLUDE = -Iinclude
CPATH = -Lsrc


all:$(TARGET)

$(TARGET):$(OBJECTS)
	make -C src
	make -C test
	$(CC) $(CFLAGS) build/*.o -o $@ 


.PHONY: clean

clean:
	rm -f build/*.o
	rm -f $(TARGET)
	rm -f $(OBJECTS)

