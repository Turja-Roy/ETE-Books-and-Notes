#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int data) {
        this->data = data;
        left = right = nullptr;
    }

    Node (int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

void inorder(Node *root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root) {
    if (root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node *root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node *tmp = q.front();
        cout << tmp->data << " ";
        q.pop();

        if (tmp->left) q.push(tmp->left);
        if (tmp->right) q.push(tmp->right);
    }
}
