#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
incorrect
What is the output of the program below?
1

thought 2 initially but the program wants lowercase a and not any other case
*/

int main()
{
    const string str = "There is an Apple!";
        int count = 0;

    for (int i = 0; i != str.size() ; i++)
    if (str[i] == 'a' && isalpha(str[i])) count ++; // isalpha tracks whether or not the character is in the alphabet

    cout << count << '\n';

}