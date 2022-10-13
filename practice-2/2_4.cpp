#include <iostream>

/*
Problem 2.4: What is the output of the program below?

100
Right! x = 100!
No compilation error?
*/
int main()
{
    int x = 100.499999999999999999999; // 20 9s
    
    std::cout << x << '\n';

    if (x == 100)
        std::cout << "Right! ";
            std::cout << "x = 100!\n";
    std::cout << "No compilation error?\n";
}