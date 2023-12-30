//this is the creation of the stack
#include<iostream>
#include<stack>
using namespace std;

// stack implementation using array
class Stack{
    // properties
    int *arr;
    int top;
    int size;

    //behavior
    Stack(int size){
        this ->size=size;
        arr=new int[size];
        top=-1;
    }
};
int main(){
    //creating a stack using the STL
    // stack<int> num;
    // //doing push()-operation
    // num.push(8);
    // num.push(32);
    // num.push(99);
    // cout<<"Top Element :"<<num.top();

    // //size()-tell the number of element present in the stack
    // cout<<"\nThe size of the stack :"<<num.size();//this return 3 beacuse we push 3 element in the stack

    // //pop() operation
    // num.pop();
    // cout<<"\nTop Element :"<<num.top();

    // num.pop();
    // if(num.empty()){
    //     cout<<"\nStack is Empty";
    // }
    // else{
    //     cout<<"\nStack is not Empty";
    // }
    // cout<<"\nTop Element :"<<num.top();
    // num.pop();
    // if(num.empty()){
    //     cout<<"\nStack is Empty";
    // }
    // else{
    //     cout<<"\nStack is not Empty";
    // } 
   
}