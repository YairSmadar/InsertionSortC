CC = gcc
FLAGS = -Wall -g

all:Run liber

liber:liber.a

liber.a:InsertionSort.o InsertionSort.h
	ar rcs liber.a InsertionSort.o InsertionSort.h

InsertionSort.o:InsertionSort.c InsertionSort.h
	$(CC) $(FLAGS) -c InsertionSort.c

main.o:main.c InsertionSort.h
	$(CC) $(FLAGS) -c main.c

Run:main.o liber.a
	$(CC) $(FLAGS) -o Run main.o liber.a 

.PHONY:clean all

clean:
	rm -f *.o *.a *.so Run