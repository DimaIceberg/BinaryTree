#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

	Node tree(50);

	for (int i = 0; i < 100; i++) {
		tree.insert(i);
	}

	return 0;
}