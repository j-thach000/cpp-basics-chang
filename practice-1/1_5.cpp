#include <iostream>

/*
Problem 1.5: Please write a C++ program to declare an integer variable x, take as an 
input an integer value and store such value to x, add 100 to x, and output x on the console.

- declare integer variable x
- take keyword input and store it into x
- add 100 to x
- print x
*/
int main()
{
    int x;
    std::cin >> x;
    x += 100;
    std::cout << x;
}