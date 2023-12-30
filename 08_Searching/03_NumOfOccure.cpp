//problem statement- find the number of occurence of an element in the sorted list
//we can find its by binary search. first we find the first and last occurence of the element after that apply formula lastOccurence-first occurence +1
#include<iostream>
using namespace std;
int firstOcc(int a[], int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(a[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int a[], int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(a[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int numberOfOcc(int a[],int n,int key){
    int firstO=firstOcc(a,n,key);
    int lastO=lastOcc(a,n,key);
    int NOfOcc=(lastO-firstO)+1;
    return NOfOcc;
    
}
int main(){
    int num[7]={1,2,4,4,4,4,8};
    int numberOfOccurence=numberOfOcc(num,7,4);
    cout<<"Number of Occurence :"<<numberOfOccurence;

    return 0;
}