all: Chaine code
Chaine: main2.o Chaine.o
	g++ main2.o Chaine.o -o Chaine 

main.o: main2.cpp
	g++ -c main2.cpp

Chaine.o: Chaine.cpp
	g++ -c Chaine.cpp

code: code.cpp
	g++ code.cpp -o code

clean:
	rm *o Chaine code
