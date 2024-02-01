//this program cover some more about the pointer 
#include<iostream>
using namespace std;
int main(){
    int a[10];
    // cout<<a<<endl; //this will print the starting address of the array a
    
    // char ch[]={'a','b','c','d','\0'};
    // //but in case of the char array is different from the integer array
    // cout<<ch<<endl;
    // char *p=&ch[0];
    // cout<<p<<endl;

    char c='v';
    cout<<c<<endl;
    char *ptr=&c;
    cout<<ptr<<endl;//this will start printing from the v until a null char obtained in case of pointer 

    //note -> the cout is implemented differently for the int array and char array
    




    return 0;
}