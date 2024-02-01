//this program cover more about the pointers 
#include<iostream>
using namespace std;
int main(){
    //the name of array stores two things -> 1. is name of array and 2nd. is the first or starting address of an array
    //for example
    /*int arr[10]={23,235,33,4};
    cout<<"First Address of arr : "<<arr<<endl;
    cout<<"Value at oth loc : "<<arr[0]<<endl;
    cout<<"First Address of arr : "<<&arr[0]<<endl;
    cout<<"Value at oth loc : "<<*arr<<endl;//dereferencing operator which return the value of the corresponding operator
    cout<<"Value of  : "<<*arr+1<<endl;//return the value at arr with adding 1
    cout<<"Value of  : "<<*(arr+1)<<endl;//when we add any value in address then the addition is equal to the product of the number with the size of the datatype 
    //for example in this case we add 1*4(size of int ) to the existing address that's why we obtain the address of the next element of an array and after dereferencing that address we obtain the value at the next address
    cout<<"Value of  : "<<*(arr+2)<<endl;
    cout<<"Value of  : "<<*(arr+4)<<endl;

    cout<<"arr[2] : "<<arr[2]<<endl;
    cout<<"arr[2] : "<<*(arr+2)<<endl;
    
    cout<<3[arr]<<endl;//this will print the value at address [3+arr]

    

   int arr1[20]={23,45,67,34};
   int *ptr =arr1;
//    int *ptr1=arr1[0];//we can not do this because the pointer store only address of another variable
   int *ptr1=&arr1[0];
   cout<<"Size of array : "<<sizeof(arr1)<<endl;
   cout<<"Size of  address of array : "<<sizeof(&arr1)<<endl;
   cout<<"Size of value at 0th index` : "<<sizeof(*arr1)<<endl;
   cout<<"Size of ptr : "<<sizeof(ptr)<<endl;
   cout<<"Size of ptr1 : "<<sizeof(ptr1)<<endl;
   cout<<"Size of value at ptr1 : "<<sizeof(*ptr1)<<endl;
   cout<<"Size of address of ptr1 : "<<sizeof(ptr1)<<endl;

   cout<<"Value at ptr : "<<*ptr<<endl;
   cout<<"Value at ptr1 : "<<*ptr1<<endl;


  int a[20]={1,4,6,78,3};
//   cout<<3[a]<<endl;
//   cout<<2[a]<<endl;
//   cout<<1[a]<<endl;
//   cout<<0[a]<<endl;

//Note -> we ahve a formula that is index[arrayName]= *[arrayName+index] -- where * denote the value at

cout<<"Address of a :"<<&a[0]<<endl;
cout<<"Address of a :"<<&a<<endl;
cout<<"Address of a :"<<a<<endl;
//These three statements pointing the same address

int *p=a;
cout<<"Value at p which is address of a :"<< p<<endl;//this print the address of a or value of pointer 
cout<<"Value at pointer p : "<<*p<<endl;//this print the value pointer p 
cout<<"Address of pointer p : "<<&p<<endl;//this will print the address of the pointer p
   */

  int a[6];

//   a=a+1 //this will give u error

  int *p=a;
  cout<<"Before increment : "<<p<<endl;
  p=p+1;
  cout<<"After increment : "<<p<<endl;
  







    return 0;

}