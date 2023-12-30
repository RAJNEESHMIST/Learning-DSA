//to find the sum of all even number using the for loop
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    //initialize the condition of the while loop
    int i=0;
    int sum=0;
    while(i<=num){
        sum+=i;
        i+=2;
    }
    cout<<"The sum of even number upto "<<num<<" is : "<<sum;
}