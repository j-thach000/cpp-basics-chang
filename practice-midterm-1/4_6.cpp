/*
incorrect 
Problem #6: What is the output of the program below?

33 - wrong
3+ - correct
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string exp = "-3+3+555+99999"; // 14 elements in the string

    int mult = 1;
    int offs = 0;
    for (int i = 0; i != exp.size(); i+=2) { // iterates through string exp by 2
        if (exp[i] == '-') mult = i + 5; 
        else if (exp[i] == '+') mult = i + 8;
        else offs = 1;
    }

    cout << offs << " " << mult << " " << exp.size() << " " << 16 % 14 << '\n';
    cout << exp[offs] << exp[mult % exp.size()] << '\n'; // modulo evaluates the remainder of dividing two numbers
}