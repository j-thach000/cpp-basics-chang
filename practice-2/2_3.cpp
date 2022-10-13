#include <iostream>

/*
Problem 2.3: What is the output of the program below?

compiler gave a warning about assignment statements as selection statement condition
x and y are equal!
*/
int main()
{
    int x = 50, y = 100;

    if ((x = y))
        std::cout << "x and y are equal!\n"; // 0 is false, everything else is true
    else    
        std::cout << "x and y are NOT equal!\n";    
}