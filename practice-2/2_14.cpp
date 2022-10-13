#include <iostream>
#include <string>

/*
Problem 2.14: If the following program doesn't compile, why not? 
If it does compile, what is the output when it is run?

does not compile since we're trying to reassign a constant variable
*/

int main()
{
    const std::string str = "Hello World!";
    
    std::cout << str << '\n';

    if (str == "Hello World!")
        str = "CS31";

    std::cout << str << '\n';
}