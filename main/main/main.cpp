#include "AdjacencyList.h"
#include "Driver.cpp"
using namespace std;

int main(void)
{
	std::vector<std::tuple<std::string, int>> RenoC;
	RenoConnections(RenoC);
	AdjacencyList RenoList("Reno" , reinterpret_cast<vector<std::tuple<std::string, int>> &>(RenoConnections));
	
	system("pause");
	return 0;
}


