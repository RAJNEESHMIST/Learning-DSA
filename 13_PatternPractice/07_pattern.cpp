/*
1
2 2
3 3 3

print this pattern using the while loop
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<i<<"  ";
        j++;
        }
        cout<<endl;
        i++;
    }
}