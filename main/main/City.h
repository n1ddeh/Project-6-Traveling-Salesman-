#ifndef CITY_H_
#define CITY_H_
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

template<class T>
class City
{
private:
	const std::string city_name_;
	std::vector<std::tuple<std::string, int>> connections_;
public:
	City();
	City(std::string city, std::vector<std::tuple<std::string, int>> connections);
	
	
	
	

	
};
#endif // CITY_H_