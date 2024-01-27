#include <bits/stdc++.h>
#include "DLL.h"
using namespace std;

Node* pop_tail (Node *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node *temp = head;
    while (temp->next->next != NULL) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructDLL(arr, 10);
    traverse(head);

    cout << "Deleting the last node" << endl;
    head = pop_tail(head);
    traverse(head);

    return 0;
}
