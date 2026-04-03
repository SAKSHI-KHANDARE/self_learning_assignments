
// Q.
// Write overloaded functions to find area of:

// -Square
// -Rectangle

// Example

// area(int side)
// area(int length, int breadth)

#include <iostream>
using namespace std;
int area(int, int);
int area(int );
int main()
{

area(8,5);
area(6);


}
int area(int l,int b){
    //int rect = len + bre;
    //cout<<"Rectangle is "<<rect<<endl;
  cout<<l*b<<endl;
   return l*b;
}
int area(int s){
     //int square = sqr*sqr;
    //cout<<"Square is "<<square<<endl;
    cout<<s*s<<endl;
  return s*s;
}