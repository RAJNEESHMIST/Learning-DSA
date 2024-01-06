//problem statement -> merge two sorted array 
#include<iostream>
using namespace std;
void merge(int a[],int n,int b[],int m,int c[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        k++;
        j++;
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    int a[5]={2,5,7,9,20};//this is the first sorted array of size 5
    int b[4]={3,6,8,15};//this is another sorted array of size 4

    int ans[9]={0};
    merge(a,5,b,4,ans);
    print(ans,9);
}