// this program is to understand the concept of set stl
#include<iostream>
#include<set>
using namespace std;
int main(){

    //creation of set
    set<int> s;
    s.insert(8);
    s.insert(6);
    s.insert(9);
    s.insert(1);
    s.insert(5);
    //note -> set accept only unique elements and size also increse when distinct element insert
    cout<<"Size before deletion -> "<<s.size()<<endl;
    
    //printing the element of the set. set prints the data in sorted form
    cout<<"Element of the set :"<<endl;
    for(int i:s){
        cout<<i<<"  ";
    }
    cout<<endl;
    s.erase(s.begin());//it erase the begin element of the set
    cout<<"Size after deletion -> "<<s.size()<<endl;
    cout<<"Element of the set after deletion :"<<endl;
    for(auto i:s){
        cout<<i<<"  ";
    }
    cout<<endl;

    //count () -> check weather an element present in the set or not
    cout<<"5 is present or not : "<<s.count(-5);

    cout<<endl;
    set<int>::iterator itr=s.find(8);
    for(auto i=itr;i!=s.end();i++){
        cout<<*i<<"  ";
    }
    
    
}         