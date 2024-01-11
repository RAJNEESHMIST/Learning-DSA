//problem statement : Add two array
//sample input a={1,2},b={2,3} sum={3,5};
#include <bits/stdc++.h>
using namespace std; 
#include<vector>
vector<int> reverse(vector<int> v){
	int s=0;
	int e=v.size()-1;
        while (s < e) {
          swap(v[s++], v[e--]);
        }
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i=n-1;
	int j=m-1;
	int carry=0;
	vector<int> ans;
	while(i>=0&&j>=0){

		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	//case 1 -> array a have more element than array b
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}
	//case 2-> when array b have more element than a
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	//case 3rd -> when carray remaining
	while(carry!=0){
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}
	
	return reverse(ans);
}
int main(){
     vector<int> num={1,4,6,7,3,9};
     int s1=6;
     int s2=7;
     vector<int> num2={5,7,9,8,5,4,3};
     vector <int> Add=findArraySum(num,s1,num2,s2);

    cout<<"The sum of two array : ";
     for(auto i:Add){
        cout<<i<<"  ";
     }

}