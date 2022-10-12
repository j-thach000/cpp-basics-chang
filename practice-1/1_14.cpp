#include <iostream>
using namespace std;

/*
Problem 1.14: If the following program doesn't compile, why not? 
If it does compile, what is the output when it is run?

It should compile, the output:
Please do not use this coding style in your program!!
*/
int main()
{
    cout << "Please do not use" << " "
         <<                         "this coding style"
         << " " << "in" << " "              << "your"
         << " " << "program!!" << endl;
}