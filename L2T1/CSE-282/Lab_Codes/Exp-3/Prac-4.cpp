#include <bits/stdc++.h>
#include "DLL.h"
using namespace std;

Node* append (Node *head, int val) {
    if (head == nullptr) {
        Node *cur = new Node(val);
        return cur;
    }

    Node *tmp = head;
    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }
    Node *cur = new Node(tmp, val, nullptr);
    tmp->next = cur;

    return head;
}

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructDLL(arr, 10);
    traverse(head);

    cout << "Inserting 55 at the end" << endl;
    head = append(head, 55);
    traverse(head);

    return 0;
}
