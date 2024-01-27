#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node (int x) {
        data = x;
        next = nullptr;
    }
};

Node *constructLL(int arr[], int len) {
    Node *head = new Node(arr[0]);
    Node *current = head;

    if (len == 0) {
        return nullptr;
    }

    for (int i=1 ; i<len ; i++) {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }

    return head;
}

int size(Node *head) {
    if (head == nullptr) {
        return 0;
    }
    int count=1;
    while (head->next != nullptr) {
        count++;
        head = head->next;
    }

    return count;
}

int main ()
{
    int ara[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = constructLL(ara, 8);

    cout << "Length of Linked List = " << size(head) << endl;

    return 0;
}
