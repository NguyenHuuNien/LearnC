#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node
{
	Node* left;
	Node* right;
	Node* prev;
	int value;
};

Node* createNode(int val) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->left = NULL;
	p->right = NULL;
	p->prev = NULL;
	p->value = val;
	return p;
}

Node* start = NULL;

Node* leftMost(Node* start) {
	Node* cur = start;
	while (cur->left != NULL) {
		cur = cur->left;
	}
	return cur;
}

void printNode(Node* start) {
	Node* cur = start;
	if (cur == NULL) return;
	else {
		printNode(cur->left);
		printf("%d ", cur->value);
		printNode(cur->right);
	}
}

Node* search(Node* start, int val) {
	Node* cur = start;
	if (cur->value == val) {
		return cur;
	}
	if (cur->left != NULL&&cur->value>val) {
		return search(cur->left, val);
	}
	if (cur->right != NULL && cur->value < val) {
		return search(cur->right, val);
	}
	return NULL;
}

Node* insert(Node* start, int val) {
	Node* p = createNode(val);
	Node* cur = start;
	if (cur == NULL) {
		return p;
	}
	while (cur != NULL) {
		if (cur->left != NULL && cur->value > val) {
			cur = cur->left;
		}
		if (cur->right != NULL && cur->value <= val) {
			cur = cur->right;
		}
		if (cur->left == NULL && cur->value > val) {
			cur->left = p;
			p->prev = cur;
			break;
		}
		if (cur->right == NULL && cur->value <= val) {
			cur->right = p;
			p->prev = cur;
			break;
		}
	}
	return start;
}

Node* remove(Node* start, int val) {
	Node* cur = start;
	while (cur != NULL) {
		if (cur->value == val) {
			if (cur->value >= cur->prev->value) {
				cur->prev->right = cur->right;
				cur->right->prev = cur->prev;
			}
			else {
				cur->prev->left = cur->left;
				cur->left->prev = cur->prev;
			}
		}
		else {
			if (val < cur->value) {
				cur = cur->left;
			}
			else {
				cur = cur->right;
			}
		}
	}
	return start;
}

int main() {
	start = insert(start, 7);
	start = insert(start, 6);
	start = insert(start, 4);
	start = insert(start, 2);
	start = insert(start, 8);
	start = insert(start, 3);
	start = insert(start, 2);
	start = remove(start, 2);
	printNode(start);
	return 0;
}