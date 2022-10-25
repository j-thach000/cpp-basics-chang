#include <iostream>

/*
Problem 3.28: Please re-write the program from problem 3.27 by using do-while loop.
*/
int main()
{
    int i = 1;
    do 
    {
        std::cout << i << '\n';
        i += 2;
    } while (i < 10);
}