TravelingSalesman: main.o Driver.o AdjacencyList.o Graph.o
	g++ main.o Driver.o AdjacencyList.o Graph.o -o TravelingSalesman

main.o: main.cpp Graph.cpp Graph.h AdjacencyList.cpp AdjacencyList.h Driver.cpp
	g++ -c main.cpp

Graph.o: Graph.cpp Graph.h AdjacencyList.cpp AdjacencyList.h Driver.cpp
	g++ -c Graph.cpp

AdjacencyList.o: AdjacencyList.cpp AdjacencyList.h
	g++ -c AdjacencyList.cpp

Driver.o: Driver.cpp
	g++ -c Driver.cpp

clean:
	rm *.o TravelingSalesman