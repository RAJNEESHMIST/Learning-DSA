//If the number of occurenece of the each element is unique the return true
//for example [1,2,1,1,3,3]-true(1-3times,2-1time,3-2time) and [1,1,2,3,3]-false
#include<iostream>
using namespace std;
bool uniqueOccurence(int array[],int size){
    int a=0,b=0,c=0;
    for(int i=0;i<size;i++){
        if(array[i]==1){
            a++;
        }
        if(array[i]==2){
            b++;
        }
        if(array[i]==array[i+1]){
            c++;
        }
    }
}
int main(){

}
