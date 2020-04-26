#include "AdjacencyList.h"
#include "Driver.cpp"

int main(void)
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
	
	Reno_List.PrintList();
	LasVegas_List.PrintList();
	SaltLake_List.PrintList();
	SanFran_List.PrintList();
	Seattle_List.PrintList();
	
	return 0;
}