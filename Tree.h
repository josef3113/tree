
#pragma once
#include "Node.h"
#include<iostream>
using namespace std;


template<typename N>
class Tree
{
	Node<N> * root;
public:
	
	Tree(void);
	~Tree(void);

	void insert(const N&);  //canot be const because in the first node root changh
	void print();

	friend ostream& operator << (ostream& out,Tree <N>& toprint)
	{
		toprint.print();
		return out;
	};
};

