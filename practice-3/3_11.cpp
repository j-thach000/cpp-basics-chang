#include <iostream>

/*
Problem 3.11: What is the output of the program below?

guess:
0
1
2
2
wrong

correct:
0
1
2
3

0-2 is from the loop
3 is from the outside loop print statement
remember it incremented to 3 and then the loop stopped because i was not < 3
*/

int main()
{
    int i;

    for (i = 0; i < 3; i++) // value of i is still preserved once the loop ends
        std::cout << i << '\n';
        std::cout << i << '\n';
}