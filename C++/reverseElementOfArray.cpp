
// Q.
// Write a program to reverse the array elements.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {14,15,95,87,26,42,13,98};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1 ;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}