#pragma once

class Node {
private:
	unsigned int key;
	Node* left;
	Node* right;

public: 
	Node();
	Node(int k);
	~Node();

	void insert(int k);
	bool find(int k);
	void del(int k);
	int min();
	int max();
	void inorderWalk();
	void preorderWalk();
	void postorderWalk();
};