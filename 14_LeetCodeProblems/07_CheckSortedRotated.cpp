//problem statement : check the given array sorted and rotated or not
#include<iostream>
using namespace std;
#include<vector>

bool chekSortedRotated(vector<int> &nums){
    int count=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1]){
            count++;
        }
    }
    if(nums[nums.size()-1]>nums[0]){
        count++;
    }
    return count<=1;
}
int main(){
     vector<int> a={5,1,2,3,4};
    bool check=chekSortedRotated(a);
    cout<<check;


}