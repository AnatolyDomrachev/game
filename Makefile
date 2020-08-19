
prog: main.o Tnode.o Ask.o Animal.o
	g++ -o prog main.o Tnode.o Ask.o Animal.o
main.o: main.cpp
	g++ -g -c main.cpp
Tnode.o: Tnode.cpp
	g++ -g -c Tnode.cpp
Ask.o: Ask.cpp
	g++ -g -c Ask.cpp
Animal.o: Animal.cpp
	g++ -g -c Animal.cpp
clean:
	rm -rf prog *.o
