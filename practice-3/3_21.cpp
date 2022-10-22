#include <iostream>

/*
Problem 3.21: If the follow program doesn't compile, why not?
If it does compile, what is the output when it is run?

Missing a semicolon on line 16
*/
int main()
{
    int a = 1;
    
    do
    {
        a = 2;
    } while (1 != 0)

    std::cout << "a = " << a << '\n';
    
}