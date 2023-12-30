//this is the understanding about the 2D array
#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    cout<<"Enter the elmenets of the 2D Array :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"The elements of the 2D array that You entered :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

}