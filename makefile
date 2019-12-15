CC = gcc
FLAGS = -Wall -g

all:run liber

liber:liber.a

liber.a:InsertionSort.o InsertionSort.h
	ar rcs liber.a InsertionSort.o InsertionSort.h

InsertionSort.o:InsertionSort.c InsertionSort.h
	$(CC) $(FLAGS) -c InsertionSort.c

main.o:main.c InsertionSort.h
	$(CC) $(FLAGS) -c main.c

run:main.o liber.a
	$(CC) $(FLAGS) -o run main.o liber.a 

.PHONY:clean all

clean:
	rm -f *.o *.a *.so run