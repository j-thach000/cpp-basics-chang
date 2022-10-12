#include <iostream>
using namespace std;

/*
Problem 1.13: Below is a program converting degrees Celsius to degrees Fahrenheit. 
However, the output of the program below is 52 while the correct output is 68. 
Please fix the program to generate the correct output.
*/
int main()
{
    float fahrenheit;
    float celsius = 20.0;

    /*
    fahrenheit = 32.0 + celsius * (9/5); 
    integer division of 9/5 resulting in that part of the expression being 0
    */

    fahrenheit = 32.0 + celsius * (9.0/5); // change one of 9 or 5 to a double
    cout << fahrenheit << endl;
}