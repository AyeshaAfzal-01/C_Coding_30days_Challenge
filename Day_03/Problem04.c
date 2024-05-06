/*
Problem 4:
Write a program in C that checks whether number entered by
user is even or odd using Bitwise operators.
Sample Run:
Enter the number: 4
4 is an even number.
*/

#include <stdio.h>

int main()
{
    // checking whether the given number is even or odd using bitwise operators
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is an odd number.", num);
    }
    else
    {
        printf("%d is an even number.", num);
    }

    return 0;
}