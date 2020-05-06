main: main.o Driver.o Graph.o AdjacencyList.o
	g++ main.o -o main

main.o: main.cpp Graph.cpp Graph.h Driver.cpp AdjacencyList.cpp AdjacencyList.h
	g++ -c main.cpp

Graph.o: Graph.cpp Graph.h Driver.cpp AdjacencyList.cpp AdjacencyList.h
	g++ -c Graph.o

Driver.o: Driver.cpp
	g++ -c Driver.cpp

AdjacencyList.o: AdjacencyList.cpp AdjacencyList.h
	g++ -c AdjacencyList.o

clean:
	rm *.o main