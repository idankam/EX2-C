CC=gcc
FLAGS= -Wall

all: connections 

connections: main.o libmy_mat.so
	$(CC) $(FLAGS) main.o ./libmy_mat.so -o connections

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

libmy_mat.so: my_mat.o
	$(CC) -shared -o libmy_mat.so my_mat.o -lm

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c -lm


.PHONY: clean all

clean:
	rm -f *.o *.so connections