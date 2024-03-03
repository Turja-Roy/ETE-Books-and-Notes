#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;

    Node (int key) {
        this->key = key;
        left = right = nullptr;
    }

    Node (Node *left, int key, Node *right) {
        this->key = key;
        this->left = left;
        this->right = right;
    }
};

int sum_leafs_rec (Node *root) {
    if (root == nullptr) return 0;

    if (root->left == nullptr && root->right == nullptr) return root->key;

    return sum_leafs_rec(root->left) + sum_leafs_rec(root->right);
}

int sum_leafs_levelorder (Node *root) {
    if (root == nullptr) return 0;

    queue<Node*> q;
    q.push(root);
    int sum = 0;

    while (!q.empty()) {
        Node *temp = q.front();

        if (temp->left == nullptr && temp->right == nullptr) sum += temp->key;

        if (temp->left != nullptr) q.push(temp->left);
        if (temp->right != nullptr) q.push(temp->right);

        q.pop();
    }

    return sum;
}

int main ()
{
    Node *root = new Node(new Node(new Node(new Node(9),
                                            12,
                                            new Node(14)),
                                   17,
                                   new Node(nullptr,
                                            23,
                                            new Node(19))),
                           50,
                           new Node(new Node(nullptr,
                                             54,
                                             new Node(67)),
                                    72,
                                    new Node(76)));

    cout << "Sum of the leaf nodes = " << sum_leafs_rec(root) << endl;
    cout << "Sum of the leaf nodes = " << sum_leafs_levelorder(root) << endl;

    return 0;
}
