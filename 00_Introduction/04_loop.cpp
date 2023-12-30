//now here first we discuss about the while loop
//it is applicable when we have no idea about the number of iteration performed
//to apply a loop we have to know the termination condition as well as initial conditio
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    //applying while loop to print the whole number upto num
    int i=0;//take a initial condtion as i=0 because of whole number start from 0;
    // while(i<=num){
    //     cout<<i<<"  ";
    //     i++;
    // }

    //finding the sum of natural number upto num
    int sum=0;
    while(i<=num){
        sum+=i;
        i++;
    }
    //we can check answer by cross check using the formula -> n(n+1)/2.
    cout<<"The sum of numbers upto "<<num<<" is : "<<sum;
}