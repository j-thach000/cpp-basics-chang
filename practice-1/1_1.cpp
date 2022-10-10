#include <iostream>
using namespace std;

/*
Problem 1.1: Does the follow program compile successfully?
It shouldn't since we're trying to print information from a variable that is undefined
Solution specifically points out variables are case-sensitive
*/
int main()
{
    int b;

    cin >> b;

    cout << B; // error: identifier "B" is undefined
}