#include <iostream>
using namespace std;

/*
Problem 1.3: Does the follow program compile successfully?
It shouldn't since one of our variable names is a keyword.
*/
int main()
{
    float float; // error: type name is not allowed
    cin >> float;
    cout << float << endl;
}