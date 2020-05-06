#include "Graph.h"
#include <fstream>

int main(void)
{
	Graph RenoTravels;
	RenoTravels.TravelingSalesmanReno();
    RenoTravels.ExplorePaths();
	//std::cout << std::endl << "Shortest Distance: " << RenoTravels.GetRoute() << std::endl;
    //RenoTravels.PrintCityRoute();

    std::ofstream output;
    output.open("Output.txt");

    RenoTravels.ExplorePaths(output);

	return 0;
}

