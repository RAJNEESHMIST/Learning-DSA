/*
* 
* *
* * *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<"*   ";
            j++;
        }
        cout<<endl;
        i++;
    }
}