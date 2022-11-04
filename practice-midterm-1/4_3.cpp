#include <iostream>
#include <string>
using namespace std;

/*
half because of misinput

Program #3: What is the output of the program below?

6

actually 7 because i had a typo
*/

int main()
{
    string str = "abcdefga"; // 8 elements, index from 0-7
    int value = 0;

    for (int i = 0; i != str.size(); i++) { // outer loop continues as long as i != to 8, 0-7
        for (int j = i + 1; j != str.size(); j++) { // inner loop continues as long as j != to 8,
            if (str[i] == str[j]) {
                value = j - i; // 7 - 0, outer loop i is still at 0 and inner loop j is at 7
            }
        }
    }

    cout << value << '\n';
}