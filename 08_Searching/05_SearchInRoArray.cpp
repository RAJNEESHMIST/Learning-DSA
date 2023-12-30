//Problem - To search a element from the rotated array
#include <iostream>
using namespace std;

//funtion to find the position of the pivot element
int pivotElement(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (a[mid] >=a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

//function for binary search
int binarySearch(int a[],int s,int e,int key){
    int start=s;
    int end=e;
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

int findPosition(int a[],int n,int k){
    int pivot=pivotElement(a,n);
    if(k>a[pivot]&&k<=a[n-1]){
        return binarySearch(a,pivot,n-1,k);
    }
    else{
        return binarySearch(a,0,pivot-1,k);
    }
}
int main(){
    int num[5]={34,56,78,5,6};
    int target=78;
    int pos=findPosition(num,5,target);
    cout<<"The pos of the targetted element :"<<pos;

}
