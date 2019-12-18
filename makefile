CC = gcc
FLAGS = -Wall -g

all:runstring libers run liber


libers:libers.a

libers.a:StringFunc.o StringFunc.h
	ar rcs libers.a StringFunc.o StringFunc.h

StringFunc.o:StringFunc.c StringFunc.h
	$(CC) $(FLAGS) -c StringFunc.c

StringMain.o:StringMain.c StringFunc.h
	$(CC) $(FLAGS) -c StringMain.c	

runstring:StringMain.o libers.a	
	$(CC) $(FLAGS) -o runstring StringMain.o libers.a 	

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
	rm -f *.o *.a *.so run runstring