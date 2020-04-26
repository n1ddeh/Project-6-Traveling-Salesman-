#ifndef ADJACENCY_LIST_
#define ADJACENCY_LIST_
#include <iostream>
#include <vector>
#include <string>
#include "City.h"

template<class T>
class AdjacencyList
{
private:
	std::vector<const char*> cities;			// Consider using city objects.
	std::vector<int> distances;					// Consider assigning distances in city implementation. 
	int node_count_;
	bool seen_;
	
	
	
public:
	// --- Constructors --- ///
	AdjacencyList();										// Default CTOR: Creates empty list with no nodes or data.							
	~AdjacencyList();										// Destructor

	// --- Helper Functions --- ///
	bool isEmpty() const;
	bool isFull() const;
	bool isSeen() const;
	int nodeCount() const;
	bool checkExistance() const;

	/// --- Data Functions --- ///
	void insert(T some_data);
	void remove(T some_data);
	void clear();
};
#endif // ADJACENCY_LIST_