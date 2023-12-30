/*this program is to print the patter like 
* * * 
* * * 
* * * 

specified row and column
using while loop
*/
#include<iostream>
using namespace std;
int main(){

    int row,col;
    cout<<"Enter the number of row : ";
    cin>>row;
    cout<<"Enter the number of column : ";
    cin>>col;
    // cout<<row;
    // cout<<col;
    int i=1;
    // int j=0;//if we decalre j here after printing first row the value of j not changed then not enter in the inner loop
    while(i<=row){
        int j=i;
        while(j<=row){
            // cout<<"*  ";
            cout<<i<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }

}

