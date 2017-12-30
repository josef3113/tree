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

	//void BINinsert(const T&);
	//---setrs
	void setNEXTR( const T&);
	void setNEXTL(const T& );
	//void setDATA(const T&);

	void setITEMNEXTL( Node* );
	void setITEMNEXTR( Node* );

	//---getrs
	T getDATA()const;
	Node* getNEXTL()const{return NEXTL;}
	Node* getNEXTR()const{return NEXTR;}

	void printNode();

	//friend ostream& operator <<(ostream & out , Node & toprint);

};


