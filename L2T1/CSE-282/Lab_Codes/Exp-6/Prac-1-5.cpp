#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;

    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

int height(Node *root) {
    if (root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

bool is_balanced(Node *root) {
    if (root == NULL) return true;

    int lh = height(root->left);
    int rh = height(root->right);

    return (abs(lh - rh) <= 1 && is_balanced(root->left) && is_balanced(root->right));
}

bool is_perfect(Node *root) {
    if (root == NULL) return true;

    int lh = height(root->left);
    int rh = height(root->right);

    return (lh == rh && is_perfect(root->left) && is_perfect(root->right));
}

int sum_left_child (Node *root) {
    if (root == nullptr) return 0;
    int sum(0);

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *tmp = q.front();

        if (tmp->left != nullptr) {
            q.push(tmp->left);
            sum += tmp->left->key;
        }
        if (tmp->right != nullptr) {
            q.push(tmp->right);
        }

        q.pop();
    }

    return sum;
}

int main ()
{
    Node *root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right->right = new Node(19);
    root->right->left->right = new Node(67);

    cout << "Height of the tree: " << height(root) << endl;

    if (is_balanced(root)) cout << "The tree is balanced." << endl;
    else cout << "The tree is not balanced." << endl;

    if (is_perfect(root)) cout << "The tree is perfect." << endl;
    else cout << "The tree is not perfect." << endl;

    cout << "Sum of left children: " << sum_left_child(root) << endl;

    return 0;
}
