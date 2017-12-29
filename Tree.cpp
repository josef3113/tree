#include "Tree.h"

template<typename N>
Tree<N>::Tree(void)
{
	this->root=NULL;
	//this->size=0;
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
			else//////////////////////////////////////////
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
			}/////////////////////////////////////////////
		}

	}
	//	this->size++;
}


template<typename N>
void Tree<N>::print()
{
	Tree <N> temp ;
	temp.root=this->root;
	temp.root->printNode();


}

template<typename N>
bool Tree<N>::exists(const N & tofind)
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

	return false;
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