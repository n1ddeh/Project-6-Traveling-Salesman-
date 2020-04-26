#ifndef GRAPH_H_
#define GRAPH_H_
#include "AdjacencyList.h"
#include "Driver.cpp"
#include <vector>
#include <string>
#include <tuple>

class Graph {
private:
	std::vector<AdjacencyList> adjacency_lists_;
	std::vector<AdjacencyList> seen_adjacency_lists_;

};
#endif GRAPH_H_