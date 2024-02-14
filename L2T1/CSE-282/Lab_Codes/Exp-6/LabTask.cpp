#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define pvi pair<vi,vi>
#define mkp make_pair
using namespace std;

struct Node {
    int key;
    Node *left, *right;

    Node (int key) {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

pvi print_left_childs (Node *root) {
    vi v_left_childs, v_right_childs;
    if (root == nullptr) cout << "Empty\n";

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *tmp = q.front();

        if (tmp->left != nullptr) {
            q.push(tmp->left);
            v_left_childs.pb(tmp->left->key);
        }
        if (tmp->right != nullptr) {
            q.push(tmp->right);
            v_right_childs.pb(tmp->right->key);
        }

        q.pop();
    }

    return mkp(v_left_childs, v_right_childs);
}

int main ()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);

    pvi v_lefts = print_left_childs(root);

    cout << "Printing left childs only: ";
    for (auto i : v_lefts.first) cout << i << " ";
    cout << endl;

    cout << "Printing right childs only: ";
    for (auto i : v_lefts.second) cout << i << " ";
    cout << endl;

    return 0;
}
