#include <iostream>

/*
Problem 3.2: What is the output of the program below?

loop never prints

output: 
i = 0
*/

int main()
{ // book code, i = 0, everything else is just from me toying around
    int i; // variable definition - i has no value but we know its type
           // in the scope of the program when it's defined here
           // if it was initialized in the for loop header then it was out of the scope for the later print statement
    for (i = 4; i < 0; i++) // i is assigned the value 4
        {
            std::cout << "Hello Loop!\n";
            i = 10; // never happens because the loop condition isn't possible
        }

    std::cout << "i = " << i << '\n'; // print i, which is 4
}