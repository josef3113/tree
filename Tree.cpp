#include "Tree.h"

template<typename N>
Tree<N>::Tree(void)
{
	this->root=NULL;
}

template<typename N>
Tree<N>::~Tree(void)
{
	//delete all tree
}

template<typename N>
void Tree<N>::insert(const N& toinst)
{
	//Tree<N> temp=root;
	if(this->root==NULL)
	{
		this->root=new Node<N> (toinst);
	}
	
}