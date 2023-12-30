//this program is to swap the alternate element of  an array
//sample i/p={1,2,3,4,5}  o/p={2,1,4,3,5} or
#include<iostream>
using namespace std;
//function to swap alternate element
// void reverseAlternate(int array[],int len){
//     int start=0;
//     for(int next=1;next<len;next+=2){
//         swap(array[start],array[next]);
//         start+=2;
//         // next+=2;
//     }
// }

//another approach to do same things
void swapAlternate(int array[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            // swap(array[i],array[i+1]);
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
    }
}
//print array
void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int num[5]={4,5,8,9,54};
    int num1[6]={8,9,6,7,8,5};
    cout<<"The element of the array before swap alternate element :"<<endl;
    printArray(num,5);
    printArray(num1,6);
    // reverseAlternate(num,5);
    // reverseAlternate(num1,6);
    
    cout<<"The element of the array after swap alternate element :"<<endl;
    swapAlternate(num,5);
    swapAlternate(num1,6);
    printArray(num,5);
    printArray(num1,6);

}