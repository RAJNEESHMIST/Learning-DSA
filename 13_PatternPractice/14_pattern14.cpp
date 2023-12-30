/*
A
B B 
C C C
printing this loop using while loop
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char c='A'+i-1;
            cout<<c<<"  ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
}