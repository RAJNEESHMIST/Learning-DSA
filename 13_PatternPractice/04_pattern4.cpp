//this program is to print the pattern like this
/*
1 2 3 
1 2 3 
1 2 3

and secon one is miror of this pattern

*/
#include<iostream>
using namespace std; 
int main(){
    int row;
    int col;
    cout<<"Enter the number of row and column :"<<endl;
    cin>>row>>col;
    // int i=1;
    // while(i<=row){
    //     int j=1;
    //     while(j<=col){
    //         cout<<j<<"  ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    int i=1;
    while(i<=row){
        int j=col;
        while(j>=1){
            cout<<j<<"  ";
            j--;
        }
        cout<<endl;
        i++;
    }
}