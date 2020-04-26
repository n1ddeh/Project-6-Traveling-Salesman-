#include <string>
#include <vector>
#include <tuple>
#include <iostream>

inline std::vector<std::tuple<std::string, int>> RenoConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Reno.
{
	const std::tuple<std::string, int> san_francisco = std::make_tuple ("San Francisco", 218);
	const std::tuple<std::string, int> las_vegas = std::make_tuple ("Las Vegas", 439);
	const std::tuple<std::string, int> salt_lake = std::make_tuple ("Salt Lake City", 518);
	connections.push_back(san_francisco);
	connections.push_back(las_vegas);
	connections.push_back(salt_lake);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> LasVegasConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Las Vegas.
{
	const std::tuple<std::string, int> salt_lake = std::make_tuple ("Salt Lake City", 421);
	const std::tuple<std::string, int> reno = std::make_tuple ("Reno", 439);
	const std::tuple<std::string, int> san_francisco = std::make_tuple ("San Francisco", 569);
	connections.push_back(salt_lake);
	connections.push_back(reno);
	connections.push_back(san_francisco);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SanFranciscoConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from San Francisco.
{
	const std::tuple<std::string, int> reno = std::make_tuple ("Reno", 218);
	const std::tuple<std::string, int> las_vegas = std::make_tuple ("Las Vegas", 569);
	const std::tuple<std::string, int> seattle = std::make_tuple ("Seattle", 808);
	connections.push_back(reno);
	connections.push_back(las_vegas);
	connections.push_back(seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SaltLakeCityConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Salt Lake City.
{
	const std::tuple<std::string, int> las_vegas = std::make_tuple ("Las Vegas", 421);
	const std::tuple<std::string, int> reno = std::make_tuple ("Reno", 518);
	const std::tuple<std::string, int> seattle = std::make_tuple ("Seattle", 830);
	connections.push_back(las_vegas);
	connections.push_back(reno);
	connections.push_back(seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SeattleConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Seattle.
{
	const std::tuple<std::string, int> reno = std::make_tuple ("Reno", 704);
	const std::tuple<std::string, int> san_francisco = std::make_tuple ("San Francisco", 808);
	const std::tuple<std::string, int> salt_lake = std::make_tuple ("Salt Lake City", 830);
	connections.push_back(reno);
	connections.push_back(san_francisco);
	connections.push_back(salt_lake);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> GetCityConnection(const std::string&& city) {
	std::vector<std::tuple<std::string, int>> connections;
	if (city == "Reno")
	{
		return RenoConnections(connections);
	}
	else if (city == "Las Vegas")
	{
		return LasVegasConnections(connections);
	}
	else if (city == "San Francisco")
	{
		return SanFranciscoConnections(connections);
	}
	else if (city == "Salt Lake City")
	{
		return SaltLakeCityConnections(connections);
	}
	else if (city == "Seattle")
	{
		return SeattleConnections(connections);
	}
	std::cout << "GetCityConnection() Error: City not found." << std::endl;
	return connections;
}