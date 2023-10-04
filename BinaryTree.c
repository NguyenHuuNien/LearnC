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

Node* rightMost(Node* start) {
	Node* cur = start;
	while (cur->right != NULL) {
		cur = cur->right;
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
	if (cur->value == val) {
		if (cur->left == NULL) {
			Node* tmp = cur->right;
			free(start);
			return tmp;
		}
		else if (cur->right == NULL) {
			Node* tmp = cur->left;
			free(start);
			return tmp;
		}
		else {
			Node* p = rightMost(cur->left);
			p->right = cur->right;
			cur->right->prev = p;
			return cur->left;
		}
	}
	else {
		if (cur->value > val) {
			Node* p = remove(start->left, val);
			cur->left = p;
			p->prev = cur;
			return start;
		}
		else {
			Node* p = remove(start->right, val);
			cur->right = p;
			p->prev = cur;
			return start;
		}
	}
}

Node* next(Node* start, int val) {
	Node* cur = start;
	if (cur->value == val) {
		if (cur->right == NULL) {
			if (cur->prev->value < val) {
				return NULL;
			}
			else if (cur->prev->value > val) {
				return cur->prev;
			}
		}
		else {
			return leftMost(cur->right);
		}
	}
	else {
		if (cur->value > val) {
			return next(cur->left, val);
		}
		else {
			return next(cur->right, val);
		}
	}
}

Node* prev(Node* start, int val) {
	Node* cur = start;
	if (cur->value == val) {
		if (cur->left == NULL) {
			if (cur->prev->value > val) {
				return NULL;
			}
			else if(cur->prev->value < val){
				return cur->prev;
			}
		}
		else {
			return rightMost(cur->left);
		}
	}
	else {
		if (cur->value > val) {
			return prev(cur->left, val);
		}
		else {
			return prev(cur->right, val);
		}
	}
}

int main() {
	start = insert(start, 5);
	start = insert(start, 3);
	start = insert(start, 9);
	start = insert(start, 1);
	start = insert(start, 4);
	start = insert(start, 7);
	start = insert(start, 11);
	start = insert(start, 0);
	start = insert(start, 2);
	start = insert(start, 6);
	start = insert(start, 8);
	start = insert(start, 10);

	printf("%d ", prev(start, 0)->value);

	//printNode(start);

	return 0;
}