#include <iostream>
#include "Node.cpp"
#include "Tree.cpp"

using namespace std;


void main ()
{
	/*Tree<int> t;

	t.insert(3);
	t.insert(4);
	t.insert(2);*/

	Node<double> tr(3.98);
	Node <int> r (4);
	Node <int> w (6);

	tr.BINinsert(3.6) ;
	tr.BINinsert(4.9);
	tr.BINinsert(5.9);
	tr.BINinsert(9.90);
	tr.BINinsert(7.5);
	tr.BINinsert(6.9);
	//tr.setNEXTR(4.78);
	//tr.setNEXTL(6.56); 
	tr.printNode();
	//r.printNode();
	//w.printNode
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
	system("pause");
}