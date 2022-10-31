#include <iostream>

/*
Problem 4.1: What is the output of the program below?
x = 3 x = 5
*/
int main()
{
    for (int x = 0; x <= 10; x++)
        if ((x*x - 8*x + 15) == 0)
            std::cout << "x = " << x << " ";
    std::cout << '\n';
    
}