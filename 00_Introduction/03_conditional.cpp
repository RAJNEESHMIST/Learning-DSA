//this program is to understand the conditional statements
#include<iostream>
using namespace std;
int main(){
    // int num;
    // cout<<"Enter the value of num : ";
    // //we take input from the user by using the 'cin' using like this
    // cin>>num;

    // cout<<endl<<"The value of num is : "<<num<<endl;
    
    //now we use conditional to check the number whether it is +ve or -ve
    // if(num>0){
    //     cout<<"Positive Number";
    // }
    // else{
    //     cout<<"Negative Number";
    // }

    //cin - does not read a space, tab, or new line char
    //but cin.get() -> read space, tab, as well as new line
    //for example
    // int a;
    // cout<<"Enter the value of a :";
    // a=cin.get();//if we simply enter a tab a get the ASCII value of the tab 9
    // //if we enter a space take the ASCII value of space which is 32
    // //if we enter 1 then it takes 49 which is the ASCII value of char 1

    // cout<<"The value of a is : "<<a<<endl;

    // int num1,num2;
    // cout<<"Enter the value of num1 : ";
    // cin>>num1;
    // cout<<"Enter the value of num2 : ";
    // cin>>num2;
    // //if - conditional statement
    // if(num1>num2){
    //     cout<<endl<<num1<<" is greater than "<<num2<<endl;
    // }
    // if(num1<num2){
    //     cout<<num1<<" is less than "<<num2;
    // }

    // int a;
    // cout<<"Enter the value of a : ";
    // cin>>a;
    //to check a number is +ve, -ve or 0
    
    //if - else -> consditional statement
    // if(a>0){
    //     cout<<a<<" is Positive";
    // }
    // else{
    //     if(a<0){
    //         cout<<a<<" is Negative";
    //     }
    //     else{
    //         cout<<a<<" is Zero";
    //     }
    // }

    //we can use if else-if -> conditional statement to write more clean code
    //for example
    // if(a>0){
    //     cout<<a<<" is Postive";
    // }
    // else if(a<0){
    //     cout<<a<<" is Negative";
    // }
    // else{
    //     cout<<a<<" is Zero";
    // }

    //homework question
    //guess the output
    //1.and execute the if block statement
    int a=9;
    int b=a+1;
    if((a=10)==b){
        cout<<"A : "<<a<<endl;//now a become 10
    }
    else{
        cout<<"B : "<<b<<endl;
    }

    //2.Ans become NINEY POSITIVE
    int num=9;
    if(num==9){
        cout<<"NINEY"<<endl;
    }

    if(num>0){
        cout<<"POSITIVE"<<endl;
    }
    else{
        cout<<"NEGATIVE"<<endl;
    }

    //3.here only print 'LOVE' because of first condition is true   f
    int num2=24;
    if(num2>0){
        cout<<"Love "<<endl;
    }
    else if(num2==24){
        cout<<"LOVELY"<<endl;
    }
    else{
        cout<<"BABBAR"<<endl;
    }
    cout<<num2;
}