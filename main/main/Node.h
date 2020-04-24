#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <memory>

template <class T>
class Node
{
private:
	std::unique_ptr<Node<T>> next_;
	T data_;
public:
	// --- Constructors --- ///
	Node();
	Node(const T some_data);
	Node(const T some_data, std::unique_ptr<Node<T>> next_node);
	Node<T>& operator=(const Node<T>& r_node);
	Node(Node<T>&& some_node);
	Node<T>& operator=(Node<T>&& r_node);
	~Node();

	// --- Helper Functions --- ///
	T getData();
	std::unique_ptr<Node<T>> getNextPtr();
	void setNextPtr(std::unique_ptr<Node<T>> a_node);
};

#endif //NODE_H_