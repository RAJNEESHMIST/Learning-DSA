//insertion at the end of the linked list
#include<iostream>
using namespace std;
//node class
class Node{
public:
int data;
Node*next;

};
void printList(Node*n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}
void insertAtEnd(Node**head,int value){
    //it contain following nodes
    //1.prepare a node
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    //2.check weather linked list is empty or not
    if(*head==NULL){
        *head=newNode;
        return;
    }
    //3.find the last node
    Node *last=*head;
    while(last->next!=NULL){
        last=last->next;
    }
    //4.insert a new node
    last->next=newNode;
}
int main(){
    //creating a linked list
    Node*head=new Node();
    Node*second=new Node();
    Node*third=new Node();

    head->data=1;
    head->next=second;
    second->data=2;
    head->next=third;
    third->data=8;
    head->next=NULL;

    printList(head);
    
}
