#include <iostream>

/*
Problem 2.11: What is the output of the program below?

compiler warning, the boolean condition don't have their mathematical meaning
regardless, it still prints "does this work"
*/

int main()
{
    if ( 1 <= 2 <= 3) // evaluates to 1
        std::cout << "does this work?\n";
}