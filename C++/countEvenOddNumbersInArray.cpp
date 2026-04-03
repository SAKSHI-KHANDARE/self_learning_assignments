
// Q.Write a C++ program to count even and odd numbers in an array.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,45,25,65,13,87,54,1,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int even_count = 0;
    int odd_count = 0;

    for(int i =0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
        
    }
    cout<<"Even Element Count :"<<even_count<<" "<<"Odd Element Count :"<<odd_count<<endl;
}