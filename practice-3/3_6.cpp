#include <iostream>

/*
Problem 3.6: If the following program doesn't compile, why not?
If it does compile, what is the output when it is run?

does compile
2
no idea what happens when you initialize a for loop with no body statement

ok lol nothing happens obviously if the for loop has no body
thought the compiler would throw a fit (if you have warnings as errors off)
*/
int main()
{
    int a = 2, b = 1;

for (int i = 0; i <= 4; i++); 
    b = b * a; // compiler warning about a misleadingly indented statement
    

std::cout << b << '\n';
}