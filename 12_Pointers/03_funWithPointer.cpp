#include<iostream>
using namespace std;
int main(){
    //pointer to int created , pointing to some garbage value.
    //never do this it is very bad practice
    // int *p=0;
    // cout<<*p<<endl;
    // cout<<p<<endl;

    // int num=90;
    // int *ptr =&num;
    // cout<<ptr<<endl;;
    // cout<<*ptr<<endl;

    // //this is the way through which we can re-assign the value of the pointer
    // int *ptr1 =0;
    // ptr1=&num;
    // cout<<ptr1<<endl;;
    // cout<<*ptr1<<endl;

    int num=89;
    int *p=&num;

    int a=*p;
    a=a+1;
    cout<<num<<endl;
    cout<<a<<endl;

    (*p)++;
    //*p++ and  (*p)++ both are different things
    cout<<*p<<endl;
    cout<<num<<endl;

    int *q=p;
    cout<<p<<"   -   "<<q<<endl;
    cout<<*p<<"   -   "<<*q<<endl;
    


    return 0;
}