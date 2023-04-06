#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
	int data;
	Node* next;
	Node* prev;
};

void display_next(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
	cout<<endl;
}

void display_prev(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->prev;
    }
	cout<<endl;
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 185; // assign data in first node
	head->next = second; // Link first node with second
	head->prev = NULL;

	second->data = 2432; // assign data to second node
	second->next = third;
	second->prev = head;

	third->data = 390; // assign data to third node
	third->next = NULL;
	third->prev = second;

	// Function call
	display_next(head);
	display_prev(third);

	return 0;
}
