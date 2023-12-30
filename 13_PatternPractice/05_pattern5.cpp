//this program is to draw the following type of the pattern
/*
1 2 3 
4 5 6 
7 8 9 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the mattrix : ";
    cin>>n;
    int i=1;
    int k=1;//here we have to a take another variable to print the value and increment each time when loop iterate
    while(i<=n){
        int j=0;
        while(j<n){
            cout<<k<<"   ";
            j++;
            k++;
        }
        cout<<endl;
        i++;

    }
}