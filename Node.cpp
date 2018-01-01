#include "Node.h"
# include<iostream>


template<typename T>
Node<T>::Node(const T& data)
{
	this->data=data;
	this->NEXTL=NULL;
	this->NEXTR=NULL;
}

template<typename T>
Node<T>::~Node(void)
{
		
	
		if(this->NEXTR!=NULL)
		{	
		delete this->NEXTR;
		//cout<<"delete r of  "<<this->getDATA()<<endl;	  //if you want follow after destruction of Node
		}

		if(this->NEXTL!=NULL)
		{
		
		delete this->NEXTL;
		//cout<<"delete l  of  "<<this->getDATA()<<endl;   //if you want follow after destruction of Node
		}
	
}

template<typename T>
void Node<T>::printNode()const		   //inorder traversal
{
	
	
		if(this->NEXTL!=NULL)
		{
		this->NEXTL->printNode();
		}

		cout<<this->data<<endl;
	

		if(this->NEXTR!=NULL)
		{
		this->NEXTR->printNode();
		}
	
}

template<typename T>
void Node<T>::printData()const
{
	cout<<this->getDATA()<<endl;
}

//---setrs
template<typename T>
void Node<T>::setNEXTR(const T& data)
{
	this->NEXTR=new Node<T>(data);
}

template<typename T>
void Node<T>::setNEXTL(const T& data)
{
	this->NEXTL=new Node<T>(data);
}


//----getrs







