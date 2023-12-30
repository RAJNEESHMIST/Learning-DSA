//this program is to understand the deletion of an element from an array
#include<iostream>
using namespace std;
void deletionInArray(int arr[],int len,int pos){
    int item=arr[pos];
    for(int i=pos;i<len;i++){
        arr[i]=arr[i+1];
    }
    len--;
    cout<<endl<<"After deletion :"<<endl;
    for(int i=0;i<=len;i++){
        cout<<arr[i]<<" ";
    }
}
void printArray(int arr[],int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={4,5,8,9,6,7,5};
    cout<<endl<<"Array before deletion :"<<endl;
    printArray(arr,7);

    deletionInArray(arr,6,4);
    // cout<<endl<<"Array after deletion :"<<endl;
    // printArray(arr,7);

}