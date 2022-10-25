#include <iostream>
#include <string>

/*
Problem 3.31: What is the output of the program below?

18 0
17 0
wrong

17 0
1 16
*/
int main()
{
    int numOfChars = 0;
    int numOfDigits = 0;
    int numOfUpperChars = 0;
    int numOfLowerChars = 0;

    std::string s = "It is a beautiful day!";

    std::cout << s << '\n';

    s[0] = tolower(s[0]); // I turns into i
    s[6] = toupper(s[6]); // assuming the 6th element is whitespace - WRONG
                          // remember the index starts at 0
                          // 0 = i
                          // 1 = t
                          // 2 = 
                          // 3 = i
                          // 4 = s
                          // 5 =
                          // 6 = A
    std::cout << s << '\n';


    for (int i = 0; i != s.size(); i++)
    {
        if (isalpha(s[i])) numOfChars++; // 18 - actually 17 the exclamation mark doesn't count
        if (isdigit(s[i])) numOfDigits++; // 0 - correct
        if (islower(s[i])) numOfLowerChars++; // 17 - 16 because of s[6] being capital
        if (isupper(s[i])) numOfUpperChars++; // 0 - 1, A
    }

    std::cout << numOfChars << " " << numOfDigits << '\n';
    std::cout << numOfUpperChars << " " << numOfLowerChars << '\n';
}