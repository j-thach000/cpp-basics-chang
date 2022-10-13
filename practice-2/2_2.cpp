#include <iostream>

/*
Problem 2.2: What is the output of the program below?

the if statement has a negative value, which are seen as true
Minus number is evaluated as true!
*/
int main()
{
    if (-614)
        std::cout << "Minus number is evaluated as true!\n";
    else
        std::cout << "Minus number is evaluated as false!\n";
}