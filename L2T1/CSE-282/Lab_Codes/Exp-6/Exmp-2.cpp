#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

int diff_depth (Node *root) {
    if (root == nullptr) return 0;

    int lh = 1 + diff_depth(root->left);
    if (lh == -1) return -1;

    int rh = 1 + diff_depth(root->right);
    if (rh == -1) return -1;

    if (abs(lh - rh) > 1) return -1;

    return max(lh, rh);
}

bool is_balanced (Node *root) {
    return (diff_depth(root) != -1);
}

int main ()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    root -> left -> left -> left = new Node(9);

    is_balanced(root) ? cout << "Balanced\n" : cout << "Not balanced\n";

    return 0;
}
