#include <iostream>

/*
Problem 3.20: Convert the program from Problem 3.19 by using a for loop


*/
int main()
{
    int n = 4;
    int a = 2;
    int b = 1;

    for (; n != 4; n++)
        b = b * a;
    
    std::cout << a << " to the power of " << n << " = " << b << '\n';
}