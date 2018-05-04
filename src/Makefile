CC = gcc
RM = rm
AR = ar
CFLAGS = -g3 -c

CINCLUDE = -I../include
CPATH = -Lsrc
SRCS = $(wildcard *.c)
OBJECTS = $(patsubst %c,%o, $(SRCS))

all:$(OBJECTS)

$(OBJECTS):$(SRCS)
	$(CC) $(CINCLUDE) $(CFLAGS) $< -o ../build/$@

.PHONY: clean

clean:
	rm -f ../build/$(OBJECTS)

