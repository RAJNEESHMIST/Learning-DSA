//this program is to understand how we can take the element of the array and traverse it
#include<iostream>
using namespace std;

int main(){
    int arr[50];
    int size;
    cout<<"Enter the size of the List :";
    cin>>size;
    cout<<"Enter the element of the List :"<<endl;
    //taking element of the list from the user
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    // /traversing the element of the list
    cout<<"The element of the list are :"<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
