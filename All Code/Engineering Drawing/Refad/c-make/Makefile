CFLAGS = -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch

all: final

final: main.o hello.o
	@echo "Linking and Producing the final application"
	gcc $(CFLAGS) main.o hello.o -o final
	@chmod +x final

main.o: main.c
	@echo "Compiling the main.c file"
	gcc $(CFLAGS) -c main.c

hello.o: hello.c function.h
	@echo "Compiling the hello.c file"
	gcc $(CFLAGS) -c hello.c

clean: 
	@echo "Removing everything but the source file"
	rm main.o hello.o final