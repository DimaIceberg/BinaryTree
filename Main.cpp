#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

	BinaryTree tree(5);

	tree.insert(&tree, 3);
	tree.insert(&tree, 4);
	tree.insert(&tree, 12);
	tree.insert(&tree, 1);
	tree.insert(&tree, 9);
	tree.insert(&tree, 15);


	cout << "InorderTreeWalk... " << endl;
	tree.inorderWalk();
	cout << "\n\n";


	cout << "Try find 2... " << tree.find(2) << endl; 
	cout << "Try find 12... " << tree.find(12) << endl;
	cout << "\n";

	cout << "Min... " << tree.min()->getKey() << endl; 
	cout << "Max... " << tree.max()->getKey() << endl;
	cout << "\n";

	return 0;
}