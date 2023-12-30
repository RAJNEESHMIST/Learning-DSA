#include<iostream>
using namespace std;
int main(){
    int a[5]={4,5,2,8,7};
    int *p=a;//this is valid because a act as the pointer variable 
    cout<<p<<endl;
    // int b=98;
    // // int *q=b;//this is not valid beacuse pointer does not hold the variable
    // int *q=&b;//this is valid
    p++;//this is valid in case of the pointer valriable other than the name of the array
    cout<<p<<endl;//now it will start pointing to the next element of the array
    cout<<p+1<<endl;//this start pointing the next element of the array
    cout<<p+2<<endl;//this start pointing the next element of the array
    cout<<2+p<<endl;//same working like the above statement
    cout<<*p+1<<endl;
    cout<<&p+1<<endl;//pointing the last element of  the varible
    
    

    

}