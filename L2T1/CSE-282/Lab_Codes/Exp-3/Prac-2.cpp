#include <bits/stdc++.h>
#include "SLL.h"
using namespace std;

Node* insert (Node *head, int k, int val) {
    Node *tmp = new Node(val);
    if (k == 1) {
        tmp->next = head;
        return tmp;
    }

    Node *curr = head;
    for (int i=0 ; i<k-1 ; i++) {
        curr = curr->next;
    }
    tmp->next = curr->next;
    curr->next = tmp;

    return head;
}

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructLL(arr, 10);
    traverse(head);

    int val, k;
    cout << "Number to insert: "; cin >> val;
    cout << "Position to insert at: "; cin >> k;
    head = insert(head, k, val);
    traverse(head);

    return 0;
}
