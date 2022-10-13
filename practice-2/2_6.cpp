#include <iostream>

/*
Problem 2.6: What is the outpout of the program below?

does nothing output since the if statements are ended with a semicolon before the body?
wrong, compiler warning about selection statements with no body statements

correct, the program still outputs the print statements in the braces
*/

int main()
{
    int a = 1, b = 2;

    if (a == b) ;
    {
        std::cout << "a equals to b\n";
    }
    if (a != b) ;
    {
        std::cout << "a is not equal to b\n";
    }
}