#include <bits/stdc++.h>
#include "DLL.h"
using namespace std;

Node* pop_head (Node *head) {
    if (head == nullptr) {
        cout << "Error: List is empty" << endl;
        return nullptr;
    }
    Node *tmp = head->next;
    tmp->prev = nullptr;
    delete head;

    return tmp;
}

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructDLL(arr, 10);
    traverse(head);

    cout << "Deleting the first node" << endl;
    head = pop_head(head);
    traverse(head);

    return 0;
}
