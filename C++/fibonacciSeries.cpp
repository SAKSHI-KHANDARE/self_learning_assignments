
// Q.4. Write a program to Print Fibonacci series
// Given an integer N, print the first N Fibonacci numbers.

#include<iostream>

using namespace std;

int main()
{
    int n , a = 0 , b = 1 , c;

    cout<<"Enter the number :";
    cin>>n;

    for(int i =1;i <=n; i++)
    {
        cout << a << " ";
        c = a + b ;
        a = b;
        b = c;
    }
}