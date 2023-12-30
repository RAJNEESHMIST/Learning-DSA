//problem statement ->this program is to find the number of digits in a given number
#include<iostream>
using namespace std;
int numberOfDigits(int num){
    int digitCount=0;
    while(num!=0){
        digitCount++;
        num=num/10;
    }
    return digitCount;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count=numberOfDigits(n);
    cout<<"Total number of digits in the given number : "<<count;
}