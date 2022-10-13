#include <iostream>

/*
Problem 2.7: what is the output of the program below?

a = 2
b < 0 so 2 is assigned to a

above assumption is wrong
if we had a semicolon after if (b > 0) then that would be true

because the first if's condition wasn't true then everything after it didn't happen

a = 1
*/

int main()
{
    int a = 1, b = -1000; // a = 1 
                          // b = -1000

    if (b > 0) 
        if (b < 0) a = 2; 
        else b = 3; 

    std::cout << "a = " << a << '\n';
}