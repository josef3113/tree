#pragma once
#include<iostream>

template<typename T>
class Node
{
	T data ;
	Node* NEXTR;
	Node* NEXTL;



public:

	Node(const T&);
	~Node(void);

	void BINinsert(const T&);
	void setNEXTR( const T&);
	void setNEXTL(const T& );
	T getDATA();

	void printNode();

	//friend ostream& operator <<(ostream & out , Node & toprint);

};


