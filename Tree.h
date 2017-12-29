
#pragma once
#include "Node.h"
#include<iostream>
using namespace std;


template<typename N>
class Tree
{
	Node<N> * root;
	int size;
public:
	int getsize();
	Tree(void);
	~Tree(void);

	void insert(const N&);  //canot be const because in the first node root changh
	void print();
	bool exists(const N&);




	friend ostream& operator << (ostream& out,Tree <N>& toprint)
		{
			//out<<"size is:"<<toprint->getsize();
		toprint.print();
		return out;
	};
	
};



