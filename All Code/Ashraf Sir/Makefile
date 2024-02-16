result: main.o add.o
	gcc main.o add.o -o result

main.o: main.c
	gcc -c main.c

add.o: add.c
	gcc -c add.c

clean: 
	rm -f *.o result