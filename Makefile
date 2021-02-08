CC=gcc

linkedlist.out: linkedlist.o main.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $<

clean:
	rm -f *.o linkedlist.out