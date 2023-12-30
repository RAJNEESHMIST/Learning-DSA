/*
1
2 1
3 2 1
print this pattern using the while loop
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i=1;
    // while(i<=n){
    //     int j=i;
    //     while(j>=1){
    //         cout<<j<<"  ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<"  ";//we can also do that
            j++;
        }
        cout<<endl;
        i++;
    }
}