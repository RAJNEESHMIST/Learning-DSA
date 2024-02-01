#include <bits/stdc++.h>
using namespace std;


vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        int sq=0;
        for(int i=0;i<nums.size();i++){
            sq=pow(nums[i],2);
            temp.push_back(sq);
        }
        sort(temp.begin(), temp.end()); 
       
        return temp;  
    }
    void printVect(vector<int> a){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<"  ";
        }
        cout<<endl;
    }
int main(){
    vector<int> num={1,9,6,8,3,2};
    // cout<<"Before sorting : ";
    // printVect(num);
    // sort(num.begin(), num.end()); 
    // cout<<"After sorting : ";
    // printVect(num);
    vector<int> res=sortedSquares(num);
    printVect(res);


}