
// Q.
// Write a program to find the sum of all elements of an array.


#include<iostream>
using namespace std;

int main()
{   
    int sum = 0;
    int a[5] = {1,2,3,4,5};
    for(int i =0;i<=4;i++)
    {
        sum = sum +a[i];
    }
    cout<<"Sum of all Elements : "<<sum<<endl;
}