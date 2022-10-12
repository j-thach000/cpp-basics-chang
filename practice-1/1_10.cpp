#include <iostream>
using namespace std;

/*
Problem 1.10: What is the output of the program below?

Paper trace - something related to division by 0
Compile and run - compiler warning about division by 0 (but only because warnings are treated as errors with my setup)
*/
int main()
{
    int A, B = 10;
    
    A = 100 / (B - B*1); // error: crash at run-time because of division by 0

    cout << A << endl; 
}