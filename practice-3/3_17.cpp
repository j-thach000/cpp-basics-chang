#include <iostream>

/*
Problem 3.17: What is the output of the program below?

2 to the power of 4 = 16
*/

int main()
{
    int n = 0;
    int a = 2;
    int b = 1;

    while (n != 4)
    {
        b = b * a;
        n++;
    }
    
    std::cout << a << " to the power of " << n << " = " << b << '\n';
}