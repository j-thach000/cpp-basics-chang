#include <iostream>

/*
Problem 3.16: What is the output of the program below?

00000001

*won't compile because of misleading indentation (compiler setting all warnings as errors)
*/

int main()
{
    int i, j, k;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 2; k++)
                std::cout << i * j * k;
                std::cout << '\n';
}