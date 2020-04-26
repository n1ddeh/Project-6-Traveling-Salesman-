#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "Driver.cpp"
using namespace std;



int main(void)
{
	std::vector<std::tuple<std::string, int>> RenoC;
	RenoConnections(RenoC);
	
	system("pause");
	return 0;
}

