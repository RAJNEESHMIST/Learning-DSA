//this illustrate the linear search from the list
#include<iostream>
using namespace std;
//function to search element from the list
int index;
bool linearSearch(int a[],int size,int key){
    for (int i=0;i<size;i++){
        if(a[i]==key){
            index=i;
            return 1;
        }
    }
    return 0;
}
int main(){
    int num[5]={23,56,43,89,10};
    int key;
    cout<<"Enter the element u want to search :";
    cin>>key;
    bool found=linearSearch(num,5,key);
    if(found){
        cout<<"Key is Present at index :"<<index;
    }
    else{
        cout<<"Key is absent.";
    }
}