#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node (int data) {
        this->data = data;
    }

    Node (Node *prev, int data, Node *next) {
        this->prev = prev;
        this->data = data;
        this->next = next;
    }
};

Node* constructDLL (int arr[], int arrsize) {
    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i=1; i<arrsize; i++) {
        Node *temp = new Node(current, arr[i], nullptr);
        current->next = temp;
        current = temp;
    }

    return head;
}

void traverse (Node *head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* pop_tail (Node *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node *temp = head;
    while (temp->next->next != nullptr) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main ()
{
    int ara[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    cout << "Constructing DLL from array:" << endl;
    Node *head = constructDLL(ara, 10);
    traverse(head);

    cout << endl << "Deleting the last element:" << endl;
    head = pop_tail(head);
    traverse(head);

    return 0;
}
