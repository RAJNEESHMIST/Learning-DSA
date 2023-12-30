//updating the element of the array in a function other tha the main function the updation occur to the original array because the array name have name of the array as well as the address of the first element.
#include<iostream>
using namespace std;
int updateArray(int arr[],int n){
    cout<<"Inside the function :"<<endl;

    //update the array's first element
    arr[0]=n;
    //printing an array inside the function
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Go back to main function :"<<endl;
}


int main(){
    int num[3]={45,8,85};
    updateArray(num,989);

    //printing the array
    for(int i=0;i<3;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}