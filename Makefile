CC	=gcc
CFLAGS	=-c

ass1: main.o
	$(CC) -o ass1 main.o

main.o: main.c
	$(CC) $(CFLAGS) main.c

clean:
	-rm *.o ass1
