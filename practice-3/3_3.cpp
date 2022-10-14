#include <iostream>

/*
Problem 3.3: What is the output of the program below?

Hello Loop!
i = 1
*/

int main()
{
    int i;
    for (i = 0; i < 1; i++) 
        std::cout << "Hello Loop!\n";

    std::cout << "i = " << i << '\n'; 
}