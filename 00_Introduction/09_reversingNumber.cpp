//problem statement -> this is the program to reverse a number
#include<iostream>
#include<math.h>
using namespace std;
int reverseNumber(int num){
    int reverse=0;
    while(num!=0){
        int rem=num%10;
        reverse=(reverse*10)+rem;
        num=num/10;
    }
    return reverse;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"The reverse of the given number is : "<<reverseNumber(num);

}