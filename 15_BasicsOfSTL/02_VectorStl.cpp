// this program is to understand the concept of the dynamic array (or vector) which is widely used in competative programming
// vector have many similar property similer to array excepting vector is dynamic in nature
#include <iostream>
using namespace std;
// we have to include the vector to use the vector stl
#include <vector>
int main()
{
    // syntax to create the a vector as -> vector < datatype> nameOfVector;
    vector<int> n;
    // now vector provide many functionality like -to find its capacity and size
    // capacity() -> this return momory allocate for how many elements where as size() -> return the number of element present in the vector

    // initially vector n has no element so its capacity is 0
    cout << "Capacity : " << n.capacity() << endl; // 0
    cout << "Size : " << n.size() << endl;         // 0

    // we can insert an element int the vector using the push_back(ele) function
    n.push_back(12); // now here we insert an element in an array now the size become 1 and capacity also become 1

    cout << "Capacity : " << n.capacity() << endl; // 1
    cout << "Size : " << n.size() << endl;         // 1

    n.push_back(89);
    cout << "Capacity : " << n.capacity() << endl; // 2 - now capacity become double of the pre size
    cout << "Size : " << n.size() << endl;         // 2

    n.push_back(79);
    cout << "Capacity : " << n.capacity() << endl; // 4 - now capacity become double of the pre size
    cout << "Size : " << n.size() << endl;         // 3
    //Note -> now here we see that the capacity become double of the existing capacity and the size only increaase by one
    //we can use the all existing property of the array stl like
    //1.to find the element of the specific index
    cout<<"Element at 0th index : "<<n.at(0)<<endl;//12 - this print the first element of the array
    cout<<"Element at 2th index : "<<n.at(2)<<endl;//79 - this is only tells the emptyness

    //2.to check weather a array empty or not
    cout<<"Check empty or not : "<<n.empty()<<endl;//0(false) - return 1 - true only when the array is empty

    //3.we can find the first and last element of an array using predefined function
    cout<<"First element : "<<n.front()<<endl;//12 - this return the first element of an array
    cout<<"Last element : "<<n.back()<<endl;//79 - this rturn the value at the last index of an array

    //we can also remove the last element from the vector using the pop_Back() - function
    cout<<"Elements in vector before poped : ";
    for(int i:n){
        cout<<i<<"  ";
    }

    n.pop_back();
    cout<<endl<<"Elements in vector after poped : ";
    for(int i:n){
        cout<<i<<"  ";
    }

    //Note -> this is the syntax of the for loop
    // for(int i:n){
    //     cout<<i<<"  ";
    // }

    //we can also clear whole vector using predefined function as
    cout<<endl<<"Size before clear : "<<n.size();
    cout<<endl<<"Capacity before clear : "<<n.capacity();
    n.clear();
    cout<<endl<<"Size after clear : "<<n.size();//0 -> size become zero after clearing the vector
    cout<<endl<<"Capacity after clear : "<<n.capacity();//but capacity remain same

    //we can also initialize another way with defined size and initiall assigned a value by default initialized by 0
    vector<int> a(5);//this create a vector with size 5 and initialize its all value with 0
    cout<<endl<<"Elements in vector a : ";
    for(int i:a){
        cout<<i<<"  ";
    }


     vector<int> b(5,1);//this create a vector with size 5 and initialize its all value with 1
    cout<<endl<<"Elements in vector b : ";
    for(int i:b){
        cout<<i<<"  ";
    }

    //we can also copy all the elements of a vector in another vector simply pass the argument to the newly created vector as'
    vector <int> copy(b);
     cout<<endl<<"Elements in vector copy : ";
    for(int i:copy){
        cout<<i<<"  ";
    }

}