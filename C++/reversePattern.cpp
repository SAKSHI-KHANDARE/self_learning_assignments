
// WAP to print Reverse Alphabet Pattern

// A B C D E
// A B C D
// A B C
// A B
// A


#include<iostream>
using namespace std;

class Pattern
{
public:
    void printPattern()
    {
        int n = 5;

        for(int i = n; i >= 1; i--)
        {
            for(int j = 0; j < i; j++)
            {
                cout << char('A' + j) << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern obj;
    obj.printPattern();
    return 0;
}