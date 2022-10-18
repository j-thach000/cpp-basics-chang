#include <iostream>

/*
Problem 3.14: What is the output of the program below?

same as 3.13
i = 10, j = 110
*/
int main()
{
    int i;
    double j;

    for (i = 0, j = 100; (i < 10) && (j < 110); i++, j++)
                ;
    std::cout << "i = " << i << ", j = " << j << '\n';
}