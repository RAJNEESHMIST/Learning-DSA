#include <iostream> 
using namespace std; 
struct node {  
	int data; 
	node* next; 
	node(int d){ 
	data = d; 
	next = NULL; 
	} 
}; 
//insert at begining 
void insertAtBeg(node*& head, int data) 
{ 
	node* n = new node(data); 
	n->next = head; 
	head = n; 
} 
//deleting element from the linked list
// void del(){
// 	node*
    

// };

//printing of the element of the linked list
void display(node* head) 
{ 
	while (head != NULL) { 
		cout << head->data << "->"; 
		head = head->next; 
	} 
} 

int main() 
{ 
	node* head = NULL; 
	insertAtBeg(head, 5); 
	insertAtBeg(head, 2); 
    // del(head);
	display(head); 
}
