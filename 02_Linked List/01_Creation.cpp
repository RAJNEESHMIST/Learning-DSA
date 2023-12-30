//this program is dedicated to how we can create a linked list 
#include<iostream>
using namespace std;
//here we create the linked list by using class
class Node{
    public:
    int data;
    Node *link;//means a link is a pointer to node which contain data part as well as link part

    Node(int val){
        data=val;
        link=NULL;
    }
};
int main(){
    Node* n=new Node(10);//create a node which set data=10 and link =null
    // Node* m=new Node(1);
    cout<<n->data <<" -> "<<n->link<<"  ";
    
    

return 0;
}