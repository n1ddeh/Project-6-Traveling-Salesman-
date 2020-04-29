#ifndef ADJACENCY_LIST_
#define ADJACENCY_LIST_
#include <vector>
#include <string>
#include <tuple>
#include <iostream>

class AdjacencyList
{
private:
	std::string city_name_;
	std::vector<std::tuple<std::string, int>> city_connections_;
	std::vector<bool> edges;
	bool seen_;
	
public:
	// --- Constructors --- ///
	AdjacencyList(); // Default CTOR: Creates empty list with no nodes or data.
	AdjacencyList(const std::string& city, std::vector<std::tuple<std::string, int>>& connections);
	~AdjacencyList(); // DTOR

	// --- Helper Functions --- ///
	std::string GetCity() const;
	bool IsSeen() const;
	void SetSeen(bool x);
	int ConnectionCount() const;
	void PrintList();
	std::vector<std::tuple<std::string, int>>& GetCityConnections();
	std::tuple<std::string, int> operator[](int index);
	std::string GetCityConnectionName(int index);
	int GetCityConnectionDistance(int index);
    int GetDistance(const std::string& city);
	
};
#endif // ADJACENCY_LIST_