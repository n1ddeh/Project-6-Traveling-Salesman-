#include "Graph.h"

int main(void)
{
	Graph RenoTravels;
	RenoTravels.TravelingSalesmanReno();
    RenoTravels.ExplorePaths();
    std::cout << RenoTravels.GetRoute() << std::endl;
    RenoTravels.PrintCityRoute();
	
	return 0;
}

