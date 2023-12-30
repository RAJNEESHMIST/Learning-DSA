/*
A A A
B B B
C C C
priting this type pattern using while loop
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i=1;
    char c=65;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c<<"  ";
            j++;
        }
        cout<<endl;
        c++;
        i++;
    }
}