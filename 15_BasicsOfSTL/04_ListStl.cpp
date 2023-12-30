// this is the another stl named list stl
//now in this program we understand about the list stl
#include<iostream>
#include<list>// we have to include the list library to use the stl functionality of the list data structure
using namespace std;
int main(){
    //creating a list
    list<int> l;//here we created a list which store the int type data and name of the list l
    cout<<"Size of the list :"<<l.size()<<endl;
    //initially the size of the list is 0
    
    //like another ds we have also push_back() and push_front () function to insert the element in back and front respectively like as
    l.push_back(8);
    l.push_back(9);
    l.push_front(7);
    l.push_front(5);
    //printing all the value of the list
    for(int i:l){
        cout<<i <<"  ";
    }
    cout<<endl;
    //we can also use erase() function to erase element of the list
    l.erase(l.begin());//this 
    cout<<"After Erase :"<<endl;
    for(int i:l){
        cout<<i<<"  ";
    }

    cout<<endl;
    //like another stl we can also use pop_back() and pop_front() funtions
    l.pop_back();//delete 9
    l.pop_front();//delete 7
    // cout<<"After using these functions :"<<endl;
    // for(int i:l){
    //     cout<<i<<"   ";
    // }

    // like another stl we can also find the size of the list
    cout<<"Size of the list :"<<l.size()<<endl;

    //we can also check the emptyness of the list
    cout<<"Is empty or not : "<<l.empty();

    //we can create a list of specified size and initialize initially by any value .bydefault the initializtaion done by zero
    list<int> n(5,1);//by default it is initialized with 0 but now it is 1
    cout<<endl<<"Size of list n :"<<n.size()<<endl;
    //printing the values of the list
    cout<<"printing the value of the list n :"<<endl;
    for(int j:n){
        cout<<j<<"  ";
    }

    list<int> copy(n);//we can also copy a list to another list as 
    cout<<endl<<"Printing the value of copied list : "<<endl;
    for(int n:copy){
        cout<<n<<"  ";
    }
}