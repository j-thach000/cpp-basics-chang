/*
had to peek at solution
it was literally just problem solving by chunking down the amount of values to manageable cases
basically chunking the cases down to groups of 10
*/

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Please enter the student's score: ";
    cin >> score;

    int choice = score / 10;

    switch (choice)
    {
        case (10):
            cout << "A" << '\n';
        case (9):
            cout << "A" << '\n';
            break;
        case (8):
            cout << "B" << '\n';
            break;    
        case (7):
            cout << "C" << '\n';
            break;    
        case (6):
            cout << "D" << '\n';
            break;    
        case (5):
            cout << "F" << '\n';
            break;    
        default:
            cout << "F" << '\n';
            break;
    }
}