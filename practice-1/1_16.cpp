#include <iostream>
using namespace std;

/*
Problem 1.16: If the following program doesn't compile, why not? 
If it does compile, what is the output when it is run?

It does compile, 
output: 1

Incorrect, it does not compile and produces a compiler error
*/
int main()
{
    cout << 1++ << endl; // error: increment operand requires lvalues (values with a memory address: variables, array elements, etc.)
}