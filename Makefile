all: courcework
courcework: courcework.c main.c
	gcc -Wall -o courcework main.c courcework.c 
clean:
	rm courcework
run:
	./courcework
