//this program is to understand about the manipulation about the arrayand the pointer and relation.
#include<iostream>
using namespace std;
int main(){
    int a[5]={6,3,2,4,7};
    cout<<a;//this will print the address of the first element int hexadecimal form of the array as well it is the array name
    //array name itself the pointer 
    cout<<endl<<&a[0];
    cout<<endl<<&a;//question why this print the same address as the address of the first element
    cout<<endl<<a[0];//this will print the element on the position 0
    cout<<endl<<*&a[0];//this will print the element of the array by deferencing operator (*)
    cout<<endl<<**&a;//this will print 6 but why?
    cout<<endl<<*a;//this gives 6 because of it store the address of the first element and by using the dereferencing operator we can able to print the value through its pointer
    cout<<endl<<*a+1;//7

    // a++;//here we can not do with the array name pointer
    cout<<endl<<(a+1);//if we do +1 in array name then it start pointing the next element pointer
    cout<<endl<<*(a+1);//this will print the value of the next ele of the array
    cout<<endl<<&a[1];//same pointer as we do above
    cout<<endl<<1[a];//3//what happening here and why?
    cout<<endl<<2[a];//2

    cout<<endl<<a+5;//when do it as it then it pointer point base add+5*size of the datatype
    cout<<endl<<&a+1;//this is equivalent to the above statement but how?



    


    return 0;
}
