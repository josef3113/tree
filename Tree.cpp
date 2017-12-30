#include "Tree.h"

template<typename N>
Tree<N>::Tree(void)
{
	this->root=NULL;
	this->size=0;
}

template<typename N>
Tree<N>::~Tree(void)
{
	if(this->root!=NULL)
		delete this->root;
	

}

//------getrs
template<typename N>
int Tree<N>::getsize() const
{
	return this->size;
}

//-----function of tree


template<typename N>
void Tree<N>::insert(const N& toinst)
{
	// i know that in my tree can be two value thats equal 
	// i choich to enable this becaus if the user try to use in tree for person and operator < will be on hight of person i want to enable to insert to tree some person with the same hight
	
	if(this->root==NULL)
	{
		this->root=new Node<N> (toinst);
	}
	else
	{
		bool isinsert =false;
		Node<N>* temp;
		temp=this->root;
		while(!isinsert)
		{
			if(toinst < temp->getDATA())		 //if inst small from data so he need to be at the left tree so check is NEXTL is null insert the inst there but if is not null continuie to search place of inst
			{
					if(temp->getNEXTL()==NULL)
					{
						temp->setNEXTL(toinst);
						isinsert=true;
					}
					else
					{
						temp=temp->getNEXTL();
					}

			}
			else                      //if inst big from data so he need to be at the left tree so check is NEXTR is null insert the inst there but if is not null continuie to search place of inst
			{
				if(temp->getNEXTR()==NULL)
				{
					temp->setNEXTR(toinst);
					isinsert=true;
				}
				else
				{
					temp=temp->getNEXTR();
				}
			}
		}

	}
		this->size++;
}


template<typename N>
void Tree<N>::print() const
{
	this->root->printNode();
}

template<typename N>
bool Tree<N>::exists(const N & tofind) const
{
	if(this->root!=NULL)
	{
		Node<N> * temp;
		temp=this->root;
		while(1)
		{
			if(tofind==temp->getDATA())
				return true;
			else
			{
				if( tofind <  temp->getDATA()  )  //if its small so check if next left =NULL so value not exists but if nexl left not null check in the left tree 
				{
					if(temp->getNEXTL()==NULL)
						return false;
					else
						temp=temp->getNEXTL();
				}

				else                              //if its big so check if next right =NULL so value not exists but if nexl right not null check in the right tree 
				{
					if(temp->getNEXTR()==NULL)
						return false;
					else
						temp=temp->getNEXTR();
				}
			}

		}
	}
	  return false ;    //if root==NULL so return false
}
