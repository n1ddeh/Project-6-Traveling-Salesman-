#ifndef ADJACENCY_LIST_
#define ADJACENCY_LIST_
#include <iostream>
#include <stdexcept>
#include <vector>
#include <tuple>
#include <string>

class AdjacencyList
{
private:
	std::string city_name_;
	std::vector<std::tuple<std::string, int>> city_connections_;
	bool seen_;
	
public:
	// --- Constructors --- ///
	AdjacencyList(); // Default CTOR: Creates empty list with no nodes or data.
	AdjacencyList(const std::string& city, std::vector<std::tuple<std::string, int>>& connections);
	~AdjacencyList(); // Destructor

	// --- Helper Functions --- ///
	std::string GetCity() const;
	bool IsSeen() const;
	int ConnectionCount() const;
	void PrintList();
};
#endif // ADJACENCY_LIST_