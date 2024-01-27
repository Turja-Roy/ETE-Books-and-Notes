#include <bits/stdc++.h>
#include "SLL.h"
using namespace std;

int find_position (Node *head, int x) {
    int cnt=0;
    while (head != nullptr) {
        if (head->data == x) return ++cnt;
        ++cnt;
        head = head->next;
    }

    cout << x << " not found" << endl;
    return -1;
}

int main ()
{
    int arr[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    Node *head = constructLL(arr, 10);
    traverse(head);

    int elem;
    cout << "Enter element to find position of: ";
    cin >> elem;

    if (find_position(head, elem) != -1) cout << "Position: " << find_position(head, elem) << endl;

    cout << "Enter element to find position of: ";
    cin >> elem;

    if (find_position(head, elem) != -1) cout << "Position: " << find_position(head, elem) << endl;

    return 0;
}
