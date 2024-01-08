// Problem statement -> rotate an array
#include <iostream>
using namespace std;
#include <vector>
void rotateArray(vector<int> &num, int n)
{
    for (int i = 0; i < n; i++)
    {
        // for (int i = num.size() - 1; i > 0; i--)
        // {
        //     int j = i - 1;
        //     swap(num[i], num[j]);
        // }
        //another approach
        for(int i=1;i<num.size();i++){
            int j=0;
            swap(num[i],num[j]);
        }
    }
}
void printArray(vector<int> num)
{
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "   ";
    }
    cout << endl;
}
int main()
{
    vector<int> a = {1, 2, 3};
    rotateArray(a,2);
    printArray(a);
}