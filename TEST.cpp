#include <iostream>
#include "Node.cpp"
#include "Tree.cpp"

using namespace std;


void main ()
{

	Tree<double> Dtree ;

	cout<<Dtree<<endl;
	Dtree.insert(3.9);
	Dtree.insert(4.8);
	Dtree.insert(4.8);
	Dtree.insert(4.8);
	Dtree.insert(3.5);
	Dtree.insert(2.6);
	Dtree.insert(9.3);
	Dtree.insert(9.2);
	Dtree.insert(2.1);
	cout<<"the size of Dtree is:";			
	cout<<Dtree.getsize()<<endl;
	cout<<Dtree<<endl;
	cout<<"the value exists in Dtree:";
	cout<<Dtree.exists(9.3)<<endl;
	cout<<"the value exists in Dtree:";
	cout<<Dtree.exists(3.3)<<endl;
	
	cout<<endl<<endl ;

	Tree<int> Itree ;

	Itree.insert(6) ;
	Itree.insert(8);
	Itree.insert(3);
	Itree.insert(5);
	Itree.insert(10);
	Itree.insert(12);
	Itree.insert(1);
	Itree.insert(6);
	cout<<"the size of Itree is:";			
	cout<<Itree.getsize()<<endl;
	cout<<Itree<<endl;
	cout<<"the value exists in Itree:";
	cout<<Itree.exists(6)<<endl;
	cout<<"the value exists in Itree:";
	cout<<Itree.exists(7)<<endl;
	
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
	system("pause") ;

}