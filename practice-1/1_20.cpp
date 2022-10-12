#include <iostream>
using namespace std;

/*
Problem 1.20: What is the output of the program below?
50 50
*/
int main()
{
    int x = 10;
    int y = 50;

    x = y; // 50
    y = x; // does this swap the values of x and y? 
           // no, there has to be some placeholder value that takes on the value of x (10) so y can become 10

    cout << x << " " << y << endl; // 50 50
}