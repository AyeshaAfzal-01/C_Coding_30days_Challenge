/*
Problem 3:
Write a program that reads two numbers from user and prints
1 if both numbers are equal, otherwise prints 0. (Use Relational
Operator).
Sample Run:
First number: 7
Second number:7.0000
1
*/

#include <stdio.h>
int main()
{
    // print '1' if two numbers are equal otherwise '0'
    int num1, num2;

    printf("First Number: ");
    scanf("%d", &num1);
    printf("Second Number: ");
    scanf("%d", &num2);

    printf("%d", num1 == num2);

    return 0;
}