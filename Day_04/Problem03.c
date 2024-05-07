/*

Problem 3:
Write a program that swaps two variables entered by user by
using bitwise operators.
Sample Run:
Enter Number 1: 2
Enter Number 2: 3
Number 1: 3
Number 2: 2

*/

#include <stdio.h>
// Swapping two numbers using bitwise operators
int main()
{

    int num1, num2;

    printf("\nEnter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("Numbers after swapping: \n");

    printf("Number 1: %d\nNumber 2: %d\n\n", num1, num2);

    return 0;
}