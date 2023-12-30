//problem is to find the unique element in the list
#include<iostream>
using namespace std;
// void uniqueElement(int arr[],int size){
//     int count =1;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         } 
//     }
// }
int  uniqueElement(int array[],int size){
    int unique=0;
    for(int i=0;i<size;i++){
         unique=unique^array[i];
    }
    return unique;
}
int main(){
    int num[5]={4,8,5,8,4};
    int num1[5]={1,4,4,6,6};
    int uniq=uniqueElement(num,5);
    cout<<"Unique Element :"<<uniq<<endl;
    int uniqe=uniqueElement(num1,5);
    cout<<"Unique Element :"<<uniqe;
}