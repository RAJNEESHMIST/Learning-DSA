//this program is illustration of the linear search
#include<iostream>
using namespace std;
 //function of the linear search
 void linearSearch(int a[],int size,int key){
    //a be a list
    //size-be the size of list
    //key -be the element to be search
    int found=-1;
    for(int i=0;i<=size;i++){
        if(a[i]==key){
            found=i;
            break;
        }
    }
    if(found!=-1){
        cout<<"Element found at index at :"<<found;
    }
    else{
        cout<<"Element not found in list.";
    }
    
 }

 int main(){
    int num[5]={2,4,6,3,3};
    linearSearch(num,5,3);
 }