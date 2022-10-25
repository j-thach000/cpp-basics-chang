#include <iostream>

/*
Problem 3.26: What is the output of the program below? 

-95
wrong
had the right idea do while loops execute at least once
just incorrectly traced the body

-100

*/

int main()
{
    int x = -100;

    do
    {
        std::cout << x << '\n';
        x = x - 5;
        
    } while (x > 0);
    
}