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

int main ()
{
    cout << "===== Traversing Tree 1 =====\n\n";

    Node *root1 = new Node(50);
    root1->left = new Node(17);
    root1->right = new Node(72);
    root1->left->left = new Node(12);
    root1->left->right = new Node(23);
    root1->right->left = new Node(54);
    root1->right->right = new Node(76);
    root1->left->left->left = new Node(9);
    root1->left->left->right = new Node(14);
    root1->left->right->right = new Node(19);
    root1->right->left->right = new Node(67);

    cout << "Inorder Traversal: ";
    inorder(root1);

    cout << "\nPreorder Traversal: ";
    preorder(root1);

    cout << "\nPostorder Traversal: ";
    postorder(root1);

    cout << "\n\n===== Traversing Tree 2 =====\n\n";

    Node *root2 = new Node(1);
    root2->left = new Node(3);
    root2->left->left = new Node(5);
    root2->left->right = new Node(2);
    root2->left->left->right = new Node(4);
    root2->left->left->right->right = new Node(11);
    root2->left->right->left = new Node(7);
    root2->left->right->right = new Node(8);
    root2->left->right->left->right = new Node(9);
    root2->left->right->right->right = new Node(13);
    root2->left->right->right->right->right = new Node(12);

    cout << "Inorder Traversal: ";
    inorder(root2);

    cout << "\nPreorder Traversal: ";
    preorder(root2);

    cout << "\nPostorder Traversal: ";
    postorder(root2);
    cout << endl;

    return 0;
}
