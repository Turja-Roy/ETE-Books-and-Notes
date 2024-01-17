#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main ()
{
    Node *a=NULL, *b=NULL, *c=NULL;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));

    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;

    Node *head = a;
    while (a != NULL) {
        cout << a->data << " ";
        a = a->next;
    }

    return 0;
}
