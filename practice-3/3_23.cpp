#include <iostream>

/*
Problem 3.23: What is the output of the program below? 

a = 2
*/
int main()
{
    int a = 1;
    
    do
    {
        a = 2;
    } while (1 != 1);

    std::cout << "a = " << a << '\n';
}