#include <iostream>
#include <string>
using namespace std;

/*
correct

Problem #4: What is the output of the program below?

11
*/

int main()
{
    int i = 0, value = 0;

    for (i = 0; i < 5; i++) {
        switch (i) {
            case 1: value = i + 1;
            case 2: value = value - 1;
            case 3: value = value + 1;
            case 4: value = value + 2; break;
            case 5: value = value - 1;
            default: value = value + 1;
        }
    }

    cout << value << '\n';
}