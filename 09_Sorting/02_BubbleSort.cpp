#include<iostream>
using namespace std;

//function to bubble sort
void BubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        //number of rounds
        //optimising more
        bool swapped=false;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j+1],a[j]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
//function to print list
void PrintArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<"   ";
    }
    cout<<endl;
}
int main(){
    int num[5]={12,54,78,80,90};
    cout<<"Printing the list "<<endl;
    PrintArray(num,5);
    BubbleSort(num,5);
    cout<<"Printing the list After sorting : "<<endl;
    PrintArray(num,5);

}