#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node (int data) {
        this->data = data;
        next = nullptr;
    }
    Node (int data, Node *next) {
        this->data = data;
        this->next = next;
    }
};

Node* constructLL (int arr[], int arrsize) {
    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i=1; i<arrsize; i++) {
        Node *temp = new Node(arr[i]);
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

Node* prepend (Node *head, int x) {
    Node *current = nullptr;

    if (head == nullptr) {
        current = new Node(x);
        head = current;
        return head;
    }

    current = new Node(x);
    current->next = head;
    head = current;
    
    return head;
}

Node* append (Node *head, int x) {
    Node *temp = head, *current;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    current = new Node(x);
    temp->next = current;

    return head;
}

Node* delete_nth_node (Node *head, int n) {
    Node *temp = head, *prev = nullptr;

    int cnt = 0;
    while (temp != nullptr && ++cnt != n) {
        prev = temp;
        temp = temp->next;
    }
    Node *nxt = temp->next;
    prev->next = nxt;
    delete(temp);

    return head;
}

Node *reverse_list (Node *head) {
    Node *prev=nullptr, *cur=head, *nxt=cur->next;

    while (cur != nullptr) {
        cur->next = prev;
        prev = cur;
        cur = nxt;
        if (nxt != nullptr) nxt = nxt->next;
    }

    return prev;
}
