#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    int key;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }

    //data > key
    if(root->data > key){
        return searchInBST(root->left, key);
    }
    else{
        return searchInBST(root->right, key);
    }
}

int main(){
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);


    if(searchInBST(root, 5) == NULL){
        cout << "Key doesn't exist";
    }
    else{
        cout << "Key exist";
    }
}