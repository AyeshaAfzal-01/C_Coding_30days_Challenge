/*
Problem 5:
Write a program that reads the age from the user and prints the
following message “Sorry, you are not eligible for vote” if age is
less than 18, otherwise prints “Bravo! You are eligible for
vote.(Using Ternary Operator).
Sample Run:
Age: 18
Bravo! You are eligible for vote.
*/

#include <stdio.h>

int main()
{
    // program to check eligibility to vote by using ternary operator
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("Bravo! you are eligible for vote.") : printf("Sorry, you are not eligible for vote.");

    return 0;
}