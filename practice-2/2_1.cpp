#include <iostream>

/*
Problem 2.1: What is the output of the program below?
x is lesser than or equal to y.
*/
int main()
{
    int x = 100, y = 100;
    if (x <= y)
        std::cout << "x is lesser than or equal to y.\n";
    else 
        std::cout << "x is greater than y.\n";
}