#include <iostream>

/*
Problem 3.25: What is the output of the program below? 

z = x times y.
*/
int main()
{
    int x = 2, y = 3, z = 0, n = 0;

    
    while (n != y) 
    {
        n = n + 1;
        z = z + x;
    }

    if (z == (x * y))
        std::cout << "z = x times y." << '\n';
    else
        std::cout << "Trap!!" << '\n';
}