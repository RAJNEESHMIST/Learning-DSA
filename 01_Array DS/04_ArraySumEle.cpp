#include<iostream>
using namespace std;
int sumOfElementInArray(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    return sum;
}
int main(){
    int num[100];
    int size;
    cout<<"Enter the size of the array :"<<endl;
    cin>>size;
    cout<<"Enter the elements of array :"<<endl;
    num[size];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The sum of elements of the array :"<<sumOfElementInArray(num,size);
}