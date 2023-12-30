/*
A B C 
B C D
C D E
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        char c='A'+i-1;
        int j=0;
        while(j<n){
            cout<<c<<"  ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    
    }
}