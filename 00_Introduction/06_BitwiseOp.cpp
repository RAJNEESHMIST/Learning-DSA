//this program is to illustrate the working of the bitwise operator 
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=8;

    //we know that bitwise operator works on the bit level so we have already take the 4 bit binary equivalent of taken digits but system takes 23bits or 64 bits equivalent depends upon the system achitecture
    //5 -   0 1 0 1 
    //8 -   1 0 0 0
    //bitwise AND
    cout<<(a&b)<<endl;//0 0 0 0 ->0
    //bitwise OR
    cout<<(a|b)<<endl;//1 1 0 1 ->13
    //bitwise NOT
    cout<<(~a)<<endl;//1 0 1 0  - MSB=1 that denotes it is negative number so to print the negative sign we have to take its 2's complemnt and print the equivalent value along with the -ve sign so that why it prints -6

    //Note -> we can find the not value of the any by alternate value as ~a=-(a+1)

    //bitwise XOR
    cout<<(a^b)<<endl;//1 1 0 1 ->13
    
    //shift operator ->these are the operator in which we shift the binary digits either left or right shift.
    //left shift-this is the operator in which we shift the binary dgit of a operand to the left and vacant place filled with 0 in case of +ve number
    //for example
    int num=5;
    cout<<(num<<2)<<endl;//20

    //right shift- in this we shift the binary digit to the right side of the means discard the digits which right shift
    cout<<(num>>2)<<endl;//1

}