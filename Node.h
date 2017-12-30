#pragma once
#include<iostream>
using namespace std;

template<typename T>
class Node
{
	T data ;
	Node* NEXTR;
	Node* NEXTL;



public:

	Node(const T&);
	~Node(void);

	//---setrs
	void setNEXTR( const T&);  //canot be const because NEXTR changin
	void setNEXTL(const T& );  //canot be const because NEXTL changin


	//---getrs
	T getDATA()const{return data;};
	Node* getNEXTL()const{return NEXTL;}
	Node* getNEXTR()const{return NEXTR;}

	void printNode()const;

};


