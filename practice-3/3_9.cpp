#include <iostream>

/*
Problem 3.9: What is the output of the program below?

Same as previous
x = 3
x = 5
*/
int main()
{
    int x = 0, count = 0;

    while (count != 2)
    {
        if ((x*x - 8*x + 15) == 0)
        {
            std::cout << "x = " << x << '\n';
            count++;
        }
        x++;
    }
}