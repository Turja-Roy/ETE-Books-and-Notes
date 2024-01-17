#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node (int x) {
        data = x;
        next = nullptr;
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

void TraverseList(Node *head) {
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

    if (head == NULL) {
        current = new Node(x);
        return current;
    }
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    current = new Node(x);
    temp->next = current;

    return head;
}

int size_LL (Node *head) {
    if (head == nullptr){
        return 0;
    }

    int count = 1;
    while (head->next != nullptr) {
        count++;
        head = head->next;
    }

    return count;
}

Node* pop_head (Node *head) {
    if (head->next == nullptr) {
        head = nullptr;
        return head;
    }

    head = head->next;
    return head;
}

Node* pop_tail (Node *head) {
    if (head->next == nullptr) {
        head = nullptr;
        return head;
    }

    Node *second_last = head;

    while (second_last->next->next != nullptr) {
        second_last = second_last->next;
    }
    second_last->next = nullptr;

    return head;
}
