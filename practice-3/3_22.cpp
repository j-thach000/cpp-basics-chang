#include <iostream>

/*
Problem 3.22: What is the output of the program below? 

There's an infinite loop of assigning 2 to a, and we never get to the print statement
*/
int main()
{
    int a = 1;
    
    do
    {
        a = 2;
    } while (1 != 0);

    std::cout << "a = " << a << '\n';
    
}