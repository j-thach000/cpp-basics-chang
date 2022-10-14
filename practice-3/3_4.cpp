#include <iostream>

/*
Problem 3.4: What is the output of the program below?

8 WRONG
16 CORRECT

had tracing method out incorrectly
we know it loops 4 times (i = 0 1 2 3) so 2 4 8 16
*/

int main()
{
int a = 2, b = 1;

for (int i = 0; i < 4; i++) // the control variable increments after each execution of the body
    {
    b = b * a;
    std::cout << "i = " << i << '\n'; 
    }


std::cout << b << '\n';
}