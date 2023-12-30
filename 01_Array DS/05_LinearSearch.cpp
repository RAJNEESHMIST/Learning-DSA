#include<iostream>
using namespace std;
bool search(int array1[],int ele,int len){
    // int len=sizeof(array1)/sizeof(int);
    for(int i=0;i<len;i++){
        if(array1[i]==ele){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num[10]={45,56,2,3,8,5,6,8,45,12};
    // bool found=search(num,45,10);
    bool found=search(num,455,10);

    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element Not Found";
    }
    return 0;
}