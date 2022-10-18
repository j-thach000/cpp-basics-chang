#include <iostream>

/*
Problem 3.15: What is the output of the program below?

correct
0001

*/
int main()
{
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            std::cout << i * j;
            std::cout << '\n';
}