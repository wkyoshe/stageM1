all: Chaine 
operation: main2.o Chaine.o
	g++ main2.o Chaine.o -o Chaine 

main.o: main2.cpp
	g++ -c main2.cpp

operation.o: Chaine.cpp
	g++ -c Chaine.cpp

clean:
	rm *o Chaine 
