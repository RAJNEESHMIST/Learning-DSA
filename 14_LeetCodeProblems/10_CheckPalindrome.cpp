//Problem statement -> Check the string whether it is pallindrome or not
#include<iostream>
#include<vector>
using namespace std;
bool checkPallindrome(vector<char> &s){
    vector<char> temp=s;
    int st=0;
    int e=s.size()-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }

    return temp==s;

}
int main(){
    vector<char> ch={'a','b','d','b','a'};
    cout<<checkPallindrome(ch);

}