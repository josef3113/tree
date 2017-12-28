
#pragma once
#include "Node.h"
template<typename N>
class Tree
{
	Node<N> * root;
public:
	void insert(const N&);
	Tree(void);
	~Tree(void);
};

