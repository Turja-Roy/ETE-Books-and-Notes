#include <bits/stdc++.h>
#include <iterator>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node (int data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
    Node (Node *prev, int data, Node *next) {
        this->data = data;
        this->next = next;
        this->prev = prev;
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

Node* traverse (Node *head) {
    Node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return head;
}
