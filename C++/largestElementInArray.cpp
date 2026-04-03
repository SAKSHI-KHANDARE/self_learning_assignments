
// Q.
// Write a C++ program to find the largest element in an array.

#include<iostream>
using namespace std;

int main()
{
    int a[5] = {10,25,12,40,85};

    int n = sizeof(a)/sizeof(a[0]);

    int max_e = a[0];

    for(int i = 1;i<n;i++)
    {
        if(a[i]>max_e)
        {
            max_e = a[i];
        }
    }
    cout<<"Largest Element is :"<<max_e<<endl;

    return 0;

}