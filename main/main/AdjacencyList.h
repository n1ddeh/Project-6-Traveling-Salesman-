#ifndef ADJACENCY_LIST_
#define ADJACENCY_LIST_
#include <iostream>
#include "Node.h"

template<class T>
class AdjacencyList
{
private:
	std::unique_ptr<Node<T>> head_ptr_;
	int node_count_;
	bool seen_;
public:
	// --- Constructors --- ///
	AdjacencyList();														// Default CTOR: Creates empty list with no nodes or data.							
	AdjacencyList(const T some_data);										// Parameterized Constructor 
	AdjacencyList(const AdjacencyList<T>& some_list);						// Copy Constructor
	AdjacencyList<T>& operator=(const AdjacencyList<T>& some_list);			// Assignment Constructor
	AdjacencyList(AdjacencyList<T>&& some_list);							// Move Constructors
	AdjacencyList<T>& operator=(AdjacencyList<T>&& r_list);					// Move Assignment Constructor
	~AdjacencyList();														// Destructor

	// --- Helper Functions --- ///
	bool isEmpty() const;
	bool isFull() const;
	bool isSeen() const;
	int nodeCount() const;
	bool checkExistance() const;
	std::unique_ptr<Node<T>> getHeadPtr();

	/// --- Data Functions --- ///
	void insert(T some_data);
	void remove(T some_data);
	void clear();
};
#endif // ADJACENCY_LIST_