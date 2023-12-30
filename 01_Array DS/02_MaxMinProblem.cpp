//this program is to find the maximum and minimum value of an array
#include<iostream>
using namespace std;
void getElementOfArray(int array[],int size){
    cout<<"Enter the element of  the array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}
//function to find the maximum value
void getMax(int array[],int size){
    int maxi=INT16_MIN;
    for(int i=0;i<size;i++){
        // if(max<array[i]){
        //     max=array[i];
        // }
        //we can also do this in a single line using built in function
        maxi=max(maxi,array[i]);
    }
    cout<<"Maximum value :"<<maxi;
}
//function to get the minimum value in the given array
void getMin(int array[],int size){
    int mini=INT16_MAX;
    for(int i=0;i<size;i++){
        // if(mini>array[i]){
        //     mini=array[i];
        // }
        //we can also replace the these three line by the inbuilt function min()
        mini=min(mini,array[i]);
    }
    cout<<endl<<"Minimum value :"<<mini;
}

int main(){
    cout<<"Enter the size :";
    int size;
    cin>>size;
    int number[20];
    // cout<<endl<<"Enter the elements of the array :";
    getElementOfArray(number,size);
    

    getMax(number,size);
    getMin(number,size);
   

}