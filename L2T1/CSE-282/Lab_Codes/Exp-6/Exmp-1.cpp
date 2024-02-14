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

int max_depth (Node *root) {
    if (root == nullptr) return 0;

    int lh = max_depth(root->left);
    int rh = max_depth(root->right);

    return 1 + max(lh, rh);
}

bool is_perfect (Node *root) {
    if (root == nullptr) return true;

    int lh = max_depth(root->left);
    int rh = max_depth(root->right);

    return (lh == rh);
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

    is_perfect(root) ? cout << "Perfect\n" : cout << "Not perfect\n";

    return 0;
}
