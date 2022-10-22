#include <iostream>

/*
Problem 3.24: What is the output of the program below? 

a = 5
*/
int main()
{
    int a = 0;
    
    while (a < 5) a++; // a incremented to 5, loop condition checks again and fails

    std::cout << "a = " << a << '\n';
}