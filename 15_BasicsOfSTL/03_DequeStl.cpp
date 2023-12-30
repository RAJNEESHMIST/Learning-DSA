//this program is used to understanding the doubly ended queue stl
//deque -> double ended queue
#include<iostream>
// as we already know for using the deque stln we have to include the deque library as
#include<deque>
using namespace std;
int main(){
    // syntax to create deque as follows
    deque<int> d;//here we create a deque d of int type
    d.push_back(5);
    d.push_front(8);
    d.push_front(9);
    d.push_back(4);

    // here push_back() -> is used to insert the element from the end of the deque
    // push_front() -> it is used to insert element from the front of the queue

    //now we print the  elements of the queue using the enhance for loop
    for (int i:d){
        cout<<i<<"  ";
    }//output -> 9 8 5 4

    //in the same way we use pop_back and pop_front function to deleting the element from the deque
    d.pop_back();
    d.pop_front();
    cout<<endl;
    for (int i:d){
        cout<<i<<"  ";
    }//8 5

    // some another function defined like the another stl are as follows for example
    //like to find the size of the deque
    cout<<endl<<"Size : "<<d.size()<<endl;
    // cout<<endl<<"Size : "<<d.capacity();//capacity is not working in this stl because of size and capacity is same

    //we can also find element at specific index
    cout<<"Element at Index 1 :"<<d.at(1)<<endl;
    // cout<<"Element at Index 2 :"<<d.at(2)<<endl;//this throw the error of the out of range

    //we can access the front element and last element through the predefined function present in the stl
    cout<<"Front element : "<<d.front()<<endl;
    cout<<"Last element : "<<d.back()<<endl;

    //like the other stl we can also check the emptyness of the queue
    // d.pop_back();
    // d.pop_front();//if empty this then dequq become empty and through 1 -> true that tells us that deque is empty
    cout<<"Is empty or not : "<<d.empty();//this return true if the deque is empty

    //we have a erase functoin to erase the deque 
    cout<<endl<<"Size before rease: "<<d.size()<<endl;
    d.erase(d.begin(),d.end());
    cout<<endl<<"Size after rease: "<<d.size()<<endl;
}