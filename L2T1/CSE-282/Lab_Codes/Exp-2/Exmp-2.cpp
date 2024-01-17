#include <bits/stdc++.h>
#include "LL.h"
using namespace std;

int main ()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    Node *head = constructLL(arr, 7);

    TraverseList(head);
    cout << endl << "Last head:" << head->data << endl;

    head = prepend(head, 0);
    TraverseList(head);

    append(head, 89);
    TraverseList(head);

    return 0;
}
