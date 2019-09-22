#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree(int k) {
	key = k;
	left = nullptr;
	right = nullptr;
	root = nullptr;
}

BinaryTree::BinaryTree(BinaryTree* rootTree, int value) {
	root = rootTree;
	key = value;
	left = nullptr;
	right = nullptr;
}

BinaryTree::~BinaryTree() {
	delete left, right; 
}

//insert value
void BinaryTree::insert(BinaryTree* rootTree, int insertValue) {
	if (insertValue <= key) {
		if (left == nullptr) {
			left = new BinaryTree(this, insertValue);
		}
		else {
			left->insert(this, insertValue);
		}
	}
	else {
		if (right == nullptr) {
			right = new BinaryTree(this, insertValue);
		}
		else {
			right->insert(this, insertValue);
		}
	}
}

//find value
bool BinaryTree::find(int findValue) {
	if (key == findValue) {
		return true;
	}
	else if (findValue < key && left != nullptr) {
		left->find(findValue);
	}
	else if (findValue > key && right != nullptr) {
		right->find(findValue);
	}
	else {
		return false;
	}
}

//min value
BinaryTree* BinaryTree::min() {
	if (left == nullptr) {
		return this;
	}
	else {
		left->min();
	}
}

//max value
BinaryTree* BinaryTree::max() {
	if (right == nullptr) {
		return this;
	}
	else {
		right->max();
	}
}

int BinaryTree::getKey() {
	return key;
}

//inorder tree walk
void BinaryTree::inorderWalk() {
	if (left != nullptr) {
		left->inorderWalk();
	}
	cout << key << " ";
	if (right != nullptr) {
		right->inorderWalk();
	}
}

//preorder tree walk
void BinaryTree::preorderWalk() {
	cout << key << " ";
	if (left != nullptr) {
		left->preorderWalk();
	}
	if (right != nullptr) {
		right->preorderWalk();
	}
}

//postorder tree walk
void BinaryTree::postorderWalk() {
	if (left != nullptr) {
		left->postorderWalk();
	}
	if (right != nullptr) {
		right->postorderWalk();
	}
	cout << key << " ";
}