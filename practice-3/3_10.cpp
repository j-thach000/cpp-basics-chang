#include <iostream>

/*
Problem 3.10: If the following program doesn't compile, why not? 
If it does compile, what is the output when it is run?

It doesn't compile
Our print statement is outside the scope of the control variables in the for loop
The control variables only exist for the lifetime of the for loop
*/
int main()
{
    for (int i = 0, double j = 100; i < 10; i++, j++)
        ;
    std::cout << "i = " << i << ", j = " << j << '\n';
}