//this program is to understand the concept of the insertation at the given position
#include<iostream>
using namespace std;
//function to print array
void printArray(int arr[],int size){
    // cout<<"The element of the list are :"<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
//function to insert element 
void insertEle(int arr[],int size,int pos,int ele){
    for (int i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    size++;
    cout<<"List After insertion :"<<endl;
    printArray(arr,size);
}

int main(){
    int arr[50];
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    int size;
    cout<<"Enter the size of the List :";
    cin>>size;
    cout<<"Enter the element of the List :"<<endl;
    //taking element of the list from the user
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"List before insertion :"<<endl;
    printArray(arr,size);
    
    // // /traversing the element of the list
    // cout<<"The element of the list are :"<<endl;
    //  for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    int item,pos;
    cout<<endl<<"Enter the position to insert element :";
    cin>>pos;
    cout<<"Enter the element to insert :";
    cin>>item;

    if(pos<=0||pos>size+1){
        cout<<"Invalid Position";
    }
    else{
        insertEle(arr,size,pos,item);
    }
}