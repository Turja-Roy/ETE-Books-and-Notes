#include <bits/stdc++.h>
#include "Linked_List_Excercise.h"
using namespace std;

int main ()
{
    int arr[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    cout << "Constructing Linked List from array:" << endl;
    Node *head = constructLL(arr, 10);
    TraverseList(head); cout << endl;

    cout << "Added 0 in the beginning:" << endl;
    head = prepend(head, 0);
    TraverseList(head); cout << endl;

    cout << "Added 89 in the end:" << endl;
    append(head, 89);
    TraverseList(head); cout << endl;

    cout << "Size of the Linked List:" << endl;
    cout << size_LL(head) << endl << endl;

    cout << "Removed the first element:" << endl;
    head = pop_head(head);
    TraverseList(head); cout << endl;

    cout << "Removed the last element:" << endl;
    pop_tail(head);
    TraverseList(head); cout << endl;

    return 0;
}
