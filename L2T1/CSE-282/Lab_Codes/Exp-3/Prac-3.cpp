#include <bits/stdc++.h>
#include "DLL.h"
using namespace std;

Node* prepend (Node *head, int val) {
    if (head == nullptr) {
        Node *tmp = new Node(val);
        return tmp;
    }
    Node *tmp = new Node(nullptr, val, head);
    head->prev = tmp;

    return tmp;
}

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructDLL(arr, 10);
    traverse(head);

    cout << "Inserting -1 in the beginning" << endl;
    head = prepend(head, -1);
    traverse(head);

    return 0;
}
