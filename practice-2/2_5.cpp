#include <iostream>

/*
Problem 2.5: If the following program doesn't compile, why not?
If it does compile, what is the output when it is run?

No, it's missing { } for both if and else since it has more than one body statement
*/

int main()
{
    int x = 100.499999999999999999999; // 20 9s
    
    std::cout << x << '\n';

    if (x == 100)
        {
        std::cout << "Right! ";
        std::cout << "x = 100!\n";
        }
    else
        {
        std::cout << "No! ";
        std::cout << "x = 101!\n";
        }

}