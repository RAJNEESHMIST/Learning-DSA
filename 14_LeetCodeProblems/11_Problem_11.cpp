//Problem statement : count number of the prime number upto the number
#include<iostream>
using namespace std;
//code to find the number is prime or not
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int countPrime(int num){
    int count =0;
    for(int i=2;i<num;i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}


int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(isPrime(num)){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }

    cout<<countPrime(10);
}