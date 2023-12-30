//selection is the easiest sorting algorithm
#include<iostream>
using namespace std;

//function for selection sort
// void slectionSort(int a[],int size){
    
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             int min=a[j];
//             if(min<a[j]){
//                 min=a[j];
//             }
//              if(min<a[i]){
//                 a[j]=a[i];
//                 a[i]=min;
//             }
            
//         }
       
//    }
// }

void selection(int a[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        swap(a[minIndex],a[i]);
    }
}
void PrintArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<"   ";
    }
    cout<<endl;
}
int main(){
    int num[]={68,100,12,2,11};
    PrintArray(num,5);
    // slectionSort(num,5);
    selection(num,5);
    PrintArray(num,5);
    

}