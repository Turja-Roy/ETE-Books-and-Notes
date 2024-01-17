#include <bits/stdc++.h>
#include "Linked_List_Excercise.h"
using namespace std;

int main ()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    Node *head = constructLL(arr, 10);

    append(head, 110);
    TraverseList(head);

    return 0;
}
