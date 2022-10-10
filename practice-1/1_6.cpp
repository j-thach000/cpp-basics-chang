#include <iostream>

/*
Problem 1.6: Please use the variable X to fill in t he blank to compute A, B, C, D, E as:

A = 4X
B = A / 100
C = 1 - B
D = A + 2B + 3C
E = A + B + C + D + X

If x is 5, then the outputs are:

20
0
20
80
125

Just finish the program so you get the output above for A B C D E
*/

int main()
{
    int A, B, C, D, E, X;

    std::cout << "Please input the integer 5: ";
    std::cin >> X;

    A = 4 * X;
    B = A / 100;
    C = A - B;
    D = A + (2 * B) + (3 * C);
    E = A + B + C + D + X;

    std::cout << A << '\n'
              << B << '\n'
              << C << '\n'
              << D << '\n'
              << E << '\n';
}