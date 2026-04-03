
// Q.5. Write a program to swap two numbers without using a third variable.

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter First Number: ";
    cin>>a;

    cout<<"Enter Second Number: ";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After Swapping Numbers are: ";
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;

    return 0;

}






























// cout << a << " ";
//         c = a + b;
//         a = b;
//         b = c;