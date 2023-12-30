#include<iostream>
using namespace std;
//for enqueue an element itm in the queue.
void enqueue(int arr[],int n,int front,int rear,int itm){
    // int n=sizeof(arr)/sizeof(int);
    if(rear==n-1){
        cout<<"Overflow";
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        arr[rear]=itm;
    }
    else{
        rear++;
        arr[rear]=itm;
    }
}
//function to dequque an element from the queue
void dequeue(int front,int rear,int arr[]){
    if(front==-1&&rear==-1){
        cout<<"underflow";
    }
    else if(rear==front){
        front=rear=-1;
    }
    else{
        cout<<"Deleted element :"<<arr[front];
        front++;
    }
}
int main(){
    int queue[5];
    int front,rear;
    front=rear=-1;
    enqueue(queue,5,front,rear,23);

}