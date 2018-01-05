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

	Node(const T&);	   // cant be defult constractor because of tamplate
	virtual ~Node(void);

	//---setrs


	void setNEXTR( const T&);  //canot be const because NEXTR changin
	void setNEXTL(const T& );  //canot be const because NEXTL changin


	//---getrs
	T getDATA()const{return data;};
	Node* getNEXTL()const{return NEXTL;}
	Node* getNEXTR()const{return NEXTR;}

	void printNode()const;	 //print the node whith sons (inorder traversal)
	void printData()const;	 //print only the data of node

};


