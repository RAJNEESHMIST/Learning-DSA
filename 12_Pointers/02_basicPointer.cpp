#include<iostream>
using namespace std;
int main(){
    int a=9;
    cout<<"Address of a is :"<<&a<<endl;
    a=a+1;
    cout<<"Address of a is :"<<&a<<endl;

    int *ptr=&a;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value at a is : "<<*ptr<<endl;

    double d=2.34;
    double *ptr1=&d;
    cout<<"Address of d :"<<ptr1<<endl;
    cout<<"Value at d :"<<*ptr1<<endl;

    cout<<"Size of int :"<<sizeof(a)<<endl;
    cout<<"Size of integer pointer :"<<sizeof(ptr)<<endl;
    cout<<"Size of double  :"<<sizeof(d)<<endl;
    cout<<"Size of double pointer :"<<sizeof(ptr1)<<endl;


}