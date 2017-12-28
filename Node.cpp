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
	if(this!=NULL)
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
}

template<typename T>
void Node<T>::printNode()
{
	if(this)
	{
		if(this->NEXTL!=NULL)
		this->NEXTL->printNode();

		cout<<this->data<<endl;
	

		if(this->NEXTR!=NULL)
		this->NEXTR->printNode();
	}
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

template<typename T>
void Node<T>::setITEMNEXTL( Node<T>* sonL )
{
	this->NEXTL=sonL;
}

template<typename T>
void Node<T>::setITEMNEXTR( Node<T>* sonR )
{
	this->NEXTR=sonR;
}

//----getrs

template<typename T>
T Node<T>::getDATA()const
{
	return data;
}


//template<typename T>
//Node* Node<T>::getNEXTL()const
//{
//	return &NEXTL;
//}




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


