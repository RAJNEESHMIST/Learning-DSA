//Problem statement :- write a program to find the difference of product and sum of the digits of a number.
//for example - 345  sum=3+4+5 and product=3*4*5 and final output=product-sum
#include<iostream>
using namespace std;
//we have to solve like this is leetcode platform
int substractProductAndSum(int n){
    int sum=0;
    int product=1;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        product*=digit;
        n=n/10;
    }
    return product-sum;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Result : "<<substractProductAndSum(num);
    // int sum=0;
    // int product=1;
    
    // while(num!=0){
    //     sum+=num%10;
    //     product*=num%10;
    //     num=num/10;
    // }
    // cout<<"Sum : "<<sum<<endl;
    // cout<<"Product : "<<product<<endl;

    // cout<<"Final Output : "<<product-sum;

}