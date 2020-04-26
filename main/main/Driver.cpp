#include <string>
#include <vector>
#include <tuple>

inline std::vector<std::tuple<std::string, int>> RenoConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Reno.
{
	std::tuple<std::string, int> San_Francisco = std::make_tuple ("San Francisco", 218);
	std::tuple<std::string, int> Las_Vegas = std::make_tuple ("Las Vegas", 439);
	std::tuple<std::string, int> Salt_Lake = std::make_tuple ("Salt Lake City", 518);
	connections.push_back(San_Francisco);
	connections.push_back(Las_Vegas);
	connections.push_back(Salt_Lake);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> LasVegasConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Las Vegas.
{
	std::tuple<std::string, int> Salt_Lake = std::make_tuple ("Salt Lake City", 421);
	std::tuple<std::string, int> Reno = std::make_tuple ("Reno", 439);
	std::tuple<std::string, int> San_Francisco = std::make_tuple ("San Francisco", 569);
	connections.push_back(Salt_Lake);
	connections.push_back(Reno);
	connections.push_back(San_Francisco);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SanFranciscoConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from San Francisco.
{
	std::tuple<std::string, int> Reno = std::make_tuple ("Reno", 218);
	std::tuple<std::string, int> Las_Vegas = std::make_tuple ("Las Vegas", 569);
	std::tuple<std::string, int> Seattle = std::make_tuple ("Seattle", 808);
	connections.push_back(Reno);
	connections.push_back(Las_Vegas);
	connections.push_back(Seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SaltLakeCityConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Salt Lake City.
{
	std::tuple<std::string, int> Las_Vegas = std::make_tuple ("Las Vegas", 421);
	std::tuple<std::string, int> Reno = std::make_tuple ("Reno", 518);
	std::tuple<std::string, int> Seattle = std::make_tuple ("Seattle", 830);
	connections.push_back(Las_Vegas);
	connections.push_back(Reno);
	connections.push_back(Seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SeattleConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Seattle.
{
	std::tuple<std::string, int> Reno = std::make_tuple ("Reno", 704);
	std::tuple<std::string, int> San_Francisco = std::make_tuple ("San Francisco", 808);
	std::tuple<std::string, int> Salt_Lake = std::make_tuple ("Salt Lake City", 830);
	connections.push_back(Reno);
	connections.push_back(San_Francisco);
	connections.push_back(Salt_Lake);
	return connections;
}