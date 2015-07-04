all: Chaine 
Chaine: main2.o Chaine.o
	g++ main2.o Chaine.o -o Chaine 

main2.o: main2.cpp
	g++ -c main2.cpp

Chaine.o: Chaine.cpp
	g++ -c Chaine.cpp

clean:
	rm -rf *.o Chaine 
