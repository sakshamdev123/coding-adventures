#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    // Node(int data){
    // this->data=data;
    // next=NULL;
    // prev=NULL;
    // }
};
void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
   new_node->data = new_data;
    new_node->next = (*head_ref);
    // (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void display_next(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
    cout<<endl;
}

void display_prev(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->prev;
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
    display_next(head);
    // display_prev(head);
    return 0;
}
