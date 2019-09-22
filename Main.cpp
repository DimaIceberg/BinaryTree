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
	tree.insert(15);

	cout << "InorderTreeWalk... ";
	tree.inorderWalk();
	cout << "\n";

	cout << "PreorderTreeWalk... ";
	tree.preorderWalk();
	cout << "\n";

	cout << "PostorderTreeWalk... ";
	tree.postorderWalk();
	cout << "\n";
	cout << "\n";

	cout << "Try find 2... " << tree.find(2) << endl; 
	cout << "Try find 12... " << tree.find(12) << endl;
	cout << "\n";

	cout << "Min... " << tree.min() << endl; 
	cout << "Max... " << tree.max() << endl;
	cout << "\n";

	return 0;
}