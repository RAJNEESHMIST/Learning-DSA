/*
A B C
D E F
G H I
priting this type pattern using while loop
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i=1;
    char c='A';
    while(i<=n){
        int j=1;
        
        while(j<=n){
            cout<<c<<"  ";
            c=c+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}