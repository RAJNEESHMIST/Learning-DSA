//this is the problem realated to the Aggressive cows in which an array given the distance of stalls
#include<iostream>
using namespace std;

bool isPossible(int stall[],int n,int k,int mid){
    int cowCount=1;
    int lastPos=stall[0];
    
    for(int i=0;i<n;i++){

        if(stall[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=stall[i];
        }
        
    }
    return false;
}

int aggressiveCows(int stall[],int n,int k){//where k is the number of arrays

int s=0;
int maxi=-1;
for(int i=0;i<n;i++){
    maxi=max(maxi,stall[i]);
}
int e=maxi;
int ans=-1;
int mid=s+(e-s)/2;
while(s<e){
    if (isPossible(stall,n ,k,mid)){
        ans=mid;
        s=mid+1;
    }

    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;

}
int main(){
    int stall[5]={1,2,4,3,6};
    
    cout<<aggressiveCows(stall,5,2);
}