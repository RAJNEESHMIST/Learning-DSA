//this program is to understand the concepts of the increment and decrement operator
//both operators comes under the category of the uniary operator means works on a single operand
//increment and decrement bothe are further divided into two types postfix and prefix of each one
#include<iostream>
using namespace std;
 int main(){
    int n=3;
    int a=2;
    //post increment
    int sum=a+(n++);//5 - beacuse of first use the value of n then increase the value of the n 
    cout<<"Sum :"<<sum<<endl;
    //now the value of n become 4
    cout<<"N :"<<n<<endl;//4
    //pre increment
    int sum2=a+(++n);//7 -because of value of first increse then use
    cout<<"Sum2 :"<<sum2<<endl;//7
    cout<<"N :"<<n<<endl;//5

    //Que 1
    int i=3;
    cout<<(25*++i)<<endl;//25*4//first increment then use -prefix increment

    int num1=10;
    int num2=1;
    if(++a){//this condition true then the if block statement execute
        cout<<num2<<endl;
    }
    else{
        cout<<++num2<<endl;
    }

    int c=1;
    int d=c++;//now d=1 because of first use then increment 
    //now the value of c become 2;
    int e=++c;//now e=3 because of first increment then use - prefix operator

    cout<<"D : "<<d<<endl;
    cout<<"E : "<<e<<endl;

    int x=1;
    int y=2;
    if(x-->0&&++y>2){//here the condition is true because of x is post decrement and y is pre increment
        cout<<"Stage! - Inside If"<<endl;
    }
    else{
        cout<<"Stage! - Inside Else"<<endl;
    }
    cout<<"x :"<<x<<"   y : "<<y<<endl;//x=0 and y=3
 }