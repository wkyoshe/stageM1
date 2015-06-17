all: operation code
operation: main.o operation.o
	g++ main.o operation.o -o operation 

main.o: main.cpp
	g++ -c main.cpp
	

operation.o: operation.cpp
	g++ -c code.cpp

code: code.cpp
	g++ code.cpp -o code

clean:
	rm *o operation code
