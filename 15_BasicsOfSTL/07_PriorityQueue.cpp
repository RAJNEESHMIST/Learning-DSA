//this program is to understand the concept of the priority queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
//in priority queue the accessing can be done based on the priority queue
//it can be max heap or min heap

//max heap
priority_queue<int> max;
max.push(8);
max.push(2);
max.push(4);
max.push(6);
cout<<"Size -> "<<max.size()<<endl;
int n=max.size();
cout<<"Element of the max-heap Priority Queue :"<<endl;
for(int i=0;i<n;i++){
    cout<<max.top()<<"   ";
    max.pop();
}
cout<<endl;

//min - heap creation 
priority_queue<int, vector<int>,greater<int>> min;
min.push(8);
min.push(2);
min.push(4);
min.push(6);

cout<<"Size -> "<<min.size()<<endl;
cout<<"Element of the min-heap Priority Queue :"<<endl;
 n=min.size();
for(int i=0;i<n;i++){
    cout<<min.top()<<"   ";
    min.pop();
}
cout<<endl;
//we can check the emptyness of the priority queue
cout<<"Khalli kai kya bhai!! -> "<<min.empty();//1 - true beacuse we delete all element during accessing

}