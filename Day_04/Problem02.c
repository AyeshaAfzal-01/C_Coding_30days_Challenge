/*

Problem 2:
Write a program to print the factorial of the number entered by
user.
Sample Run:
Number: 3
Factorial : 6

*/

#include <stdio.h>

int main()
{
    // finding the factorial of a number entered by the user
    int num;
    int factorial = 1;

    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial: %d\n", factorial);

    return 0;
}