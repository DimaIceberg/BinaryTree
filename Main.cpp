#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {

	Node tree(5000);

	for (int i = 0; i < 10000; i++) {
		tree.insert(i);
	}

	return 0;
}