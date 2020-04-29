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

void Graph::DepthFirstSearch(int list_index)
{
	std::string visiting_city = "Unknown";
	int new_visiting = 0;
	std::cout << "visiting " << adjacency_lists_[list_index].GetCity() << std::endl;
	for (auto it = adjacency_lists_[list_index].GetCityConnections().begin(); it != adjacency_lists_[list_index].GetCityConnections().end(); ++it)
	{
		visiting_city = std::get<0>(*it);
		if (!CheckVisited(visiting_city))
		{
			for (auto it1 = adjacency_lists_.begin(); it1 != adjacency_lists_.end(); ++it1)
			{
				if (it1->GetCity() == visiting_city)
				{
					it1->SetSeen(true);
					break;
				}
				new_visiting++;
			}
			std::cout << adjacency_lists_[list_index].GetCity() << " -> " << visiting_city << std::endl;
			DepthFirstSearch(new_visiting);
		}
	}
}

bool Graph::CheckVisited(const std::string& city_name)
{
	auto it = adjacency_lists_.begin();
	while (it != adjacency_lists_.end())
	{
		if ((it->GetCity() == city_name) && (it->IsSeen()))
		{
			return true;
		}
		++it;
	}
	return false;
}

int Graph::route_distance(std::vector<AdjacencyList> sample_route) {
    int distance = 0;
    for(int i = 0; i < sample_route.size()-1; i++){
        distance += sample_route[i].GetDistance(sample_route[i+1].GetCity());
    }
    return distance;
}