//Problem 1-reverse an array
#include<iostream>
#include<vector>
using namespace std;
// void reverse(vector<int> &a){
//     int size=a.size();
//     for(int i=0;i<size/2;i++){
//         int temp=a[i];
//         a[i]=a[size-(i+1)];
//         a[size-(i+1)]=temp;
//     }
// }

//another approach
vector<int> reverse(vector<int> &a ,int m){
    int s=m+1;
    int e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}

int main(){
//     vector<int> a(6,1);
//     cout<<"Enter the element of an array :"<<endl;
//     for(int i=0;i<a.size();i++){
//         cin>>a[i];
//     }
//     cout<<endl;
//     reverse(a);
//     cout<<"Element of an array :";

// for(auto i:a){
//         cout<<i<<"  ";
//     }

vector<int> v;
v.push_back(78);
v.push_back(88);
v.push_back(48);
v.push_back(65);
v.push_back(96);
v.push_back(23);

vector<int> rev=reverse(v,3);

for(int i=0;i<rev.size();i++)
{
    cout<<rev[i ]<<"  ";
}
}

