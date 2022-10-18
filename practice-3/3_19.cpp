#include <iostream>

/*
Problem 3.19: What is the output of the program below?

2 to the power of 4 = 1
*/
int main()
{
    int n = 4;
    int a = 2;
    int b = 1;

    while (n != 4)
    {
        b = b * a;
        n++;
    }
    
    std::cout << a << " to the power of " << n << " = " << b << '\n';
}