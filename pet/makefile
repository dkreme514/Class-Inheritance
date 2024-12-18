main: main.o pet.o dog.o
	g++ -o main -std=c++11 main.o pet.o dog.o cat.o
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
pet.o: pet.h pet.cpp
	g++ -c -std=c++11 pet.h
	g++ -c -std=c++11 pet.cpp
dog.o: dog.h dog.cpp 
	g++ -c -std=c++11 dog.h
	g++ -c -std=c++11 dog.cpp
cat.o: cat.h cat.cpp
	g++ -c -std=c++11 cat.h
	g++ -c -std=c++11 cat.cpp
clean:
	-rm *.o
	-rm *.h.gch
