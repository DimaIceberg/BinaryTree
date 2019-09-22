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

bool Node::find(int k) {
	if (key == k) {
		return true;
	}
	else if (k < key && left != nullptr) {
		left->find(k);
	}
	else if (k > key && right != nullptr) {
		right->find(k);
	}
	else {
		return false;
	}
}

void Node::del(int k) {
	//?
}

int Node::min() {
	if (left == nullptr) {
		return key;
	}
	else {
		left->min();
	}
}

int Node::max() {
	if (right == nullptr) {
		return key;
	}
	else {
		right->max();
	}
}

void Node::inorderWalk() {
	if (left != nullptr) {
		left->inorderWalk();
	}
	cout << key << " ";
	if (right != nullptr) {
		right->inorderWalk();
	}
}

void Node::preorderWalk() {
	cout << key << " ";
	if (left != nullptr) {
		left->preorderWalk();
	}
	if (right != nullptr) {
		right->preorderWalk();
	}
}

void Node::postorderWalk() {
	if (left != nullptr) {
		left->postorderWalk();
	}
	if (right != nullptr) {
		right->postorderWalk();
	}
	cout << key << " ";
}