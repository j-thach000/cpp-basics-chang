#include <iostream>

/*
Problem 3.13: What is the output of the program below?

i = 0, j = 100
wrong

right:
i = 10, j = 110

the control variables were defined outside of the for loop header which let us refer to them
the for loop just incremented them and then we had a print statement
*/
int main()
{
    int i = 0;
    double j = 100;

    for (; i < 10; i++, j++)
                ;
    std::cout << "i = " << i << ", j = " << j << '\n';
}