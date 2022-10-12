#include <iostream>
using namespace std;

/*
Problem 1.21: What is the output of the program below?
50 10
*/
int main()
{
    int x = 10;
    int y = 50;
    int z;

    z = x; // z = 10
    x = y; // x = 50
    y = z; // y = 10

    // the values do get swapped since we have the placeholder

    cout << x << " " << y << endl;
}