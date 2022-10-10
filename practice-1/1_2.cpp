#include <iostream>
using namespace std;

/*
Problem 1.2: Does the follow program compile successfully?
It shouldn't since one of our variable names is a keyword.
*/
int main()
{
    double double; // error: type name is not allowed
    cin >> double;
    cout << double << endl;
}