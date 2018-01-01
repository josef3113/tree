
#pragma once
#include "Node.h"


template<typename N>
class Tree
{
	Node<N> * root;
	int size;
public:
	
	Tree(void);
	~Tree(void);

	//-----getrs
	int getsize()const;

	//----function of tree

	void insert(const N&);  //canot be const because in the first insert root changh
	//void print()const;
	bool exists(const N&)const;




	friend ostream& operator << <>(ostream& out,const Tree <N>& toprint);
	
};





