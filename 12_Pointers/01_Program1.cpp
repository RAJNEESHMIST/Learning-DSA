//this program is to understand the pointer variable
#include<iostream>
using namespace std;
int main(){
    int a=9;//we cannot initialize the 9 as 09 b/c it is consider as the octal number 
    int b=89;
    // int add=&a;we cannot do this b/c add can only store the integer data type 
    cout<<"Address of a :"<<&a<<endl;
    cout<<"Address of b :"<<&b<<endl;
    //so for storing address we take a pointer variable as
    int *ptr=&a;//we can initialize pointer like this
    //we can also do for varaible b
    cout<<"Address of a through pointer :"<< ptr<<endl;

    //we can also access the variable by pointer instead of direct accessing 
    //for accessing the value through pointer we have to use the *(Dereferncing operator )-this retrieve the value stored at that address

    cout<<"The value of a by pointer variable :"<<*ptr<<endl;

//like the variable we can also decalre first after that initialize the variable as
int *ptr2;//declare a pointer variable
ptr2=&b;//initializing the pointer variable
cout<<"Address of b through pointer :"<< ptr2<<endl;



}