//this program is to understand the stl of the Queue data structure
#include<iostream>
#include<queue>
using namespace std;
 int main(){
    //creation of the queue using the stl
    queue<string> name;
    //note -> queue follow the FIFO - First In First Out
    //we can insert the element using the push () functoion
    name.push("Rajneesh");
    name.push("Verma");
    //printing the size of the queue
    cout<<"Size : "<<name.size()<<endl;
    
    //we can print the front element from the queue as
    cout<<"First element : "<<name.front()<<endl;
    //we can delete using the pop() function
    name.pop();
    cout<<"First element : "<<name.front()<<endl;//because of deletion
 }