#include "Graph.h"

Graph::Graph() = default;

Graph::Graph(std::vector<AdjacencyList>& adjacency_list) {
	adjacency_lists_ = adjacency_list;
}

Graph::~Graph() = default;

void Graph::InsertAdjacencyList(AdjacencyList& adjacency_list) {
	adjacency_lists_.push_back(adjacency_list);
}

void Graph::TravelingSalesmanReno() {
	
	std::vector<std::tuple<std::string, int>> Reno;
	std::vector<std::tuple<std::string, int>> Las_Vegas;
	std::vector<std::tuple<std::string, int>> Salt_Lake;
	std::vector<std::tuple<std::string, int>> San_Fran;
	std::vector<std::tuple<std::string, int>> Seattle;
	
	RenoConnections(Reno);
	LasVegasConnections(Las_Vegas);
	SaltLakeCityConnections(Salt_Lake);
	SanFranciscoConnections(San_Fran);
	SeattleConnections(Seattle);
	
	AdjacencyList Reno_List("Reno" , Reno);
	AdjacencyList LasVegas_List("Las Vegas" , Las_Vegas);
	AdjacencyList SaltLake_List("Salt Lake City", Salt_Lake);
	AdjacencyList SanFran_List("San Francisco", San_Fran);
	AdjacencyList Seattle_List("Seattle", Seattle);

	InsertAdjacencyList(Reno_List);
	InsertAdjacencyList(LasVegas_List);
	InsertAdjacencyList(SaltLake_List);
	InsertAdjacencyList(SanFran_List);
	InsertAdjacencyList(Seattle_List);
}

void Graph::UniquePaths()
{
	const std::string starting_city = adjacency_lists_[0].GetCity(); // Starting City.
	const std::string end_city = starting_city; // End City - For sake of traveling salesman.
	std::vector<std::tuple<std::string, int>> edges; // stores the path we travel.

	

}
