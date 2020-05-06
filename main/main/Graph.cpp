#include "Graph.h"

Graph::Graph() = default;

Graph::Graph(std::vector<AdjacencyList>& adjacency_list) {
	adjacency_lists_ = adjacency_list;
}

Graph::~Graph() = default;

void Graph::InsertAdjacencyList(AdjacencyList& adjacency_list) {
	adjacency_lists_.push_back(adjacency_list);
}

void Graph::TravelingSalesmanReno()
{
    std::cout << "--Traveling Salesman Reno--" << std::endl;
	
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
	InsertAdjacencyList(Reno_List);
}

int Graph::route_distance(std::vector<AdjacencyList> sample_route) {
    int distance = 0;
    for(int i = 0; i < sample_route.size()-1; i++){
        distance += sample_route[i].GetDistance(sample_route[i+1].GetCity());
    }
    //std::cout << "Calculated distance of: " << distance << std::endl;
    return distance;
}

void Graph::find_shortest_path(std::vector<AdjacencyList> sample_route, int end, int start, std::ostream &os) {
    if(start == end)
    {
        int temp = route_distance(sample_route);
        if(temp < route_) {
            adjacency_lists_ = sample_route;
            route_ = temp;
        }
        for(int i = 0; i < sample_route.size(); i++){
            os << sample_route[i].GetCity();
        	if ( i < sample_route.size() - 1) {
        		os << " -> ";
        	}
        }
        os << " [" << temp << "]" << std::endl;
        return;
    }
    for(int i = start; i < end; i++){
        std::swap(sample_route[i], sample_route[start]);
        find_shortest_path(sample_route, end, start+1, os);
        std::swap(sample_route[i], sample_route[start]);
    }
}

void Graph::ExplorePaths(std::ostream &os) {
	route_ = route_distance(adjacency_lists_);
    find_shortest_path(adjacency_lists_, adjacency_lists_.size() - 1, 1, os);
    os << std::endl << "Shortest Distance: " << route_ << std::endl;
    this->PrintCityRoute(os);
}

int Graph::GetRoute() {
    return route_;
}

void Graph::PrintCityRoute(std::ostream &os) {
    for(int i = 0; i < adjacency_lists_.size(); i++) {
        os << adjacency_lists_[i].GetCity();
    	if (i < adjacency_lists_.size() - 1) {
    		os << " -> ";
    	}
    }
    os << std::endl;
}
