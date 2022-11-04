/*
correct

Problem #5: What is the output of the program below?

*
**
***
****
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;

    do {
        for (int j = i; j >= 0; j--) cout << "*";
        cout << '\n';
        i++;
    } while (i < 4);
}