#include <string>
#include <vector>
#include <tuple>

inline std::vector<std::tuple<std::string, int>> RenoConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Reno.
{
	auto san_francisco = std::make_tuple ("San Francisco", 218);
	auto las_vegas = std::make_tuple ("Las Vegas", 439);
	auto salt_lake = std::make_tuple ("Salt Lake City", 518);
	auto seattle = std::make_tuple ("Seattle", 704);
	connections.emplace_back(san_francisco);
	connections.emplace_back(las_vegas);
	connections.emplace_back(salt_lake);
	connections.emplace_back(seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> LasVegasConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Las Vegas.
{
	auto salt_lake = std::make_tuple ("Salt Lake City", 421);
	auto reno = std::make_tuple ("Reno", 439);
	auto san_francisco = std::make_tuple ("San Francisco", 569);
	auto seattle = std::make_tuple ("Seattle", 1115);
	connections.emplace_back(salt_lake);
	connections.emplace_back(reno);
	connections.emplace_back(san_francisco);
	connections.emplace_back(seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SanFranciscoConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from San Francisco.
{
	auto reno = std::make_tuple ("Reno", 218);
	auto las_vegas = std::make_tuple ("Las Vegas", 569);
	auto seattle = std::make_tuple ("Seattle", 808);
	connections.emplace_back(reno);
	connections.emplace_back(las_vegas);
	connections.emplace_back(seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SaltLakeCityConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Salt Lake City.
{
	auto las_vegas = std::make_tuple ("Las Vegas", 421);
	auto reno = std::make_tuple ("Reno", 518);
	auto seattle = std::make_tuple ("Seattle", 830);
	connections.emplace_back(las_vegas);
	connections.emplace_back(reno);
	connections.emplace_back(seattle);
	return connections;
}

inline std::vector<std::tuple<std::string, int>> SeattleConnections(std::vector<std::tuple<std::string, int>>& connections) // Returns connections from Seattle.
{
	auto reno = std::make_tuple ("Reno", 704);
	auto san_francisco = std::make_tuple ("San Francisco", 808);
	auto salt_lake = std::make_tuple ("Salt Lake City", 830);
	auto las_vegas = std::make_tuple ("Las Vegas", 1115);
	connections.emplace_back(reno);
	connections.emplace_back(san_francisco);
	connections.emplace_back(salt_lake);
	connections.emplace_back(las_vegas);
	return connections;
}
