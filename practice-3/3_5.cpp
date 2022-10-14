#include <iostream>

/*
Problem 3.5: What is the output of the program below?

32
*/

int main()
{
int a = 2, b = 1;

for (int i = 0; i <= 4; i++) 
    {
    b = b * a;
    std::cout << "i = " << i << '\n'; 
    }

std::cout << b << '\n';
}