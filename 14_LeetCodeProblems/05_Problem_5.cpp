//Problem statement -> Move Zeros
//sample input-> arr={0,1,0,3,2}
//output ->{1,3,2,0,0}
#include<iostream>
using namespace std;
#include<vector>
void moveZeros(vector<int> &num){
    int MovingZeros=0;
    for(int i=1;i<num.size();i++){
        if(num[i]!=0){
            swap(num[i],num[MovingZeros]);
            MovingZeros++;
        }
    }
}
void print(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<"  ";
    }
cout<<endl;
}
int main(){

    vector<int> m={0,0,9,7,0};
    moveZeros(m);
    print(m);

}

//i am not understanding what is the error in my code so that's it through an error