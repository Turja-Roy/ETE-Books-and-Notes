#include <bits/stdc++.h>
#include "DLL.h"
using namespace std;

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructDLL(arr, 10);
    traverse(head);

    return 0;
}
