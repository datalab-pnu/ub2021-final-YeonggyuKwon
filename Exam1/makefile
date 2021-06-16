CC=gcc
CFLAGS=-g -Wall
OBJS= register.o print.o search.o save.o empMain.o
all:main
%.o:%.c
        $(CC) -c $(CFLAGS) -o $@ $<
main:$(OBJS)
        $(CC) -o main $(OBJS)
clean:
        rm -f main $(OBJS)
