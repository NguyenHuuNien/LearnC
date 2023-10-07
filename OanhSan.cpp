#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node* prev;
};
Node* root = NULL;

Node* createNode(int x) {
    Node* newnode = new Node();
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->prev = NULL;
    return newnode;
}
Node* insertNode(Node* root, int x) {

    if (root == NULL) {
        Node* p = createNode(x);
        p->prev = 
        return createNode(x);
    }
    if (root->data < x) {
        root->right = insertNode(root->right, x);
    }
    else if (root->data > x) {
        root->left = insertNode(root->left, x);
    }
    return root;
}

Node* searchVal(Node* root, int x) {
    if (root == NULL) return NULL;
    if (root->data == x) return root;
    else if (root->data < x) {
        return searchVal(root->right, x);
    }
    else if (root->data > x) {
        return searchVal(root->left, x);
    }
    return NULL;

}

Node* leftMost(Node* root) {
    Node* tmp = root;
    while (tmp->left != nullptr) {
        tmp = tmp->left;
    }
    return tmp;
}

Node* removee(Node* root, int x) {
    if (root == NULL) return root;
    if (root->data < x) {
        root->right = removee(root->right, x);
    }
    else if (root->data > x) {
        root->left = removee(root->left, x);
    }
    else {
        if (root->left == NULL) {
            Node* tmp = root->right;
            delete root;
            return tmp;

        }
        else if (root->right == NULL) {
            Node* tmp = root->left;
            delete root;
            return tmp;
        }
        else {
            Node* tmp = leftMost(root->right);
            root->data = tmp->data;
            root->right = removee(root->right, tmp->data);

        }
    }
    return root;
}


Node* next(Node* root, int x) {
    Node* cur = root;
    if (cur->data == x) {
        if (cur->right == nullptr) {
            if (cur->prev->data < x) {
                return NULL;
            }
            else if (cur->prev->data > x) {
                return cur->prev;
            }
        }
        else {
            return leftMost(cur->right);
        }
    }
    else {
        if (cur->data > x) {
            return next(cur->left, x);
        }
        else {
            return next(cur->right, x);
        }
    }
}
void in(Node* root) {

    if (root != NULL) {
        //cout<< root->data <<" ";

        in(root->left);
        cout << root->data << " ";
        in(root->right);

    }
}
int main() {
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 9);
    root = insertNode(root, 1);
    root = insertNode(root, 4);
    root = insertNode(root, 7);
    root = insertNode(root, 11);
    root = insertNode(root, 0);
    root = insertNode(root, 2);
    root = insertNode(root, 6);
    root = insertNode(root, 8);
    root = insertNode(root, 10);
    Node* a = next(root, 4);
    cout << "a = " << a->data << endl;
    in(root);


}