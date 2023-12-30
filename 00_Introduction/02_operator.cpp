//this program to underdstand the concept of the operator in the cpp
#include<iostream>
using namespace std;
 int main(){
    //by default the data type is signed means +ve and -ve both can be stored
    //but is we try to store only +ve number then we can use unsigned means which take only +veas
    int num=-789;
    int num1=89;
    cout<<num<<endl;
    cout<<num1<<endl;

    unsigned short num2=-1;
    cout<<num2<<endl;

    int n=8;
    int n1=9;
    //0 - false
    //1 - true
    cout<<endl<<(n>n1);//false
    cout<<endl<<(n>=n1);//false
    cout<<endl<<(n<n1);//true
    cout<<endl<<(n<=n1);//true
    cout<<endl<<(n==n1);//false
    cout<<endl<<(n!=n1);//true
    
 }