#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void display(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    push(&head,4);
    push(&head,6);
    push(&head,2);
    push(&head,7);
    push(&head,5);
    push(&head,9);
    display(head);
    return 0;
}
