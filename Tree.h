
#pragma once
#include "Node.h"
template<typename N>
class Tree
{
	Node<N> * root;
public:
	Node<N>* insert(const N&);  //canot be const because in the first node root changh
	void print();
	Tree(void);
	~Tree(void);
};

