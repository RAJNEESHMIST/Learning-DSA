//this program is to understand the deletion of the element from the list of specific position
#include<iostream>
using namespace std;
//function to print array
void printArray(int arr[],int size){
    // cout<<"The element of the list are :"<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void deleteEle(int arr[],int size,int pos){
    cout<<"Deleted element :"<<arr[pos-1];
    size--;
    for(int i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    cout<<endl<<"List after deletion :";
    // cout<<"The element of the list are :"<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
}
int main(){
    int num[20];
    int size;
    cout<<"Enter the size of the list :"<<endl;
    cin>>size;
    cout<<"Enter the element of the array :";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Element of the array before deletion :";
    printArray(num,size);

    int pos;
    cout<<endl<<"Enter the position u want to delete :";
    cin>>pos;
    deleteEle(num,size,pos);


}