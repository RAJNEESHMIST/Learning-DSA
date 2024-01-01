// this program is to understand the map stl 
#include<iostream>
#include<map>
using namespace std;
int main(){

    //creation of map
    map<int,string> m;
    //this is the way we insert the element in  the map
    m[1]="Rajneesh";
    m[3]="Anshu";
    m[8]="Marie";

    //we can also insert data in the using the insert function as
    m.insert({5,"Senthil"});

    cout<<"Before erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<"   "<<i.second<<endl;
    }//map data printed in the sorted form
       
    cout<<"Finding 8 or not : "<<m.count(8)<<endl;//1 because of 8 as a key present in the map

    m.erase(3);
    cout<<"After erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<"   "<<i.second<<endl;
    }
}