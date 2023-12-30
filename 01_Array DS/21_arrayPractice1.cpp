#include<iostream>
using namespace std;
//to print the inetger array
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}


//to print the string array
void printString(string a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i]<<endl;
    }
}

 int main(){
    int num[5]={1,5,36,8,9};
    int n=sizeof(num)/sizeof(int);
    cout<<"Size :"<<n<<endl;
    // cout<<num[4];
    // for(int i=0;i<5;i++){
    //     cout<<num[i]<<endl;
    // }
    // print(num,5);
    cout<<sizeof(string)<<endl;


    
    string name[3];
    int s=sizeof(name)/sizeof(string);
    cout<<"Size :"<<s<<endl;
    cout<<"Enter the elements of array name :"<<endl;
    for(int i=0;i<3;i++){
        cin>>name[i];
    }
    int l=sizeof(name);
    cout<<"Size :"<<l<<endl;

    cout<<"Element of the array :"<<endl;
    // for(int i=0;i<3;i++){
    //     cout<<name[i]<<endl;
    // }
    printString(name,3);

    
    // print(name,3);
}