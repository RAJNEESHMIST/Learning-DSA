//this program cover about the double pointer
#include<iostream>
using namespace std;
void update(int**p2){
    // p2=p2+1;
    //koi change hoga - NO

    // *p2=*p2+1;
    //kya koi change hoga -YES

    **p2=**p2+1;
    //kya koi change hoga-YES

}

void update1(int *p){
        *p=*p+2;
    }
int main(){

    //Mcqs
    //1.
    // int first=8;
    // int second=89;
    // int* ptr=&second;
    // *ptr=9;
    // cout<<first<<"  "<<second<<endl;//8  9


    //2.
    // int first=8;
    // int*p=&first;
    // int* q=p;
    // (*q)++;
    // cout<<first<<endl;//9

    //3.
    // int num=9;
    // int* p=&num;
    // cout<<(*p)++<<" ";
    // cout<<num<<endl;//9   10

    //4.
    // int* p=0;
    // int num=90;
    // *p=num;
    // cout<<*p<<endl;//this will through a segmentation fault

    //5.
    // int num1=90;
    // int num2=78;
    // int *ptr =&num2;
    // num1=*ptr;
    // *ptr=*ptr+2;
    // cout<<num1<<"  "<<num2<<endl;//78   80

    //6.
    // float f=12.5;
    // float p=21.5;
    // float* ptr=&f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<"  "<<f<<"  "<<p<<endl;//21.5   21.5   21.5

    //7.
    // int a[5];
    // int* ptr;
    // cout<<sizeof(a)<<"   "<<sizeof(ptr)<<endl;//20   4

    //8.
    // int a[]={23,45,67,87};
    // cout<<*(a)<<"   "<<*(a+1)<<endl;//23   45

    //9.
    // int a[]={
    //     11,21,31
    // };
    // cout<<a<<"   "<<&a<<endl;// both print the address of the first element

    // //9.
    // cout<<(a+1)<<"  "<<&a[1]<<endl;//address of second element

    // //10.
    // int *p=a;
    // cout<<p[2]<<endl;  //this will print the element at second indexd

    // //11.
    // int arr[]={12,23,34,56,67};
    // cout<<*arr<<"  "<<*(arr+3)<<endl;//12 56

    // 12.
    // int arr[]={11,21,31,41};
    // // int* ptr=(arr)++;this will give error because of we try to change the 
    // int*ptr=arr;
    // int *p;
    // p=ptr++;
    // cout<<*p<<"  "<<*ptr;

    //13.
    // char ch='a';
    // char* p=&ch;
    // ch++;
    // cout<<*p<<endl;//b

    //14.
    // char arr[]="Rajneesh";
    // char* ptr=&arr[0];
    // cout<<ptr<<"   "<<&arr[0]<<endl;//  this will print whole string

    // //15.
    // ptr++;
    // cout<<ptr<<endl;//now pointer start pointing from the 1 index

    //16.
    // char str[]="Babbar";
    // char *ptr=str;
    // cout<<str[0]<<"  "<<ptr[0]<<endl;

    

    // int i=9;
    // update1(&i);
    // cout<<i<<endl;//it will incremented by the update1 () fun because its reference passed 

    


    // int a=78;
    // int* p=&a;
    // int** p2=&p;
    // cout<<"Before : "<<a<<endl;
    // cout<<"Before : "<<p<<endl;
    // cout<<"Before : "<<p2<<endl;
    // update(p2);
    // cout<<"After : "<<a<<endl;
    // cout<<"After : "<<p<<endl;
    // cout<<"After : "<<p2<<endl;

    

    // int a=90;
    // int* ptr=&a;
    // // int** ptr2=&a;//this will through an error of int* cannot be converted into int**
    // int** ptr1=&ptr;
    // cout<<"a : "<<*ptr<<endl;//value of a through ptr or normal pointer
    // cout<<"a : "<<**ptr1<<endl;//value of a through ptr1 or double pointer

    // cout<<"Address of pointer ptr : "<<&ptr<<endl;
    // cout<<"Address of pointer ptr : "<<ptr1<<endl;

    // cout<<"Address of a : "<<ptr<<endl;
    // cout<<"Address of a : "<<*ptr1<<endl;
    // cout<<"Address of a : "<<&a<<endl;




    return 0;
}