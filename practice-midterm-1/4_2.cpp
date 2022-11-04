/*
correct

Problem #2: Which of the following code segments produce the exact output as the sample
program provided below?
Suppose each choice uses the same header files (#include...).
There may be more than one answer.

3
4
6
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <= i; j++) cout << "*";
        cout << '\n';
    }


}

/*
output:
*
**
*/