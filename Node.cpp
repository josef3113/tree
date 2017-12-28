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
	
	if(this->NEXTL!=NULL)
	{
	cout<<"delete l"<<endl;
	delete this->NEXTL;
	}
	
	if(this->NEXTR!=NULL)
	{
		cout<<"delete r"<<endl;
	delete this->NEXTR;
	}
}

template<typename T>
void Node<T>::printNode()
{
	
	if(this->NEXTL!=NULL)
	this->NEXTL->printNode();

	cout<<this->data<<endl;
	

	if(this->NEXTR!=NULL)
	this->NEXTR->printNode();
}

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

template<typename T>
void Node<T>::BINinsert(const T& data)
{
	if(data < this->data)
	{
		if(this->NEXTL==NULL)
			this->setNEXTL(data);
		else
			this->NEXTL->BINinsert(data);
	}

	else
	{
		if(this->NEXTR==NULL)
			this->setNEXTR(data);
		else
			this->NEXTR->BINinsert(data);

	}

}


template<typename T>
T Node<T>::getDATA()
{
	return data;
}