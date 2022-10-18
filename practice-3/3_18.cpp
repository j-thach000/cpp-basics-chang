#include <iostream>

/*
Problem 3.18: What is the output of the program below?

2 to the power of 0 = 16
*/

int main()
{
    int n = 4;
    int a = 2;
    int b = 1;

    while (n != 0)
    {
        b = b * a;
        n--;
    }
    // Is the output the same as the output from problem 3.17? no
    std::cout << a << " to the power of " << n << " = " << b << '\n';
}