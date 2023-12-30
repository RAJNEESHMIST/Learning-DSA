//this program is to convert a decimal number into its binary equivalent
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    // cout<<pow(4,5);
    cout<<"Enter the number : " ;
    cin>>num;

    int binaryEquivalent=0;
    int i=0;
    while(num!=0){
        int bit=num&1;
        binaryEquivalent=(bit*pow(10,i))+binaryEquivalent;
        num=num>>1;
        i++;
    }
    
    cout<<"Binary Equivalent : "<<binaryEquivalent;
}