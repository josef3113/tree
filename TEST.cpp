#include <iostream>
#include "Node.cpp"
#include "Tree.cpp"

using namespace std;


void main ()
{
	Tree<double> t ;

	t.insert(3.9);
	t.insert(4.8);
	t.insert(2.7);
	t.insert(3.5);
	t.insert(4.9);
	t.insert(2.6);
	t.insert(9.3);
	t.insert(9.2);
	t.insert(2.1);
	//cout<<t.getsize()<<endl;
	//t.print() ;
	cout<<t<<endl;
	cout<<t.exists(3.5)<<endl;
	cout<<t.getsize()<<endl;

	/*Node <double> * tes;
	Node<double> tr(3.98);
	Node <int> r (4);
	Node <int> w (6);

	tr.BINinsert(3.6);
	tr.BINinsert(4.9);
	tr.BINinsert(5.9);
	tr.BINinsert(9.90) ;
	tr.BINinsert(7.5);
	tr.BINinsert(6.9);*/
	//tes=tr.getNEXTR();
	//tes->printNode();
	//tr.setNEXTR(4.78);
	//tr.setNEXTL(6.56); 
	//tr.printNode();
	//r.printNode();
	//w.printNode
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
	system("pause") ;
}