#include<iostream>
using namespace std;
//print an int array
void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
//print a char array
void printArrayChar(char array[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
//print double array
void printArrayDouble(double array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
//print float array
void printArrayfloat(float array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
//print boolean array
void printArrayBool(bool array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    //declare array
    int arr[10];//this is the array creation of 10 elements of name arr
    cout<<arr[34];//when we create an array and do not initioalize any value then if we try to print the element it gives us some garbage value
    
    //initializing a 2nd array
    int arr1[3]={4,6,3};

    //Accessing element of an array
    cout<<endl<<"The value at index 0 : "<<arr1[0];
    cout<<endl<<"The value at index 1 : "<<arr1[1];
    cout<<endl<<"The value at index 2 : "<<arr1[2]<<endl;
    

    int third[15]={7,6};//these given value initialize in first two index after that remaining indexes initialize with 0.
    int n=15;
    //print array
    cout<<"The Elements of the third array :"<<endl;
    // for(int i=0;i<=n;i++){
    //     cout<<third[i]<<"  ";
    // }
    printArray(third,15);//we make a funtion above to take some parameter and print all the element of the array

    //initoalizing all the location with 0
    int fourth[10]={0};//if we initialize like this it take the value at the all index is 0 like shown in below
    cout<<endl<<"Printing all the value of the Fourth array :"<<endl;
    printArray(fourth,10);

    //initoalizing all the location with 1 [not possible in this condition]
    int fifth[10]={1};//in this index 0 initialize with 1 and remaining with 0
    cout<<endl<<"Printing all the value of the Fourth array :"<<endl;
    printArray(fifth,10);

    //we can find the size of an array by using the sizeof() function like this
    int size=sizeof(fifth);//this give the size of a
    cout<<endl<<"The actual size of fifth array : "<<size;//this gives 40 because of 10*4.each element take 4 bytes 
    size=size/sizeof(int);
    cout<<endl<<"The length of fifth array : "<<size;

//making the array of all the data types
//char array
char ch[8]={'R','A','J','N','E','E','S','H'};
cout<<endl<<endl<<"Printing the elements of the char array :";
printArrayChar(ch,8);

//double array
double arrayDouble[5]={45.56456423,78.4};
cout<<endl<<endl<<"Printing the elements of the double array :"<<endl;
printArrayDouble(arrayDouble,5);

//float array
float arrayFloat[5]={4.545455,4.3,8.9,8,2};
cout<<endl<<endl<<"Printing the elements of the float array :"<<endl;
printArrayfloat(arrayFloat,5);

//Boolean array
bool arrayBool[2]={true,false};//it consider true as 1 and false as 0 and also give out put as 0 1.
cout<<endl<<endl<<"Printing the elements of the Boolean array :"<<endl;
printArrayBool(arrayBool,2);
    
    cout<<endl<<"Everything is fine";
    return 0;
}
