#include "BinaryTree.h"
#include <iostream>

using namespace std;

Node::Node() {
	key = 0;
	left = nullptr;
	right = nullptr;
}

Node::Node(int k) {
	key = k;
	left = nullptr;
	right = nullptr;
}

Node::~Node() {
	delete left, right; 
}

void Node::insert(int k) {
	if (k <= key) {
		if (left == nullptr) {
			left = new Node(k);
		}
		else {
			left->insert(k);
		}
	}
	else {
		if (right == nullptr) {
			right = new Node(k);
		}
		else {
			right->insert(k);
		}
	}
}

bool Node::find(int f) {
	if (key == f) {
		return true;
	}
	else if (f < key && left != nullptr) {
		left->find(f);
	}
	else if (f > key && right != nullptr) {
		right->find(f);
	}
	else {
		return false;
	}
}