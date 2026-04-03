#include <iostream>

using namespace std;

int main() {
    int n, first = INT_MIN, second = INT_MIN, curr;

    cout<<"Enter the Numbers : "
    cin >> n;

    while (n--) {

        cin >> curr;

        if (curr > first) {

            second = first;
            first = curr;

        } else if (curr > second && curr < first) {
            second = curr;
        }
    }

 
    cout << second << endl;
    
    return 0;
}
























































































// #include <climits>