#include <iostream>

/*
Problem 3.30: What is the output of the program below?

January has 31 days
?
March has 31 days
wrong

?
?
?
numbers in single quotes are not treated as regular numbers
1 is integer 1
'1' is ascii which is integer 49
*/
int main()
{
    for (int month = 1; month <= 3; month++)
    {
        switch(month)
        {
            case '1': // is case '1' the same as case 1? no
                std::cout << "January has 31 days" << '\n';
                break;
            case '3':
                std::cout << "March has 31 days" << '\n';
                break;
            default:
                std::cout << "?" << '\n';
                break;    
        }
    }
}