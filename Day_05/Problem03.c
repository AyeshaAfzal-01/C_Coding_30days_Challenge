/*

Problem 3:
Write a program to check whether given number is Armstrong or not.
Sample Run:
Enter Number 1: 153
 Yes, Armstrong number.

 */

/* To check the given number is Armstrong Number or not
Armstrong number is the one that is equal to the sum of cubes of its digits
---> e.g 0, 1 , 153, 370 */

#include <stdio.h>
#include <math.h>

int main()
{

    int num, digit = 0, originalNumber, cube_Sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNumber = num;

    while (num != 0)
    {

        digit = num % 10;
        cube_Sum += pow(digit, 3); // storing sum of cubes of digits in cube_Sum var
        num = num / 10;
    }

    if (originalNumber == cube_Sum)
    {
        printf("Yes, Armstrong Number.\n");
    }
    else
    {
        printf("Not an Armstrong Number.\n");
    }

    return 0;
}