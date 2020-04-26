#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "AdjacencyList.cpp"
#include "Driver.cpp"
using namespace std;

int main(void)
{
	std::vector<std::tuple<std::string, int>> RenoC;
	RenoConnections(RenoC);
	AdjacencyList RenoList("Reno" , RenoConnections);
	
	system("pause");
	return 0;
}


