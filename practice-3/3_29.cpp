#include <iostream>

/*
Problem 3.29: What is the output of the program below?

January has 31 days
December has 31 days
wrong

mistyped, the original problem has the second case as '12' instead of '2'
so it would be
January has 31 days
?
*/
int main()
{
    for (int month = 1; month <= 2; month++)
    {
        switch(month)
        {
            case 1:
                std::cout << "January has 31 days" << '\n';
                break;
            case 12:
                std::cout << "December has 31 days" << '\n';
                break;
            default:
                std::cout << "?" << '\n';
                break;    
        }
    }
}