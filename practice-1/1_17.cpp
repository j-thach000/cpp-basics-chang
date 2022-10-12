#include <iostream>
using namespace std;

/*
Problem 1.17: What is the output of the program below?

100
101

101
100

incorrect, remember the increment assigns a new value but with different timing
x++ return the value, assign a +1 value after
++x assign +1 and then return the value

100
101
101
101
*/
int main()
{
    int value = 100;

    // x++ is return the value and THEN add 1 
    cout << value++ << endl;
    cout << value   << endl;

    value = 100;

    // ++x return the value with 1 added
    cout << ++value << endl;
    cout << value   << endl;
}