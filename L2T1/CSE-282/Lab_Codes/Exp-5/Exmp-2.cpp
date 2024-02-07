#include <bits/stdc++.h>
#include "Tree.h"
using namespace std;

int main ()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl << endl;

    cout << "Levelorder Traversal: ";
    levelorder(root);
    cout << endl;

    return 0;
}
