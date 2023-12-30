//initializing the element of the array through pointer
//priting the entered list.
#include<iostream>
using namespace std;
int main (){
    int arr[5];
    cout<<"Enter the element of the array :"<<endl;
    for (int i=0;i<5;i++){
        cin>>*(arr+i);
    }
    //pruinting the element of the array
    cout<<endl<<"Elements of the List :"<<endl;
     for (int i=0;i<5;i++){
        cout<<*(arr+i)<<"   ";
    }
    return 0;
}