#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node *n = new Node(val);
    n->next = head;
    if(head != NULL){

    head->prev = n;
}

head = n;

}

//1. Insert at tail
void insertAtTail(Node* &head, int val){

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deletionAtHead(Node* &head){
    Node* toDelete = head;

    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

void deletion(Node* &head, int pos){

    if(pos == 1){
        deletionAtHead(head);
        return;
    }

    Node* temp = head;
    int count = 0;
    while(temp != NULL && count != pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

//to avoid error thrown when we try to delete last node
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

delete temp;

}

void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    insertAtHead(head,4);

    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head,5);

    // display(head);

    // deletion(head, 1);
    deletionAtHead(head);

    display(head);
}