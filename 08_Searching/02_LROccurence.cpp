//problem statement
//find the left and right occurence of the an element in the sorted list
#include<iostream>
using namespace std;
//1st approach we can do it by linear search but it TC is to more so we use another approach
//2nd approach we use binary search to find it.in this first we find the left occurence after that we find the no.of occurence in rigth
int leftOcc(int a[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
             ans=mid;
            end=mid-1;//updating end as to go in the left section of the sorted list
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
//this function is to find the right most occurence of the list
int rightOcc(int a[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int num[7]={1,2,3,3,3,3,5};
    int leftO=leftOcc(num,7,3);
    int rightO=rightOcc(num,7, 3);
    cout<<"Left occurences :"<<leftO<<endl;
    cout<<"Right Occurence :"<<rightO;


}