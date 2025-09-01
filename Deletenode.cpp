#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node (int value) {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size) {
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);
    return temp;
}

int main() {

    Node *Head;
    Head = NULL;
    int arr[] = {2,4,6,1,7};

    Head = CreateLinkedList(arr,0,5);
    

    //Delete a node at start
    // if (Head!=NULL) {
    //     Node *temp = Head;
    //     Head = Head->next;
    //     delete temp;
    // }

    //Delete a node at end
    if (Head!=NULL) {
        //Only one node is present
        if (Head->next==NULL) {
            // delete Head;
            // Head = NULL;
            //OR
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }
        //More than 1 node is present
        else {
            Node *curr = Head;
            Node *prev = NULL;
            //curr->next is not NULL
            while (curr->next!=NULL) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }
    }

    while(Head) {
        cout << Head->data<<" ";
        Head = Head-> next;
    }

    return 0;
}