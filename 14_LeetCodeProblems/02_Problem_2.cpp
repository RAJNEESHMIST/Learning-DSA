//problem statement :- write a function take unsigned int as input and return the number of 1 bits in that number
//for example Intupt-100000010, output-2
#include<iostream> 
using namespace std;
int NoOf1Bits(unsigned int a){
    int count=0;
    while(a!=0){//a become 0 if it all bits become zero
        //checking the last bits
        if(a&1){//if we do a&1 - it become false only if a is 0
            count++;
        }
        a=a>>1;//right shift one digit
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    cout<<"Number of 1's : "<<NoOf1Bits(num);
}
