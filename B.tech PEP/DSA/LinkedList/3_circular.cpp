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

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp= temp->next;
    }
    temp->next = n;
    n->next= head;
    head = n;
}

void insertAtTail(Node* &head, int val){

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}
void deleteAtHead(Node* &head){
    Node* temp = head;

    while(temp->next!=head){
        temp= temp->next;
    }

    Node* toDelete = head;
    temp->next = head->next;
    head = head->next;

    delete toDelete;
}

void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count != pos-1){
        temp = temp->next;
        count++;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

void display(Node* head){
    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp= temp->next;
    }while(temp != head);

    cout << "NULL" << endl;
}

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL) return NULL;

    Node* fast = head;
    Node* slow = head;

    while(slow!= NULL && fast != NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow==fast) return slow;
    }

    return NULL;

}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    // int val = intersection -> data;
    // cout << val <<endl;

    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){

    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp= temp->next;
    }

    temp ->next = NULL;
}

int main(){
    Node* head = NULL;
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);

    display(head);

    // deletion(head, 5);
    // display(head);

    if(floydDetectLoop(head)){
        cout << "LOOP Exist" << endl;
    }
    else{
        cout << "No LOOP" << endl;
    }

    // Node* loop = getStartingNode(head);
    // cout << "Loop start at : " << loop << endl;

    Node* loop = getStartingNode(head);
    int startNode = loop ->data;
    cout << "Loop start at : " << startNode << endl;

}