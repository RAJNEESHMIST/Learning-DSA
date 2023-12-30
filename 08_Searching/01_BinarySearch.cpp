//this program is to understand the working of the binary search
#include<iostream>
using namespace std;
int binarySearch(int a[],int size,int key){
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;
    //we do this b/c if we have big value of start which gone out of the range of the integer if do this we avoid error 
    while(start<=end){
        if(a[mid]==key){
            return mid;//mid returning the index value 
        }
        if(key>a[mid]){
            //go to the right of the list
            start=mid+1;//updating the star for partioned array
        }
        else{
            //go to left sun array b/c our key is less than the mid find
            end=mid-1;//updating the end
        }
       mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={1,2,4,6,8,9};
    int odd[5]={34,45,56,67,78};
    int pos=binarySearch(even,6,9);
    cout<<"Position of the 9 : "<<pos<<endl;
    int index=binarySearch(odd,5,56);
    cout<<"Position of 56 : "<<index;
    return 0;
}