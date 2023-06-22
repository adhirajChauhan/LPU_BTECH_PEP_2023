#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

//1.
void insertAtTail(Node* &head, int val){
    //create a new node in which data feild will have value and next will point NULL

    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}


//3.
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    //pointing new node towards head
    n -> next = head;
    //moving the head on new node
    head = n;
}

//2.
void display(Node* &head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

//4. Search in LL
bool search(Node *head, int key){

    Node* temp = head;

    while(temp != NULL){
        if(temp -> data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;

}

//5.

void deletion(Node* &head, int val){

    //case when there are no nodes
    if(head == NULL){
        return;
    }

    // if(head->next == NULL){
        
    // }

    Node* temp = head;

    while(temp->next->data != val){

        temp = temp->next;

    }

    Node* toDelete = temp ->next;
    temp->next = temp->next->next;
    delete toDelete;
}

//6.
void deleteAtHead(Node* &head){
    Node* nodeToDelete = head;

    head = head-> next;

    delete nodeToDelete;
}

//7. Reverse a LL
Node* reverse(Node* &head){

    Node* prev = NULL;
    Node* curr = head;
    Node* next; 

    while(curr != NULL)
    {
        next = curr->next;
        curr->next=prev;

        prev = curr;
        curr=next;
    }
    // head = prev;
    cout << "Head is " << head->data << endl;
    return prev;
}

Node* kReverse(Node* head, int k){

    if(head == NULL){
        return NULL;
    }

    //reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next; 
    int count = 0;

    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
        count++;
    }

    //recursion for remaining LL
    if(next!=NULL){

        head->next = kReverse(next, k);
    }

    return prev;
}



int main(){
    Node* head = NULL;

    insertAtHead(head, 5);
    insertAtHead(head, 4);

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 9);
    insertAtTail(head, 10);
    insertAtTail(head, 11);


    // cout << search(head, 99) << endl;

    // deletion(head, 5);
    // deleteAtHead(head);

    display(head);
    // Node* rev = reverse(head);
    Node* rev = kReverse(head,2);

    display(rev);

}