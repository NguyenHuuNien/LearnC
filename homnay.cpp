#include<bits/stdc++.h>

using namespace std;

struct Node
{
	Node* parent;
	Node* left;
	Node* right;
	int value;
	Node(Node* parent, Node* left, Node* right, int value) {
		this->parent = parent;
		this->left = left;
		this->right = right;
		this->value = value;
	}
};

Node* createNode(int val) {
	Node* p(NULL, NULL, NULL, val);
	return p;
}

Node* search(Node* cur, int val) {
	if (cur == NULL) {
		return NULL;
	}
	if (cur->value == val) {
		return cur;
	}
	if (cur->value > val) {
		return search(cur->left, val);
	}
	else {
		return search(cur->right, val);
	}
}

Node* insert(Node* cur, int val) {
	if (cur == NULL) {
		return new createNode(val);
	}
	if (cur->value > val) {
		Node* child = insert(cur->left, val);
		cur->left = child;
		child->parent = cur;
	}
	else {
		Node* child = insert(cur->right, val);
		cur->right = child;
		child->parent = cur;
	}
	return cur;
}

Node* leftMost(Node* cur) {
	while (cur->left != NULL) {
		cur = cur->left;
	}
	return cur;
}

Node* deleteNode(Node* cur, Node* y) {
	if (cur == y) {
		if (cur->left != NULL) {
			return cur->left;
		}
		else {
			return cur->right;
		}
	}
	else {
		if(cur)
	}
}

Node*  remove(Node* cur, int val) {
	if (cur->value == val) {
		if (cur->left == NULL&&cur->right==NULL) {
			delete cur;
			return NULL;
		}
		if (cur->left == NULL) {
			Node* tmp = cur->right;
			delete cur;
			return tmp;
		}
		if (cur->right == NULL) {
			Node* tmp = cur->left;
			delete cur;
			return tmp;
		}
		Node* y = leftMost(cur->right);
		
	}
	if (cur->value > val) {
		Node* child = remove(cur->left, val);
		cur->left = child;
		if (child != NULL) {
			child->parent = cur;
		}
	}
	else {
		Nde* child = remove(cur->right, val);
		cur->right = child;
		if (child != NULL) {
			child->parent = cur;
		}
	}
}

int main() {

}