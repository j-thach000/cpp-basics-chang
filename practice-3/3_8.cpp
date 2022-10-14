#include <iostream>

/*
Problem 3.8: What is the output of the program below?

x = 3
WRONG

x = 3
x = 5
CORRECT

you don't stop until the loop's condition 
*/
int main()
{
    int x;

    for (x = 0; x <= 5; x++)
        if ((x*x - 8*x + 15) == 0)
            std::cout << "x = " << x << '\n';
}