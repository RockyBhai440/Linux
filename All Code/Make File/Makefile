# Method 1

# $(CC) = g++

# output: main.o add.o hello.o
# 	$(CC) main.o add.o hello.o -o output

# main.o: main.cpp header.h
# 	$(CC) -c main.cpp

# hello.o: hello.cpp header.h
# 	$(CC) -c hello.cpp

# add.o: add.cpp header.h
# 	$(CC) -c add.cpp

# clean: 
# 	rm *.o output

# Method 2

# output: main.o add.o hello.o
# 	g++ main.o add.o hello.o -o output

# main.o: main.cpp header.h
# 	g++ -c main.cpp

# add.o: add.cpp  header.h
# 	g++ -c add.cpp

# hello.o: hello.cpp  header.h
# 	g++ -c hello.cpp

# clean:
# 	rm *.o output


output: main.o add.o hello.o
	g++ main.o add.o hello.o -o output

main.o: main.cpp 
	g++ -c main.cpp

add.o: add.cpp  
	g++ -c add.cpp

hello.o: hello.cpp  
	g++ -c hello.cpp

clean:
	rm *.o output