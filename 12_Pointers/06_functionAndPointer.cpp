//this program cover about the function and pointer
#include<iostream>
using namespace std;
void update(int *p){
    p=p+1;
    cout<<"Inside : "<<p<<endl;
}
void print(int *a){
    cout<<a<<endl;
}

void valUpdate(int *a){
    // *a=*a+1;
    ++*a;
    // *a++;
}
int main(){
    int val=9;
    int *p=&val;
    print(p);
    cout<<"Before : "<<p<<endl;
    update(p);
    cout<<"After : "<<p<<endl;

    cout<<"Before update : "<<*p<<endl;
    valUpdate(p);
    cout<<"After update : "<<*p<<endl;
    


    return 0;
}