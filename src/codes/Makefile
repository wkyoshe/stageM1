all: Chaine 
Chaine: main2.o Chaine.o
	$(CXX) main2.o Chaine.o -o Chaine 

main2.o: main2.cpp
	$(CXX) -c main2.cpp

Chaine.o: Chaine.cpp
	$(CXX) -c Chaine.cpp

clean:
	rm -rf *.o Chaine 
