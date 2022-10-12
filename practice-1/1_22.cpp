#include <iostream>
using namespace std;

/*
Problem 1.22: What is the output of the program below?
50 10
*/
int main()
{
    int x = 10;
    int y = 50;

    x = x + y; // 10 + 50 = 60
    y = x - y; // 60 - 50 = 10
    x = x - y; // 60 - 10 = 50

    cout << x << " " << y << endl;
}