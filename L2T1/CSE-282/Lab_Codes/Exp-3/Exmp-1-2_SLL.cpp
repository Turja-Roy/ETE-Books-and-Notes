#include <bits/stdc++.h>
#include "SLL.h"
using namespace std;

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructLL(arr, 10);
    traverse(head);

    head = delete_nth_node(head, 2);
    traverse(head);

    head = reverse_list(head);
    traverse(head);

    return 0;
}
