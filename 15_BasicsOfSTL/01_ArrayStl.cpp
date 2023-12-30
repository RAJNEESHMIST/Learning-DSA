// #this program is to understand the basic c++ STL
// basically stl provide many predefined functionality which helps to write the precise code 
//array stl
#include<iostream>
//if we wan to use the stl then we have to include the library of that ds
//like for array we have to include array library to use their fuctionality
#include<array>
using namespace std;
int main(){
    //basic mtd to create an array
    int bacis[]={1,2,3,4};
    // cout<<bacis;//this will through the address of the first element of the array
    
    //we can create an array using the stl as follows
    //syntax to declare using stl -> array<datatype,size> nameOfArray;  --like this
    array<int,9> num={4,5,8,7,4,8,9,5,3};//this implementation is done using the fixed size array so we doesn't use this stl in competetive programming
    //working of this is totally same as the traditional array implementation
    //for example
    array<string,2> name;
    int size=num.size();//size function return the size of the array
    cout<<"Size : "<<size;

    //printing the vlaue of an array
    for (int i=0;i<size;i++){
        cout<<"num["<<i<<"] = "<<num[i]<<endl;
        //print the uninitialilze size to 0
    }
    //stl -> provide many predefined function to which is directly used like
    //1.to find the element of the specific index
    cout<<"Element at 0th index : "<<num.at(0)<<endl;//this print the first element of the array
    cout<<"Element at 2th index : "<<num.at(2)<<endl;//this is only tells the emptyness

    //2.to check weather a array empty or not
    cout<<"Check empty or not : "<<num.empty()<<endl;//return 1 - true only when the array is empty
    cout<<"Check empty or not : "<<name.empty()<<endl;

    //3.we can find the first and last element of an array using predefined function
    cout<<"First element : "<<num.front()<<endl;//this return the first element of an array
    cout<<"Last element : "<<num.back()<<endl;//this rturn the value at the last index of an array





}