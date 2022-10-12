#include <iostream>
using namespace std;

/*
Problem 1.19: What is the output of the program below?

1
0
0
0
*/
int main()
{
    int a = 5;
    int b = 0;
    int c = 0;

    a /= b = 5; // order of operations goes right to left, 5 assigned value of 5 and expression is a /= b or 5/5
    cout << a << endl; // 1

    a = b == c; // a = 5 == 0, false is 0 so a = 0 
    cout << a << endl; // 0

    (a == b) == c; // just comparisons
    cout << a << endl; // 0

    a == (b = c); // same as above
    cout << a << endl; // 0
}