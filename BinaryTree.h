#pragma once

class BinaryTree {
private:
	int key;
	BinaryTree* left;
	BinaryTree* right;
	BinaryTree* root;

public: 
	BinaryTree(int k);
	BinaryTree(BinaryTree* rootTree, int value);
	~BinaryTree();

	int getKey();
	void insert(BinaryTree* rootTree, int insertValue);
	bool find(int findValue);
	BinaryTree* min();
	BinaryTree* max();

	//tree traversal
	void inorderWalk();
	void preorderWalk();
	void postorderWalk();
};