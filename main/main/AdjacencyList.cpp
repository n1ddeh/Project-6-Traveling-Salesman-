#include "AdjacencyList.h"

AdjacencyList::AdjacencyList() {
	city_name_ = "Unknown";
	seen_ = false;
}

AdjacencyList::AdjacencyList(const std::string& city, std::vector<std::tuple<std::string, int>>& connections) {
	city_name_ = city;
	city_connections_ = connections;
	seen_ = false;
}
	
AdjacencyList::~AdjacencyList() = default;

bool AdjacencyList::IsSeen() const {
	return seen_;
}

int AdjacencyList::ConnectionCount() const {
	return static_cast<int>(city_connections_.size());
}

std::string AdjacencyList::GetCity() const {
	return city_name_;
}

void AdjacencyList::PrintList() {
	if (city_name_ == "Unknown" && city_connections_.empty())
	{
		std::cout << "Unknown city has no connections." << std::endl;
		return;
	}
	if(city_name_ != "Unknown" && city_connections_.empty())
	{
		std::cout << city_name_ << std::endl;
		return;
	}

	auto it = city_connections_.begin();
	std::cout << city_name_ << " -> ";
	while (it != city_connections_.end())
	{
		std::cout << std::get<0>(*it);
		++it;
		if (it != city_connections_.end())
		{
			std::cout << " -> ";
		}
	}
	std::cout << std::endl;
}

std::tuple<std::string, int> AdjacencyList::operator[](int index) {
	return city_connections_[index];
}

std::string AdjacencyList::GetCityConnectionName(int index) {
	auto it = city_connections_[index];
	return std::get<0>(it);
}

int AdjacencyList::GetCityConnectionDistance(int index) {
	auto it = city_connections_[index];
	return std::get<1>(it);
}

std::vector<std::tuple<std::string, int>>& AdjacencyList::GetCityConnections()
{
	return city_connections_;
}

void AdjacencyList::SetSeen(bool x)
{
	seen_= x;
}
