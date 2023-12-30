//reversing array problem
#include<iostream>
using namespace std;
void reverseArray(int array[],int len){
    int start=0;
    int end=len-1;
    while(start<end){//here start<=end not need to put means no need to swap the same element in the array
        // swap(array[start],array[end]);
        //c++ provide inbuilt function to swap two value
        //we can also do it by writing their own swap code as
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;

        start++;
        end--;
    }
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int num1[5]={45,12,36,24,15};
    int num2[5]={45,89,56,25};
    cout<<"The element of the array num before reversing :"<<endl;
    printArray(num1,5);
    printArray(num2,4);

    
    reverseArray(num1,5);
    reverseArray(num2,4);
    cout<<"The element of the array num after reversing :"<<endl;
    printArray(num1,5);
    printArray(num2,4);
    

}