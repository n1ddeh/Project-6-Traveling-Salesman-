#ifndef GRAPH_H_
#define GRAPH_H_
#include "AdjacencyList.h"
#include "Driver.cpp"


class Graph {
protected:
    int route_distance(std::vector<AdjacencyList> sample_route);
    void find_shortest_path(std::vector<AdjacencyList> sample_route, int end, int start = 1);
private:
	std::vector<AdjacencyList> adjacency_lists_;
	int route_ = 0;
public:
	Graph();
	Graph(std::vector<AdjacencyList>& adjacency_list);
	~Graph();
    void ExplorePaths();
	void InsertAdjacencyList(AdjacencyList& adjacency_list);
	void TravelingSalesmanReno();
	int GetRoute();
	void PrintCityRoute();
};
#endif // GRAPH_H_