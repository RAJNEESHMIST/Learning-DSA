//this program is to understand the stack using the stl 
#include<iostream>
//like another ds we have to include the library of the stack as
#include<stack>
using namespace std;
int main(){
    //creation of the stack
    stack<int> s;
    cout<<"Size : "<<s.size()<<endl;//initially the size of the stack is 0

    //stack is the data structure in which insertion and deletion can be done only from one side that is called the top of the stack

    //we can insert an element using the push() funtion
    s.push(2);
    s.push(1);
    s.push(3);

    //printing the value of the stack
    cout<<"Top Element : "<<s.top()<<endl;//print 3 because of the it follow LIFO -> Last In First Out

    //we can delete the element using the pop() funtion
    s.pop();//3 is deleted from the stack
    cout<<"Top Element : "<<s.top()<<endl;//print 1 because of the it follow LIFO -> Last In First Out

    // /we can also check the emptyness of the stack by using the empty() function
    cout<<"Is empty or not :"<<s.empty()<<endl;
}