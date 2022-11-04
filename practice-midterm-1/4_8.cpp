/*
Problem #8: Please write a do-while loop to find the first lower case character in a given string.
If there is no lower case letter, the program outputs "No lowercase character".
If there is a lower case character, output the first lower case character.
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int i = 0;

    string str;

    cin >> str;

    bool isLowercase = 0;
    bool check = false;

    do {
        for (i = 0; i < str.size(); i++)
        {
            if (islower(str[i])) 
            {
                isLowercase = 1;
                check = true;
                break;
            }
        }
        check = true;
    } while (check == false);

    if (isLowercase == 0) cout << "No lowercase character" << '\n';
    else cout << str[i] << '\n';
}