#include <iostream>
#include <string>

/*
Problem 2.13: What is the output of the program below if the input is abc?

YES
*/

int main()
{
    std::string str;
    std::cin >> str;

    if (str == "abc")
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}