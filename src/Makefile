CC = gcc
RM = rm
AR = ar
CFLAGS = -g3 -c

CINCLUDE = -I../include
CPATH = -Lsrc
SRCS = $(wildcard *.c)
OBJECTS = $(patsubst %c,../build/%o, $(SRCS))

all:$(OBJECTS)

../build/%o:%c
	@echo $(SRCS)
	$(CC) $(CINCLUDE) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJECTS)

