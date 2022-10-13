#include <iostream>

/*
Problem 2.8:

1 2
wrong since we had no space in the string
12
*/

int main()
{
    int x = 0, y = 9;

    if ((x == 0) && (y < 20))
        std::cout << "1";
    if ((y > 20) || (x < 5))
        std::cout << "2" << '\n';
    if (x == 12) 
        std::cout << "4" << '\n';
    if ((x == 1) && (32767+x < 3641*y))
        std::cout << "5" << '\n';
}