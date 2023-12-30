// problem to find indexes of two  elements whose target sum is equal to given target
#include <iostream>
using namespace std;

void target(int num[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == target)
            {
                cout << "The pair of number whose sum is " << target << " : [" << num[i]<<","<< num[j] << "]"<<endl;
            }
        }
    }
}
int main(){
    int a[5]={4,2,3,5,4};
    int targetSum=8;
    target(a,5,targetSum);
}