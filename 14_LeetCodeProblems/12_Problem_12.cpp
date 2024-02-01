// Problem statement-Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include<iostream>
#include<vector>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp ;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    temp.push_back(i);
                    temp.push_back(j);
                    return temp;
                }
            }
        }     
    }
int main(){
    vector<int> num={1,2,3,4,5};
    vector<int> ans=twoSum(num,9);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}