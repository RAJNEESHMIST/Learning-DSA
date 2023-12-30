//this program is to find the pivot element and position in the element fram a rotated sorted array
#include <iostream>
using namespace std;
int pivotElement(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (a[mid] >=a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int num[5] = {3, 5, 9, 1, 2};//rotated  sorted array
    int pivotEle = pivotElement(num, 5);
    cout << "Pivot is at :" <<pivotEle;

    cout<<endl<<"Pivot Element :"<<num[pivotEle];
    // return 0;
}