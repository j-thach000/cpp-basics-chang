#include <iostream>

/*
Problem 2.10: Please write a multiway if-else statement to print
appropriate messages based on the value of an integer variable when 
n < 10 or 10 <= n <= 50 or n > 50
*/

int main()
{
    int n;
    std::cin >> n;

    if (n < 10)
        std::cout << "n less than 10 \n";
    else if ((n >= 10) && (n <= 50))
        std::cout << "10 <= n <= 50 \n";
    else if (n > 50)
        std::cout << "n > 50 \n";
}