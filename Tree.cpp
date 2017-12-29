#include "Tree.h"

template<typename N>
Tree<N>::Tree(void)
{
	this->root=NULL;
}

template<typename N>
Tree<N>::~Tree(void)
{
	//todo add distractor


	/*if(this->root!=NULL)
		delete this->root;*/
}

template<typename N>
void Tree<N>::insert(const N& toinst)
{
	//Tree<N> temp=root;
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
			if(toinst < temp->getDATA())
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
			else//////////////////////////////////////////
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
			}/////////////////////////////////////////////
		}
		
	}
	
}


template<typename N>
void Tree<N>::print()
{
	Tree <N> temp ;
	temp.root=this->root;
	temp.root->printNode();

	
}

//template<typename N>
//ostream& operator<< (ostream& out,Tree<N> & toprint)
//{
//	/*Tree <N> temp ;
//	temp.root=this->root;
//	temp.root->printNode();*/
//	/*if(toprint.root!=NULL)
//	{
//		out<<toprint.root->getDATA()<<endl;
//	}
//	else
//	{
//		out<<"tree is empty"<<endl;
//	}
//*/
//	return out;
//
//}

//template<typename N> inline std::ostream& operator<<(std::ostream& out, const Tree<N>& val)
//{
//	Tree <N> temp ;
//	temp.root=this->root;
//	temp.root->printNode();
//    //out << val.data;
//    return out;
//}