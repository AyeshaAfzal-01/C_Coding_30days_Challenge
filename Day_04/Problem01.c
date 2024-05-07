/*

Problem 1:
Write a program that takes number from user and displays the
sum of numbers up to number.
Sample Run:
Enter number: 5
Sum : 15

*/

#include <stdio.h>

int main()
{
    // taking a number from the user and display the sum of numbers upto the number entered by the user
    int num, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}