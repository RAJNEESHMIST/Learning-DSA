#include<iostream>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        //n-1 rounds to sort
        int temp=a[i];
        int j=i-1;
        while(j>=0){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
            j--;
        }

        // for(j=i-1;j>=0;j--){
        //     if(a[j]>temp){
        //         a[j+1]=a[j];//shifting element 
        //     }
        //     else{
        //         break;
        //     }
        // }
        a[j+1]=temp;
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
    int num[7]={10,1,7,4,8,2,11};
    PrintArray(num,7);
    InsertionSort(num,7);
    PrintArray(num,7);
}