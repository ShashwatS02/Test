#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value) {
        data = value;
        next = prev = NULL;
    }
};


int main() {

    Node *head = NULL;

    //Insert at start

    //LL doesn't exist
    if(head == NULL) {
        head = new Node(5);
    }
    //LL already exist
    else {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    Node *traverse = head;
    while(traverse) {
        cout << traverse->data<< " ";
        traverse = traverse->next;
    }

    return 0;
}