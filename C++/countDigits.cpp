
// Q.2. Count how many digits are present in the number.

#include<iostream>

using namespace std;

int main()
{
    int num , count = 0;

    cout<<" Enter number :  ";
    cin>>num;

    while(num!=0)
    {
        num = num / 10;
        count++;
    }
    cout<<"Enter number of Digits :"<<count;

    return 0;

}