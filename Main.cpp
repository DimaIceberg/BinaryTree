#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

	Node tree(5);

	tree.insert(3);
	tree.insert(4);
	tree.insert(12);
	tree.insert(1);
	tree.insert(9);

	cout << "Try find 2... " << tree.find(2) << endl; 
	cout << "Try find 12... " << tree.find(12) << endl;

	return 0;
}