//Problem statement -> Reverse a string
#include<iostream>
using namespace std;

//function to reverse a string
void reverse(char ch[],int len){
    int start=0;
    int end=len-1;

    while(start<end){
        swap(ch[start++],ch[end--]);
    }
}

//funtion to find the length os the string
    int findLength(char ch[]){
        int count=0;
        for(int i=0;ch[i]!='\0';i++){
            count++;
        }
        return count;
    }
 int main(){    

    char name[20];
    cout<<"Enter the name : "<<endl;
    //basically the 1d char array is the implementation of the is string  so it works like a string
    cin>>name;

    cout<<"Name before reversing :";
    cout<<name<<endl;

    int size=findLength(name);
    reverse(name,size);

    cout<<"Name after reversing : "<<name<<endl;//if we do not use endl then execution start from starting why?


 }