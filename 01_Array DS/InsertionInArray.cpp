#include<iostream>
using namespace std;
int* insertNewEle(int n,int arr[],int newEle,int pos){
    int i;
    
    //increase the size of array by 1
    n++;

    //shift the element by one from the position to last
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    //inserting a new element in the array
    arr[pos-1]=arr[i-1];
    return arr;
}
int main(){
    int arr[100]={0};
    int n=10,i;

    //initial array of size 10
    for( i=0;i<10;i++){
        arr[i]=i+1;
    }
    //printing the orginal array
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   int  newEle=89;
    int pos=5;

    insertNewEle(n,arr,newEle,pos);
     for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}