#include <iostream>
using namespace std;

/*
Problem 1.18: What is the output of the program below?
0
1
0
0
*/
int main()
{
    int value = 1;

    value -= 1; // 0
    cout << value << endl;
    value += 1; // 1
    cout << value << endl;
    value /= 2; // 0
    cout << value << endl;
    value *= 2; // 0
    cout << value << endl;
}