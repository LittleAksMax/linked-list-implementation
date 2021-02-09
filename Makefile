CC=gcc

all: linkedlist.out

%.o: %.c
	$(CC) -c $<

linkedlist.out: linkedlist.o main.o
	$(CC) $^ -o $@

clean:
	rm -f *.o linkedlist.out