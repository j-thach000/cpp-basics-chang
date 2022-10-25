#include <iostream>

/*
Problem 3.27: What is the output of the program below?

1
3
5
7
9
*/
int main()
{
    int i;

    for (i = 1; i < 10; i+=2)
    std::cout << i << '\n';
}